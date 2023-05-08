clear %elimina variabili nel workspace
clc %rimuove test nella command window
%help <funzione> spiega come la funzione funziona
%{ commento a 
% piu linee}

%disp, equivalente di printf, ti permette di stampare a schermo, stampa
%vettori, non si possono stampare interi, quindi si usa int2str(a)
%e.g ["il numero e': ',int2str(a)]

%input equivalente a scanf, permtte input dalla tastiera

% if, elseif, else, in fine ci deve essere end per finire la serie di
% construtti if

%for loop ,  for ii = [vettore] poi end

%while loop, while <condizione>

% = equals
% && e & per and
% | e || per or
% ~a per negazione

% == uguale
% ~= diverso

r = [1,2,3,4]; % vettore che va da due a quattro, in riga
c = [1;2;3;4]; % vettore che va da due a quattro in colonna, ; = a capo
v = 1:5; % crea un vettore da inizio a fine, inizio:passo:fine, visto che ci sono solo due, il passo e' 1
z = v'; % apice fa diventare una riga una colonna

v(1) = 10; % i vettori si accedono con le (), gli indici vanno da 1 a n, non da 0 a n-1
v(end) = 6 % definisce l'ulitmo elemento
v(1:3) = 0; % usa i numeri nel vettore per posizione

%MATRICI

A = [1,2;3,4]; %va a capo per tiene du valori su tutte e due le linee
B = A'; % gira la matrice
A(1,2) = 0; % il secondo punto nella prima riga
A(:,1) = [0;0]; %tutta la prima colonna : significa per tutti i valori

C = A + B
D = A * B; % multiplicazione matriciale
E = A.*B; % multiplicazione elemento per elemento
function [result] = somma(arg1,arg2)%function output = nome_funzione(input)
    result = arg1 + arg2;
end

% find(p), to trova tutti i valori non 0, nella matrice p

