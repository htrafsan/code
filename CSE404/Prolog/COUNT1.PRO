
predicates
count(integer)

clauses
   count(10).
   count(5):-
     write("You are\n"),
     fail.
     
   count(N):-
   write("  ",N),
   NN=N+1,
   count(NN),
   count(6).