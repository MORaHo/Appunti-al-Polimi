#include<stdio.h>

void main() {

    long fib1 = 1;
    long fib2 = 1;
    long fib3 = 2;
    long end;

    printf("What number of Fibonacci number do you want to go to?");
    scanf("%d", &end);

    for(int i = 1;i<end;i++) 
    {
        printf("\n%d",fib1);
        fib1 = fib2;
        fib2 = fib3;
        fib3 = fib1 + fib2;
    }
}