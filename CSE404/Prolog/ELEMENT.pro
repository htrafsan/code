domains
    x = integer
    l = integer*
    
predicates
    find(l,x)
    
clauses

    find([],N) :-
        write("There is no such element in the list"),nl.
        
    find([Element|List],1) :-
        write("The element is ",Element),nl.
        
    find([Element|List],N) :-
        N1 = N-1,
        find(List,N1).