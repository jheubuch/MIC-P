/*
====================================================================================
  Autor:                Name
  Erstellungsdatum:     dd.mm.yyyy
  Beschreibung:         Konstanten für die Konfiguration der ADC12_B Geräteregister
  Datei:                ADC12_b.h - ADC12_B Module
===================================================================================
*/

#ifndef ADC12_B_H
#define ADC12_B_H

////////////////////////////////////////////////////////////////////////////////////////////////
// Constants used for the ADC12CTL0 - Register
////////////////////////////////////////////////////////////////////////////////////////////////
#define ADC12SHT0_0                      (0x0000)        /* 4 ADC12CLK cycles */
#define ADC12SHT0_1                      (0x0100)        /* 8 ADC12CLK cycles */
#define ADC12SHT0_2                      (0x0200)        /* 16 ADC12CLK cycles */
#define ADC12SHT0_3                      (0x0300)        /* 32 ADC12CLK cycles */
#define ADC12SHT0_4                      (0x0400)        /* 64 ADC12CLK cycles */
#define ADC12SHT0_5                      (0x0500)        /* 96 ADC12CLK cycles */
#define ADC12SHT0_6                      (0x0600)        /* 128 ADC12CLK cycles */
#define ADC12SHT0_7                      (0x0700)        /* 192 ADC12CLK cycles */
#define ADC12SHT0_8                      (0x0800)        /* 256 ADC12CLK cycles */
#define ADC12SHT0_9                      (0x0900)        /* 384 ADC12CLK cycles */
#define ADC12SHT0_10                     (0x0a00)        /* 512 ADC12CLK cycles */

#define ADC12SHT1_0                      (0x0000)        /* 4 ADC12CLK cycles */
#define ADC12SHT1_1                      (0x1000)        /* 8 ADC12CLK cycles */
#define ADC12SHT1_2                      (0x2000)        /* 16 ADC12CLK cycles */
#define ADC12SHT1_3                      (0x3000)        /* 32 ADC12CLK cycles */
#define ADC12SHT1_4                      (0x4000)        /* 64 ADC12CLK cycles */
#define ADC12SHT1_5                      (0x5000)        /* 96 ADC12CLK cycles */
#define ADC12SHT1_6                      (0x6000)        /* 128 ADC12CLK cycles */
#define ADC12SHT1_7                      (0x7000)        /* 192 ADC12CLK cycles */
#define ADC12SHT1_8                      (0x8000)        /* 256 ADC12CLK cycles */
#define ADC12SHT1_9                      (0x9000)        /* 384 ADC12CLK cycles */
#define ADC12SHT1_10                     (0xa000)        /* 512 ADC12CLK cycles */

#define ADC12MSC                         (0x0080)        /* sample-and-hold time. */
#define ADC12ON                          (0x0010)        /* ADC on */
#define ADC12ENC                         (0x0002)        /* enable conversion */
#define ADC12SC                          (0x0001)


////////////////////////////////////////////////////////////////////////////////////////////////
//   Constants used for the ADC12CTL1 - Register
////////////////////////////////////////////////////////////////////////////////////////////////
#define ADC12BUSY                        (0x0001)        /* ADC busy */
#define ADC12CONSEQ_0                    (0x0000)        /* Single-channel, single-conversion */
#define ADC12CONSEQ_1                    (0x0002)        /* Sequence-of-channels */
#define ADC12CONSEQ_2                    (0x0004)        /* Repeat-single-channel */
#define ADC12CONSEQ_3                    (0x0006)        /* Repeat-sequence-of-channels */

#define ADC12SSEL_0                      (0x0000)        /* ADC12OSC (MODOSC) */
#define ADC12SSEL_1                      (0x0008)        /* ACLK */
#define ADC12SSEL_2                      (0x0010)        /* MCLK */
#define ADC12SSEL_3                      (0x0018)        /* SMCLK */

#define ADC12DIV_0                       (0x0000)        /*Clock-divider: /1 */
#define ADC12DIV_1                       (0x0020)        /*Clock-divider: /2 */
#define ADC12DIV_2                       (0x0040)        /*Clock-divider: /3 */
#define ADC12DIV_3                       (0x0060)        /*Clock-divider: /4 */
#define ADC12DIV_4                       (0x0080)        /*Clock-divider: /5 */
#define ADC12DIV_5                       (0x00a0)        /*Clock-divider: /6 */
#define ADC12DIV_6                       (0x00c0)        /*Clock-divider: /7 */
#define ADC12DIV_7                       (0x00e0)        /*Clock-divider: /8 */

