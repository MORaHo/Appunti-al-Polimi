#include <stdio.h>

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n>0) {
        printf("%d\n",n);
        n--;
    }
}