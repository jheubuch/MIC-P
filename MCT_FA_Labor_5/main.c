#include <msp430.h> 
#include <stdint.h>

/*
=====================================================
  Autor:                Name
  Erstellungsdatum:     dd.mm.yyyy
  Beschreibung:         5. Labor zur Vorlesung Mikrocontroller
  Datei:                main.c - Timer_A Module - Periodendauer und Frequenzmessung
=====================================================
*/

volatile unsigned long CNT = 0;


#pragma vector = TIMER1_A1_VECTOR
__interrupt void TA1_CC2_ISR(void) {
    __disable_interrupt();
    CNT++;
    __enable_interrupt();
}

int main(void)
{

    WDTCTL = WDTPW | WDTHOLD;


    P1DIR |= BIT0;              // > output
    P1SEL1 &= ~BIT0;            // 1. alternative onchip-modul-funktion
    P1SEL0 |= BIT0;


    TA0CCTL1 = 0x00;            // initialisierung

    // set out mode to toggle
    TA0CCTL1 |= OUTMOD_4;       // capture compare einheit auf toggle setzen
                                //Config TA0

    // Clear timer
    TA0CTL |= TACLR;
    // Enable Stop mode
    TA0CTL &= ~MC;
    TA0CTL |= MC__STOP;

    // Select SMCLK source
    TA0CTL |= TASSEL__SMCLK;
    // set SMCLK divider
    TA0CTL |= ID__8;

                                        //Config CC0
    TA0CCR0 = 62500;                    // 0.5s timer

                                        //Start TA0
    // Enable up mode
    TA0CTL |= MC__UP;


    TA1CCTL2 = 0x00;
    TA1CCTL2 |= CAP__CAPTURE;
    TA1CCTL2 |= CM__FALLING;
    TA1CCTL2 |= CCIE_1;




                                   //Initialize I/O ports
    P1SEL1 &= ~BIT3;
    P1SEL0 |= BIT3;
    P1DIR &= ~BIT3;


                                   //Enable digital IO
    PM5CTL0 &= ~LOCKLPM5;

    __enable_interrupt();

    while(1){

    }
}







