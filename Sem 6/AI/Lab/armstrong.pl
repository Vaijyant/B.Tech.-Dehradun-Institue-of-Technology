arm(A, B) :- W is A mod 10,  A1 is A//10,
	V is A1 mod 10, U is A1//10,
	B is W**3+V**3+U**3.

armstrong(A) :- arm(A, A).
