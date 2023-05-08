#include <stdio.h>
#include <math.h>

void main() {
    int a;
    int i = a ;
    do  {
        printf("Scrivi un numero: ");
        scanf("%d",&a);
    } while (a<0);

    for(i;i>0;i--)  {
        if (a%i == 0)   {
            printf("\nUn divisore e' %d",i);
        }
    }
}