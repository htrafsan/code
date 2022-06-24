  .model small
  
  .code
  main proc
    
  mov dl, 0
  mov ah,1
   
  mov cx, 0 
   
label:

  int 21h
  
  cmp al, ' '
  je exit
   inc dl
   loop label
  
  
  
  exit:
  
  mov ah,4ch
  int 21h  
    
  
  
  
    main endp
  end main
  
  