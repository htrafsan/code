predicates
	find(integer)
	go
clauses
	go:-
		find(4).

	find(A):-
		X=A%2,
		x=0,
		write(A,"is even"),
		fail.
	find(A):-
		write(A," is Odd").