/* generated by AutoFOCUS 3 (2.14.0) on Mon Jul 08 13:45:02 CEST 2019 */
#include "inc-gen/Driver_Assistance_Coordinator_ID_8040.h"

GEN_TYPE_double MaxAcceleration_ID_8116;

GEN_TYPE_boolean noval_MaxAcceleration_ID_8116;

GEN_TYPE_double TargetVelocity_ID_8125;

GEN_TYPE_boolean noval_TargetVelocity_ID_8125;

GEN_TYPE_double SteeringAngle_ID_30789;

GEN_TYPE_boolean noval_SteeringAngle_ID_30789;

GEN_TYPE_double SteeringAngleDA_ID_8084;

GEN_TYPE_boolean noval_SteeringAngleDA_ID_8084;

GEN_TYPE_double TargetVelocityDA_ID_8091;

GEN_TYPE_boolean noval_TargetVelocityDA_ID_8091;

GEN_TYPE_double MaxAccelerationDA_ID_8098;

GEN_TYPE_boolean noval_MaxAccelerationDA_ID_8098;

void clear_inputs_Driver_Assistance_Coordinator_ID_8040(){
	noval_MaxAcceleration_ID_8116 = true;
	noval_TargetVelocity_ID_8125 = true;
	noval_SteeringAngle_ID_30789 = true;
}

void clear_outputs_Driver_Assistance_Coordinator_ID_8040(){
	noval_SteeringAngleDA_ID_8084 = true;
	noval_TargetVelocityDA_ID_8091 = true;
	noval_MaxAccelerationDA_ID_8098 = true;
}

void init_Driver_Assistance_Coordinator_ID_8040(){
	noval_SteeringAngleDA_ID_8084 = true;
	noval_TargetVelocityDA_ID_8091 = true;
	noval_MaxAccelerationDA_ID_8098 = true;
}

void perform_step_Driver_Assistance_Coordinator_ID_8040(){
	clear_outputs_Driver_Assistance_Coordinator_ID_8040();
	noval_TargetVelocityDA_ID_8091 = noval_TargetVelocity_ID_8125;
	if (!noval_TargetVelocity_ID_8125) {
		TargetVelocityDA_ID_8091 = TargetVelocity_ID_8125;
	}
	
	noval_MaxAccelerationDA_ID_8098 = noval_MaxAcceleration_ID_8116;
	if (!noval_MaxAcceleration_ID_8116) {
		MaxAccelerationDA_ID_8098 = MaxAcceleration_ID_8116;
	}
	
	noval_SteeringAngleDA_ID_8084 = noval_SteeringAngle_ID_30789;
	if (!noval_SteeringAngle_ID_30789) {
		SteeringAngleDA_ID_8084 = SteeringAngle_ID_30789;
	}
	
	return;
	
}
