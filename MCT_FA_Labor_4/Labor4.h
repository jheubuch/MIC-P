/*
=====================================================
  Autor:                Name
  Erstellungsdatum:     dd.mm.yyyy
  Beschreibung:         4. Labor zur Vorlesung Mikrocontroller
  Datei:                Labor4.h - Timer A Module, Compare-Modus der CC-Einheiten und Output-Einheiten
=====================================================
*/

////////////////////////////////////////////////////////////////////////////////////

/* TA0 Control Bits */

////////////////////////////////////////////////////////////////////////////////////
/* TA0CTL Control Bits */
////////////////////////////////////////////////////////////////////////////////////
#define TAIFG                            (0x0001)        /* TimerA interrupt flag */
#define TAIFG_L                          (0x0001)
#define TAIFG_0                          (0x0000)        /* No interrupt pending */
#define TAIFG_1                          (0x0001)        /* Interrupt pending */
#define TAIFG_1_L                        (0x0001)
#define TAIE                             (0x0002)        /* TimerA interrupt enable */
#define TAIE_L                           (0x0002)
#define TAIE_0                           (0x0000)        /* Interrupt disabled */
#define TAIE_1                           (0x0002)        /* Interrupt enabled */
#define TAIE_1_L                         (0x0002)
#define TACLR                            (0x0004)        /* TimerA clear */
#define TACLR_L                          (0x0004)
#define MC                               (0x0030)        /* Mode control */
#define MC_L                             (0x0030)
#define MC0                              (0x0010)        /* Mode control */
#define MC0_L                            (0x0010)
#define MC1                              (0x0020)        /* Mode control */
#define MC1_L                            (0x0020)
#define MC_0                             (0x0000)        /* Stop mode: Timer is halted */
#define MC_1                             (0x0010)        /* Up mode: Timer counts up to TAxCCR0 */
#define MC_1_L                           (0x0010)
#define MC_2                             (0x0020)        /* Continuous mode: Timer counts up to 0FFFFh */
#define MC_2_L                           (0x0020)
#define MC_3                             (0x0030)        /* Up/down mode: Timer counts up to TAxCCR0 then down to 0000h */
#define MC_3_L                           (0x0030)
#define MC__STOP                         (0x0000)        /* Stop mode: Timer is halted */
#define MC__UP                           (0x0010)        /* Up mode: Timer counts up to TAxCCR0 */
#define MC__UP_L                         (0x0010)
#define MC__CONTINUOUS                   (0x0020)        /* Continuous mode: Timer counts up to 0FFFFh */
#define MC__CONTINUOUS_L                 (0x0020)
#define MC__UPDOWN                       (0x0030)        /* Up/down mode: Timer counts up to TAxCCR0 then down to 0000h */
#define MC__UPDOWN_L                     (0x0030)
#define ID                               (0x00c0)        /* Input divider */
#define ID_L                             (0x00c0)
#define ID0                              (0x0040)        /* Input divider */
#define ID0_L                            (0x0040)
#define ID1                              (0x0080)        /* Input divider */
#define ID1_L                            (0x0080)
#define ID_0                             (0x0000)        /* /1 */
#define ID_1                             (0x0040)        /* /2 */
#define ID_1_L                           (0x0040)
#define ID_2                             (0x0080)        /* /4 */
#define ID_2_L                           (0x0080)
#define ID_3                             (0x00c0)        /* /8 */
#define ID_3_L                           (0x00c0)
#define ID__1                            (0x0000)        /* /1 */
#define ID__2                            (0x0040)        /* /2 */
#define ID__2_L                          (0x0040)
#define ID__4                            (0x0080)        /* /4 */
#define ID__4_L                          (0x0080)
#define ID__8                            (0x00c0)        /* /8 */
#define ID__8_L                          (0x00c0)
#define TASSEL                           (0x0300)        /* TimerA clock source select */
#define TASSEL_H                         (0x0003)
#define TASSEL0                          (0x0100)        /* TimerA clock source select */
#define TASSEL0_H                        (0x0001)
#define TASSEL1                          (0x0200)        /* TimerA clock source select */
#define TASSEL1_H                        (0x0002)
#define TASSEL_0                         (0x0000)        /* TAxCLK */
#define TASSEL_1                         (0x0100)        /* ACLK */
#define TASSEL_1_H                       (0x0001)
#define TASSEL_2                         (0x0200)        /* SMCLK */
#define TASSEL_2_H                       (0x0002)
#define TASSEL_3                         (0x0300)        /* INCLK */
#define TASSEL_3_H                       (0x0003)
#define TASSEL__TACLK                    (0x0000)        /* TAxCLK */
#define TASSEL__ACLK                     (0x0100)        /* ACLK */
#define TASSEL__ACLK_H                   (0x0001)
#define TASSEL__SMCLK                    (0x0200)        /* SMCLK */
#define TASSEL__SMCLK_H                  (0x0002)
#define TASSEL__INCLK                    (0x0300)        /* INCLK */
#define TASSEL__INCLK_H                  (0x0003)





