#include<stdio.h>

void main() {
    int ore;
    int min;
    int sec;
    int sec_tot;
    printf("Quante ore sono? ");
    scanf("%d",&ore);
    printf("Quanti minuti sono? ");
    scanf("%d",&min);
    printf("Quanti secondi sono? ");
    scanf("%d",&sec);
    sec_tot = ore*3600 + min*60 + sec;
    if(sec_tot == 1)
        printf("C'e' %d secondo ", sec_tot);
    else
        printf("Ci sono %d secondi ",sec_tot);
    if(ore == 1)
        printf("in %d ora, ", ore);
    else
        printf("in %d ore, ", ore);
    if(min == 1)
        printf("%d minuto, ", min);
    else
        printf("%d minuti, ",min);
    if(sec == 1)
        printf("e %d secondo.", sec);
    else
        printf("e %d secondi.",sec);
    getchar();
}