#define ADC12ISSH_0                      (0x0000)        /* The sample-input signal is not inverted. */
#define ADC12ISSH_1                      (0x0100)        /* The sample-input signal is inverted. */

#define ADC12SHP_0                       (0x0000)        /* SAMPCON signal is sourced from the sample-input signal. */
#define ADC12SHP_1                       (0x0200)        /* SAMPCON signal is sourced from the sampling timer. */

#define ADC12SHS_0                       (0x0000)        /* ADC12SC bit */
#define ADC12SHS_1                       (0x0400)        /* see the device-specific data sheet for source */
#define ADC12SHS_2                       (0x0800)        /* see the device-specific data sheet for source */
#define ADC12SHS_3                       (0x0c00)        /* see the device-specific data sheet for source */
#define ADC12SHS_4                       (0x1000)        /* see the device-specific data sheet for source */
#define ADC12SHS_5                       (0x1400)        /* see the device-specific data sheet for source */
#define ADC12SHS_6                       (0x1800)        /* see the device-specific data sheet for source */
#define ADC12SHS_7                       (0x1c00)        /* see the device-specific data sheet for source */

#define ADC12PDIV_0                      (0x0000)        /*Clock-Predivider:  /1 */
#define ADC12PDIV_1                      (0x2000)        /*Clock-Predivider:  /4 */
#define ADC12PDIV_2                      (0x4000)        /*Clock-Predivider:  /32 */
#define ADC12PDIV_3                      (0x6000)        /*Clock-Predivider:  /64 */


////////////////////////////////////////////////////////////////////////////////////////////////
//   Constants used for the ADC12CTL2 - Register
////////////////////////////////////////////////////////////////////////////////////////////////
#define ADC12RES__8BIT                   (0x0000)        /* 8 bit (10 clock cycle conversion time) */
#define ADC12RES__10BIT                  (0x0010)        /* 10 bit (12 clock cycle conversion time) */
#define ADC12RES__12BIT                  (0x0020)        /* 12 bit (14 clock cycle conversion time) */

#define ADC12PWRMD_0                     (0x0000)        /* Regular power mode     */
#define ADC12PWRMD_1                     (0x0001)        /* Low power mode         */

#define ADC12DF_0                        (0x0000)        /* Dataformat: unsigned */
#define ADC12DF_1                        (0x0008)        /* Dataformat: signed   */


