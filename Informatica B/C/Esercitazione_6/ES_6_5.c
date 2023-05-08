#define MAXVIAGGI 100
#define n_clienti 50

typedef char Stringa[15];

typedef struct {
    Stringa aeroportoPartenza;
    Stringa aeroportoArrivo;
    float distanza;
}   Viaggio;

typedef struct Cliente
{
    char codiceTessera[10];
    Stringa nome;
    Stringa cognome;
    Stringa nazionlaita;
    int numViaggiEffettuati;
    Viaggio elencoViaggi [MAXVIAGGI];
};

void main() {
    Cliente elencoClienti[n_clienti];
    int i = 0;
    int s;
    int avg;
    for(i;i<n_clienti;i++)  {
        if (elencoClienti[i].numViaggiEffettuati >= 10) {
            float s = 0.0
            elencoClienti[i].nome;
            elencoClienti[i].cognome;
            for(int j = 0; i < elencoClienti[i].numViaggiEffetuati ;j++) { // a numero viaggi effetuati perche non sara' sempre 100
                float p = elencoClienti.elencoViaggi[j].distanza;
                s += p;
            }
            avg = s / elencoClienti[i].numViaggiEffetuati;
            printf("%s %s %f %f",
            elencoClienti[i].nome,
            elencoClienti[i].cognome,
            s,
            avg)
        }
    }

}