#include <stdio.h>

void main() {
    int anno;
    printf("Anno: ");
    scanf("%d",&anno);
    int i;
    int quattro = (anno% 4 == 0);
    int cento = (anno% 100 == 0);
    int q_cento = (anno% 400 == 0);
    int b = (quattro && !(cento && !(q_cento)));
    if (!b)  {
        printf("Non ");
    }
    printf("e' un anno bisestile.");
}