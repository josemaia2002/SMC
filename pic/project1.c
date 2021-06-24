/*
 * File:   main.c
 * Author: José Maia da Silva Neto
 *
 * Created on June 23, 2021, 8:32 PM
 */


#include <xc.h>
#pragma config FOSC = INTIO67
#pragma config BOREN = OFF

void main(void) {
    
    
    TRISD = 0;
    
    while(1) {
        PORTD |= 0b00010101;
    }
    return;
}
