/* generated by AutoFOCUS 3 (2.14.0) on Fri Jul 05 17:37:26 CEST 2019 */
#include "inc-gen/Platoon_States_ID_46545.h"

GEN_TYPE_ADOnOffCommands Control_AD_ID_46587;

GEN_TYPE_boolean noval_Control_AD_ID_46587;

GEN_TYPE_Message_Type receiveMessageType_ID_47574;

GEN_TYPE_boolean noval_receiveMessageType_ID_47574;

GEN_TYPE_int countOld_ID_50466;

GEN_TYPE_boolean noval_countOld_ID_50466;

GEN_TYPE_boolean IsLeader_ID_53002;

GEN_TYPE_boolean noval_IsLeader_ID_53002;

GEN_TYPE_int status_ID_47693;

GEN_TYPE_boolean noval_status_ID_47693;

GEN_TYPE_PlatoonState platoonState_ID_61170;

GEN_TYPE_boolean noval_platoonState_ID_61170;

GEN_TYPE_int countNew_ID_50473;

GEN_TYPE_boolean noval_countNew_ID_50473;

GEN_TYPE_PlatoonState platoonStateCorr_ID_61177;

GEN_TYPE_boolean noval_platoonStateCorr_ID_61177;

static GEN_TYPE_int current_state;

static GEN_TYPE_boolean fire_transition_Turn_Platoon_ON_ID_46572();

static GEN_TYPE_boolean fire_transition_Turn_Platoon_OFF_ID_46575();

static GEN_TYPE_boolean fire_transition_Fuse_ON_ID_48474();

static GEN_TYPE_boolean fire_transition_Received_Platoon_ID_50263();

static GEN_TYPE_boolean fire_transition_Leave_ID_50333();

static GEN_TYPE_boolean fire_transition__ID_50341();

static GEN_TYPE_boolean fire_transition_Split_ID_50345();

static GEN_TYPE_boolean fire_transition__ID_50349();

static GEN_TYPE_boolean fire_transition_Received_No_Handshake__ID_50480();

static GEN_TYPE_boolean fire_transition_Received_no_Platoon_Message_ID_50873();

static GEN_TYPE_boolean fire_transition_Recieved_Handshake_ID_56191();

static GEN_TYPE_boolean fire_transition_Leave_ID_59231();

static GEN_TYPE_boolean fire_state_PlatoonOFF_ID_46551();

static GEN_TYPE_boolean fire_state_Leader_ID_46557();

static GEN_TYPE_boolean fire_state_Follower_ID_46564();

static GEN_TYPE_boolean fire_state_FuseStarter_ID_48469();

static GEN_TYPE_boolean fire_state_Fusing_ID_50258();

static GEN_TYPE_boolean fire_state_Splitting_ID_50321();

static GEN_TYPE_boolean fire_state_Leaving_ID_50324();

void clear_inputs_Platoon_States_ID_46545(){
	noval_Control_AD_ID_46587 = true;
	noval_receiveMessageType_ID_47574 = true;
	noval_countOld_ID_50466 = true;
}

void clear_outputs_Platoon_States_ID_46545(){
	noval_IsLeader_ID_53002 = true;
	noval_status_ID_47693 = true;
	noval_platoonState_ID_61170 = true;
	noval_countNew_ID_50473 = true;
	noval_platoonStateCorr_ID_61177 = true;
}

void init_Platoon_States_ID_46545(){
	noval_IsLeader_ID_53002 = true;
	noval_status_ID_47693 = true;
	noval_platoonState_ID_61170 = true;
	noval_countNew_ID_50473 = true;
	noval_platoonStateCorr_ID_61177 = true;
	current_state = 46551;
}

