/* generated by AutoFOCUS 3 (2.14.0) on Tue Jul 09 17:20:03 CEST 2019 */
#include "inc-gen/Max_Velocity_Diff_ID_7820.h"

GEN_TYPE_double MaxAcceleration_ID_7829;

GEN_TYPE_boolean noval_MaxAcceleration_ID_7829;

GEN_TYPE_double MaxVelocityDiff_ID_11049;

GEN_TYPE_boolean noval_MaxVelocityDiff_ID_11049;

void clear_inputs_Max_Velocity_Diff_ID_7820(){
	noval_MaxAcceleration_ID_7829 = true;
}

void clear_outputs_Max_Velocity_Diff_ID_7820(){
	noval_MaxVelocityDiff_ID_11049 = true;
}

void init_Max_Velocity_Diff_ID_7820(){
	noval_MaxVelocityDiff_ID_11049 = true;
}

void perform_step_Max_Velocity_Diff_ID_7820(){
	clear_outputs_Max_Velocity_Diff_ID_7820();
	noval_MaxVelocityDiff_ID_11049 = false;
	MaxVelocityDiff_ID_11049 = MaxAcceleration_ID_7829 * TICK_TIME();
	
	return;
	
}
