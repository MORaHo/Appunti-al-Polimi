clear
clc

str1 = input("Inserire prima stringa: ","s");
str2 = input("Inserire second stringa: ","s");

function y = crea_isto(x)
    y = zeroes(128,1);
    for ii = x
        y(ii) = y(ii) + 1; % perche le lettere ha valori ansi quindi si crea una mappa di valori
    end
end

isto1 = crea_isto(str1);
isto2 = crea_isto(str2);

if all(str1 == str2)
    disp("anagrammi")   
else
    disp("non sono anagrammi")
end