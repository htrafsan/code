predicates
	father(symbol,symbol)
	a_father(symbol,symbol)
	go
clauses
	
	father(shahidul,sabbir).
	father(arif,shifat).
	father(shahidul,shemu).

 	go:-
	   a_father(Shahidul,Sabbir),
	   write(Shahidul,"-",Sabbir).
    	
	a_father(Father,Son):-
		father(Father,Son),
		write(Son," is son of ",Father).