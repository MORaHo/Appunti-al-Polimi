#include <stdio.h>

 void main()    {
    int n, i, primo;
    primo = 1;
    i = 2;
    do
    {
        printf("Inserisci numero: ");
        scanf("%d",n);
    } while (n<1);

    while (i <= n /2 && primo == 1){
        if (n%i == 0)   {
            printf("Non");
            primo = 0;
        }
        i++;
    }
    printf("e' primo");
 }