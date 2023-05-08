#include <stdio.h>

void main() {
    int a;
    int b;
    int c;
    int i_1;
    int i_2;
    int i_3;
    int sc;
    int is;
    int eq;
    printf("\nScrivi un numero:");
    scanf("%d",&a);
    printf("\nScrivi un secondo numero:");
    scanf("%d",&b);
    printf("\nScrivi un terzo numero:");
    scanf("%d",&c);
    i_1 = (a+b)>c;
    i_2 = (a+c)>b;
    i_3 = (b+c)>a;
    eq = (a=b=c);
    is = (((a==b)&&(a||b)!=c)||((a==c) &&(a||c)!=b)||((b==c)&&(c||b)!=a));
    sc = ((a != b) && (a != c) && (b != c));
    if (!(i_1 && i_2 && i_3))   {
        printf("Non e' un triangolo.");
    }
    else if (eq) {
        printf("E' un triangolo equilaterale.");
    }
    else if (is) {
        printf("E' un triangolo isocele.");
    }
    else if (sc) {
        printf("E' un triangolo scaleno.");
    }
}