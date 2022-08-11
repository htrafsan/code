.model small 
.stack 100h

.data

;string label byte
s1 db 21 dup (0)
max db 20
act db ?



.code
main proc

mov ax,@data
mov ds,ax
mov es,ax


lea di,s1

mov max,20

mov [di],max

;mov ah,0ah
;int 21h


mov ah,2
mov dl,0ah
int 21h



mov ah,9
lea dx,s1
int 21h


mov ah,4ch
int 21h

main endp

end main

