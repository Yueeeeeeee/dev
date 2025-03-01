/* generated by AutoFOCUS 3 (2.14.0) on Mon Jul 08 13:45:02 CEST 2019 */
#include "inc-gen/ThrottleFusion_ID_5874.h"

GEN_TYPE_double MaxAcceleration_ID_5883;

GEN_TYPE_boolean noval_MaxAcceleration_ID_5883;

GEN_TYPE_double BrakePedal_ID_12255;

GEN_TYPE_boolean noval_BrakePedal_ID_12255;

GEN_TYPE_double ThrottleManual_ID_9751;

GEN_TYPE_boolean noval_ThrottleManual_ID_9751;

GEN_TYPE_double Velocity_ID_12160;

GEN_TYPE_boolean noval_Velocity_ID_12160;

GEN_TYPE_double ThrottleAutomatic_ID_11460;

GEN_TYPE_boolean noval_ThrottleAutomatic_ID_11460;

GEN_TYPE_boolean Automatic_On_ID_12471;

GEN_TYPE_boolean noval_Automatic_On_ID_12471;

GEN_TYPE_int GearManual_ID_12651;

GEN_TYPE_boolean noval_GearManual_ID_12651;

GEN_TYPE_int GearAutomatic_ID_12698;

GEN_TYPE_boolean noval_GearAutomatic_ID_12698;

GEN_TYPE_double MaxAccelerationMD_ID_12263;

GEN_TYPE_boolean noval_MaxAccelerationMD_ID_12263;

GEN_TYPE_double TargetVelocityMD_ID_12268;

GEN_TYPE_boolean noval_TargetVelocityMD_ID_12268;

GEN_TYPE_int Gear_ID_12662;

GEN_TYPE_boolean noval_Gear_ID_12662;

void clear_inputs_ThrottleFusion_ID_5874(){
	noval_MaxAcceleration_ID_5883 = true;
	noval_BrakePedal_ID_12255 = true;
	noval_ThrottleManual_ID_9751 = true;
	noval_Velocity_ID_12160 = true;
	noval_ThrottleAutomatic_ID_11460 = true;
	noval_Automatic_On_ID_12471 = true;
	noval_GearManual_ID_12651 = true;
	noval_GearAutomatic_ID_12698 = true;
}

void clear_outputs_ThrottleFusion_ID_5874(){
	noval_MaxAccelerationMD_ID_12263 = true;
	noval_TargetVelocityMD_ID_12268 = true;
	noval_Gear_ID_12662 = true;
}

void init_ThrottleFusion_ID_5874(){
	noval_MaxAccelerationMD_ID_12263 = true;
	noval_TargetVelocityMD_ID_12268 = true;
	noval_Gear_ID_12662 = true;
}

void perform_step_ThrottleFusion_ID_5874(){
	clear_outputs_ThrottleFusion_ID_5874();
	if (noval_BrakePedal_ID_12255 == true || BrakePedal_ID_12255 <= BRAKE_DEADZONE()) {
		if (!(noval_Automatic_On_ID_12471 == true) && Automatic_On_ID_12471) {
			noval_TargetVelocityMD_ID_12268 = false;
			TargetVelocityMD_ID_12268 = ThrottleAutomatic_ID_11460 * MAX_SPEED();
			
			noval_Gear_ID_12662 = noval_GearAutomatic_ID_12698;
			if (!noval_GearAutomatic_ID_12698) {
				Gear_ID_12662 = GearAutomatic_ID_12698;
			}
			
		}
		else {
			noval_TargetVelocityMD_ID_12268 = false;
			TargetVelocityMD_ID_12268 = ThrottleManual_ID_9751 * MAX_SPEED();
			
			noval_Gear_ID_12662 = noval_GearManual_ID_12651;
			if (!noval_GearManual_ID_12651) {
				Gear_ID_12662 = GearManual_ID_12651;
			}
			
		}
		if (noval_Velocity_ID_12160 == true || Velocity_ID_12160 >= 0) {
			noval_MaxAccelerationMD_ID_12263 = noval_MaxAcceleration_ID_5883;
			if (!noval_MaxAcceleration_ID_5883) {
				MaxAccelerationMD_ID_12263 = MaxAcceleration_ID_5883;
			}
			
			return;
		}
		else {
			noval_MaxAccelerationMD_ID_12263 = false;
			MaxAccelerationMD_ID_12263 = -MaxAcceleration_ID_5883;
			
			return;
		}
	}
	if (BrakePedal_ID_12255 > BRAKE_DEADZONE()) {
		noval_TargetVelocityMD_ID_12268 = false;
		TargetVelocityMD_ID_12268 = 0;
		
		if (noval_Velocity_ID_12160 == true || Velocity_ID_12160 >= 0) {
			noval_MaxAccelerationMD_ID_12263 = false;
			MaxAccelerationMD_ID_12263 = BrakePedal_ID_12255 * MAX_BRAKE_VALUE();
			
			return;
		}
		else {
			noval_MaxAccelerationMD_ID_12263 = false;
			MaxAccelerationMD_ID_12263 = -BrakePedal_ID_12255 * MAX_BRAKE_VALUE();
			
			return;
		}
	}
	
}
