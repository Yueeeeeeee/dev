/* generated by AutoFOCUS 3 (2.14.0) on Fri May 03 16:10:08 CEST 2019 */
#include "inc-gen/Velocity_Memory_ID_7729.h"

GEN_TYPE_double LastVelocityOut_ID_7740;

GEN_TYPE_boolean noval_LastVelocityOut_ID_7740;

GEN_TYPE_double LastVelocityIn_ID_7747;

GEN_TYPE_boolean noval_LastVelocityIn_ID_7747;

void clear_inputs_Velocity_Memory_ID_7729(){
	noval_LastVelocityOut_ID_7740 = true;
}

void clear_outputs_Velocity_Memory_ID_7729(){
	noval_LastVelocityIn_ID_7747 = true;
}

void init_Velocity_Memory_ID_7729(){
	noval_LastVelocityIn_ID_7747 = true;
}

void perform_step_Velocity_Memory_ID_7729(){
	clear_outputs_Velocity_Memory_ID_7729();
	noval_LastVelocityIn_ID_7747 = noval_LastVelocityOut_ID_7740;
	if (!noval_LastVelocityOut_ID_7740) {
		LastVelocityIn_ID_7747 = LastVelocityOut_ID_7740;
	}
	
	return;
	
}