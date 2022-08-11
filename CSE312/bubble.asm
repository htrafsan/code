bubble proc

push ax
push bx
push dx
push si

xor dx,dx

mov dx,si


cmp bx,1
je last

start:

;xor bx,bx

mov si,dx
inc si

mov cx,2

top:

mov di,si
dec di

mov al,[si]

cmp al,[di]
jg go

xchg al,[di]

mov [si],al

go:
inc si
inc cx
cmp cx,bx
jle top

dec bx
cmp bx,2
jge start

last:

pop si
pop dx
pop bx
pop ax

ret

bubble endp