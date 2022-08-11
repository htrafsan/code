.model small
.stack 100h
.data
s2 db 33 dup (' '),'!"#$%&`()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_',' ','ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~'
s3 db 100 dup ('$')
s4 db 0ah,'Enter  a  string:$'
s1 db 0ah,'Encripted string:$'
.code
main proc
mov ax,@data
mov ds,ax
mov ah,9
lea dx,s4
int 21h
lea bx,s2
lea di,s3
mov ah,1
repeat:
int 21h
cmp al,0dh
je end_l
xlat
mov [di],al
inc di
jmp repeat
end_l:
mov ah,2
mov dl,0ah
int 21h
mov ah,9
lea dx,s1
int 21h
lea dx,s3
int 21h
mov ah,1
int 21h
mov ah,4ch
int 21h
main endp
end main
