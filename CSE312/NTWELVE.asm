.model small
.stack 100h
.data
s1 db 0ah,'M=$'
s2 db 0ah,'N=$'
s3 db 0ah,'GCD=$'
a dw ?
b dw ?
.code
main proc
mov ax,@data
mov ds,ax
mov ah,9
lea dx,s1
int 21h
call indec
push ax
mov ah,9
lea dx,s2
int 21h
call indec
push ax
xor bx,bx
pop bx
pop ax
cmp ax,bx
jl go1
jmp pro
go1:
mov a,ax
mov ax,bx
mov bx,a
pro:
xor dx,dx
mov b,bx
div bx
cmp dx,0
je resul
mov ax,bx
mov bx,dx
jmp pro
resul:
mov ah,9
lea dx,s3
int 21h
mov ax,b
call outdec
mov ah,1
int 21h
mov ah,4ch
int 21h
main endp
include indec.asm
include outdec.asm
end main