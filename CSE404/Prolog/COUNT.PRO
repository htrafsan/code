predicates
count(integer)
clauses
count(9).
count(N):-
writef("%2 ",N),
NN=N+1,
count(NN),
writef("Layer %2",N),nl.
