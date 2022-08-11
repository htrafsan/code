predicates
	prime(integer,integer,integer)
	go
	
clauses
	prime(Number,Limit,Start):-
		Limit>Start,
		Mod=Number mod Start,
		Mod<>0,
		Next=Start+1,
		prime(Number,Limit,Next).
		
	prime(Number,Limit,Start):-
		Start>=Limit,
		write(Number," is prime").
		
		
	go:-
		readint(N),
		R=sqrt(N),
		prime(N,R,2).