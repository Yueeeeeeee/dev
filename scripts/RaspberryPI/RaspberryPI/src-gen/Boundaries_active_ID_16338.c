/* generated by AutoFOCUS 3 (2.14.0) on Fri Jul 05 17:37:26 CEST 2019 */
#include "inc-gen/Boundaries_active_ID_16338.h"

GEN_TYPE_boolean BoundariesActive_In_ID_16347;

GEN_TYPE_boolean noval_BoundariesActive_In_ID_16347;

GEN_TYPE_boolean BoundariesActive_ID_16352;

GEN_TYPE_boolean noval_BoundariesActive_ID_16352;

void clear_inputs_Boundaries_active_ID_16338(){
	noval_BoundariesActive_In_ID_16347 = true;
}

void clear_outputs_Boundaries_active_ID_16338(){
	noval_BoundariesActive_ID_16352 = true;
}

void init_Boundaries_active_ID_16338(){
	noval_BoundariesActive_ID_16352 = true;
}

void perform_step_Boundaries_active_ID_16338(){
	clear_outputs_Boundaries_active_ID_16338();
	noval_BoundariesActive_ID_16352 = noval_BoundariesActive_In_ID_16347;
	if (!noval_BoundariesActive_In_ID_16347) {
		BoundariesActive_ID_16352 = BoundariesActive_In_ID_16347;
	}
	
	return;
	
}