/////////////////////////////////////////////////////////////////////////////////////////////
/* TA0CCTL Control Bits */
//////////////////////////////////////////////////////////////////////////////////////////////
#define CCIFG                            (0x0001)        /* Capture/compare interrupt flag */
#define CCIFG_L                          (0x0001)
#define CCIFG_0                          (0x0000)        /* No interrupt pending */
#define CCIFG_1                          (0x0001)        /* Interrupt pending */
#define CCIFG_1_L                        (0x0001)
#define COV                              (0x0002)        /* Capture overflow */
#define COV_L                            (0x0002)
#define COV_0                            (0x0000)        /* No capture overflow occurred */
#define COV_1                            (0x0002)        /* Capture overflow occurred */
#define COV_1_L                          (0x0002)
#define OUT                              (0x0004)        /* Output */
#define OUT_L                            (0x0004)
#define OUT_0                            (0x0000)        /* Output low */
#define OUT_1                            (0x0004)        /* Output high */
#define OUT_1_L                          (0x0004)
#define OUT__LOW                         (0x0000)        /* Output low */
#define OUT__HIGH                        (0x0004)        /* Output high */
#define OUT__HIGH_L                      (0x0004)
#define CCI                              (0x0008)        /* Capture/compare input */
#define CCI_L                            (0x0008)
#define CCIE                             (0x0010)        /* Capture/compare interrupt enable */
#define CCIE_L                           (0x0010)
#define CCIE_0                           (0x0000)        /* Interrupt disabled */
#define CCIE_1                           (0x0010)        /* Interrupt enabled */
#define CCIE_1_L                         (0x0010)
#define OUTMOD                           (0x00e0)        /* Output mode */
#define OUTMOD_L                         (0x00e0)
#define OUTMOD0                          (0x0020)        /* Output mode */
#define OUTMOD0_L                        (0x0020)
#define OUTMOD1                          (0x0040)        /* Output mode */
#define OUTMOD1_L                        (0x0040)
#define OUTMOD2                          (0x0080)        /* Output mode */
#define OUTMOD2_L                        (0x0080)
#define OUTMOD_0                         (0x0000)        /* OUT bit value */
#define OUTMOD_1                         (0x0020)        /* Set */
#define OUTMOD_1_L                       (0x0020)
#define OUTMOD_2                         (0x0040)        /* Toggle/reset */
#define OUTMOD_2_L                       (0x0040)
#define OUTMOD_3                         (0x0060)        /* Set/reset */
#define OUTMOD_3_L                       (0x0060)
#define OUTMOD_4                         (0x0080)        /* Toggle */
#define OUTMOD_4_L                       (0x0080)
#define OUTMOD_5                         (0x00a0)        /* Reset */
#define OUTMOD_5_L                       (0x00a0)
#define OUTMOD_6                         (0x00c0)        /* Toggle/set */
#define OUTMOD_6_L                       (0x00c0)
#define OUTMOD_7                         (0x00e0)        /* Reset/set */
#define OUTMOD_7_L                       (0x00e0)
#define CAP                              (0x0100)        /* Capture mode */
#define CAP_H                            (0x0001)
#define CAP_0                            (0x0000)        /* Compare mode */
#define CAP_1                            (0x0100)        /* Capture mode */
#define CAP_1_H                          (0x0001)
#define CAP__COMPARE                     (0x0000)        /* Compare mode */
#define CAP__CAPTURE                     (0x0100)        /* Capture mode */
#define CAP__CAPTURE_H                   (0x0001)
#define SCCI                             (0x0400)        /* Synchronized capture/compare input */
#define SCCI_H                           (0x0004)
#define SCS                              (0x0800)        /* Synchronize capture source */
#define SCS_H                            (0x0008)
#define SCS_0                            (0x0000)        /* Asynchronous capture */
#define SCS_1                            (0x0800)        /* Synchronous capture */
#define SCS_1_H                          (0x0008)
#define SCS__ASYNC                       (0x0000)        /* Asynchronous capture */
#define SCS__SYNC                        (0x0800)        /* Synchronous capture */
#define SCS__SYNC_H                      (0x0008)
#define CCIS                             (0x3000)        /* Capture/compare input select */
#define CCIS_H                           (0x0030)
#define CCIS0                            (0x1000)        /* Capture/compare input select */
#define CCIS0_H                          (0x0010)
#define CCIS1                            (0x2000)        /* Capture/compare input select */
#define CCIS1_H                          (0x0020)
#define CCIS_0                           (0x0000)        /* CCIxA */
#define CCIS_1                           (0x1000)        /* CCIxB */
#define CCIS_1_H                         (0x0010)
#define CCIS_2                           (0x2000)        /* GND */
#define CCIS_2_H                         (0x0020)
#define CCIS_3                           (0x3000)        /* VCC */
#define CCIS_3_H                         (0x0030)
#define CCIS__CCIA                       (0x0000)        /* CCIxA */
#define CCIS__CCIB                       (0x1000)        /* CCIxB */
#define CCIS__CCIB_H                     (0x0010)
#define CCIS__GND                        (0x2000)        /* GND */
#define CCIS__GND_H                      (0x0020)
#define CCIS__VCC                        (0x3000)        /* VCC */
#define CCIS__VCC_H                      (0x0030)
#define CM                               (0xc000)        /* Capture mode */
#define CM_H                             (0x00c0)
#define CM0                              (0x4000)        /* Capture mode */
#define CM0_H                            (0x0040)
#define CM1                              (0x8000)        /* Capture mode */
#define CM1_H                            (0x0080)
#define CM_0                             (0x0000)        /* No capture */
#define CM_1                             (0x4000)        /* Capture on rising edge */
#define CM_1_H                           (0x0040)
#define CM_2                             (0x8000)        /* Capture on falling edge */
#define CM_2_H                           (0x0080)
#define CM_3                             (0xc000)        /* Capture on both rising and falling edges */
#define CM_3_H                           (0x00c0)
#define CM__NONE                         (0x0000)        /* No capture */
#define CM__RISING                       (0x4000)        /* Capture on rising edge */
#define CM__RISING_H                     (0x0040)
#define CM__FALLING                      (0x8000)        /* Capture on falling edge */
#define CM__FALLING_H                    (0x0080)
#define CM__BOTH                         (0xc000)        /* Capture on both rising and falling edges */
#define CM__BOTH_H                       (0x00c0)


