clear
clc

% intervallo dei tempi
t = 0: 0.1: 10;

% costruisco i vettori per x e y
x = t - sin(t);
y = 1 - cos(t);

% disegno la funzione
plot(x, y);
xlabel('x');
ylabel('y');
title('cicloide');