.model samll
.stack 100h
.data
msg db 'hello RUET students$'
.code
main proc
    mov ax,@data
    mov ds,ax
    lea dx,msg
    mov ah,9
    int 21h 
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h
    mov dl,bl
    int 21h
    mov ah,4ch
    int 21h
    main endp
end main
