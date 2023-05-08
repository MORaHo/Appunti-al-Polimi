#include<stdio.h>
#include<stdlib.h>

void main() {
    int a;
    int b;
    int dif;
    printf("Numero 1:");
    scanf("%d",&a);
    printf("\nNumero 2:");
    scanf("%d",&b);
    dif = abs(a-b);
    printf("La differenza e' %d",dif);
    getchar();
}