////////////////////////////////////////////////////////////////////////////////////////////////
//   Constants used for the ADC12CTL3 - Register
////////////////////////////////////////////////////////////////////////////////////////////////
#define ADC12CSTARTADD__ADC12MEM0        (0x0000)        /* Conversion start address ADC12MEM0 */
#define ADC12CSTARTADD__ADC12MEM1        (0x0001)        /* Conversion start address ADC12MEM1 */
#define ADC12CSTARTADD__ADC12MEM2        (0x0002)        /* Conversion start address ADC12MEM2 */
#define ADC12CSTARTADD__ADC12MEM3        (0x0003)        /* Conversion start address ADC12MEM3 */
#define ADC12CSTARTADD__ADC12MEM4        (0x0004)        /* Conversion start address ADC12MEM4 */
#define ADC12CSTARTADD__ADC12MEM5        (0x0005)        /* Conversion start address ADC12MEM5 */
#define ADC12CSTARTADD__ADC12MEM6        (0x0006)        /* Conversion start address ADC12MEM6 */
#define ADC12CSTARTADD__ADC12MEM7        (0x0007)        /* Conversion start address ADC12MEM7 */
#define ADC12CSTARTADD__ADC12MEM8        (0x0008)        /* Conversion start address ADC12MEM8 */
#define ADC12CSTARTADD__ADC12MEM9        (0x0009)        /* Conversion start address ADC12MEM9 */
#define ADC12CSTARTADD__ADC12MEM10       (0x000a)        /* Conversion start address ADC12MEM10 */
#define ADC12CSTARTADD__ADC12MEM11       (0x000b)        /* Conversion start address ADC12MEM10 */
#define ADC12CSTARTADD__ADC12MEM12       (0x000c)        /* Conversion start address ADC12MEM12 */
#define ADC12CSTARTADD__ADC12MEM13       (0x000d)        /* Conversion start address ADC12MEM13 */
#define ADC12CSTARTADD__ADC12MEM14       (0x000e)        /* Conversion start address ADC12MEM14 */
#define ADC12CSTARTADD__ADC12MEM15       (0x000f)        /* Conversion start address ADC12MEM15 */
#define ADC12CSTARTADD__ADC12MEM16       (0x0010)        /* Conversion start address ADC12MEM16 */
#define ADC12CSTARTADD__ADC12MEM17       (0x0011)        /* Conversion start address ADC12MEM17 */
#define ADC12CSTARTADD__ADC12MEM18       (0x0012)        /* Conversion start address ADC12MEM18 */
#define ADC12CSTARTADD__ADC12MEM19       (0x0013)        /* Conversion start address ADC12MEM19 */
#define ADC12CSTARTADD__ADC12MEM20       (0x0014)        /* Conversion start address ADC12MEM20 */
#define ADC12CSTARTADD__ADC12MEM21       (0x0015)        /* Conversion start address ADC12MEM21 */
#define ADC12CSTARTADD__ADC12MEM22       (0x0016)        /* Conversion start address ADC12MEM22 */
#define ADC12CSTARTADD__ADC12MEM23       (0x0017)        /* Conversion start address ADC12MEM23 */
#define ADC12CSTARTADD__ADC12MEM24       (0x0018)        /* Conversion start address ADC12MEM24 */
#define ADC12CSTARTADD__ADC12MEM25       (0x0019)        /* Conversion start address ADC12MEM25 */
#define ADC12CSTARTADD__ADC12MEM26       (0x001a)        /* Conversion start address ADC12MEM26 */
#define ADC12CSTARTADD__ADC12MEM27       (0x001b)        /* Conversion start address ADC12MEM27 */
#define ADC12CSTARTADD__ADC12MEM28       (0x001c)        /* Conversion start address ADC12MEM28 */
#define ADC12CSTARTADD__ADC12MEM29       (0x001d)        /* Conversion start address ADC12MEM29 */
#define ADC12CSTARTADD__ADC12MEM30       (0x001e)        /* Conversion start address ADC12MEM30 */
#define ADC12CSTARTADD__ADC12MEM31       (0x001f)        /* Conversion start address ADC12MEM31 */

#define ADC12BATMAP_0                    (0x0000)        /* external pin is selected for ADC input channel A31 */
#define ADC12BATMAP_1                    (0x0040)        /* ADC internal 1/2 x AVCC channel is selected for ADC input*/

#define ADC12TCMAP_0                     (0x0000)        /* external pin is selected for ADC input channel A30 */
#define ADC12TCMAP_1                     (0x0080)        /* ADC internal temperature sensor channel is selected for ADC
                                                            input channel A30 */

#define ADC12ICH0MAP_0                   (0x0000)        /* external pin is selected for ADC input channel A29 */
#define ADC12ICH0MAP_1                   (0x0100)        /* ADC input channel internal 0 is selected for ADC input channel*/

#define ADC12ICH1MAP_0                   (0x0000)        /* external pin is selected for ADC input channel A28 */
#define ADC12ICH1MAP_1                   (0x0200)        /* ADC input channel internal 1 is selected for ADC input channel
                                                            A28, see device-specific data sheet for availability */

#define ADC12ICH2MAP_0                   (0x0000)        /* external pin is selected for ADC input channel A27 */
#define ADC12ICH2MAP_1                   (0x0400)        /* ADC input channel internal 2 is selected for ADC input channel
                                                            A27, see device-specific data sheet for availability */

#define ADC12ICH3MAP_0                   (0x0000)        /* external pin is selected for ADC input channel A26 */
#define ADC12ICH3MAP_1                   (0x0800)        /* ADC input channel internal 3 is selected for ADC input channel
                                                            A26, see device-specific data sheet for availability */


