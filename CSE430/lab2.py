from pandas import DataFrame

n = int(input("Enter the length of list: "))
print()
table = [[] * n for i in range(n)]

def hash(symbol):
    total = 0
    for i in symbol:
        total += ord(i)
    return total % len(table)

while True:

   print("1 - Insert")

   print("2 - Edit")

   print("3 - Remove")

   print("4 - Display")

   print("5 - Search")

   print("6 - Exit")

   print()

   choice = input("Enter the number of choice: ")

   print()

   if choice == '1':
       n=int(input("Enter No. of input: "))
       for i in range(n):
           type,symbol = input("Enter the new type and name: ").split()
           list=table[hash(symbol)]
           k = False
           m= False
           for i, sublist in enumerate(list):
                if symbol in sublist:
                    k = True
                    break       
           if k:
                print("already exits!! ")
                continue
           else:
                list.append((symbol, type))
                m = True
                
       if(m):
           print()
           print("Insertion Successfull")
                 
       print()

   elif choice == '2':
       symbol= input("Enter the key to edit: ")
       list=table[hash(symbol)]
       m=True
       if list:
           for i, sublist  in enumerate(list):
               if symbol in sublist:
                   type= input("Enter the new type: ")
                   list[i]=(symbol,type)
                   print()
                   print("Update Successful!")
                   break    
               else:
                   m=True 
       else:
           print()
           print("No such key")
           
       if(m == False):
           print()
           print("No such key")
   elif choice == '3':
       symbol= input("Enter the key to Delete: ")
       list=table[hash(symbol)]
       m=True
       if list:
           for i, sublist  in enumerate(list):
               if symbol in sublist:
                   del list[i]
                   print()
                   print("Delete Successful!") 
               else:
                   m=True     
  
       else:
           print()
           print("No such key")
       if(m == False):
           print()
           print("No such key")

   elif choice == '4':
       print(DataFrame(table))

   elif choice == '5':
       symbol= input("Enter the key to Search: ")
       list=table[hash(symbol)]
       m=False
       if list:
           for i, sublist  in enumerate(list):
               if symbol in sublist:
                    print()
                    print("Match Found!")
                    print()
                    print(list[i],end=" ")
                    print("hash value ","is",end=" ")
                    print(hash(symbol), end=" ")
                    print("subindex: " , i)
               else:
                   m=True 
            
       else:
           print()
           print("No such key")   
       
       if(m == False):
           print()
           print("No such key") 
               
   elif choice == '6':
       print()
       print("Process Terminating!")
       break

   else:
      print("invalid Input")

   print()
