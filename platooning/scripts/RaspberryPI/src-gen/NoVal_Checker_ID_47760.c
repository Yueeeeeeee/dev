/* generated by AutoFOCUS 3 (2.14.0) on Mon Jul 08 13:45:02 CEST 2019 */
#include "inc-gen/NoVal_Checker_ID_47760.h"

GEN_TYPE_double TargetVelocity_ID_47768;

GEN_TYPE_boolean noval_TargetVelocity_ID_47768;

GEN_TYPE_double MaxAcceleration_ID_47775;

GEN_TYPE_boolean noval_MaxAcceleration_ID_47775;

GEN_TYPE_double SteeringAngle_ID_47789;

GEN_TYPE_boolean noval_SteeringAngle_ID_47789;

GEN_TYPE_double TargetVelocityOut_ID_47831;

GEN_TYPE_boolean noval_TargetVelocityOut_ID_47831;

GEN_TYPE_double MaxAccelerationOut_ID_47840;

GEN_TYPE_boolean noval_MaxAccelerationOut_ID_47840;

GEN_TYPE_double SteeringAngleOut_ID_47849;

GEN_TYPE_boolean noval_SteeringAngleOut_ID_47849;

void clear_inputs_NoVal_Checker_ID_47760(){
	noval_TargetVelocity_ID_47768 = true;
	noval_MaxAcceleration_ID_47775 = true;
	noval_SteeringAngle_ID_47789 = true;
}

void clear_outputs_NoVal_Checker_ID_47760(){
	noval_TargetVelocityOut_ID_47831 = true;
	noval_MaxAccelerationOut_ID_47840 = true;
	noval_SteeringAngleOut_ID_47849 = true;
}

void init_NoVal_Checker_ID_47760(){
	noval_TargetVelocityOut_ID_47831 = true;
	noval_MaxAccelerationOut_ID_47840 = true;
	noval_SteeringAngleOut_ID_47849 = true;
}

void perform_step_NoVal_Checker_ID_47760(){
	clear_outputs_NoVal_Checker_ID_47760();
	if (!(noval_TargetVelocity_ID_47768 == true)) {
		noval_TargetVelocityOut_ID_47831 = noval_TargetVelocity_ID_47768;
		if (!noval_TargetVelocity_ID_47768) {
			TargetVelocityOut_ID_47831 = TargetVelocity_ID_47768;
		}
		
	}
	else {
		noval_TargetVelocityOut_ID_47831 = false;
		TargetVelocityOut_ID_47831 = 0.0;
		
	}
	if (!(noval_MaxAcceleration_ID_47775 == true)) {
		noval_MaxAccelerationOut_ID_47840 = noval_MaxAcceleration_ID_47775;
		if (!noval_MaxAcceleration_ID_47775) {
			MaxAccelerationOut_ID_47840 = MaxAcceleration_ID_47775;
		}
		
	}
	else {
		noval_MaxAccelerationOut_ID_47840 = false;
		MaxAccelerationOut_ID_47840 = 0.0;
		
	}
	if (!(noval_SteeringAngle_ID_47789 == true)) {
		noval_SteeringAngleOut_ID_47849 = noval_SteeringAngle_ID_47789;
		if (!noval_SteeringAngle_ID_47789) {
			SteeringAngleOut_ID_47849 = SteeringAngle_ID_47789;
		}
		
	}
	else {
		noval_SteeringAngleOut_ID_47849 = false;
		SteeringAngleOut_ID_47849 = 0.0;
		
	}
	return;
	
}
