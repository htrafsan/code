predicates
	number(integer)
	go
clauses
	go:-
		clearwindow,
		write("how many number want to print:"),
		readint(A),
		number(A).

	number(0).
	
	number(A):-
		NN=A-1,
		number(NN),
		write(NN,",").