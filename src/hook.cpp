#include <map>
#include <string>
#include "format.h"
#include <iostream>
#include <locale>
#include <codecvt>
#include "common/minet.h"
#include "common/milog.h"
#include <dlfcn.h>
#include "google/protobuf/util/json_util.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <libgen.h>   // For dirname()
#include <unistd.h>   // For readlink()
#include <list>
#include "httplib.h"
#include "app-types.h"
#include "PFishHook.h"
#include "Zydis/Zydis.h"
#include "cmdid.h"
#include "proto_hook.h"
#include "proto/cmd/cmd_misc.pb.h"
#include "proto/cmd/cmd_player.pb.h"
#include "proto/shit.pb.h"
#include "pb2json.h"
#include "json.hpp"
#define __int64 long long


#define STORE_APP_FUNC(OFFSET, RETURN_T, NAME, PARAMS) RETURN_T (*NAME) PARAMS
#define DO_APP_FUNC(OFFSET, RETURN_T, NAME, PARAMS) RETURN_T (*NAME) PARAMS
#include "functions.h"
#undef DO_APP_FUNC
#undef STORE_APP_FUNC

static bool is_gate_=false;
static bool is_game_=false;

bool is_gate(){
  if(is_gate_){
      return true;
  }
  void *handle = dlopen(NULL, RTLD_NOW);
  void *f = dlsym(handle, "_ZN13GateserverAppC1Ev");
  
  dlclose(handle);
  if(f){
      is_gate_=true;
      return true;
  }
  return false;
}


bool is_game(){
  if(is_game_){
      return true;
  }
  void *handle = dlopen(NULL, RTLD_NOW);
  void *f = dlsym(handle, "_ZN13GameserverAppC1Ev");
  
  dlclose(handle);
  if(f){
      is_game_=true;
      return true;
  }
  return false;
}
std::string region_name="";

std::list<std::string>& getCmdNameFilterList() {
    static std::list<std::string> cmd_name_filter_list;
    return cmd_name_filter_list;
}

std::string& get_api_server() {
    static std::string api_server = "initial_value";
    return api_server;
}

std::string& get_api_path() {
    static std::string api_path = "initial_value";
    return api_path;
}

__int64 convertPacketToString_Fake(std::shared_ptr<common::minet::Packet> packet_ptr, std::string *name){
    
    if(region_name.empty()){
        GameserverService *service =findService();
        Config *config=getConfig(service).get();
        std::string *regionName =getRegionName(config);
        region_name=*regionName;
    }
    
    common::minet::Packet *packet = packet_ptr.get();
    std::string cmd_name = *getCmdName(packet->cmd_id);
    
    
    std::list<std::string>& cmd_name_filter_list = getCmdNameFilterList();
  
    auto it = std::find(cmd_name_filter_list.begin(), cmd_name_filter_list.end(), cmd_name);

    if (it != cmd_name_filter_list.end()) {
        
        uint16_t las;
        getProto(&las,packet);
        std::shared_ptr<google::protobuf::Message> *message_ptr=(std::shared_ptr<google::protobuf::Message>*)&las;
        google::protobuf::Message *message=message_ptr->get();
        nlohmann::json json;
        unsigned int uid =packet->head_.user_id();
        Pb2Json::Message2Json(*message,json,true);
        std::string bodystr=json.dump();
        message_ptr->reset();
        INFO("cmd: %s. found in cmd_name_filter_list,reporting\n" , cmd_name.c_str());
        httplib::Client cli(get_api_server());
        httplib::Result res = cli.Post(str_format("%s?region=%s&uid=%d&cmd_name=%s",get_api_path().c_str(),region_name.c_str(),uid,cmd_name.c_str()),bodystr, "text/plain");
    } 

    return convertPacketToString(packet_ptr,name);
}

std::string getCurrentDirPath() {
    char result[PATH_MAX];
    ssize_t count = readlink("/proc/self/exe", result, PATH_MAX);
    const char *path;
    if (count != -1) {
        path = dirname(result);
    }
    return std::string(path);
}

std::string readFile(const std::string& filePath) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        fprintf(stderr, "Failed to open file: %s\n", filePath.c_str());
        return "";
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

