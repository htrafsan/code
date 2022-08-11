     factoriel(0,1).
     factoriel(X,Y) :-
                      X1 is X - 1,
                      factoriel(X1,Z),
                      Y is Z*X,!.
