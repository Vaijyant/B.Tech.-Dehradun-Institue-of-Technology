min(X, Y, Z) :- (Z is X, X<Y) ; (Z is Y, Y<X).
max(X, Y, Z) :- (Z is X, X>Y) ; (Z is Y, Y>X).
number(X, Y, A, B) :- min(X, Y, A), max(X, Y, B).
