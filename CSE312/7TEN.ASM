.MODEL SMALL
.STACK 100H
.DATA
MS1 DB 'TYPE A HEX NUMBER (0 TO FFFF):$'
MS2 DB 0DH,0AH,'IN BINARY IT IS $'
MS3 DB 0DH,0AH,'ILLEGAL HEX DIGIT,TRY AGAIN:$'

.CODE

MAIN PROC

MOV AX,@DATA
MOV DS,AX

LEA DX,MS1
MOV AH,9
INT 21H

JMP START

ILLEGAL:
        LEA DX,MS3
        MOV AH,9
        INT 21H
    
START: 
      XOR BX,BX
      MOV CL,4
      MOV AH,1
      INT 21H

WHILE_:
        CMP AL,0DH
        JE END_WHILE
        
        CMP AL,'0'
        JNGE ILLEGAL
        CMP AL,'F'
        JNLE ILLEGAL 

        CMP AL,39H
        JG LETTER
 
        AND AL,0FH
         JMP SHIFT
LETTER:
        SUB AL,37H
SHIFT:
        SHL BX,CL

         OR BL,AL


         INT 21H
         JMP WHILE_

END_WHILE:
          LEA DX,MS2
           MOV AH,9
           INT 21H

         XOR DX,DX
         MOV CX,16
         MOV AH,2

WHILE2:
          
          SHL BX,1
          JNC ZERO
          MOV DL,31H
          JMP DISPLAY

ZERO:
      MOV DL,30H

DISPLAY:
        INT 21H

 LOOP WHILE2



          MOV AH,4CH
           INT 21H


MAIN ENDP
      END MAIN