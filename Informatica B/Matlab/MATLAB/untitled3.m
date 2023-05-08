function flag = controlla_decrescita(numero_contaggiati)
    flag = false;
    n = length(numero_contaggiati);
    giorni_descrescita = 0;
    for i = n:-1:(n-7)
        if(numero_contaggiati(i)<numero_contaggiati(i-1))
            giorni_descrescita = giorni_descrescita + 1;

        
        else
            giorni_descrescita = 0;
        end
    end
    if(giorni_descrescita == 7)
            flag = True;
    end
end

load contagiati.mat m

riapertura = controlla_decrescita(contaggiati)

figure

hold on

y = 
