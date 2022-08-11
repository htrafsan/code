findnum(X,[]):-
        write("\nNumber Is Not Found").

findnum(X,[X|Tail]):-
        write("\nNumber Is Found").

findnum(X,[Y|Tail]):-
        findnum(X,Tail).
