function M = corona(N)
    A = zeros(N,N);
    for ii  = 1:N/2
        A(ii:N+1-ii,ii:N+1-ii) = ii; 
    end
end