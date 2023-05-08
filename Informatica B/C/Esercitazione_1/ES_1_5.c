#include <stdio.h>

void main() {
    int soldi;
    int cinquanta;
    int venti;
    int dieci;
    int cinque;
    int due;
    int euro;
    int soldi_r;
    /*
    int p_cinquanta;
    int p_venti;
    int p_dieci;
    int p_cinque;
    int p_due;
    int centesimo;
    int soldi_r;
    */
    printf("Quanti soldi?");
    scanf("%d",&soldi);
    cinquanta = soldi/50;
    soldi = soldi % 50;
    venti = soldi/20;
    soldi = soldi % 20;
    dieci = soldi/10;
    soldi = soldi % 10;
    cinque = soldi/5;
    soldi = soldi % 5;
    due = soldi/2;
    soldi = soldi % 2;
    euro = soldi/1;
    soldi = soldi % 1;
    /*
    p_cinquanta = soldi / .50;
    soldi = soldi % .50;
    p_venti = soldi / .20;
    soldi = soldi % .20;
    p_dieci = soldi/.10;
    soldi = soldi % .10;
    p_cinque = soldi/.05;
    soldi = soldi % .05;
    p_due = soldi/.02;
    soldi = soldi % .02;
    centesimo = soldi/.01;
    */
    printf("\n50: %d",cinquanta);
    printf("\n20: %d",venti);
    printf("\n10: %d",dieci);
    printf("\n5: %d", cinque);
    printf("\n2: %d", due);
    printf("\n1: %d", euro);
    /*
    printf(".50: %f", p_cinquanta);
    printf(".20: %f", p_venti);
    printf(".10: %f", p_dieci);
    printf(".05: %f", p_cinque);
    printf(".02: %f", p_due);
    printf(".01: %f", centesimo);
    */
}