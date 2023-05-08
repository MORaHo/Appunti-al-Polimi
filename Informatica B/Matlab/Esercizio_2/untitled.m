clear
clc

M = randi(20,5); %20 e' il massimo e 5 e' la dimensione delle colonne e righe della matrice prodotta e il numero di lettere random, se ci fosse un altra ,3 creerebbe una matrice di dimensioni 5x3, con tutti valori random
MR = zeros(size(M))

media = round(mean(M(:)));

MR(M<media) = -1; %resitituisce una array di logicals(true false) che puo esser usato per indiciazzare altri array
MR(M > media) = 1;
MR(M == media) = media