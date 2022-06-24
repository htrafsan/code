.model small
.data

a db '?'
b db '?'

;str1 db "Enter the first number: $" 
;str2 db "Enter the second number: $"
;str3 db "The Total value is : $"

result db '?'
;sum db '?'


.code


main proc

mov ax,@data
mov ds,ax

mov al,08h
mov bl, 06h

cmp al,bl   ;if (condition)


jg l 

mov result,bl

jmp k

l:
mov result, al     ; if satement

jmp k


k:

mov ah,4ch
int 21h



           
 main endp

end main

