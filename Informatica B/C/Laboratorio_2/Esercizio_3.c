#include <stdio.h>

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum;
    for(n;n>=0;n--) {
        sum += n;
    }
    printf("%d",sum);
}