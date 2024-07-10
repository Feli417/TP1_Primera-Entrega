/*
***********************************
* Desarrollado por Feipe Marina
* Fecha: 4/7/24
*
*/
#include "Temperature.h"

AnalogIn Sensortmp(A0);
// Function prototypes
void TemperatureInit(){
    printf("Calibration initialized:\n");
    float voltaje = Sensortmp.read()*5;
    float temp =  (voltaje - 0.5)*100.0;
    if (temp > 15 && temp < 30 ){
        printf("Calibración Terminada");
    }
    else {
        printf("Fallo Calibración");
    }
};


float TemperatureValue(void) {
    float temp;
    float suma;
    float vect_tmp[10] = {0,0,0,0,0,0,0,0,0,0}; 
    for (int i = 0 ; i< 10 ;i++ ){
        float voltaje = Sensortmp.read()*5;
        temp =  (voltaje - 0.5)*100.0;
        vect_tmp[i] = temp;
        if (i == 0){
            suma = temp;
        } 
        else {
            suma = suma + temp;
        }
    }
    float temp_prom = suma/10;
    return temp;
};


