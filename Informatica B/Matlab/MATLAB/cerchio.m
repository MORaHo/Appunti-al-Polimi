function [lati,res] = cerchio(x0,y0,r,alpha)
    if(mod(360,alpha) == 0)
        lati = 360./alpha
        xq = x0
        yq = y0-r
        xp = x0+(r.*sind(alpha))
        yp = y0 - (r.*cosd(alpha))
        xk = x0 + (r.*sind(2.*alpha))
        yk = y0 - (r.*cosd(2*alpha))
        res = [xq,yq,xp,yp,xk,yk]
    else
        lati = 0
        res = []
    end

end

x = input("Inserisci un numero: ")
y = input("Inserisci un numero: ")
r = input("Inserisci un numero: ")
alpha = input("Inserisci un numero")

ris = cerchio(x,y,r,alpha)


if nL ~= 0
cx = coord(:, 1);
cx(end+1) = cx(1); % per chiudere il poligono
cy = coord(:, 2);
cy(end+1) = cy(1); % per chiudere il poligono
plot(cx, cy);
save 'poligono' coord;
en



