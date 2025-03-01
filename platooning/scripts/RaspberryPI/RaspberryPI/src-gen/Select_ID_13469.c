/* generated by AutoFOCUS 3 (2.14.0) on Fri May 03 16:10:07 CEST 2019 */
#include "inc-gen/Select_ID_13469.h"

GEN_TYPE_int ButtonSelectIn_ID_32552;

GEN_TYPE_boolean noval_ButtonSelectIn_ID_32552;

GEN_TYPE_KeyEvent ButtonSelectOut_ID_32495;

GEN_TYPE_boolean noval_ButtonSelectOut_ID_32495;

static GEN_TYPE_int current_state;

static GEN_TYPE_boolean fire_transition_Press_ID_13488();

static GEN_TYPE_boolean fire_transition_Release_ID_13490();

static GEN_TYPE_boolean fire_state_Released_ID_13476();

static GEN_TYPE_boolean fire_state_Pressed_ID_13481();

void clear_inputs_Select_ID_13469(){
	noval_ButtonSelectIn_ID_32552 = true;
}

void clear_outputs_Select_ID_13469(){
	noval_ButtonSelectOut_ID_32495 = true;
}

void init_Select_ID_13469(){
	noval_ButtonSelectOut_ID_32495 = true;
	current_state = 13476;
}

void perform_step_Select_ID_13469(){
	clear_outputs_Select_ID_13469();
	if (current_state == 13481) {
		fire_state_Pressed_ID_13481();
	}
	else {
		if (current_state == 13476) {
			fire_state_Released_ID_13476();
		}
	}
}

static GEN_TYPE_boolean fire_transition_Press_ID_13488(){
	if (noval_ButtonSelectIn_ID_32552 == false && ButtonSelectIn_ID_32552 == 1) {
		noval_ButtonSelectOut_ID_32495 = false;
		ButtonSelectOut_ID_32495 = pressed();
		
		current_state = 13481;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition_Release_ID_13490(){
	if (noval_ButtonSelectIn_ID_32552 == true || noval_ButtonSelectIn_ID_32552 == false && ButtonSelectIn_ID_32552 == 0) {
		noval_ButtonSelectOut_ID_32495 = false;
		ButtonSelectOut_ID_32495 = notPressed();
		
		current_state = 13476;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_state_Released_ID_13476(){
	if (!fire_transition_Press_ID_13488()) {
		noval_ButtonSelectOut_ID_32495 = false;
		ButtonSelectOut_ID_32495 = notPressed();
		
	}
	return true;
}

static GEN_TYPE_boolean fire_state_Pressed_ID_13481(){
	if (!fire_transition_Release_ID_13490()) {
		noval_ButtonSelectOut_ID_32495 = false;
		ButtonSelectOut_ID_32495 = pressed();
		
	}
	return true;
}
