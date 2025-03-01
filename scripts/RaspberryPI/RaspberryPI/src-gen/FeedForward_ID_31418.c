/* generated by AutoFOCUS 3 (2.14.0) on Fri Jul 05 17:37:26 CEST 2019 */
#include "inc-gen/FeedForward_ID_31418.h"

GEN_TYPE_LDCameraData LDCameraData_ID_31427;

GEN_TYPE_boolean noval_LDCameraData_ID_31427;

GEN_TYPE_double Steering_FeedForward_ID_31434;

GEN_TYPE_boolean noval_Steering_FeedForward_ID_31434;

void clear_inputs_FeedForward_ID_31418(){
	noval_LDCameraData_ID_31427 = true;
}

void clear_outputs_FeedForward_ID_31418(){
	noval_Steering_FeedForward_ID_31434 = true;
}

void init_FeedForward_ID_31418(){
	noval_Steering_FeedForward_ID_31434 = true;
}

void perform_step_FeedForward_ID_31418(){
	clear_outputs_FeedForward_ID_31418();
	if ((LDCameraData_ID_31427.curve_detected && myabs((LDCameraData_ID_31427.curve_radius)) > 2.0) && myabs((LDCameraData_ID_31427.curve_radius)) < 40.0) {
		noval_Steering_FeedForward_ID_31434 = false;
		Steering_FeedForward_ID_31434 = LDCameraData_ID_31427.curve_radius * COEFFICIENT_LK_FEED_FORWARD();
		
	}
	else {
		noval_Steering_FeedForward_ID_31434 = false;
		Steering_FeedForward_ID_31434 = 0.0;
		
	}
	return;
	
}
