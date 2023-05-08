#include <stdio.h>
#include <math.h>

#define pi 3.1415926535897

void main() {
    int n;
    float l;
    float a;

    do
    {
        printf("Quanti lati? ");
        scanf("%d",&n);
        printf("\nQuali sono le dimensioni dei lati? ");
        scanf("%f",&l);
    } while (l<=0 || n<1);

    switch(n)   {
        case 1:
            printf("\nArea del poligono = 0");
            break;
        case 2:
            printf("\nArea del poligono = 0");
            break;
        case 3:
            a = l*l*sin(pi/3);
            printf("\nArea triangolo = %f",a);
            break;
        case 4:
            a = l*l;
            printf("\nArea quadrato = %f",a);
            break;
        case 5:
            a = l*l*5/2*(sqrt((sqrt(5)/10)+1/4));
            printf("\nArea pentagono: %f",a);
            break;
        case 6:
            a = l*l*sqrt(3)*3/2.0;
            printf("\nArea esogono %f",a);
            break;
        default:
            printf("\nPoligono non supportato.");
    }
}