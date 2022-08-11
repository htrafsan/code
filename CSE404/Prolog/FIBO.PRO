predicates
	fibo(integer,integer,integer)
	go
	
clauses

	go:-
		clearwindow,
		write("Limit:"),
		readint(Limit),
		write("0,1,"),
		fibo(0,1,Limit).
		
	fibo(_,_,2).
	
	fibo(Start,End,Limit):-
		Limit2=Limit-1,
		NN=Start+End,
		write(NN,","),
		Start2=End,
		fibo(Start2,NN,Limit2).
	