predicates
	switch(char)
	repeat
	go
	
clauses
	repeat.
	repeat:-
		repeat.
		
	go:-
		write("add--A\nsub--S\nmul--M\ndiv--D\nexit--E\n"),
		repeat,
		write("enter your choise: "),
		readchar(Reply),
		write(Reply),nl,
		switch(Reply).
		
	switch('A'):-
		write("1st data: "),
		readint(Data1),
		write("2nd data: "),
		readint(Data2),
		Sum=Data1+Data2,
		write("Summation=",Sum),nl,
		fail.
		
	switch('S'):-
		write("1st data: "),
		readint(Data1),
		write("2nd data: "),
		readint(Data2),
		Sum=Data1-Data2,
		write("Substraction=",Sum),nl,
		fail.
	
	switch('M'):-
		write("1st data: "),
		readint(Data1),
		write("2nd data: "),
		readint(Data2),
		Sum=Data1*Data2,
		write("Multipication=",Sum),nl,
		fail.
		
	switch('D'):-
		write("1st data: "),
		readint(Data1),
		write("2nd data: "),
		readint(Data2),
		Sum=Data1/Data2,
		write("Division=",Sum),nl,
		fail.
	
	switch('E').
		
	