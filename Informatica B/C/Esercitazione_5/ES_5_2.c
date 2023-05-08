#define MAX_LEN 64;
#define MAX_DESTINATARI 256;

typedef char Stringa_base[MAX_LEN + 1];

typedef struct Utente
{
    Stringa_base nome[MAX_LEN + 1];
    Stringa_base cognome[MAX_LEN + 1];
    Stringa_base email [MAX_LEN + 1];
};

typedef struct Messaggio
{
    char contenuto[500 + 1];
    Utente mittente;
    Utente destinari[MAX_DESTINATARI];
    int n_destinari;
};

void main() {
    Utente lista_utenti[10];
    Messaggio lista_messaggi[10];

    for (int i = 0;i< 10; i ++) {
        int j = 0;
        while (j<lista_messaggi[i].n_destinatari && (strcmp(lista_messaggi[i].mittente.email,lista_messaggi[i].destinatari[j].email)))  {
            j++;
        }
        if (j == lista_messaggi[i].n_destinari) {
            printf("%s",lista_messaggi[i].mittente.email);
        }
    }

}