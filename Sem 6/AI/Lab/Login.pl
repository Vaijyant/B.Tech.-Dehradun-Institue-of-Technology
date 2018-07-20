login(N,P):- write('Enter your Id: '),read(N),write('Enter your password: '),read(P),validate(N,P).
validate(N,P):-valid(N,P).
valid(vaijyant,123):-write('Login successful').
valid(N,P):- write('Login unsuccessful').
