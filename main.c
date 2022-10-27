#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "DeviceConfig.h"

void main(void){
	// Ustaw porty jako cyfrowe
    ANSELA = 0;
    ANSELB = 0;
    ANSELC = 0;
    ANSELE = 0;
    ANSELG = 0;
	
	Set_MaxSpeed_Mode();
	
	while (1){

	}
}