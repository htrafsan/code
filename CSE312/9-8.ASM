.model small
.stack 100h
.DATA
.code
main proc
MOV AX,@DATA
MOV DS,AX

call indec
push ax
mov ah,2
mov dl,0ah
int 21h
pop ax
call outdec
mov ah,4ch
int 21h

main endp


include outdec.asm
include indec.asm
end main


