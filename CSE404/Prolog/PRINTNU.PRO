predicates
	count(integer)
	go
	
clauses
	go:-
	count(1).
	
	count(9).
	count(N):-
		write(N," "),
		NN=N+1,
		count(NN).