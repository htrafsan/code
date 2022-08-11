predicates
    start.
    sum.    
clauses
          
        start:- sum,nl.
        
        sum:-     write("X= "),readreal(X),
            write("Y= "),readreal(Y),
            S = X+Y,
            write("Sum is "),write(S).

goal
    start.


