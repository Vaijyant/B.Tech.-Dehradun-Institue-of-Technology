append([], Y, Y).
append([X|Xs], Y, [X|Z]) :- append(Xs, Y, Z).


quicksort([],[]).
quicksort([H|Hs],Sorted):- pivoting(H,Hs,L,R),
	quicksort(L,Ls),
	quicksort(R,Rs),
	append(Ls,[H|Rs], Sorted).

pivoting(_,[],[],[]).
pivoting(H,[X|T],[X|L],R):- X=<H,pivoting(H,T,L,R).
pivoting(H,[X|T],L,[X|R]):- X>H,pivoting(H,T,L,R).