void perform_step_Platoon_States_ID_46545(){
	clear_outputs_Platoon_States_ID_46545();
	if (current_state == 50324) {
		fire_state_Leaving_ID_50324();
	}
	else {
		if (current_state == 50321) {
			fire_state_Splitting_ID_50321();
		}
		else {
			if (current_state == 50258) {
				fire_state_Fusing_ID_50258();
			}
			else {
				if (current_state == 48469) {
					fire_state_FuseStarter_ID_48469();
				}
				else {
					if (current_state == 46564) {
						fire_state_Follower_ID_46564();
					}
					else {
						if (current_state == 46557) {
							fire_state_Leader_ID_46557();
						}
						else {
							if (current_state == 46551) {
								fire_state_PlatoonOFF_ID_46551();
							}
						}
					}
				}
			}
		}
	}
}

static GEN_TYPE_boolean fire_transition_Turn_Platoon_ON_ID_46572(){
	if (!(noval_Control_AD_ID_46587 == true) && Control_AD_ID_46587.platooning == OnAD()) {
		current_state = 46557;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition_Turn_Platoon_OFF_ID_46575(){
	if (!(noval_Control_AD_ID_46587 == true) && Control_AD_ID_46587.platooning == OffAD()) {
		noval_status_ID_47693 = false;
		status_ID_47693 = 2;
		
		current_state = 46551;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition_Fuse_ON_ID_48474(){
	if (!(noval_Control_AD_ID_46587 == true) && Control_AD_ID_46587.fuse == true) {
		noval_countNew_ID_50473 = false;
		countNew_ID_50473 = 0;
		
		current_state = 48469;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition_Received_Platoon_ID_50263(){
	if (!(noval_receiveMessageType_ID_47574 == true) && (noval_receiveMessageType_ID_47574 == false && receiveMessageType_ID_47574 == platoon())) {
		noval_countNew_ID_50473 = false;
		countNew_ID_50473 = 0;
		
		current_state = 50258;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition_Leave_ID_50333(){
	if (!(noval_Control_AD_ID_46587 == true) && Control_AD_ID_46587.platooning == OffAD()) {
		noval_countNew_ID_50473 = false;
		countNew_ID_50473 = 0;
		
		noval_IsLeader_ID_53002 = false;
		IsLeader_ID_53002 = false;
		
		current_state = 50324;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition__ID_50341(){
	if (!(noval_countOld_ID_50466 == true) && countOld_ID_50466 > 100) {
		noval_status_ID_47693 = false;
		status_ID_47693 = 2;
		
		current_state = 46557;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition_Split_ID_50345(){
	if (!(noval_Control_AD_ID_46587 == true) && Control_AD_ID_46587.split == true) {
		noval_countNew_ID_50473 = false;
		countNew_ID_50473 = 0;
		
		noval_IsLeader_ID_53002 = false;
		IsLeader_ID_53002 = false;
		
		current_state = 50321;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition__ID_50349(){
	if (!(noval_countOld_ID_50466 == true) && countOld_ID_50466 > 100) {
		noval_status_ID_47693 = false;
		status_ID_47693 = 2;
		
		current_state = 46551;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition_Received_No_Handshake__ID_50480(){
	if (!(noval_countOld_ID_50466 == true) && countOld_ID_50466 > 700) {
		current_state = 46557;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition_Received_no_Platoon_Message_ID_50873(){
	if (!(noval_countOld_ID_50466 == true) && countOld_ID_50466 > 700) {
		current_state = 46557;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition_Recieved_Handshake_ID_56191(){
	if (!(noval_receiveMessageType_ID_47574 == true) && (noval_receiveMessageType_ID_47574 == false && receiveMessageType_ID_47574 == handshake())) {
		noval_platoonState_ID_61170 = false;
		platoonState_ID_61170 = handshaking();
		
		current_state = 46564;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_transition_Leave_ID_59231(){
	if (!(noval_Control_AD_ID_46587 == true) && Control_AD_ID_46587.platooning == OffAD()) {
		noval_countNew_ID_50473 = false;
		countNew_ID_50473 = 0;
		
		noval_IsLeader_ID_53002 = false;
		IsLeader_ID_53002 = false;
		
		current_state = 50324;
		return true;
	}
	else {
		return false;
	}
}

static GEN_TYPE_boolean fire_state_PlatoonOFF_ID_46551(){
	if (!fire_transition_Turn_Platoon_ON_ID_46572()) {
		noval_status_ID_47693 = false;
		status_ID_47693 = 0;
		
		noval_platoonState_ID_61170 = false;
		platoonState_ID_61170 = off();
		
		noval_IsLeader_ID_53002 = false;
		IsLeader_ID_53002 = false;
		
	}
	return true;
}

static GEN_TYPE_boolean fire_state_Leader_ID_46557(){
	if (!(fire_transition_Turn_Platoon_OFF_ID_46575() || (fire_transition_Fuse_ON_ID_48474() || fire_transition_Leave_ID_59231()))) {
		noval_IsLeader_ID_53002 = false;
		IsLeader_ID_53002 = true;
		
		noval_status_ID_47693 = false;
		status_ID_47693 = 1;
		
		noval_platoonState_ID_61170 = false;
		platoonState_ID_61170 = leader();
		
	}
	return true;
}

static GEN_TYPE_boolean fire_state_Follower_ID_46564(){
	if (!(fire_transition_Leave_ID_50333() || fire_transition_Split_ID_50345())) {
		noval_IsLeader_ID_53002 = false;
		IsLeader_ID_53002 = false;
		
		noval_platoonState_ID_61170 = false;
		platoonState_ID_61170 = follower();
		
		noval_platoonStateCorr_ID_61177 = false;
		platoonStateCorr_ID_61177 = follower();
		
	}
	return true;
}

static GEN_TYPE_boolean fire_state_FuseStarter_ID_48469(){
	if (!(fire_transition_Received_Platoon_ID_50263() || fire_transition_Received_no_Platoon_Message_ID_50873())) {
		noval_platoonState_ID_61170 = false;
		platoonState_ID_61170 = fuseStarter();
		
		noval_countNew_ID_50473 = noval_countOld_ID_50466;
		if (!noval_countOld_ID_50466) {
			countNew_ID_50473 = countOld_ID_50466;
		}
		
	}
	return true;
}

static GEN_TYPE_boolean fire_state_Fusing_ID_50258(){
	if (!(fire_transition_Recieved_Handshake_ID_56191() || fire_transition_Received_No_Handshake__ID_50480())) {
		noval_platoonState_ID_61170 = false;
		platoonState_ID_61170 = fusing();
		
		noval_countNew_ID_50473 = noval_countOld_ID_50466;
		if (!noval_countOld_ID_50466) {
			countNew_ID_50473 = countOld_ID_50466;
		}
		
	}
	return true;
}

static GEN_TYPE_boolean fire_state_Splitting_ID_50321(){
	if (!fire_transition__ID_50341()) {
		noval_countNew_ID_50473 = noval_countOld_ID_50466;
		if (!noval_countOld_ID_50466) {
			countNew_ID_50473 = countOld_ID_50466;
		}
		
		noval_platoonState_ID_61170 = false;
		platoonState_ID_61170 = splitting();
		
		noval_IsLeader_ID_53002 = false;
		IsLeader_ID_53002 = false;
		
	}
	return true;
}

static GEN_TYPE_boolean fire_state_Leaving_ID_50324(){
	if (!fire_transition__ID_50349()) {
		noval_countNew_ID_50473 = noval_countOld_ID_50466;
		if (!noval_countOld_ID_50466) {
			countNew_ID_50473 = countOld_ID_50466;
		}
		
		noval_platoonState_ID_61170 = false;
		platoonState_ID_61170 = leaving();
		
		noval_IsLeader_ID_53002 = false;
		IsLeader_ID_53002 = false;
		
	}
	return true;
}
