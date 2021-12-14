/*
=====================================================
  Autor:                Name
  Erstellungsdatum:     dd.mm.yyyy
  Beschreibung:         4. Labor zur Vorlesung Mikrocontroller
  Datei:                main.c - Timer A Module, Compare-Modus der CC-Einheiten und Output-Einheiten
=====================================================
*/

#include <Labor4.h>
#include <msp430.h> 


void sysInit(void) {
    CSCTL0 = CSKEY;                     //Unlock CS-registers through password
    CSCTL1 = DCORSEL + DCOFSEL_3;       //Run DCO at 8 MHz
    CSCTL3 = DIVM_0 + DIVS_0;           //Run CPU-clock (MCLK) at 8 MHz / 32 = 250 kHz and SMCLK at 8 MHz
    CSCTL0_H = 0;                       //Re-lock CS-registers
}


int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;

    sysInit();                          //Set MCLK and SMCLK to 8 MHz

                                        //Init Port for LED1 and LED2
    P5DIR = ~(BIT5+BIT6);               //P5 Pin5 and Pin6 are inputs remaining pins are outputs
    P5REN = BIT5 + BIT6;                //resistors on
    P5OUT = BIT5 + BIT6;                //resistors are pull-ups

    //##################### C O D E  1 ##########################################
    P1DIR = 0xFF;                       //All pins of P1 are outputs
    P1OUT = 0x00;                       //Low signal at all outputs
    //##################### C O D E  2 ##########################################

                                        //Config P1.0 for OUTn
    P1DIR |= BIT0;              // > output
    P1SEL1 &= ~BIT0;            // 1. alternative onchip-modul-funktion
    P1SEL0 |= BIT0;



    PM5CTL0 &= ~LOCKLPM5;               //Enable digital IO


                                        //Config CCn for OUTn
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
    TA0EX0 |= TAIDEX__8;

                                        //Config CC0
    TA0CCR0 = 62500;                    // 0.5s timer

                                        //Start TA0
    // Enable up mode
    TA0CTL |= MC__UP;

    while(1){

       if (!(P5IN & BIT5))              //Poll S2
                P1OUT |= BIT1;          //if S2 pressed -> LED2 on
            else                        //else LED2 off
                P1OUT &= ~BIT1;

    };

}