int32_t doSerializeToArray_Fake(common::minet::Packet *_this,char* buff,uint32_t len){
    int32_t y =doSerializeToArray(_this,buff,len);
    
    uint16_t *cmd =(uint16_t *)buff+1;  //ntohs(*(uint16_t *)buff+1);
    
    uint16_t cmd_id=ntohs(*cmd);
    
    //INFO("cmd_id: %d",cmd_id);
    
    //INFO("cmd_id: %d",_this->cmd_id);
   // if(is_gate()){
        if(getCMDIdReverseConvertMap().count(cmd_id)!=0){
            *cmd=htons(getCMDIdReverseConvertMap()[cmd_id]);
           // _this->cmd_id=getCMDIdConvertMap()[_this->cmd_id];
        }
  //  }
    
    
    //INFO("cmd_id: %d",_this->cmd_id);
    
    return y;
}

void printHex(const char* data, size_t length) {
    for (size_t i = 0; i < length; ++i) {
        // 使用 std::setw(2) 和 std::setfill('0') 来确保每个字节都打印为两位数
        std::cout << std::hex << std::setw(2) << std::setfill('0') 
                  << static_cast<unsigned int>(static_cast<unsigned char>(data[i])) << " ";
    }
    std::cout << std::dec << std::endl;  // 打印完成后恢复为十进制格式
}


uint32_t convert_set_time_req_packet(common::minet::Packet *_this,char* buff,uint32_t len){
  //  printHex(buff,len);
    proto::ClientSetGameTimeReq req;
    uint16_t *head_len_ptr=(uint16_t *)buff+2;
    uint16_t head_len=ntohs(*head_len_ptr);
    
    unsigned int *body_len_ptr=(unsigned int*)(buff+6);//__builtin_bswap32(*);
    
    unsigned int body_len=__builtin_bswap32(*body_len_ptr);
    
    req.ParseFromArray(buff+2+2+2+4+head_len, body_len);
    
    proto::ChangeGameTimeReq new_req;
    
    new_req.set_game_time(req.game_time()%1440);
    new_req.set_extra_days((req.game_time()-req.client_game_time())/1440);
    
    char tmp_buff[100];  // 示例缓冲区大小
    memset(tmp_buff, 0, sizeof(tmp_buff));  // 初始化缓冲区
    
    int size = new_req.ByteSizeLong();
    new_req.SerializeToArray(tmp_buff, size);
    
    std::memcpy(buff+2+2+2+4+head_len, tmp_buff, size);
    std::memcpy(buff+2+2+2+4+head_len, tmp_buff, size);
    *body_len_ptr=__builtin_bswap32(size);
    
    *(buff+2+2+2+4+head_len+size)=0x89;
    *(buff+2+2+2+4+head_len+size+1)=0xab;
    
    
    len=len+(size-body_len);
  //  printHex(buff,len);
    return len;
}

int32_t parseFromArray_Fake(common::minet::Packet *_this,char* buff,uint32_t len){
    
    uint16_t *cmd =(uint16_t *)buff+1;  //ntohs(*(uint16_t *)buff+1);
    
    uint16_t cmd_id=ntohs(*cmd);
    
    //INFO("cmd_id: %d",cmd_id);
    
    if(cmd_id==108){
        if(is_gate()){
            len=convert_set_time_req_packet(_this,buff,len);
        }
    }
    
    
    //INFO("cmd_id: %d",_this->cmd_id);
  //  if(is_gate()){
        if(getCMDIdConvertMap().count(cmd_id)!=0){
            *cmd=htons(getCMDIdConvertMap()[cmd_id]);
           // _this->cmd_id=getCMDIdConvertMap()[_this->cmd_id];
        }
    //}
    
    int32_t y =parseFromArray(_this,buff,len);
    //INFO("cmd_id: %d",_this->cmd_id);

    return y;
}

uint32_t message_id_Fake(proto::UnionCmd *_this){

    uint32_t cmd_id =message_id(_this);
    
    if(getCMDIdConvertMap().count(cmd_id)!=0){
        cmd_id=getCMDIdConvertMap()[cmd_id];
        // _this->cmd_id=getCMDIdConvertMap()[_this->cmd_id];
    }
    return cmd_id;
}


