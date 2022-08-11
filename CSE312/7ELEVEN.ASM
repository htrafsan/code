.MODEL SMALL
.STACK 100H
.DATA
MS1 DB 'TYPE A BINARY NUMBER,UP TO 16 DIGITS:$'
MS2 DB 0DH,0AH,'IN HEX IT IS $'

.CODE

MAIN PROC

MOV AX,@DATA
MOV DS,AX

LEA DX,MS1
MOV AH,9
INT 21H

XOR BX,BX
MOV AH,1
INT 21H


WHILE_:
       CMP AL,0DH
       JE END_WHILE
       AND AL,0FH
       SHL BX,1
       OR BL,AL
       INT 21H
       JMP WHILE_

END_WHILE:
          LEA DX,MS2
          MOV AH,9
           INT 21H


 

         XOR DX,DX
          MOV CX,4
          MOV AH,2
          
FOR_:
     MOV DL,BH
      SHR DL,1
      SHR DL,1
      SHR DL,1
      SHR DL,1
      CMP DL,9
      JBE NUMBER
      SUB DL,9
      ADD DL,40H    
      JMP DISPLAY
NUMBER:
       ADD DL,30H
DISPLAY:
        INT 21H  

       RCL BX,1
       RCL BX,1
       RCL BX,1
       RCL BX,1
LOOP FOR_



MOV AH,4CH
INT 21H

MAIN ENDP
    END MAIN


