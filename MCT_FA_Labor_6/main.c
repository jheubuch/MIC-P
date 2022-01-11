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

    P1DIR = ~(BIT2 | BIT3);
    P1REN = 0;
    P1OUT = 0;
    P1SEL1 |= (BIT2 | BIT3);
    P1SEL0 |= (BIT2 | BIT3);

    PM5CTL0 &= ~LOCKLPM5;               //enable digital IO

    ADC12MCTL0 = ADC12DIF_0;            // single-ended mode
    ADC12MCTL0 |= ADC12VRSEL_0;         // add AVCC and AVSS as sources
    ADC12MCTL0 |= ADC12INCH_2;          // input channel 2
    ADC12MCTL1 = ADC12DIF_0;            // single-ended mode
    ADC12MCTL1 |= ADC12VRSEL_0;         // add AVCC and AVSS as sources
    ADC12MCTL1 |= ADC12EOS_1;           // set end of sequence
    ADC12MCTL1 |= ADC12INCH_3;          // input channel 3

    ADC12CTL0 = ADC12ENC_0 |            // disable conversion for configuration
                ADC12SHT0_1 |           // sample-and-hold time 8 cycles
                ADC12ON_1 |             // turn adc on
                ADC12MSC_1 |            // multiple sample and conversion
                ADC12SC_0;              // stop sample-and-conversion

    ADC12CTL1 = ADC12PDIV_0 |           // predivide by 1
                ADC12DIV_0 |            // divide clock by 1
                ADC12SSEL_3 |           // SMCLK clock source
                ADC12SHP_1 |            // signal source from timer
                ADC12CONSEQ_3;          // repeat sequence-of-channels

    ADC12CTL2 = ADC12RES_0 |            // 8 bit resolution
                ADC12DF_0;              // binary-unsigned format

    ADC12CTL3 = ADC12CSTARTADD_0;       // Start at channel 0

    ADC12CTL0 |= (ADC12ENC_1 | ADC12SC_1); // start conversion



    while(1){
        AD1 = ADC12MEM0;
        AD2 = ADC12MEM1;
    };

}
