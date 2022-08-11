predicates
location(string,string)
go

clauses
 go:-
  writef("%-10    %5\n","CITY","STATE"),
  fail.
  
 go:-
   location(City,State),
   writef("%-10    %2\n",City,State),
   fail.
   
   go.
   
   location("JK","MS").
   location("KK","NS").
   location("LK","OS").