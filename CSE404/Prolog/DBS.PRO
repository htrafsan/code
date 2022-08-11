
domains
   id,post,dept,name=string

database
   emp(id,post,dept)
   empdtl(name,id,post,dept)

predicates
   insert
   store(string,string)
   emppost(string)
   repeat.

clauses
 repeat.
 repeat:-
   repeat,
   fail.
insert:-
    asserta(emp("101","Proffessor","CSE")),
    asserta(emp("102","Head","CSE")),
    asserta(emp("103","Lecturer","CSE")),
    asserta(emp("104","Proffessor","CSE")),
    save("bds.dat").
   
 store(X,Y):-
    consult("bds.dat"),
    emp(Y,M,P),
    asserta(empdtl(X,Y,M,P)),
    save("bds.dat").
   
  emppost(K):-
     repeat,
     consult("bds.dat"),
     
	 empdtl(K,X,Y,Z),
	 writef("%4   %4   %4   %4\n",K,X,Y,Z).
   