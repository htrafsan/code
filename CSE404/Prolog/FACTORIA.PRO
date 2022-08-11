predicates
	count(integer,integer)
	go
clauses
	go:-
		write("Input Number: "),
		readint(A),
		count(A,A).

	count(1,A):-
		write("Factorial: ",A).
	
	
	count(N,Mul):-
		NN=N-1,
		Fac=NN*Mul,
		count(NN,Fac).
	
