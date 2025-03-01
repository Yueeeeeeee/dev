/* generated by AutoFOCUS 3 (2.14.0) on Mon Jul 08 13:45:02 CEST 2019 */
#include "inc-gen/Steering_Angle_ID_6888.h"

GEN_TYPE_boolean LK_On_Correct_ID_16195;

GEN_TYPE_boolean noval_LK_On_Correct_ID_16195;

GEN_TYPE_double SteeringAngleMD_ID_6984;

GEN_TYPE_boolean noval_SteeringAngleMD_ID_6984;

GEN_TYPE_double SteeringAngleDA_ID_16242;

GEN_TYPE_boolean noval_SteeringAngleDA_ID_16242;

GEN_TYPE_double SteeringAngle_ID_6909;

GEN_TYPE_boolean noval_SteeringAngle_ID_6909;

void clear_inputs_Steering_Angle_ID_6888(){
	noval_LK_On_Correct_ID_16195 = true;
	noval_SteeringAngleMD_ID_6984 = true;
	noval_SteeringAngleDA_ID_16242 = true;
}

void clear_outputs_Steering_Angle_ID_6888(){
	noval_SteeringAngle_ID_6909 = true;
}

void init_Steering_Angle_ID_6888(){
	noval_SteeringAngle_ID_6909 = true;
}

void perform_step_Steering_Angle_ID_6888(){
	clear_outputs_Steering_Angle_ID_6888();
	if (!(noval_SteeringAngleMD_ID_6984 == true) && ((noval_LK_On_Correct_ID_16195 == true || !LK_On_Correct_ID_16195) || myabs(SteeringAngleMD_ID_6984) > STEERING_DEADZONE())) {
		noval_SteeringAngle_ID_6909 = noval_SteeringAngleMD_ID_6984;
		if (!noval_SteeringAngleMD_ID_6984) {
			SteeringAngle_ID_6909 = SteeringAngleMD_ID_6984;
		}
		
	}
	else {
		if ((!(noval_LK_On_Correct_ID_16195 == true) && LK_On_Correct_ID_16195) && !(noval_SteeringAngleDA_ID_16242 == true)) {
			noval_SteeringAngle_ID_6909 = noval_SteeringAngleDA_ID_16242;
			if (!noval_SteeringAngleDA_ID_16242) {
				SteeringAngle_ID_6909 = SteeringAngleDA_ID_16242;
			}
			
		}
		else {
			noval_SteeringAngle_ID_6909 = false;
			SteeringAngle_ID_6909 = 0.0;
			
		}
	}
	return;
	
}
