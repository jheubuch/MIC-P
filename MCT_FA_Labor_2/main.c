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

//#pragma vector = PORT5_VECTOR
//__interrupt void P5_ISRb(void) {
//
//    switch (P5IV) {
//        // S2
//        case 0x0C:
//            P1OUT &= ~BIT0;
//            break;
//        // S1
//        case 0x0E:
//            P1OUT |= BIT0;
//            break;
//    }
//
//}
//__interrupt void P5_ISR(void) {
//    if (P5IFG & BIT6) {
//        P1OUT |= BIT0;
////        P5IFG &= ~BIT6;
//    }
//
//    if (P5IFG & BIT5) {
//        P1OUT &= ~BIT0;
////        P5IFG &= ~BIT5;
//    }
//}

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;           //CODE 1
    sysInit();
                                        //CODE 2
    P5DIR = ~(BIT5 + BIT6);
    P5REN = (BIT5 + BIT6);
    P5OUT = (BIT5 + BIT6);

                                        //CODE 3
    P5IES = (BIT5 + BIT6);

                                        //CODE 4
    P1DIR = 0xFF;
    P1OUT = 0;

    PM5CTL0 &= ~LOCKLPM5;               //Enable digital IO

    P5IFG = 0;                          //Clear all pending i.e. old interrupt flags

                                        //CODE 5
    P5IE = (BIT5 + BIT6);

                                        //CODE 6
    __enable_interrupt();

    while(1){
                                        //CODE 7
        DoSomething();

                                        //CODE 8
//        if (!(P5IN & BIT6)) // S1 pressed
//            P1OUT |= BIT0;
//
//        if (!(P5IN & BIT5))
//            P1OUT &= ~BIT0;


                                        //CODE 9



                                        //CODE 10
    };
}
