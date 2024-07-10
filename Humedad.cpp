/*
***********************************
* Desarrollado por Feipe Marina
* Fecha: 4/7/24
*
*/
#include "Humedad.h"

DigitalIn SensorHum(D1);

bool humedadValue(void){
    if(SensorHum == 1){
        return true;
    }
    else {
        return false;
    }
}