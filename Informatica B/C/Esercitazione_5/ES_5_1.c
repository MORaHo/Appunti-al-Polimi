#include <stdio.h>
#define MAX_SQUADRE 20 //tema
#define MAX_COGNOMI 20 //noi
#define MAX_NOME 30 //noi
#define MAX_CALCIATORI 23 //tema

typedef struct 
{
    char cognome[MAX_COGNOME + 1];
    int eta;
    int maglia;
    int presenze;
    int gol;
} Calcolatrice;

typedef struct Squadre
{
    char nome[NAX_NOME + 1];
    int punti;
    Calciatore calciatore[MAX_CALCIATORI];
};

typedef Squadre Campionato[MAX_SQUADRE] //come creare un array di interi int vett[20], int definisce il tipo di cose dentro all'array, per questo in campionato ogni variabile in campionato e' di tipo Squadre che abbiamo appena creato

void main() {

    Campionato serie_a; //Abbiamo definito il tipo Campionato che e' un array di variabili di tipo Squadre
    Calciatore capocannoniere;
    Squadre squadra_capocannoniere;

    int i, j;

    capocannoniere = serie_a.[0].calciatore[0];
    squadra_capocannoniere = serie_a[0];

    //esecuzione

    for(i=0;i<MAX_SQUADRE;i++)  {

        for (j = 0; j<MAX_CALCIATORI;j++)   {

            if (serie_a[i].calciatore[j].gol > capocannoniere.gol) {

                capocannoniere = serie[i].calciatore[j];
                squadra_capocannoniere = serie[i];
            
            }
        
        }
    }
}

printf("Squadra %c",squadra_capocanniere)
printf("Calciatore %c",capocannoniere)
printf("Gol %d", capocannoniere.gol)