////////////////////////////////////////////////////////////////////////////////////////////////
//   Constants used for the ADC12MCTLx - Registers
////////////////////////////////////////////////////////////////////////////////////////////////
#define ADC12INCH_0                      (0x0000)        /* If ADC12DIF = 0: A0; If ADC12DIF = 1: Ain+ = A0, Ain- = A1 */
#define ADC12INCH_1                      (0x0001)        /* If ADC12DIF = 0: A1; If ADC12DIF = 1: Ain+ = A0, Ain- = A1 */
#define ADC12INCH_2                      (0x0002)        /* If ADC12DIF = 0: A2; If ADC12DIF = 1: Ain+ = A2, Ain- = A3 */
#define ADC12INCH_3                      (0x0003)        /* If ADC12DIF = 0: A3; If ADC12DIF = 1: Ain+ = A2, Ain- = A3 */
#define ADC12INCH_4                      (0x0004)        /* If ADC12DIF = 0: A4; If ADC12DIF = 1: Ain+ = A4, Ain- = A5 */
#define ADC12INCH_5                      (0x0005)        /* If ADC12DIF = 0: A5; If ADC12DIF = 1: Ain+ = A4, Ain- = A5 */
#define ADC12INCH_6                      (0x0006)        /* If ADC12DIF = 0: A6; If ADC12DIF = 1: Ain+ = A6, Ain- = A7 */
#define ADC12INCH_7                      (0x0007)        /* If ADC12DIF = 0: A7; If ADC12DIF = 1: Ain+ = A6, Ain- = A7 */
#define ADC12INCH_8                      (0x0008)        /* If ADC12DIF = 0: A8; If ADC12DIF = 1: Ain+ = A8, Ain- = A9 */
#define ADC12INCH_9                      (0x0009)        /* If ADC12DIF = 0: A9; If ADC12DIF = 1: Ain+ = A8, Ain- = A9 */
#define ADC12INCH_10                     (0x000a)        /* If ADC12DIF = 0: A10; If ADC12DIF = 1: Ain+ = A10, Ain- = A11 */
#define ADC12INCH_11                     (0x000b)        /* If ADC12DIF = 0: A11; If ADC12DIF = 1: Ain+ = A10, Ain- = A11 */
#define ADC12INCH_12                     (0x000c)        /* If ADC12DIF = 0: A12; If ADC12DIF = 1: Ain+ = A12, Ain- = A13 */
#define ADC12INCH_13                     (0x000d)        /* If ADC12DIF = 0: A13; If ADC12DIF = 1: Ain+ = A12, Ain- = A13 */
#define ADC12INCH_14                     (0x000e)        /* If ADC12DIF = 0: A14; If ADC12DIF = 1: Ain+ = A14, Ain- = A15 */
#define ADC12INCH_15                     (0x000f)        /* If ADC12DIF = 0: A15; If ADC12DIF = 1: Ain+ = A14, Ain- = A15 */
#define ADC12INCH_16                     (0x0010)        /* If ADC12DIF = 0: A16; If ADC12DIF = 1: Ain+ = A16, Ain- = A17 */
#define ADC12INCH_17                     (0x0011)        /* If ADC12DIF = 0: A17; If ADC12DIF = 1: Ain+ = A16, Ain- = A17 */
#define ADC12INCH_18                     (0x0012)        /* If ADC12DIF = 0: A18; If ADC12DIF = 1: Ain+ = A18, Ain- = A19 */
#define ADC12INCH_19                     (0x0013)        /* If ADC12DIF = 0: A19; If ADC12DIF = 1: Ain+ = A18, Ain- = A19 */
#define ADC12INCH_20                     (0x0014)        /* If ADC12DIF = 0: A20; If ADC12DIF = 1: Ain+ = A20, Ain- = A21 */
#define ADC12INCH_21                     (0x0015)        /* If ADC12DIF = 0: A21; If ADC12DIF = 1: Ain+ = A20, Ain- = A21 */
#define ADC12INCH_22                     (0x0016)        /* If ADC12DIF = 0: A22; If ADC12DIF = 1: Ain+ = A22, Ain- = A23 */
#define ADC12INCH_23                     (0x0017)        /* If ADC12DIF = 0: A23; If ADC12DIF = 1: Ain+ = A22, Ain- = A23 */
#define ADC12INCH_24                     (0x0018)        /* If ADC12DIF = 0: A24; If ADC12DIF = 1: Ain+ = A24, Ain- = A25 */
#define ADC12INCH_25                     (0x0019)        /* If ADC12DIF = 0: A25; If ADC12DIF = 1: Ain+ = A24, Ain- = A25 */
#define ADC12INCH_26                     (0x001a)        /* If ADC12DIF = 0: A26; If ADC12DIF = 1: Ain+ = A26, Ain- =A27 */
#define ADC12INCH_27                     (0x001b)        /* If ADC12DIF = 0: A27; If ADC12DIF = 1: Ain+ = A26, Ain- = A27 */
#define ADC12INCH_28                     (0x001c)        /* If ADC12DIF = 0: A28; If ADC12DIF = 1: Ain+ = A28, Ain- = A29 */
#define ADC12INCH_29                     (0x001d)        /* If ADC12DIF = 0: A29; If ADC12DIF = 1: Ain+ = A28, Ain- = A29 */
#define ADC12INCH_30                     (0x001e)        /* If ADC12DIF = 0: A30; If ADC12DIF = 1: Ain+ = A30, Ain- = A31 */
#define ADC12INCH_31                     (0x001f)        /* If ADC12DIF = 0: A31; If ADC12DIF = 1: Ain+ = A30, Ain- = A31 */

