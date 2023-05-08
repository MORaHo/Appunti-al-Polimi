#include<stdio.h>

void main() {
    int sec;
    int sec_t;
    int ore;
    int min;
    int min_r;
    printf("Quanti secondi? ");
    scanf("%d",&sec);
    sec_t = sec;
    ore = sec / 3600;
    min_r = sec % 3600;
    min = min_r / 60;
    sec = min_r % 60;
    if(sec_t == 1)
        printf("In %d secondo ", sec_t);
    else
        printf("In %d secondi ",sec_t);
    if(ore == 1)
        printf("c'e' %d ora, ", ore);
    else
        printf("ci sono %d ore, ", ore);
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