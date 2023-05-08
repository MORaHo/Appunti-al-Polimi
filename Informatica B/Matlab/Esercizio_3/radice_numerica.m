function somma = sommacifre(numero) %somma cifre
    somma = 0;
    while n>0
        somma = somma + mod(n,10);
        n = floor(n/10);
    end
end

function output = f_radice_numerica(cosa) %calcolare radice numerica
    output = (abs(round(cosa)));
    while output>9
        output = sommacifre(output)
    end
end

function output_vector = f_vector(vector)
    for ii = vector % uguale a 1:1:vector
        output_vector(index) = f_radice_numerica(ii)
        index = index + 1;
    end
end