#define ADC12EOS_0                       (0x0000)        /* Not end of sequence */
#define ADC12EOS_1                       (0x0080)        /* End of sequence */

#define ADC12VRSEL_0                     (0x0000)        /* VR+ = AVCC, VR- = AVSS */
#define ADC12VRSEL_1                     (0x0100)        /* VR+ = VREF buffered, VR- = AVSS */
#define ADC12VRSEL_2                     (0x0200)        /* VR+ = VeREF-, VR- = AVSS */
#define ADC12VRSEL_3                     (0x0300)        /* VR+ = VeREF+ buffered, VR- = AVSS */
#define ADC12VRSEL_4                     (0x0400)        /* VR+ = VeREF+, VR- = AVSS */
#define ADC12VRSEL_5                     (0x0500)        /* VR+ = AVCC, VR- = VeREF+ buffered */
#define ADC12VRSEL_6                     (0x0600)        /* VR+ = AVCC, VR- = VeREF+ */
#define ADC12VRSEL_7                     (0x0700)        /* VR+ = VREF buffered, VR- = VeREF+ */
#define ADC12VRSEL_9                     (0x0900)        /* VR+ = AVCC, VR- = VREF buffered */
#define ADC12VRSEL_11                    (0x0b00)        /* VR+ = VeREF+, VR- = VREF buffered */
#define ADC12VRSEL_12                    (0x0c00)        /* VR+ = AVCC, VR- = VeREF- */
#define ADC12VRSEL_13                    (0x0d00)        /* VR+ = VREF buffered, VR- = VeREF- */
#define ADC12VRSEL_14                    (0x0e00)        /* VR+ = VeREF+, VR- = VeREF- */
#define ADC12VRSEL_15                    (0x0f00)        /* VR+ = VeREF+ buffered, VR- = VeREF- */

#define ADC12DIF_0                       (0x0000)        /* Single-ended mode enabled */
#define ADC12DIF_1                       (0x2000)        /* Differential mode enabled */

#define ADC12WINC_0                      (0x0000)        /* Comparator window disabled */
#define ADC12WINC_1                      (0x4000)        /* Comparator window enabled */


////////////////////////////////////////////////////////////////////////////////////////////////
//   Constants used for the ADC12IER0 - Register
////////////////////////////////////////////////////////////////////////////////////////////////
#define ADC12IE0_0                       (0x0000)        /* Interrupt disabled */
#define ADC12IE0_1                       (0x0001)        /* Interrupt enabled */
#define ADC12IE1_0                       (0x0000)        /* Interrupt disabled */
#define ADC12IE1_1                       (0x0002)        /* Interrupt enabled */
#define ADC12IE2_0                       (0x0000)        /* Interrupt disabled */
#define ADC12IE2_1                       (0x0004)        /* Interrupt enabled */
#define ADC12IE3_0                       (0x0000)        /* Interrupt disabled */
#define ADC12IE3_1                       (0x0008)        /* Interrupt enabled */
#define ADC12IE4_0                       (0x0000)        /* Interrupt disabled */
#define ADC12IE4_1                       (0x0010)        /* Interrupt enabled */
#define ADC12IE5_0                       (0x0000)        /* Interrupt disabled */
#define ADC12IE5_1                       (0x0020)        /* Interrupt enabled */
#define ADC12IE6_0                       (0x0000)        /* Interrupt disabled */
#define ADC12IE6_1                       (0x0040)        /* Interrupt enabled */
#define ADC12IE7_0                       (0x0000)        /* Interrupt disabled */
#define ADC12IE7_1                       (0x0080)        /* Interrupt enabled */
#define ADC12IE8_0                       (0x0000)        /* Interrupt disabled */
#define ADC12IE8_1                       (0x0100)        /* Interrupt enabled */
#define ADC12IE9_0                       (0x0000)        /* Interrupt disabled */
#define ADC12IE9_1                       (0x0200)        /* Interrupt enabled */
#define ADC12IE10_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE10_1                      (0x0400)        /* Interrupt enabled */
#define ADC12IE11_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE11_1                      (0x0800)        /* Interrupt enabled */
#define ADC12IE12_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE12_1                      (0x1000)        /* Interrupt enabled */
#define ADC12IE13_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE13_1                      (0x2000)        /* Interrupt enabled */
#define ADC12IE14_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE14_1                      (0x4000)        /* Interrupt enabled */
#define ADC12IE15_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE15_1                      (0x8000)        /* Interrupt enabled */

