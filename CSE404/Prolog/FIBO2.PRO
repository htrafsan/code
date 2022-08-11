predicates
	fibo(integer,integer,integer)
	go
	
clauses

	go:-
		clearwindow,
		write("Limit:"),
		readint(Limit),
		fibo(0,1,Limit).
		
	fibo(_,NN,2):-
		write("result:",NN).
	
	fibo(Start,End,Limit):-
		Limit2=Limit-1,
		NN=Start+End,
		Start2=End,
		fibo(Start2,NN,Limit2).	