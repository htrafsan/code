.model small
.data

a db '?'
b db '?'

str1 db "Enter the first number: $" 
str2 db "Enter the second number: $"
str3 db "The Total value is : $"


sum db '?'


.code


main proc

mov ax,@data
mov ds,ax

mov ah,9

lea dx,str1
int 21h


mov ah,1
int 21h

sub al,30h
mov a,al  


mov dl, 0ah
mov ah,2
int 21h


mov dl, 0dh
mov ah,2
int 21h

 mov ah,9

lea dx,str2
int 21h

 
mov ah,1
int 21h

sub al,30h
mov b,al    


 mov bl,a
 add bl,b
 
 mov sum,bl
 
  add sum, 30h
 

mov dl, 0ah
mov ah,2
int 21h


mov dl, 0dh
mov ah,2
int 21h
  
mov ah,9

lea dx,str3
int 21h



 mov dl, sum
mov ah,2
int 21h



 main endp

end main

