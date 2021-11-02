;=====================================================
;  Autor:                Name
;  Erstellungsdatum:     dd.mm.yyyy
;  Beschreibung:         2. Labor zur Vorlesung Mikrocontroller
;  Datei:                Port.asm - Digitale I/O und Interrupts
;=====================================================


          	.cdecls C,LIST,"msp430.h"		; Include device header file

;-------------------    G L O B A L  S Y M B O L S    ---------------------------
          	.global PORT5_ISR


;--------------------------------------------------------------------------------
			.text

			                            ;ASM CODE 1


PORT5_ISR:  addx.a P5IV, PC             ;ASM CODE 2
		    jmp	default_HND						;0x0    -> none
		    jmp	default_HND						;0x2	-> P5.0 interrupt handler
		    jmp	default_HND						;0x4	-> P5.1 interrupt handler
		    jmp	default_HND						;0x6	-> P5.2 interrupt handler
		    jmp	default_HND						;0x8	-> P5.3 interrupt handler
		    jmp	default_HND						;0xA	-> P5.4 interrupt handler
		    jmp	P5_5_HND						;0xC	-> P5.5 interrupt handler
		    jmp	P5_6_HND						;0xE	-> P5.6 interrupt handler
			jmp	default_HND						;0x10	-> P5.7 interrupt handler

P5_5_HND:	 bic.b #BIT0, &P1OUT
			 reti

P5_6_HND:	 bis.b #BIT0, &P1OUT
			 reti

default_HND: reti                    ;ASM CODE 3


		                             ;ASM CODE 4







