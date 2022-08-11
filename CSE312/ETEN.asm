.model small
.stack 100h

.data

s1 db 'enter a binary number:$'
s2 db 0ah,'Random numbers:$'
s3 db 0ah,'illigal digit: try again:$'
a dw ?
b dw ?
c dw ?
.code

main proc

mov ax,@data
mov ds,ax



mov b,1




call read

mov ah,9
lea dx,s2
int 21h

star:

mov c,1
cmp b,25
jg las
inc b

mov ah,2
mov dl,0ah
int 21h


start:

call random
call write

 
mov ah,2
mov dl,' '
int 21h
inc c
cmp c,4
jle start
jmp star

las:

mov ah,1
int 21h

mov ah,4ch
int 21h


main endp


read proc

mov ah,9
lea dx,s1
int 21h


soo:

mov cl,16

xor bx,bx

top:
mov ah,1
int 21h

cmp al,0dh
je last
cmp al,'0'
jne as
jmp asd

as:
cmp al,'1'
jne error

asd:
and al,0fh
shl bx,1
or bl,al
loop top
jmp last

error:
mov ah,9
lea dx,s3
int 21h

jmp soo

last:
ret

read endp



random proc

shl bx,1

xor dx,dx
mov a,bx
mov dx,bx
shl a,1
xor dx,a
rol dx,1
jc setbx

and bx,0fffeh
jmp go

setbx:

or bx,0001h

go:
ret 

random endp


write proc

mov cl,16

top1:

rol bx,1
jc one

mov ah,2
mov dl,'0'
int 21h
jmp en

one: 

mov ah,2
mov dl,'1'
int 21h

en:
loop top1

ret

write endp


end main