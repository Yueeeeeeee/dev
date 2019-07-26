/* generated by AutoFOCUS 3 (2.14.0) on Mon Jul 08 13:45:02 CEST 2019 */
#include "inc-gen/LK_Activator_Check_ID_15635.h"

GEN_TYPE_LDCameraData LDCameraData_ID_15651;

GEN_TYPE_boolean noval_LDCameraData_ID_15651;

GEN_TYPE_DriverAssistanceCommands DA_States_ID_45634;

GEN_TYPE_boolean noval_DA_States_ID_45634;

GEN_TYPE_boolean RumbleLKIn_ID_15656;

GEN_TYPE_boolean noval_RumbleLKIn_ID_15656;

GEN_TYPE_int SteeringCommand_ID_15967;

GEN_TYPE_boolean noval_SteeringCommand_ID_15967;

void clear_inputs_LK_Activator_Check_ID_15635(){
	noval_LDCameraData_ID_15651 = true;
	noval_DA_States_ID_45634 = true;
}

void clear_outputs_LK_Activator_Check_ID_15635(){
	noval_RumbleLKIn_ID_15656 = true;
	noval_SteeringCommand_ID_15967 = true;
}

void init_LK_Activator_Check_ID_15635(){
	noval_RumbleLKIn_ID_15656 = true;
	noval_SteeringCommand_ID_15967 = true;
}

void perform_step_LK_Activator_Check_ID_15635(){
	clear_outputs_LK_Activator_Check_ID_15635();
	if (noval_DA_States_ID_45634 == true || noval_LDCameraData_ID_15651 == true) {
		noval_SteeringCommand_ID_15967 = true;
		noval_RumbleLKIn_ID_15656 = false;
		RumbleLKIn_ID_15656 = false;
		
		return;
	}
	if (DA_States_ID_45634.laneKeep == On()) {
		if (!LDCameraData_ID_15651.server_ok) {
			noval_SteeringCommand_ID_15967 = false;
			SteeringCommand_ID_15967 = 2;
			
			noval_RumbleLKIn_ID_15656 = false;
			RumbleLKIn_ID_15656 = true;
			
		}
		else {
			if (!LDCameraData_ID_15651.present_left && !LDCameraData_ID_15651.present_right) {
				noval_SteeringCommand_ID_15967 = false;
				SteeringCommand_ID_15967 = 1;
				
				noval_RumbleLKIn_ID_15656 = false;
				RumbleLKIn_ID_15656 = true;
				
			}
			else {
				noval_SteeringCommand_ID_15967 = false;
				SteeringCommand_ID_15967 = 1;
				
				noval_RumbleLKIn_ID_15656 = false;
				RumbleLKIn_ID_15656 = false;
				
			}
		}
	}
	else {
		noval_SteeringCommand_ID_15967 = false;
		SteeringCommand_ID_15967 = 3;
		
		noval_RumbleLKIn_ID_15656 = false;
		RumbleLKIn_ID_15656 = false;
		
	}
	return;
	
}