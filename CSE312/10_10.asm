.model small
.stack 100h

.data

s1 db 'ovew flow--$'
hex db '0123456789ABCDEF'
a DB ?
b dw ?
c db ?
.code

main proc

mov ax,@data
mov ds,ax

call indec


mov b,ax


xor bx,bx
lea bx,hex



call printhex

mov ah,1
int 21h

mov ah,4ch
int 21h

main endp

include indec.asm
include printhex.asm


end main



