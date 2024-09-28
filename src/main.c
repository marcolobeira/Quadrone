#include <avr/io.h>
#include "example.h"


int main(void) {
    // Configurar el pin D7 como salida
    DDRD |= (1 << DDD7); // DDRD (Data Direction Register D) controla los pines del puerto D, DDD7 es el bit del pin D7
    
    
    // Bucle infinito
    while(1) {
        enciende_led();
        wait();
        apaga_led();
        wait();
    }
    
    return 0;
}