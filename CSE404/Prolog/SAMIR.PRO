domains
 namelist=symbol*
predicates
  member(symbol,namelist)
  club_member(symbol)
clauses
  member(X,[X|_]).
  member(X,[_|Tail]):-
     member(X,Tail).
     
  club_member(Name):-
      member(Name,[ashok,samir,shapon]).
goal
  club_member(samir).