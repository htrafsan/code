domains
	student, subject, semester, dept = string
	time = real
	room = integer
	
predicates
	hypothesis(student,subject)
	hypothesis1(student,subject)
	is_offered(student,dept)
	enrolled(student, subject, semester)
	department(subject, dept)
	scheduled(subject, semester, time, room)
	go
clauses
	go:-
	write("Is there anyone who enrolled in the same subject both in Ist & 2nd Semeter?"),nl,
	hypothesis1(Student,Subject),
	write("Yes ",Student," is enrolled in ",Subject," both in 1st & 2nd Semester."),nl.
	
	go:-
	write("Is Jamal enrolled in a subject offered by EE"),nl,
	is_offered(jamal,Dept),
	write("Jamal is enrolled in a subject offered by ",Dept,"."),nl.
	
	go:-
	write("is kamal enrolled in CSE609"),nl,
	hypothesis(kamal,Subject),
	write("Yes Kamal is enrolled in ",Subject,"."),nl.
	
	
		
	hypothesis(kamal,Subject):-
	enrolled(kamal,Subject,sixth).
		
	is_offered(jamal,Dept):-
	enrolled(jamal,Subject,sixth),
	department(Subject,Dept).
	
	hypothesis1(Student,Subject):-
	enrolled(Student,Subject,sixth),
	enrolled(Student,Subject,seventh).
		
	enrolled(kamal,cse609,sixth).
	enrolled(jamal,ee601,sixth).
	enrolled(jamal,cse603,sixth).
	enrolled(jamal,cse603,seventh).
	department(ee601,ee).
	scheduled(cse609,sixth,0800,101).
	scheduled(cse603,sixth,0850,101).
	scheduled(cse605,sixth,0940,101).
	scheduled(ee601,sixth,0850,101).
	
