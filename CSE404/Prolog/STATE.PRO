domains
C,S=symbol
predicates
location(C,S)

clauses
go:-
 writef("CITY,STATE"),
 fail.
 
 go:-
   location(C,S),
   chkstate(S),
   writef("%-10   %2\n",C,S),
   fail.
   
 location("Y","S1").
 location("Z","S2").
 location("R","S3").
 chkstate("S2"):-
    fail.
 chakstate(_).