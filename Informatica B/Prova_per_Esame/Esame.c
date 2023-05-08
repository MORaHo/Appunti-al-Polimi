#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define N_CIRC 700`
#define N_PART 10

void main() {
    int votazioni[N_CIRC][N_PART];

    for(int c = 0;c<N_CIRC;c++) {
        for(int p = 0;p<N_PART;p++) {
            votazioni[c][p] = rand()*70;
        }
    }

    //1

    int i,j = 0;.
    int somma = 0;
    int popolazione = 16000000;
    for(i;i<N_CIRC;i++) {
            for(j;j<N_PART;j++){
                somma = somma + votazioni[i][j];
            }
    }
    printf("\n%d",somma);


    if(somma>(.5*popolazione))  {
        printf("\nLe elezioni sono valide");
    } else  {
        printf("\nLe elezioni non sono valide");
    }

    //2

    int l,m,p = 0;
    int voti;
    int index;
    int partito = 0;
    int max_voti = -1;
    int vincitore = 0;
    int eletti[N_PART];

    for(l;l<N_CIRC;l++)   {
        for(m;m<N_PART;m++)   {
            voti = votazioni[l][m];
            if(voti>max_voti)   {
                max_voti = voti;
                index = m;
            }
        eletti[index] += 1;
        }
    }

    for(p;p<N_PART;p++)   {
        if(eletti[p]>vincitore) {
            vincitore = eletti[p];
            partito = p;
        }
    }

    printf("\nIl partito vincente e' il partito con indice %d",partito);

    //3

    int ii,jj,x = 0;
    int z = 0;
    int partito_max = 0;
    int voti_partito = 0;
    int voti_totali = 0;
    int partiti[N_PART];

    for(ii;ii<N_PART;ii++) {
        voti_partito = 0;
        for(jj;jj<N_CIRC;jj++)  {
            voti_partito += votazioni[jj][ii];
        }
        if(((voti_partito*100)/somma)>4)    {
            partiti[ii] = voti_partito;
        }else{
            partiti[ii] = 0;
        }
    }

    for(x;x<N_PART;x++)     {
        if(partiti[x]>partito_max)  {
            partito_max = partiti[x];
            z = x;
        }
    }

    if(z==partito)    {
        printf("\nIl risultato e' consistente");
    }else{
        printf("\nIl risultato non e' consistente");
    }
}