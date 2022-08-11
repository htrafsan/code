.model small
.stack 100h

.data

s1 db 100 dup (0)
s2 db 100 dup (0)
s3 db 200 dup ('$')
s4 db 0ah,'Enter  first string:$'
s5 db 0ah,0ah,'Enter second string:$'
s6 db 0ah,0ah,'Enter an integer less than the length of 2nd string:$'
s7 db 0ah,0ah,'Output in desired form:$'
a dw ?
b dw ?
c dw ?
d dw ?
.code

main proc

mov ax,@data
mov ds,ax
mov es,ax



mov ah,9
lea dx,s4
int 21h

lea di,s1

call readstr
mov a,bx

mov ah,9
lea dx,s5
int 21h
lea di,s2

call readstr
mov b,bx

mov ah,9
lea dx,s6
int 21h

xor ax,ax
call indec

mov c,ax


mov ah,9
lea dx,s7
int 21h

lea di,s3

lea si,s2
mov cx,c
mov dx,a
sub dx,cx
mov d,dx
cld

fir:
lodsb
mov [di],al

inc di
loop fir

lea si,s1
mov cx,a

cld

fir1:

lodsb
mov [di],al

inc di
loop fir1

lea si,s2
add si,c

mov cx,d

cld
fir2:
lodsb
mov [di],al

inc di
loop fir2

mov ah,9
lea dx,s3
int 21h


mov ah,4ch
int 21h

main endp

include readstr.asm
include indec.asm

end main

 




