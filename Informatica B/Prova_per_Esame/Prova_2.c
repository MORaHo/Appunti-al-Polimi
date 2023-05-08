
typedef struct {
    float x;
    float y;
}punto;

typedef struct {
    punto a;
    punto b;
}segmento;

segmento dati[100];
float lunghezza;
segmento ris[100];

#include <stdio.h>
#include <math.h>

void main() {

    printf("Inserisci un valore: ");
    scanf("%f",&lunghezza);

    int i = 0;
    int index = 0;
    float xa,xb,ya,yb;
    float max_lunghezza,max_xa,max_xb,max_ya,max_yb = 0.0;
    for(i;i<100;i++)    {
            xa = dati[i].a.x;
            xb = dati[i].b.x;
            ya = dati[i].a.y;
            yb = dati[i].b.y;
            lunghezza_ab = sqrt((pow((xa-xb),2))+(pow((ya+yb),2)))
            if(lunghezza_ab > lunghezza)    {
                    ris[index].a.x = xa;
                    ris[index].a.y = ya;
                    ris[index].b.x = xb;
                    ris[index].b.y = yb;
                    if(lunghezza_ab > lunghezza_max)    {
                        lunghezza_max = lunghezza_ab;
                        max_xa = xa;
                        max_xb = xb;
                        max_ya = ya;
                        max_yb = yb;
                    }
                    index++;

            }
    }
    printf("Lunghezza max: %f", lunghezza_max);
    printf("Coordinate: %f, %f, %f, %f",xa,xb,ya,yb);


}
