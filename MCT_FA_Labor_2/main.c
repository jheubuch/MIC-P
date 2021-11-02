//=====================================================
//  Autor:                Name
//  Erstellungsdatum:     dd.mm.yyyy
//  Beschreibung:         2. Labor zur Vorlesung Mikrocontroller
//  Datei:                main.c - Digitale I/O und Interrupts
//=====================================================

#include <msp430.h>


void DoSomething(void){
  __delay_cycles(250000UL);
}

void sysInit(void) {
    CSCTL0 = CSKEY;                     //unlock CS-registers through the password
    CSCTL1 = DCORSEL + DCOFSEL_3;       //run DCO at 8 MHz
    CSCTL3 = DIVM__32 + DIVS_0;         //run CPU-Clock (MCLK) at 8 MHz / 32 = 250 kHz and SMCLK at 8 MHz
    CSCTL0_H = 0;                       //re-lock CS-registers
}


int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;           //CODE 1
    sysInit();
                                        //CODE 2
    P5DIR = ~(BIT5 | BIT6);
    P5REN = (BIT5 | BIT6);
    P5OUT = (BIT5 | BIT6);

                                        //CODE 3

                                        //CODE 4
    P1DIR = ~0;
    P1OUT = 0;

    PM5CTL0 &= ~LOCKLPM5;               //Enable digital IO

    P5IFG = 0;                          //Clear all pending i.e. old interrupt flags

                                        //CODE 5

                                        //CODE 6
    while(1){
                                        //CODE 7

                                        //CODE 8


                                        //CODE 9

                                        //CODE 10
    };
}
