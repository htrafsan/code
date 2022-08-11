domains
   list=symbol*

predicates
   go(symbol,list,symbol,list,list)
   del(symbol,list,list)
   append(list,list,list)

clauses
 
 del(X,[X|Tail],Tail).
 del(X,[Y|Tail],[Y|Tail1]):-
 del(X,Tail,Tail1).
 
 go(X,[Y|Tail],C,[B|Tail1],List):-
 
 del(X,[Y|Tail],Tail2),
 del(C,[B|Tail1],Tail3),
 append(Tail2,Tail3,List).
 
 append([],List3,List3).
 append([X|List1],List2,[X|List3]):-
 append(List1,List2,List3).