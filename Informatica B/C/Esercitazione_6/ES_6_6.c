#define MAX_STRINGA 256

void main() {
    char stringa[MAX_STRINGA+1];
    char temp;
    int i;
    int passi;
     int scambi;
    printf("Da stringa: ");
    gets(stringa);
    do
    {
        scambi = 0;
        for(i = 0; stringa[i+1] != "\0"; i++)   {
            if(stringa{i}>stringa[i+1]) {
                temp = stringa[i];
                stringa[i+1] = stringa[i];
                stringa[i+1] = temp;
                scambi = 1;
                printf("%d: %s\n",passi,stringa);
            }
        }
        passi++;
    } while (scambi);
    
    
}