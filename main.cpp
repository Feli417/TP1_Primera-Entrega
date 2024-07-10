#include "mbed.h"
#include "arm_book_lib.h"
#include "Temperature.h"
#include "Humedad.h"
#include "LDR.h"

// DECARATION OF I/O:
DigitalOut myled(LED2);
AnalogIn SensorTmp(A0);
DigitalIn SensorH(D1);
AnalogIn SensorLdr(A1);
// DECARATION OF VARIABLES:


// DECLARATION OF FUNCTIONS:

// MAIN 
int main() {
    // delay(3000); // wait 1 second for device stable status
    printf("Arranco el programa\n");

    // TemperatureInit();
    while (1) {
        float temp = TemperatureValue();
        float light = LDRValue();
        bool lightState = LDRCompare(light);

        printf("El valor de Temperatura es: %.2f\n El valor de Luz es: %.2f\n", temp, light);
        delay(1000);
        if (bool humedad = humedadValue()){
            printf("Humedad correcta");
            myled = 0;
        }
        else {
            printf("Humedad menor, regar");
            // Acá se activaría la salida digital para activar el relay.
            myled = 1;
        }
        delay(2500);
    }
}

