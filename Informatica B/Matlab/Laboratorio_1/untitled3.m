scacchiera = zeros(8,8);
%disp(scacchiera)

r_1 = input("Riga: ");
c_1 = input("Colonna: ");
r_2 = input("Riga: ");
c_2 = input("Colonna: ");
disp("\n");
scacchiera(r_1,c_1) = 1;
scacchiera(r_2,c_2) = 2;
disp(scacchiera)

righe_ok = any(sum(scacchiera,2)>2);
colonne_ok = any(sum(scacchiera,1)>2);
if righe_ok || colonne_ok
    disp("La torre ha mangiato il re")
else
    disp("Il re non e' stato mangiato dalla torre")
end