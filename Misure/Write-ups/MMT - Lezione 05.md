---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 5 -

## Configurazioni di ingresso nei sistemi di conversione A/D

Un semplice sistema di conversione può esser disegnato così:
<!Diagramma sistema semplice>

Dove T è un trasduttore
C - modulo di condizionamento (condizionatore) composto da:
- amplificatore
- filtro anti-aliasing

Il tempo di conversione è il tempo impiegato a fare la conversione in bit ($t_{a}$ = aperture time)

Se la grandezza G varia durante $t_{a}$ implica un error di $\Delta G$
Se il segnale cambia durante la conversione, aggiungiamo un passo chiamato sample and hold al sistema

<!Diagramma sistema con sample and hold>

Questo passo prende il segnale d'ingresso e aspetto, prendiamo il valore e lasciamo che viene convertito prima che prendiamo il prossimo valore, questo significa che la nostra funzione sarà rappresentative di solo alcuni punti nella funzione.

Esistono configurazioni a più canali, nel sistema più facile (e allo stesso tempo più complesso in termini di parti), ogni canale a un suo di conversione dedicato, permettendo la contemporanea registrazione di dati di diverso tipo, tutto questo è poi portato ad un registratore centrale che li memorizza.

<!Diagramma sistema completo per canale>

Altri sistemi usano un multiplexer. Nel caso di prima, il costo è molto elevato e in molti casi non è necessario registra molta informazione allo stesso momento, il mulitplexer agisce come un conduttore passa di canale in canale prendendo l'informazione da li e permettendo la sua conversione, questo non è molto buono perché significa che i dati che prendiamo non saranno tutti allo stesso tempo perché i canali non attivi continueranno a prendere valori nuovi anche quando non sono attivi nella registrazione.

<!Diagramma multiplexer>

In alcuni casi si può muovere l'unico sistema di stop and hold, e ne mettiamo uno su ogni canale, questo ci permette di prendere informazione tutto allo stesso momento, e riduce i costi ma è più lento.

<!Diagramma multiplexer con s/h per ogni canale>

La massima frequenza di acquisizione è il numero di dati ricavabili a secondo. In casi come quello del multiplexer senza stop and hold, questo frequenza è quella del sistema intero ed ogni canale avrà solo una parte di quella frequenza.

## Inizio di Acquisizione

Opzioni:
1. a $t_{0}$ scelto
2. ad un dato "trigger"

Tipi di trigger, segnale di riferimento:
- uno dei canali da acquisizione va sopra ad un valore attivando il sistema
- un segnale "esterno" per esempio una fotocellula, questo valore non è registrato ma è solo usato per innescare la reigstrazione.

In alcuni casi è utile un pre-trigger, questo è un sistema che memorizza gli ultimi n secondi e li cancella per poi riempire con i nuovi dati, questo permette la registrazione del stato prima del trigger, il pre-trigger smette la registrazione quando il trigger è partito.

## Campionamento Asincrono e Sincrono

Un campionamento asincrono è un campionamento ad una frequenza fissa.

Un campionamento sincrono è uno che si sincronizza con il fenomeno.

<!Diagramma sincrono-asincrono>

Il sistema asincrono non riesca a rappresentate bene i valore, ma mantiene la forma, invece quello sincrono riesca tenere a pass con la velocità ma cambia la forma dei dati.

### Esempio Sincrono


<!Diagramma ruota fonica con sensore>

Un altro può esser una cava o risalto su un'asse.

<!Diagramma cava o risalto>

## Caratteristiche Statiche di Strumenti di Misura

Per misurare misure che non cambiano nel tempo.

Caratteristiche statiche:

1. Diagramma di taratura (e caratteristiche ad esso correlate)
2. Risoluzione
3. Ripetibilità
4. Riproducibilità
5. Stabilità
6. Deriva
7. Isteresi

1. Diagramma di taratura
- Relazione che permette di ricavare da ogni valore di lettura fornito da un dispositivo, per misurazione e/o regolazione, la misura da assegnare al misurando.
2. Risoluzione
- Abilità di discriminare due stati diversi di un misurando
3. Ripetibilità
- La concordanza tra misure ricavate dopo breve tempo
4. Riproducibilità
- Ripetibilità ma anche a tempi diversi, luoghi diversi e condizioni diverse.
5. Stabilità
- Capacità di mantenere valore stabile nel tempo
6. Deriva
- variazione in funzione di una grandezza d’influenza (tempo, temperature, ecc.) di una caratteristica metrologica di un dispositivo di misura.
7. Isteresi
- Proprietà di fornire valori di letture diversi per microdeformazioni accumuate nel tempo nel trasduttore, bisogna evitare o ridurre.

Classe di strumenti - categoria convenzionale di strumenti che rispettano diversi limiti riguardo alcune caratteristiche metrologiche.


| Obbiettivo                   | Operazione            |
| ---------------------------- | --------------------- |
| Stabilire comportamento      | Taratura              |
| Verificare il comportamento  | Verifica di taratura  |
| Documentare il comportamento | Relazione di taratura |

## Taratura

La tarature è l'operazione di stabilire il comportamento del utensile di misurazione, usando valori noti con bassissima incertezza come ancore da cui stabilire il comportamento, e.g. usando masse note per stabilire la tensione elettrica generata nel sistema.

Bisogna usare misurandi di incertezza minore per tarare effettivamente.

Riferimento - campioni con incertezza minore del nostro strumento per verificare la capacità di taratura

### Taratura: Caso ideale

X $\to$ Y = f(x) $\to$ Y

In base troviamo la legge e poi si usa questa legge per trovare la misura:

<!Diagramma grafico taratura e misura>

La grandezze di influenza sono quelle che generano l'incertezza nel nostro sistema

### Taratura: Caso Reale

Per ogni ingresso, avremmo risultati variabili, questa variabilità è l'incertezza del nostro misuratore.

<!Diagramma caso reale>

In questo caso i valori che usiamo nella taratura devono esser scelti e usati in ordina casuale, questi riduce la variabilità data dall'isteresi e permette un campionamento effettivo. Dopo questo serve trovare la incertezza ad ogni valore usato nella taratura.

La curva che abbiamo ricavato è un relazione biunivoca, quando mettiamo un valore un secondo valore è ritornato e non c'è domanda.

Per compensare aggiungeremo due e fasce per identificare l'incertezza

La linea di media viene fatta con i valori media, anche essi avranno un'pò di variabilità, quindi si sceglie la retta che approssima meglio e si tiene a mente che potrebbe non esser giusta, pero più valori significa una linea di media che approssima meglio.