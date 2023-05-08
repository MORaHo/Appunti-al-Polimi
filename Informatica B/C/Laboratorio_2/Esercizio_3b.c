#include <stdio.h>

#define array_size 5

void main() {
    int vett[array_size] = [0,0,0,0,0];
    int vet[array_size];
    int i;

    for(i = 0;i<array_size;i++) {
        do
        {
            printf("Enter a positive number: ");
            scanf("%d",&vett[i])
        } while (vett[i]<0);
    }


}
