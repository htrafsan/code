domains
l=integer*

predicates
	n_element(l,integer)

clauses
	n_element([H|_],1):-
	   write(H).
	
	   n_element([H|T],N):-
	      NN=N-1,
	      n_element(T,NN).