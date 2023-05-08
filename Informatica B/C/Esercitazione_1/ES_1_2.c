#include<stdio.h>

void main() {
    int prezzo;
    int sconto;
    float sconto_f;
    float n_prezzo;
    printf("Quale e' il prezzo?");
    scanf("%d",&prezzo);
    printf("Quale e' lo sconto? (Tra 1 e 100)");
    scanf("%d",&sconto);
    if(sconto<0 || sconto>100) {
        printf("Quale e' lo sconto? (Tra 1 e 100)");
        scanf("%d",&sconto);
    }
    sconto_f = sconto/100.0;
    n_prezzo = prezzo * sconto_f;
    printf("Il nuovo prezzo e' %f",n_prezzo);
    getchar();

}

// Algoritmo gestiche input e output

// somma maggiore differenza minore per 1.9