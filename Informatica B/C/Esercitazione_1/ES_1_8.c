#include <stdio.h>

void main() {
    int n;
    printf("Da un numero:");
    scanf("%d",&n);
    if(n>=0 && n<= 3)   {
        printf("basso");
    }
    if(n>=4 && n<=8)  {
        printf("MediO");
    }
    if(n>=9 && n<=10) {
        printf("ALTO!");
    }
    if(n<0 && n > 10)   {
        printf("Numero non valido");
    }
    getchar();
}