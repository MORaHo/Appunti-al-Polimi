clear
clc

load log.mat titoli andamento

function [titoliOver,titoliUnder] = splittaMatrice(titoliTot,andamento,soglia)
    titoliOver = titoliTot(andamento >= soglia,:);
    titoliUnder = titoliTot(andamento <= soglia,:);

end

[over,under = splittaMatrice(titoli,andamento,0)];
x = [1:500];

figure()
plot(x,over,"g"); %crea un plot per ogni riga della matrice over
xlabel("tempo")
ylabel("valore")
title("Over")
figure()
plot(x,under,"r"); % crea un plot per ogni riga della matrice under
xlabel("tempo")
ylabel("valore")
title("Under")

