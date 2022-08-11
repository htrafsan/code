outdec proc



push ax
push bx
push cx
push dx

or ax,ax
jge oplus

push ax

mov ah,2
mov dl,'-'
int 21h

pop ax
neg ax

oplus:

xor cx,cx
mov bx,10d

orepeat:

xor dx,dx

div bx
push dx
inc cx

OR ax,ax
jne orepeat


mov ah,2

oprint:

pop dx
or dl,30h
int 21h
loop oprint

pop dx
pop cx
pop bx
pop ax

ret

outdec endp