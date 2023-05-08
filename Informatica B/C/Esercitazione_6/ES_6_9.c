typedef struct Pari
{
    int p1, p2;
};

void main() {
    Pari p;
    int n;
    do
    {
        prinf("Numero: ");
        scanf("%d",&n);
    } while (n <= 3);
    if(n>3) {
        if(n%2 != 0)    {
            p.p1 = n-1;

        }
        else{
            p.p1 = n - 2;

        }
        p.p2 = p.p1 - 2;
    }
}
