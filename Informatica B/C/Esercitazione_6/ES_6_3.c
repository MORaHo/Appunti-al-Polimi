#define DIM 5

typedef int MatriceQuadrate [DIM][DIM];

void main() {
    int s = 0 ;
    int p = 1;
    int i;
    int aj;
    int ai;
    MatriceQuadrate matrice;
    for(i = 0;i<DIM;i++) {
        ai = matrice[i][i];
        aj = matrice[i][(DIM - 1)-i];
        s = s + (ai * aj);
        p = p * (ai + aj);
    }

}