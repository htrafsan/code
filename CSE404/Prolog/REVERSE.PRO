trace
domains
	namelist=symbol*
	
predicates
	reverse_list(namelist,namelist)
	reverse(namelist,namelist,namelist)

clauses
	reverse_list(I,O):-
	reverse(I,[],O).
	
        reverse([],I,I).
        
        
	reverse([H|T],L1,L2):- 
	  reverse(T,[H|L1],L2).