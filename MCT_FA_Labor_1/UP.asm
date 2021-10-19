;
;===============================================================
;  Autor:                Name
;  Erstellungsdatum:     dd.mm.yyyy
;  Beschreibung:         1. Labor zur Vorlesung Mikrocontroller
;  Datei:                UP.asm - memory map and adressing modes
;===============================================================

      .global UP
      .global var1
      .global var2

       .data
var1   .byte 0x2
var2   .byte 0xA

       .text

UP:    mov.w #0x1C00, R6

	   mov.b &0x1C00, R5    ;CODE6
       mov 0(R6), R5		;CODE7
       movx.a 0(R6),R5		;CODE8
       mov.b @R6+, R5		;CODE9
       mov.b @R6, R5		;CODE10
       movx  var1, R5       ;CODE11

       movx.a #DEST, R0  	;CODE12
       mov R5, R6           ;CODE13
       mov R5, R6           ;CODE14
DEST:  RETA
