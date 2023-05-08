#include <stdio.h>

void main() {
    int a =1 ;
    do
    {
        printf("Enter an even number: ");
        scanf("%d",&a);
    } while (a%2);
}