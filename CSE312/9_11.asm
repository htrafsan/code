.model small
.stack 100h

.data
s1 db 0ah,'overflow',0ah,'$'
a dw ?
b dw ?



.code

main proc
mov ax,@data
mov ds,ax



call indec
;push ax

push b
push ax


mov ah,2
mov dl,0ah
int 21h



mov dl,'.'
int 21h

xor cx,cx
xor dx,dx

pop cx

push cx

pop dx
mov a,dx
top:

xor dx,dx
pop ax

mov bx,10
mul bx


mov bx,a
div bx
push dx

call outdec


loop top

mov ah,4ch
int 21h



main endp

include indec11.asm
include outdec.asm

end main