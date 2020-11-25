#include "lg_airconditioner.h"

void AirData_init(LG_AIRCON* init_data){
	
	init_data[0].all = 0x88c0051; // OFF
	init_data[1].all = 0x880030B; // On

}
