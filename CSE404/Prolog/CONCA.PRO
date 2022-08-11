predicates
	go
clauses
	go:-
		X="sabbir",
		Y=" ejaz ",
		concat(X,Y,Output),
		write(Output),nl,
		fail.
	go:-
		Z="the brown fox",
		X="the",
		concat(X,Y,Z),
		write(Y).
		