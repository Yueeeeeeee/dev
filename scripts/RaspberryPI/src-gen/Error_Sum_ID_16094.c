/* generated by AutoFOCUS 3 (2.14.0) on Tue Jul 09 17:20:03 CEST 2019 */
#include "inc-gen/Error_Sum_ID_16094.h"

GEN_TYPE_double ErrorSumOut_ID_16110;

GEN_TYPE_boolean noval_ErrorSumOut_ID_16110;

GEN_TYPE_double ErrorSumIn_ID_16117;

GEN_TYPE_boolean noval_ErrorSumIn_ID_16117;

void clear_inputs_Error_Sum_ID_16094(){
	noval_ErrorSumOut_ID_16110 = true;
}

void clear_outputs_Error_Sum_ID_16094(){
	noval_ErrorSumIn_ID_16117 = true;
}

void init_Error_Sum_ID_16094(){
	noval_ErrorSumIn_ID_16117 = true;
}

void perform_step_Error_Sum_ID_16094(){
	clear_outputs_Error_Sum_ID_16094();
	noval_ErrorSumIn_ID_16117 = noval_ErrorSumOut_ID_16110;
	if (!noval_ErrorSumOut_ID_16110) {
		ErrorSumIn_ID_16117 = ErrorSumOut_ID_16110;
	}
	
	return;
	
}
