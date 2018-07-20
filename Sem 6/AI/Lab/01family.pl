parentOf(dilip, dashrath).

parentOf(dashrath, ram).
parentOf(dashrath, lakshman).
parentOf(dashrath, bharat).
parentOf(dashrath, shatru).

parentOf(ram, luv).
parentOf(ram, khush).

parentOf(lakshman, mohan).
parentOf(lakshman, geeta).

parentOf(bharat, rama).
parentOf(bharat, sushil).

parentOf(shatru, rohan).
parentOf(shatru, meera).

parentOf(luv, munnu).

parentOf(rama, maya).
parentOf(rama, meena).

parentOf(rohan, lal).
parentOf(rohan, lalima).

gender(dilip, male).
gender(dashrath, male).
gender(ram, male).
gender(lakshman, male).
gender(bharat, male).
gender(shatru, male).
gender(luv, male).
gender(khush, male).
gender(mohan, male).
gender(geeta, female).
gender(rama, female).
gender(sushil, male).
gender(rohan, male).
gender(meera, female).
gender(munnu, male).
gender(maya, female).
gender(meena, female).

partype(male, father).
partype(female, mother).

isSibling(X, Y) :- parentOf(Z, X), parentOf(Z, Y).

isAncestor(X, Y) :- parentOf(X, Y); (parentOf(Z, Y), isAncestor(X, Z)).

parent(X, Y, T) :- parentOf(Y, X), gender(Y, G), partype(G, T).










