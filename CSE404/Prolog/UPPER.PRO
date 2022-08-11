predicates
	go
	
clauses
	go:-
		clearwindow(),
		X="the quick brown fox",
		upper_lower(Y,X),
		write(Y),nl,
		fail.
		
		
	go:-
		Y="THE QUICK BROWN FOX",
		upper_lower(Y,X),
		write(X).