dupply proc
push ax
push bx
push dx
push si


xor cx,cx

mov cx,bx

cmp cx,0h
je la4

top4:
dec si
cmp al,[si]
je dupp

loop top4

xor cx,cx
jmp la4
dupp:
xor cx,cx
mov cx,1

la4:
pop si
pop dx
pop bx
pop ax
ret

dupply endp