/////////////////////////////////////////////////////////////////////////////////////////////
/* TA0EX0 Control Bits */
//////////////////////////////////////////////////////////////////////////////////////////////
#define TAIDEX                           (0x0007)        /* Input divider expansion */
#define TAIDEX_L                         (0x0007)
#define TAIDEX0                          (0x0001)        /* Input divider expansion */
#define TAIDEX0_L                        (0x0001)
#define TAIDEX1                          (0x0002)        /* Input divider expansion */
#define TAIDEX1_L                        (0x0002)
#define TAIDEX2                          (0x0004)        /* Input divider expansion */
#define TAIDEX2_L                        (0x0004)
#define TAIDEX_0                         (0x0000)        /* Divide by 1 */
#define TAIDEX_1                         (0x0001)        /* Divide by 2 */
#define TAIDEX_1_L                       (0x0001)
#define TAIDEX_2                         (0x0002)        /* Divide by 3 */
#define TAIDEX_2_L                       (0x0002)
#define TAIDEX_3                         (0x0003)        /* Divide by 4 */
#define TAIDEX_3_L                       (0x0003)
#define TAIDEX_4                         (0x0004)        /* Divide by 5 */
#define TAIDEX_4_L                       (0x0004)
#define TAIDEX_5                         (0x0005)        /* Divide by 6 */
#define TAIDEX_5_L                       (0x0005)
#define TAIDEX_6                         (0x0006)        /* Divide by 7 */
#define TAIDEX_6_L                       (0x0006)
#define TAIDEX_7                         (0x0007)        /* Divide by 8 */
#define TAIDEX_7_L                       (0x0007)
#define TAIDEX__1                        (0x0000)        /* Divide by 1 */
#define TAIDEX__2                        (0x0001)        /* Divide by 2 */
#define TAIDEX__2_L                      (0x0001)
#define TAIDEX__3                        (0x0002)        /* Divide by 3 */
#define TAIDEX__3_L                      (0x0002)
#define TAIDEX__4                        (0x0003)        /* Divide by 4 */
#define TAIDEX__4_L                      (0x0003)
#define TAIDEX__5                        (0x0004)        /* Divide by 5 */
#define TAIDEX__5_L                      (0x0004)
#define TAIDEX__6                        (0x0005)        /* Divide by 6 */
#define TAIDEX__6_L                      (0x0005)
#define TAIDEX__7                        (0x0006)        /* Divide by 7 */
#define TAIDEX__7_L                      (0x0006)
#define TAIDEX__8                        (0x0007)        /* Divide by 8 */
#define TAIDEX__8_L                      (0x0007)




