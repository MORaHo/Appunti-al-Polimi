#include <stdio.h>

void main() {
    int vettore1[10];
    int vettore2[10];
    int vettore3[20];
    for(int i=0;i<=9;i++)   {
        vettore3[2*i] = vettore1[i];
        vettore3[2*i+1] = vettore2[i];
    }
    for (int n=0;n<=9;n++) {
        //printf("\n%d",vettore1[n]);
        //printf("\n%d",vettore2[n]);
        printf("\n%d",vettore3[2*n]);
        printf("\n%d",vettore3[2*n+1]);
        
    }
}
