predicates
	go
	
clauses
	go:-
		clearwindow(),
		X="the quick brown fox",
		frontchar(X,Selected,Rest),
		write("selected= ",Selected),nl,
		write("rest= ",Rest),nl,
		fail.
		
	go:-
		X="the quick brown fox",
		fronttoken(X,Selected,Rest),
		write("selected= ",Selected),nl,
		write("rest= ",Rest),nl,
		fail.
	
	go:-
		X="the_quick_brown_fox",
		isname(X).
		
		