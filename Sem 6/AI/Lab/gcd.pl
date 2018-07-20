calcgcd(X, X, Y) :- Y is X.
calcgcd(X, Y, Z) :- Y < X, calcgcd(Y, X, Z).
calcgcd(X, Y, Z) :- X < Y, A is Y-X, calcgcd(X, A, Z).

