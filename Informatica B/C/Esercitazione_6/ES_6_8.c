typedef char Stringa[30];

typedef char Matricola[30];

typedef struct DatiStudente
{
    Stringa cognome, nome;
    Matricola m;
};

typedef struct DatiProveStudente
{
    DatiStudente stud;

    int pres1, pres2;
    int voto1, voto2;
};

typedef struct RegistroProveInt
{
    DatiProveStudente s[300];
    int nStud;
};

typedef struct RegistroEsiti
{
    matricolam[300];
    int punti[100];
    int nStud;
};


void main() {
    RegistroProveInt r;
    int i;
    RegistroEsiti neg;
    neg.nStud = 0;

    for(i=0;i< r.nstrud; i++)   {
        if(!(r.s[i].pres1 && r.s[i].pres2) && (r.s[i].pres1 || r.s[i].pres2))   {
            strcpy(neg.m[neg.nStud], r.s[i].stud.m);
            
            if(r.s[i].pres1)    {
                strcpy(neg.punti[neg.nStud],r.s[i].voto1);
            }
            else(r.s[i].pres2)  {
                strcpy(neg.punti[neg.nStud],r.s[i].voto2)
            }
            neg.nStud++;
        }

    }
}
