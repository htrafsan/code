predicates
   location(string,string)
   go
   chkstate(string)
clauses
	go:-
	writef("I am here\n"),
	fail.

	go:-
		location(City,State),
		chkstate(state),
		writef("%-10   %2  \n",City,State),
		fail.
	go.
	
	
	location("A","MS").
	location("B","SBS").
	location("C","DS").
	
	chkstate("SBS"):-
	fail.
	
	chkstate(_).