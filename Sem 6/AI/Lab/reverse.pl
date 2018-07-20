rever(0,Z,C) :- Z is 0, C is 0.
rever(X,Z,C) :- Y is X mod 10, write(Y), X1 is floor(X/10), rever(X1,Z1,C1), C is C1+1, Z is Z1*10+Y.
