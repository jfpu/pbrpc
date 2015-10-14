
#include <string>
#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>

using std::string;

#define RPC_SVR_PORT 18669 
#define MAX_RPC_CONNECTIONs 1024

#define MAX_RPC_SERVICEs 2048
#define MAX_SERVICE_METHODs 2048

#define INVALID_SERVICE_ID 0

#define LENGTH_TYPE unsigned int
#define HEAD_LEN sizeof(LENGTH_TYPE)

#define ErrorDie(msg) do { perror((msg)); exit(-1); } while(0);
#define ErrorRet(msg, ret) do { perror((msg)); return (ret); } while(0);
#define ErrorExit(msg) ErrorDie(msg)

void ERR_LOG(const char *fmt, ...); 

#define HASH_INITVAL 0x31415926

uint32_t hash_string(const string &str);

uint32_t encode_pcode(uint32_t service_id, uint32_t method_id);
void decode_pcode(uint32_t pcode, uint32_t& service_id, uint32_t& method_id);

