#include <stdio.h>
#include <math.h>

void main() {
    int a;
    double b;
    printf("Enter a positive number: ");
    scanf("%d",&a);
    while (a<0)    {
        printf("\nEnter a positive number: ");
        scanf("%d",&a);
    }
    //double(x);
    b = sqrt(a);
    printf("\nThe square root of %d is %f",a,b);
}
