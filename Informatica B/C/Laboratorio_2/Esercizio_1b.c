#include <stdio.h>

void main() {
    int i[5];
    for(int a = 0;a<5;a++)   {
        printf("Enter number: ");
        scanf("%d",&i[a]);
    }
    for(int b = 4;b>=0;b--)  {
        printf("%d\n",i[b]);
    }
}