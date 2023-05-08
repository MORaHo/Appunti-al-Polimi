clear
clc

load data.mat m


[r,c] = size(m);

v= input(["inserire vettore di dimensione", num2str(c),":"]);

esito = inscricca(v,m);
