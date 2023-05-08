#include <stdio.h>

void main() {
    int i;
    int n = 1;
    int a = 1;
    printf("How many: ");
    scanf("%d",&i);
    for(n;n<=i;n++)    {
        a = 1;
        for(a;a<=n;a++)    {
            printf("*");
        }
        printf("\n");
    }
}