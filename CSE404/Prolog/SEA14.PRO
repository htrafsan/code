domains
             name,sub,sem,dep=Symbol
             room,time=Integer
             
predicates
	 enro(name,sub,sem)
	 depart(sub,dep)
	 sched(sub,sem,time,room)
	 go(name,sub)
	 go1(room,time)
	 go2(name,dep,sub)
         go3(name,time)
clauses
           enro(kamal,cse609,sixth).
          enro(kamal,cse609,fifth).
          enro(jamal,cse601,sixth).
           enro(jamal,cse603,sixth).
          enro(jamal,ee603,fifth).
          depart(ee603,ee).
          depart(cse601,cse).
          depart(cse609,cse).
          sched(cse601,sixth,8,101).
          sched(cse603,sixth,8,101).
          sched(cse609,sixth,9,101).                                                     
          sched(ee603,fifth,10,101).
	 go(Na,De):-
	       enro(Na,De,sixth),
               enro(Na,De,fifth),
	       write(Na , " enrolled ",De," both in fifth and sixth semister."),nl. 
	 go1(Na,T):-
	       sched(_,_,8,Na),
               sched(_,_,9,Na),                                                     
               sched(_,_,10,Na),
	       write("CSE ", Na , " being used for 3 consecutive hours from ",T),nl.   
	  go2(Na,De,Su):-     
	       enro(Na,Su,_),
               depart(Su,De),       
               write( "Yes ", Na, " enrolled in ",Su," offered by ",De,"."),nl.
          go3(Na,De):-     
	       enro(Na,cse601,_),
	       enro(Na,cse603,_),
               sched(cse601,_,De,_),
               sched(cse603,_,De,_),       
               write( "Yes ", Na, " enrolled in 2 subject scheduled for the same time  ", De, " AM."),nl.
	goal:
	     go1(101,8).
		
	        