.model small
.stack 100h

.data

s1 db 110 dup (0)
s2 db 0ah,'Enter 5 numbers upto 10 digit:',0ah,'$'
s3 db 0ah,'output in desired form:',0ah,'$'

a dw ?

b dw ?

.code

main proc

mov ax,@data
mov ds,ax
mov es,ax

lea bx,s1


mov ah,9
lea dx,s2
int 21h

mov a,0


repeat:
cmp a,5

jge last


mov cx,10

mov si,10
mov b,0

read:

mov ah,1
int 21h

cmp al,0dh
je proce

cmp al,32
je proce1


push ax
inc b

jmp read

proce:


mov ah,2
mov dl,0ah
int 21h

proce1:




inc a

sub cx,b
gos:
cmp b,0
jle sto

xor dx,dx

pop ax

mov dl,al

dec si
mov s1[bx][si],dl

dec b

jmp gos

sto:

jcxz bello
top:

dec si
mov s1[bx][si],' '


loop top

bello:
add bx,10

jmp repeat




last:

mov cx,5


mov ah,9
lea dx,s3
int 21h


lea bx,s1

again:



mov ah,2
mov dl,0ah
int 21h


mov si,0

sd:
mov ah,2
mov dl,s1[bx][si]
int 21h

inc si

cmp si,9
jle sd

add bx,10

loop again



mov ah,4ch
int 21h

main endp

end main