#ifdef __ASM_HEADER__ /* Begin #defines for assembler */
#define TIMER0_A1_VECTOR       ".int44"                      /* 0xFFE8 */
#else
#define TIMER0_A1_VECTOR       (44 * 1u)                     /* 0xFFE8 */
#endif
#ifdef __ASM_HEADER__ /* Begin #defines for assembler */
#define TIMER0_A0_VECTOR       ".int45"                      /* 0xFFEA */
#else
#define TIMER0_A0_VECTOR       (45 * 1u)                     /* 0xFFEA */
#endif



/////////////////////////////////////////////////////////////////////////////////////////////
/* TA0IV Control Bits */
//////////////////////////////////////////////////////////////////////////////////////////////
#define TAIV                             (0xffff)        /* TimerA interrupt vector value */
#define TAIV_L                           (0x00ff)
#define TAIV_H                           (0x00ff)
#define TAIV0                            (0x0001)        /* TimerA interrupt vector value */
#define TAIV0_L                          (0x0001)
#define TAIV1                            (0x0002)        /* TimerA interrupt vector value */
#define TAIV1_L                          (0x0002)
#define TAIV2                            (0x0004)        /* TimerA interrupt vector value */
#define TAIV2_L                          (0x0004)
#define TAIV3                            (0x0008)        /* TimerA interrupt vector value */
#define TAIV3_L                          (0x0008)
#define TAIV4                            (0x0010)        /* TimerA interrupt vector value */
#define TAIV4_L                          (0x0010)
#define TAIV5                            (0x0020)        /* TimerA interrupt vector value */
#define TAIV5_L                          (0x0020)
#define TAIV6                            (0x0040)        /* TimerA interrupt vector value */
#define TAIV6_L                          (0x0040)
#define TAIV7                            (0x0080)        /* TimerA interrupt vector value */
#define TAIV7_L                          (0x0080)
#define TAIV8                            (0x0100)        /* TimerA interrupt vector value */
#define TAIV8_H                          (0x0001)
#define TAIV9                            (0x0200)        /* TimerA interrupt vector value */
#define TAIV9_H                          (0x0002)
#define TAIV10                           (0x0400)        /* TimerA interrupt vector value */
#define TAIV10_H                         (0x0004)
#define TAIV11                           (0x0800)        /* TimerA interrupt vector value */
#define TAIV11_H                         (0x0008)
#define TAIV12                           (0x1000)        /* TimerA interrupt vector value */
#define TAIV12_H                         (0x0010)
#define TAIV13                           (0x2000)        /* TimerA interrupt vector value */
#define TAIV13_H                         (0x0020)
#define TAIV14                           (0x4000)        /* TimerA interrupt vector value */
#define TAIV14_H                         (0x0040)
#define TAIV15                           (0x8000)        /* TimerA interrupt vector value */
#define TAIV15_H                         (0x0080)
#define TAIV_0                           (0x0000)        /* No interrupt pending */
#define TAIV_2                           (0x0002)        /* Interrupt Source: Capture/compare 1; Interrupt Flag: TAxCCR1
                                                            CCIFG; Interrupt Priority: Highest */
