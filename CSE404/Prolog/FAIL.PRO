predicates
    location(string,string)
    go
clauses
    go:-
        writef("%-10 %5 \n","CITY","STATE"),
        fail.
    go:-
        location(City,State),
        writef("%-10 %2 \n",City,State),
        fail.
    go.
        location("Jackson","MS").
        location("Washington","DC").
        location("Releigh","NC").
  