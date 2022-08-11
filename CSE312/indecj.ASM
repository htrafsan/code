INDEC PROC

PUSH BX
PUSH CX
PUSH DX

IBEGIN:

MOV AH,2
MOV DL,'?'
INT 21H

XOR BX,BX

XOR CX,CX

MOV AH,1
INT 21H

CMP AL,'-'
JE IMINUS

CMP AL,'+'
JE IPLUS

jmp irepeat2
IMINUS:

MOV CX,1

IPLUS:
INT 21H

IREPEAT2:
CMP AL,'0'
JL INOTDIGIT
CMP AL,'9'
JG INOTDIGIT

AND AX,000FH
PUSH AX

MOV AX,10
IMUL BX

JO OVER

POP BX
ADD BX,AX
JO OVER1

mov ah,1
int 21h
cmp al,0DH
je go
jmp IREPEAT2

go:

mov ax,bx




or cx,cx
je iexit
neg ax

iexit:

pop dx
pop cx
pop bx



RET


OVER:

POP BX

MOV AH,9
LEA DX,ms1
INT 21H

JMP IBEGIN




OVER1:

MOV AH,9
LEA DX,ms1
INT 21H

JMP IBEGIN



inotdigit:
mov ah,2
mov dl,0Ah
int 21h
jmp ibegin


indec endp


