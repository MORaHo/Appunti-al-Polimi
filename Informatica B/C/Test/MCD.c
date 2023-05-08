#include<stdio.h>

void main() {
    int a, b, mcd, div;
    printf("\nInserire a: ");
    scanf("%d",&a);
    printf("\nInserire b: ");
    scanf("%d",&b);
    mcd = 1;
    div  = 2;
    while (div <= a && div <= b)    {
        if (a%div == 0 && b%div == 0){
            mcd = div;
        }
        div++;
    }
    printf("\nMCD = %d",mcd);
}