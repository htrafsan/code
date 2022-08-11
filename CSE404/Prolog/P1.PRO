predicates
    count(integer,integer).
clauses
    count(9,SUM):-
         write(" ",SUM).
    count(N,SUM):-
         N=N+1,
         NN=SUM+N,
     count(NN,SUM).             