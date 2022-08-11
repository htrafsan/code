                            
 .MODEL SMALL
 .STACK 100H
 .DATA
   MS1  DB  'Enter the string : $'
   MS2  DB  0DH,0AH,'The string IN reverse order : $'
.CODE
MAIN PROC
     MOV AX, @DATA                
     MOV DS, AX
 LEA DX,MS1           
     MOV AH, 9
     INT 21H
 XOR CX, CX                
     MOV AH, 1                

          
WHILE_:
	CMP AL,0DH
	JE END_WHILE
	PUSH AX
	INC CX
	INT 21H
	JMP WHILE_
LEA DX,MS2
MOV AH,9
INT 21H
END_WHILE:
	MOV AH,2
	MOV DL,0DH
	INT 21H
	MOV DL,0AH
	INT 21H
	JCXZ EXIT
	
TOP:
    POP DX
	INT 21H
	LOOP TOP
EXIT:
	MOV AH,4CH
	INT 21H 
	MAIN ENDP
	END MAIN	