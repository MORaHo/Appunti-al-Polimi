load magazzino.m m

flag = true
for x = m
    if(~(mod(x,1) == 0 || x>=0)):
        flag = false
        break
    end
end

if(flag == true)
    save magazzino_valido.m m
end

function flag = valido(matrice_o)
    flag = true;
    [max_row,max_colomn] = size(matrice_o);
    for x = 1:max_row
        for y = 1:max_colomn
            value = matrice_o[x,y];
            if(~(mod(value,1) == 0 && value>=0))
                flag = false
            end
        end
    end
end

matrice = input("inserisci una matrice: ");

while(valido(matrice))
    matrice = input("Non e' valida, inserisci una altra matrice: ")
end



[x,y] = size(matrice_o);
richiesta = [];
ordine = [];

somma_prod = 0;
for ii = 1:y
    somma_prod = 0;
    for jj = 1:x
        somma_prod = somma_prod + matrice_o(x,y);
    end
    ordine(y) = somma_prod;
end

for w = 1:size(ordine)
    if ((magazzino(w) - ordine(w))<0)
        richesta(w) = abs(m(w)-ordine(w));
    end
end

