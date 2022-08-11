predicates
	isprime(integer,integer,integer)
	go
	
clauses
	go:-
		write("enter check number: "),
		readint(Num),
		write(Num),nl,
		Limit=sqrt(Num),
		isprime(Num,Limit,2).
		
	isprime(Num,Limit,Start):-
		Start<=Limit,
		Mod=Num mod Start,
		Mod<>0,
		Next=Start+1,
		isprime(Num,Limit,Next).
		
	isprime(Num,Limit,Next):-
		Next>Limit,
		write(Num," is prime");
		write(Num," is not prime").