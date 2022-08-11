.model small
.stack 100h

.data 

s1 db 100 dup ('$')
s2 db 100 dup ('$')
s3 db 0ah,'panildrom$'

s4 db 0ah,'not panildrom$'
s5 db 0ah,'forward :$'
s6 db 0ah,'backward:$'
s7 db 0ah,'enter a string:$'
a dw ?

.code

main proc

mov ax,@data
mov ds,ax
mov es,ax


xor bx,bx

lea si,s1
lea di,s2


mov ah,9
lea dx,s7
int 21h


repeat:
mov ah,1
int 21h

cmp al,0dh
je las 

cmp al,65d
jl bello

cmp al,122d
jg bello


push ax
inc bx
mov [si],al
inc si

bello:
jmp repeat


las:


mov a,bx


mov ah,9
lea dx,s5
int 21h

mov ah,9
lea dx,s1
int 21h


mov ah,9
lea dx,s6
int 21h

mov cx,bx

top:
pop bx

mov [di],bl
inc di
mov ah,2
mov dl,bl
int 21h


loop top

mov cx,a

lea si,s1
lea di,s2
cld
repe cmpsb

jl wrong
jg wrong

mov ah,9
lea dx,s3
int 21h

jmp last

wrong:



mov ah,9
lea dx,s4
int 21h


last:

mov ah,1
int 21h


mov ah,4ch
int 21h

main endp

end main