////////////////////////////////////////////////////////////////////////////////////////////////
//   Constants used for the ADC12IER1 - Register
////////////////////////////////////////////////////////////////////////////////////////////////
#define ADC12IE16_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE16_1                      (0x0001)        /* Interrupt enabled */
#define ADC12IE17_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE17_1                      (0x0002)        /* Interrupt enabled */
#define ADC12IE18_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE18_1                      (0x0004)        /* Interrupt enabled */
#define ADC12IE19_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE19_1                      (0x0008)        /* Interrupt enabled */
#define ADC12IE20_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE20_1                      (0x0010)        /* Interrupt enabled */
#define ADC12IE21_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE21_1                      (0x0020)        /* Interrupt enabled */
#define ADC12IE22_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE22_1                      (0x0040)        /* Interrupt enabled */
#define ADC12IE23_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE23_1                      (0x0080)        /* Interrupt enabled */
#define ADC12IE24_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE24_1                      (0x0100)        /* Interrupt enabled */
#define ADC12IE25_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE25_1                      (0x0200)        /* Interrupt enabled */
#define ADC12IE26_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE26_1                      (0x0400)        /* Interrupt enabled */
#define ADC12IE27_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE27_1                      (0x0800)        /* Interrupt enabled */
#define ADC12IE28_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE28_1                      (0x1000)        /* Interrupt enabled */
#define ADC12IE29_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE29_1                      (0x2000)        /* Interrupt enabled */
#define ADC12IE30_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE30_1                      (0x4000)        /* Interrupt enabled */
#define ADC12IE31_0                      (0x0000)        /* Interrupt disabled */
#define ADC12IE31_1                      (0x8000)        /* Interrupt enabled */

////////////////////////////////////////////////////////////////////////////////////////////////
//   Constants used for the ADC12IER2 - Register
////////////////////////////////////////////////////////////////////////////////////////////////
#define ADC12INIE_0                      (0x0000)        /* Interrupt enable MEMx between ADC12HI and LO: Interrupt disabled */
#define ADC12INIE_1                      (0x0002)        /* Interrupt enable MEMx between ADC12HI and LO: Interrupt enabled */

#define ADC12LOIE_0                      (0x0000)        /* Interrupt enable MEMx < ADC12LO: Interrupt disabled */
#define ADC12LOIE_1                      (0x0004)        /* Interrupt enable MEMx < ADC12LO: Interrupt enabled */

#define ADC12HIIE_0                      (0x0000)        /* Interrupt enable MEMx > ADC12HI: Interrupt disabled */
#define ADC12HIIE_1                      (0x0008)        /* Interrupt enable MEMx > ADC12HI: Interrupt enabled */

#define ADC12OVIE_0                      (0x0000)        /* ADC12MEMx overflow-interrupt enable: Interrupt disabled */
#define ADC12OVIE_1                      (0x0010)        /* ADC12MEMx overflow-interrupt enable: Interrupt enabled */

#define ADC12TOVIE_0                     (0x0000)        /* Conversion-time-overflow interrupt enable: Interrupt disabled */
#define ADC12TOVIE_1                     (0x0020)        /* Conversion-time-overflow interrupt enable: Interrupt enabled */

#define ADC12RDYIE_0                     (0x0000)        /* Interrupt enable ADC ref buffer ready: Interrupt disabled */
#define ADC12RDYIE_1                     (0x0040)        /* Interrupt enable ADC ref buffer ready: Interrupt enabled */


#endif /* ADC12_B_H */
