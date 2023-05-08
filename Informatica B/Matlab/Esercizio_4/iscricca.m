function r = iscricca(v,m)
    v = logical(v); %v e' un vettore di 1 e 0 di altro significato, quindi usiamo logical farlo diventare un vettore di logicals
    r= all(m(v,v));
end