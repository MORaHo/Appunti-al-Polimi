clear
clc

risultati = randi(3,20) -1;

for ii = 1:20
    risultati(ii,ii) = -1;
end

punti_tot = ...
    sum(risultati == 0,2)*3 + ...
    sum(risultati == 1,2) + ...
    sum(risultati' == 0,2)*3 + ...
    sum(risultati' ==1,2);

[classifica,indici] = sort(punti_tot,"descend");