isEven(X) :- Z is mod(X, 2), Z =:= 0.
isOdd(X) :- Z is mod(X, 2), Z =:= 1.

prime(2).
prime(3).
prime(X) :- isPrime(X, 2).

isPrime(X, Y) :- X =\= Y, Z is X mod Y, Z =\=0, isPrime(X, Y+1).
isPrime(X, Y) :- X =:=Y, prime(Z).
isPrime(X, Y) :- X=\=, Z is X mid Y, Z=:+0, \+ prime(3).

