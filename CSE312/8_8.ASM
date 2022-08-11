TITLE AL-050 : An AL Program that lets the user type some text, consisting
              ; of words separated by blanks, ending with a carriage return, 
              ; and displays the text in the same word ordered as entered,
              ; but with the letters in each word reversed.

 .MODEL SMALL
 .STACK 100H

 .DATA
   PROMPT_1  DB  'Enter the string : $'
   PROMPT_2  DB  0DH,0AH,'The string with words in reverse order : $'

   COUNT     DW  0

 .CODE
   MAIN PROC
     MOV AX, @DATA                ; initialize DS 
     MOV DS, AX

     LEA DX, PROMPT_1             ; load and display PROMPT_1 
     MOV AH, 9
     INT 21H

     XOR CX, CX                   ; clear CX
     MOV AH, 1                    ; set input function

     @INPUT:                      ; loop label
       INT 21H                    ; read a character

       CMP AL, 0DH                ; compare AL with CR
       JE @END_INPUT              ; if AL=CR jump to label @END_INPUT

       PUSH AX                    ; push AX onto the STACK
       INC CX                     ; set CX=CX+1
     JMP @INPUT                   ; jump to label @INPUT

     @END_INPUT:                  ; jump label

     MOV BX, 50H                  ; set BX=50H

     XCHG BX, SP                  ; swap BX and SP

     ;PUSH 0020H                   ; push 0020H onto the STACK

     XCHG BX, SP                  ; swap BX and SP
     INC COUNT                    ; set COUNT=COUNT+1
    
     @LOOP_1:                     ; loop label
       POP DX                     ; pop a value from STACK into DX

       XCHG BX, SP                ; swap BX and SP

       PUSH DX                    ; push DX onto the STACK

       XCHG BX, SP                ; swap BX and SP
       INC COUNT                  ; set COUNT=COUNT+1
     LOOP @LOOP_1                 ; jump to label @LOOP_1 if CX!=0

     LEA DX, PROMPT_2             ; load and display PROMPT_2 
     MOV AH, 9
     INT 21H

     MOV CX, COUNT                ; set CX=COUNT
     MOV COUNT, 0                 ; set COUNT=0
 
    ; PUSH 0020H                   ; push 0020H onto the STACK
     INC COUNT                    ; set COUNT=COUNT+1

     @OUTPUT:                     ; loop label
       XCHG BX, SP                ; swap BX and SP

       POP DX                     ; pop a value from STACK into DX

       XCHG BX, SP                ; swap BX and SP

       CMP DL, 20H                ; compare DL with 20H
       JNE @SKIP_PRINTING         ; jump to label @SKIP_PRINTING if DL!=20H

       MOV AH, 2                  ; set output function

       @LOOP_2:                   ; loop label
         POP DX                   ; pop a value from STACK into DX 
         INT 21H                  ; print a character

         DEC COUNT                ; set COUNT=COUNT-1
       JNZ @LOOP_2                ; jump to label @LOOP_2 if COUNT!=0

       ;MOV DX, 0020H              ; set DX=0020H

       @SKIP_PRINTING:            ; jump label

       PUSH DX                    ; push DX onto the STACK
       INC COUNT                  ; set COUNT=COUNT+1
     LOOP @OUTPUT                 ; jump to label @OUTPUT if CX!=0

     MOV AH, 4CH                  ; return control to DOS
     INT 21H
   MAIN ENDP
 END MAIN