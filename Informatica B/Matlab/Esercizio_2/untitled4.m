clear
clc

scacchiera = zeros(8);
posizioni = zeros(8,1); %crea 1 riga di 8 celle

for ii = 1:8
    nuova_posizione = randi(64);
    while sum(posizioni == nuova_posizione)
        nuova_posizione = randi(64);
    end
    posizioni(ii) = nuova_posizione;
end

scacchiera(posizioni) = 1;

righe_ok = all(sum(scacchiera,2)<=1) %2 dice ogni riga alla volta