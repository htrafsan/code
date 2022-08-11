.model small
.stack 100h

.data

a db 100 dup (0)

.code 

main proc

mov ax,@data
mov ds,ax

lea si,a

mov ah,2
mov dl,'?'
int 21h

xor bx,bx

top3:
mov ah,1
int 21h

cmp al,' '

je top3

cmp al,0dh
je end_l
mov [si],al
inc si
inc bx
jmp top3

end_l:

lea si,a

call bubble

mov ah,2
mov dl,0ah
int 21h

mov cx,bx

lea si,a

mov ah,2

top1:
xor dx,dx

mov dl,[si]
int 21h
mov dl,' '
int 21h
inc si
loop top1

mov ah,4ch
int 21h


main endp

include bubble.asm

end main