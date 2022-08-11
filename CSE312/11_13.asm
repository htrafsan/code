.model small

.stack 100h

.data

s1 db 100 dup (0)
s2 db 100 dup ('$')
s3 db 0ah,'Enter string:$'

s4 db 0ah,0ah,'Enter the position of string from delete:$'
s5 db 0ah,0ah,'Enter byte to be delete:$'

s6 db 0ah,0ah,'Desired output:$'
a dw ?
b dw ?
c dw ?
.code

main proc

mov ax,@data
mov ds,ax
mov es,ax


mov ah,9
lea dx,s3
int 21h


;mov ah,2
;mov dl,0ah
;int 21h

lea di,s1

call readstr

mov a,bx

xor dx,dx
xor ax,ax

mov ah,9
lea dx,s4
int 21h

call indec
mov b,ax


mov ah,9
lea dx,s5
int 21h

call indec
mov c,ax

call delete

mov ah,9
lea dx,s6
int 21h


mov ah,9
lea dx,s2
int 21h

mov ah,4ch
int 21h

main endp

include readstr.asm
include indec.asm
include delete.asm

end main