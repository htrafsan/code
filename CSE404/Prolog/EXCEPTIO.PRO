trace
predicates
	hypothesis(symbol,symbol)
	symptom(symbol,symbol)
	
clauses
	symptom(rahim,fever).
	symptom(rahim,head_ache).
	symptom(karim,runny_nose).
	symptom(rahim,head_ache).
	symptom(rahim,fever).
	
	hypothesis(Patient,flu):-
		symptom(Patient,fever),
		symptom(Patient,head_ache).