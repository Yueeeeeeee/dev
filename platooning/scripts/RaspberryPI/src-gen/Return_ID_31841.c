/* generated by AutoFOCUS 3 (2.14.0) on Mon Jul 08 13:45:02 CEST 2019 */
#include "inc-gen/Return_ID_31841.h"

GEN_TYPE_double VelocityIn_ID_31850;

GEN_TYPE_boolean noval_VelocityIn_ID_31850;

GEN_TYPE_double VelocityReturn_ID_31857;

GEN_TYPE_boolean noval_VelocityReturn_ID_31857;

GEN_TYPE_double Velocity_ID_31863;

GEN_TYPE_boolean noval_Velocity_ID_31863;

void clear_inputs_Return_ID_31841(){
	noval_VelocityIn_ID_31850 = true;
	noval_VelocityReturn_ID_31857 = true;
}

void clear_outputs_Return_ID_31841(){
	noval_Velocity_ID_31863 = true;
}

void init_Return_ID_31841(){
	noval_Velocity_ID_31863 = true;
}

void perform_step_Return_ID_31841(){
	clear_outputs_Return_ID_31841();
	if (!(noval_VelocityIn_ID_31850 == true) && myabs(VelocityIn_ID_31850) < 0.5) {
		noval_Velocity_ID_31863 = noval_VelocityReturn_ID_31857;
		if (!noval_VelocityReturn_ID_31857) {
			Velocity_ID_31863 = VelocityReturn_ID_31857;
		}
		
	}
	else {
		noval_Velocity_ID_31863 = noval_VelocityIn_ID_31850;
		if (!noval_VelocityIn_ID_31850) {
			Velocity_ID_31863 = VelocityIn_ID_31850;
		}
		
	}
	return;
	
}
