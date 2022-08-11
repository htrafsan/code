.model small
.stack 100h

.data
ms1 db 0ah,'overflow',0ah,'$'
m dw ?
n dw ?



.code

main proc   
    
mov ax,@data
mov ds,ax



call indec
;push ax

push n
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
mov m,dx
top:

xor dx,dx
pop ax

mov bx,10
mul bx


mov bx,m
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