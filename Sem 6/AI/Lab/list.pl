lengt([], 0).
lengt([_|Y],N):- lengt(Y, M), N is M+1.