google::protobuf::EnumValueDescriptor* FindEnumValueByName_Fake(google::protobuf::Descriptor *_this,std::string *name){
    
    google::protobuf::EnumValueDescriptor* evd= FindEnumValueByName(_this,name);
   // INFO("FindEnumValueByName_Fake %s %s %d!\n",_this->name().c_str(),(*name).c_str(),evd->number());
    
    if(*name=="CMD_ID"){
        if(getCMDIdMap().count(_this->name())==0){
            //INFO("CMD %s not found!\n",_this->name().c_str());
    
        
        }else{
             //evd->number_=getCMDIdMap()[_this->name()];
        
        }
        
        
    }
   // INFO("FindEnumValueByName_Fake %s %s %d!\n",_this->name().c_str(),(*name).c_str(),evd->number());
    
    return evd;
}

__attribute__((constructor)) void setup_hook() {
    // 获取原始 foo 函数地址
    INFO("Start hooking...\n");
    std::string currentDir = getCurrentDirPath();
    INFO("%s \n" ,currentDir.c_str() );
    if (currentDir.empty()) {
        fprintf(stderr, "Failed to get current directory path.\n");
        return;
    }

    std::string filename = "config.json"; // Replace with your file name
    std::string filePath = currentDir + "/" + filename;

    std::string fileContent = readFile(filePath);
    if (fileContent.empty()) {
        fprintf(stderr,  "Failed to read file: %s. \n" , filePath.c_str() );
        return;
    }

    INFO("read config succ,content : %s. \n" , fileContent.c_str());
    nlohmann::json json;
    std::ifstream i(filePath);
    i>>json;
    
    
    
    get_api_server()=json["api_server"].get<std::string>();
    get_api_path()=json["api_path"].get<std::string>();

    int size=json["cmd_name_filter"].size();
    
    INFO("read config succ,content : %d. ",size);
    
    std::list<std::string>& cmd_name_filter_list = getCmdNameFilterList();
  
    for(int i = 0; i < size; i++)
    {
        cmd_name_filter_list.push_back(json["cmd_name_filter"][i].get<std::string>());
    }
    
    void *handle = dlopen(NULL, RTLD_NOW);
    
    #define DO_APP_FUNC(OFFSET, RETURN_T, NAME, PARAMS) NAME = (RETURN_T (*) PARAMS) dlsym(handle, OFFSET);
    #define STORE_APP_FUNC(OFFSET, RETURN_T, NAME, PARAMS) FakeIt(dlsym(handle, OFFSET),(void**)&NAME);
    #include "functions.h"
    #undef DO_APP_FUNC
    #undef STORE_APP_FUNC
    dlclose(handle);
    INFO("Hook done!\n");
}


// ---
extern "C" std::map<std::string,std::string> getFuncMap() {
   std::map<std::string,std::string> hookFuncMap ={
    {
      "_ZN10ProtoUtils21convertPacketToStringESt10shared_ptrIN6common5minet6PacketEERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE",
      "_Z26convertPacketToString_FakeSt10shared_ptrIN6common5minet6PacketEEPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE"
    
    },
    {
      "_ZN6common5minet6Packet14parseFromArrayEPKcj",
      "_Z19parseFromArray_FakePN6common5minet6PacketEPcj"
    },
    {
      "_ZNK6common5minet6Packet18doSerializeToArrayEPcj",
      "_Z23doSerializeToArray_FakePN6common5minet6PacketEPcj"
    },
    {
      "_ZNK5proto8UnionCmd10message_idEv",
      "_Z15message_id_FakePN5proto8UnionCmdE"
    } /*,
    {
      "_ZNK6google8protobuf10Descriptor19FindEnumValueByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE",
      "_Z24FindEnumValueByName_FakePN6google8protobuf10DescriptorEPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE"
    }*/
  };
  std::map<std::string,std::string> protohookFuncMap=getProtoHookMap();
  
  hookFuncMap.insert(protohookFuncMap.begin(),protohookFuncMap.end());
  return hookFuncMap;
}

// ---


