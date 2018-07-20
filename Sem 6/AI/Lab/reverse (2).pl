reverse(A, R) :- W is A mod 10,  A1 is A//10,
	V is A1 mod 10, A2 is A1//10,
	U is A2 mod 10,
	R is W*100+V*10+U.

palindrome(X) :- reverse(X, X).
