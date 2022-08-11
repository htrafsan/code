.model small
.stack 100h

.data 

s1 db 100 dup ('$')
s2 db 100 dup ('$')
s3 db 0ah,'both string are identical$'
s4 db 0ah,'string1 preceeds string2$'
s5 db 0ah,'string2 preceeds string1$'

a dw ?
b dw ?
c dw ?

.code

main proc

mov ax,@data
mov ds,ax
mov es,ax

lea di,s1

call readstr

mov a,bx

mov ah,2
mov dl,0ah
int 21h

xor bx,bx


lea di,s2

call readstr

mov b,bx
cmp a,bx
jl mm
mov cx,bx

mm:

mov cx,a

lea si,s1
lea di,s2
cld

repe cmpsb

jl less
jg gre

mov bx,b
cmp a,bx

jl less
jg gre

mov ah,9
lea dx,s3
int 21h

jmp last2

less:

mov ah,9
lea dx,s4
int 21h
jmp last2



gre:

mov ah,9
lea dx,s5
int 21h
jmp last2

last2:

mov ah,4ch
int 21h

main endp

include readstr.asm

end main