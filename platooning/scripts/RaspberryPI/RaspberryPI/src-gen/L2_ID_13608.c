/* generated by AutoFOCUS 3 (2.14.0) on Fri May 03 16:10:07 CEST 2019 */
#include "inc-gen/L2_ID_13608.h"

GEN_TYPE_int In_ID_13633;

GEN_TYPE_boolean noval_In_ID_13633;

GEN_TYPE_int Out_ID_13631;

GEN_TYPE_boolean noval_Out_ID_13631;

static GEN_TYPE_int current_state;

static GEN_TYPE_boolean fire_transition_Press_ID_13627();

static GEN_TYPE_boolean fire_transition_Release_ID_13629();

static GEN_TYPE_boolean fire_state_Released_ID_13615();

static GEN_TYPE_boolean fire_state_Pressed_ID_13620();

void clear_inputs_L2_ID_13608(){
	noval_In_ID_13633 = true;
}

void clear_outputs_L2_ID_13608(){
	noval_Out_ID_13631 = true;
}

void init_L2_ID_13608(){
	noval_Out_ID_13631 = true;
	current_state = 13615;
}

void perform_step_L2_ID_13608(){
	clear_outputs_L2_ID_13608();
	if (current_state == 13620) {
		fire_state_Pressed_ID_13620();
	}
	else {
		if (current_state == 13615) {
			fire_state_Released_ID_13615();
		}
	}
}

static GEN_TYPE_boolean fire_transition_Press_ID_13627(){
	if (noval_In_ID_13633 == false && In_ID_13633 == 1) {
		noval_Out_ID_13631 = false;
		Out_ID_13631 = 1;
		
		current_state = 13620;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition_Release_ID_13629(){
	if (noval_In_ID_13633 == true || noval_In_ID_13633 == false && In_ID_13633 == 0) {
		noval_Out_ID_13631 = false;
		Out_ID_13631 = 0;
		
		current_state = 13615;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_state_Released_ID_13615(){
	if (!fire_transition_Press_ID_13627()) {
		noval_Out_ID_13631 = true;
	}
	return true;
}

static GEN_TYPE_boolean fire_state_Pressed_ID_13620(){
	if (!fire_transition_Release_ID_13629()) {
		noval_Out_ID_13631 = true;
	}
	return true;
}