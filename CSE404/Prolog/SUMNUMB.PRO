predicates
	sum(integer,integer,integer)
	go
	
clauses
	go:-
		write("lower: "),
		readint(Lower),
		write("Upper: "),
		readint(Upper),
		sum(Lower,Upper,0).
		
			
	sum(Min,Max,Add):-
		Min<=Max,
		Next=Min+1,
		Sum=Add+Min,
		sum(Next,Max,Sum).
	
	sum(N,M,S):-
		N>M,
		write("Summation:",S).	