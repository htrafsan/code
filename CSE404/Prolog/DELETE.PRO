domains
    x = integer
    l = integer*
    
predicates
    delete(x,l,l)
    concatenate(l,l,l)
    
clauses
    concatenate([],List,List).
    
    concatenate([X|List1],List2,[X|List3]) :-
        concatenate(List1,List2,List3).
        
    delete(Element,List,DelList) :-
        concatenate(List1,[Element|List2],List),
        concatenate(List1,List2,DelList),
        write("The list after deleting " , Element , " is "),
        nl.