clear
clc

data = input("Inserisci la data nel formato ddmmyyyy: ","s");

giorno = str2double(data(1:2));
mese = str2double(data(3:4));
anno = str2double(data(5:end));

primavera = ((giorno > 20 && mese >= 3) && (giorno <20 && mese < 6));

disp(data)

if primavera
    disp("E' nato di primavera")
else
    disp("Non e' nato di primavera")
end

disp (int2str(2022 - anno))