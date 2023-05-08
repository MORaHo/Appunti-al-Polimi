function [val] = closestVal(vettore,n)
    dist = abs(vettore-n); % toglie n da ogni valore nel vettore
    [minvalue,idxmin] = min(dist); % trova il minimo
    val = vettore(idxmin); %Usare l'indice per trovare il valore minimo nel vettore originale, perche il minvalue ci avrebbe data la distanza minima
end

function [val] = closestVal2(vettore,n) %in caso ci siano piu di un minimo
    dist = abs(vettore-n);
    posizione = dist == min(dist); %da ogni indice dove la distanza e' equale al minimo nel vettore
    val = vettore(posizioni)
end