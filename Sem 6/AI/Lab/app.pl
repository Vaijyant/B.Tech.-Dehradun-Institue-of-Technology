appe([], Y, Y).
appe([X|Xs], Y, [X|Z]) :- appe(Xs, Y, Z), write(Z).
