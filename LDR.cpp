/*
*  Servicios de LDR - Autor: Felipe Marina
*  Fecha : 4/7/24
*
*
*
*/ 
#include "LDR.h"
#include "mbed.h"

AnalogIn Sensorldr(A1); 

float LDRValue(void){
    float Light;
    Light = Sensorldr.read();
    return Light;
};
bool LDRCompare(float Light){
    if(Light < MIN_LIGHT_VALUE){
        printf("Se necesita mayor exposición de luz\n");
        return false;
    }
    else {
        printf("Correcta exposición de luz, %.2f\n", Light);
        return true;
    }
};
