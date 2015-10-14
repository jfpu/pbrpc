#include "common.h"

void ERR_LOG(const char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	char Log_Msg[1024];
	int len = vsnprintf(Log_Msg, sizeof(Log_Msg), fmt, ap);
	va_end(ap);

	printf("Error Log : %s\n", Log_Msg);
}

extern uint32_t hashword(
		const uint32_t *k,
		size_t          length,
		uint32_t        initval);

uint32_t hash_string(const string &str) {
  return static_cast<uint32_t>(hashword(
      reinterpret_cast<const uint32_t*>(str.c_str()),
      str.size() / 4, HASH_INITVAL));
}

uint32_t encode_pcode(uint32_t service_id, uint32_t method_id) {
  uint32_t ret = 0;
  ret = (service_id << 16) | method_id;
  return ret;
}

void decode_pcode(uint32_t pcode, uint32_t& service_id, uint32_t& method_id) {
  method_id = pcode & 0xFFFF;
  service_id = (pcode & 0xFFFF0000) >> 16;
}