#define TAIV_2_L                         (0x0002)
#define TAIV_4                           (0x0004)        /* Interrupt Source: Capture/compare 2; Interrupt Flag: TAxCCR2
                                                            CCIFG */
#define TAIV_4_L                         (0x0004)
#define TAIV_6                           (0x0006)        /* Interrupt Source: Capture/compare 3; Interrupt Flag: TAxCCR3
                                                            CCIFG */
#define TAIV_6_L                         (0x0006)
#define TAIV_8                           (0x0008)        /* Interrupt Source: Capture/compare 4; Interrupt Flag: TAxCCR4
                                                            CCIFG */
#define TAIV_8_L                         (0x0008)
#define TAIV_10                          (0x000a)        /* Interrupt Source: Capture/compare 5; Interrupt Flag: TAxCCR5
                                                            CCIFG */
#define TAIV_10_L                        (0x000a)
#define TAIV_12                          (0x000c)        /* Interrupt Source: Capture/compare 6; Interrupt Flag: TAxCCR6
                                                            CCIFG */
#define TAIV_12_L                        (0x000c)
#define TAIV_14                          (0x000e)        /* Interrupt Source: Timer overflow; Interrupt Flag: TAxCTL
                                                            TAIFG; Interrupt Priority: Lowest */
#define TAIV_14_L                        (0x000e)
#define TAIV__NONE                       (0x0000)        /* No interrupt pending */
#define TAIV__TACCR1                     (0x0002)        /* Interrupt Source: Capture/compare 1; Interrupt Flag: TAxCCR1
                                                            CCIFG; Interrupt Priority: Highest */
#define TAIV__TACCR1_L                   (0x0002)
#define TAIV__TACCR2                     (0x0004)        /* Interrupt Source: Capture/compare 2; Interrupt Flag: TAxCCR2
                                                            CCIFG */
#define TAIV__TACCR2_L                   (0x0004)
#define TAIV__TACCR3                     (0x0006)        /* Interrupt Source: Capture/compare 3; Interrupt Flag: TAxCCR3
                                                            CCIFG */
#define TAIV__TACCR3_L                   (0x0006)
#define TAIV__TACCR4                     (0x0008)        /* Interrupt Source: Capture/compare 4; Interrupt Flag: TAxCCR4
                                                            CCIFG */
#define TAIV__TACCR4_L                   (0x0008)
#define TAIV__TACCR5                     (0x000a)        /* Interrupt Source: Capture/compare 5; Interrupt Flag: TAxCCR5
                                                            CCIFG */
#define TAIV__TACCR5_L                   (0x000a)
#define TAIV__TACCR6                     (0x000c)        /* Interrupt Source: Capture/compare 6; Interrupt Flag: TAxCCR6
                                                            CCIFG */
#define TAIV__TACCR6_L                   (0x000c)
#define TAIV__TAIFG                      (0x000e)        /* Interrupt Source: Timer overflow; Interrupt Flag: TAxCTL
                                                            TAIFG; Interrupt Priority: Lowest */
#define TAIV__TAIFG_L                    (0x000e)








