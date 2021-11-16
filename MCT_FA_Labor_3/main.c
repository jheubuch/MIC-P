/*
=====================================================
  Autor:                Name
  Erstellungsdatum:     dd.mm.yyyy
  Beschreibung:         3. Labor zur Vorlesung Mikrocontroller
  Datei:                main.c - Timer A Module und Compare Modus der CC-Einheiten
=====================================================
*/

#include <Labor3.h>
#include <msp430.h> 

volatile long int CNT = 0xFFF0;


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

                                        //Init Port for S1

                                        //Enable digital IO

                                        //Set SMCLK divider

    //##################### C O D E  1 ##########################################

                                        //Set 0.5 s interval CC0

                                        //Config CC0 for ISR

                                        //Config TA0

                                        //Start TA0

                                        //Enable global interrupts

    //##################### C O D E  2 ##########################################
    //##################### C O D E  3 ##########################################

    while(1){
                                        //Blink LED1

                                        //CODE 4

        if (CNT > 0x15000) {
            P1OUT |= BIT1;
            while(1);                   //CODE 5
        };

    };

}
