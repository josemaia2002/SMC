/*
 * File:   main.c
 * Author: José Maia da Silva Neto
 *
 * Created on June 23, 2021, 9:15 PM
 */

#include <xc.h>
#pragma config FOSC = INTIO67
#pragma config PBADEN = OFF
#define _XTAL_FREQ 1000000

void main(void) {
    
    
    TRISD &= 0b11111100;
    TRISB |= 0b00000001;
    
    
    while(1) {
        
        if((PORTB && 0b00000001) == 1) {
            PORTD |= 0b00000010; // DS1 ON
            PORTD &= 0b11111110;  // DS0 OFF
        } else if ((PORTB && 0b00000001) == 0){
            PORTD &= 0b11111101;  //DS1 OFF
            PORTD |= 0b00000001;  // DS0 ON
        }   
    }
    return;
}