#include <stdio.h>

void main() {
    int pari[10];
    int dis[10];
    int n;
    int np = 0;
    int nd = 0;
    int i = 1;
    int e;
    while(i<=10)  {
        printf("\nStampa il numero %d, se non vuoi inserire un altro numero scrivi 'stop': ",i);
        scanf("%d",&n);
        if (n%2==0) {
            pari[np] = n;
            np++;
        }
        if (n%2!=0) {
            pari[nd] = n;
            nd++;
        }
        i++;
    }
    for(int z = 0; i <= np;z++) {
        printf("%d",z);
        e = pari[z];
        printf("\n%d", e);
    }
    for(int z = 0; i <= nd;z++) {
        printf("%d",z);
        e = dis[z];
        printf("\n%d",e);
    }
}