#include <msp430.h> 
#include <stdint.h>

/*
=====================================================
  Autor:                Name
  Erstellungsdatum:     dd.mm.yyyy
  Beschreibung:         6. Labor zur Vorlesung Mikrocontroller
  Datei:                main.c - ADC und PWM
=====================================================
*/

volatile uint16_t AD1, AD2;


int main(void)
{

    WDTCTL = WDTPW | WDTHOLD;


    PM5CTL0 &= ~LOCKLPM5;            //enable digital IO



    while(1){

    };

}







