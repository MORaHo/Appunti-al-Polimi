#include <limits.h>
#include <stdio.h>

int main()  {

    int a;
    int b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d",&a);

    if(a <= 0 || b <= 0)    {
        printf("Wrong Input. The integers mus tbe positive.");
    }
    else if (a%b)   {
        printf("The first integer is a multiple of the second \n");
    }
    else if (b%a)   {
        printf("The first integer is a multiple of the second \n");
    }
    else {
        printf("They are not multiples of one another.");
    }
}