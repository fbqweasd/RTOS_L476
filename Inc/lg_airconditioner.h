#ifndef _LG_AIRCONDITIONNER_
#define _LG_AIRCONDITIONNER_

#include <stdint.h>

typedef union _LG_AIRCON{
	uint32_t all;
	
	struct{
		uint32_t SYNC:8;
		uint32_t EVENT:4;
		uint32_t Data1:4;
		uint32_t Data2:4;
		uint32_t Data3:4;
		uint32_t CheckSum:4;
	}bits;
}LG_AIRCON;

#endif