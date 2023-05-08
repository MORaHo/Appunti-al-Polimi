#include<stdio.h>
#include<stdlib.h>

void main() {
    int n1;
    int n2;
    int dif;
    printf("Numero 1:");
    scanf("%d",&n1);
    printf("\nNumero 2:");
    scanf("%d",&n2);
    dif = abs(n1-n2);
    printf("La differenza e' di %d",dif);
    getchar();
}