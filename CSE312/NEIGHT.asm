.model small
.stack 100h
.data
s1 db 0ah,'Enter time in second',0ah,'$'
s2 db 0ah,'Result: ','$'
.code
main proc
mov ax,@data
mov ds,ax
mov ah,9
lea dx,s1
int 21h
call indec
push ax
xor cx,cx
mov cl,3
pop ax
start:
xor dx,dx
mov bx,60d
div bx
push dx
loop start
mov ah,9
lea dx,s2
int 21h
mov cl,3
top:
mov ah,4ch
int 21h
main endp
include outdec.asm
include indec9.asm
end main

