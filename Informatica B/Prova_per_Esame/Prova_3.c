#include <math.h>
#define MAX_STRINGA 20
#define MAX_STANZE 10;
#define MAX_APPARTAMENTI 100
typedef enum{bagno,cucina,camera}Tipo;

typedef struct  {
    int dimensione;
    Tipo tipo;
    int numero_balconi;
}Stanza;

typedef struct {
    char indirizzo[MAX_STRINGA];
    int costo_x_metro_quadro;
    int stanze;
    int bagni;
    Stanza elenco_stanze[MAX_STANZE];
}Appartamento;

Appartamento agenzia_immobiliare[MAX_APPARTAMENTI];

int i,j = 0;
int min_costo = -1;
int costo_tot = 0;
int dimensione_tot = 0;
char indirizzo_min[MAX_STRINGA];

for(i;i<MaX_APPARTAMENTI;i++)   {
    if(agenzia_immobiliare[i].bagni >= 2){
        area = 0
        for(j;j<(agenzia_immobiliare.stanze);j++){
            dimensione_tot += agenzia_immobiliare[i].elenco_stanze[j];

        }
        costo_tot = dimensione_tot * agenzia_immobiliare[i].costo_x_metro_quadro;
        if(costo_tot < min_costo)   {
            min_costo = costo_tot;
            strcpy(indirizzo_min,agenzia_immobiliare[i].indirizzo);
        }

    }
};

printf("Costo minimo: %d \ne indirizzo: %s",min_costo,indirizzo_min);
