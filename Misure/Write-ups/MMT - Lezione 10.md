---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 10 - 

## Trasduttori Capacitativi

Basati sulla misura di capacità, usiamo la equazione della capacità:
$$C= \mathcal{E}_{o}\mathcal{E}_{r} \frac{A}{D}$$
In questa equazione possiamo cambiare, tutto tranne $\mathcal{E}_{o}$, quindi ci sono trasduttori diversi basato su cosa cambiamo per ottenere la nostra misura.

### Cambio di $\mathcal{E}_{r}$

Un tipo di trasduttore muove un pezzo tra due lastre del condensatore, cambiando la posizione cambia la capacità che possiamo misurare:

<!Diagramma spostamento tra lastre>

Mettendo un lato in liquido, si può cambiare il livello del liquido e poi ricavare il cambio in capacità, questo metodo è usato molto nei serbatoi

<!Diagramma pg.27 e quello disegnato>

### Cambio di A:

Possiamo cambiare l'area in vari modi, tutti questi costituiscono un cambio della capacità:
<!Diagramma cambio di A>

### Cambio di d:

Cambiando la distanza tra le lastre cambiamo la capacità:

<!Diagramma cambio di d>

È possibile creare condensatori dove un'armatura è il misurando, dove possiamo misurare allora d:

<!Diagramma pg.23>

Misuriamo la capacità con il ponte di Wheatstone usando la stessa logica che abbiamo usato fino a questo punto:

<!Diagramma ponte di wheatstone pg.25>


### Valori Tipici

- Portata: 0,05 ÷ 10 mm
- Sensibilità: 1 ÷ 200 V/mm
- Risoluzione: 0,02 % fondo scala
- Linearità: > ± 0,2 % fondo scala

Come le correnti parassite ci sono portate piccole e sensibilità alte.

#### Vantaggi di Capacitativi:
- elevata sensibilità e stabilità
- poco sensibili alla variazione di temperatura
#### Svantaggi rispetto a parassitici

- sensibili alle variazioni di capacità del cavo
- sensibili alle variazioni delle caratteristiche del dielettrico (acqua, olio, umidità), questo non è un problema per i parassitici infatti sono usati in questo caso come negli esempi che ha fatto

## Laser a Triangolazione $\to$ usato molto in industria

Un diagramma per il principio di funzionamento è:
<!Diagramma principio di funzionamento>

La creazione del punto dal laser manda luca in tutte le direzioni.

Diverse posizioni proiettano in direzioni diverse, quello che misuriamo è questo cambia nella proiezione e possiamo avere un idea della distanza.

Se la superfice su cui puntiamo il laser è uno specchio, allora non si vede dato che questo rimbalza a non crea un punto da cui la luce viene emessa in tutte le direzioni.

Di solito sono digitali, esiste ancora un analogico ancora in uso.

<!Diagramma sensore analogico>

#### Funzionamento del Sensore Digitale

La luce arriva su un pezzo di una certa lunghezza su cui sono posti dei sensori, e la distribuzione della intensità della luce che raggiunge ogni sensore ci indica la distanza.

<!Diagramma pixel e distribuzione>

Un diagramma dettagliato del sistema è:

<!Diagramma dettagliato pg.32>

Per rendere indipendente dalla intensità e invece dalla somma si usa $\frac{\text{differenza}}{\text{somma}}$, si usa poi la taratura per determinare la distanza.

<!Diagramma pg.34>

Riducendo l'angolo si aumenta il campo di misura. Con lo stesso costo e oggetto allora possiamo misurare campi di misura diversi.

### Caratteristiche Laser:

- raggio laser solitamente visibile (spesso rosso $\lambda = 675\mu m$)
- spot di piccole dimensioni ($\phi = 0,1-1mm$)
- Poco sensibili alla rugosità superficiale e alle variazioni di colore del target.

### Valori Tipici

- Portata: ± 0,25 ÷ 300 mm
- Distanza di misura: 5 ÷ 500 mm
- Linearità: 2 ÷ 600 μm $\to$ molto piccolo
- Risoluzione: 0,1 ÷ 60 μm $\to$ dipendente dal numero di pixel, che sono costosi
- Tempo di integrazione: 0,01 ÷ 30 ms $\to$ molto importante in dinamica

La portate è un vantaggio rispetto ai parassitici e capacitativi perché possiamo usarlo in campi simile e campi diversi.
Più lontana e la distanza di misura più grande è la portata, non possiamo misurare molto vicino al misuratore però.

### Applicazioni

- Posizione braccio robot
- Misura di vibrazione, con i parassitici se ci fossero delle vibrazioni importanti urterebbe il trasduttore, con il laser si può mantenere una buona distanza.

<!Diagramma pg.37 e 38>

- Misura di livello
- Misura di spesso, sapendo offset da due lati

#### Laser a Sbarramento

<!Diagramma pg.39>

Crea un piano di luce, con fotosensore, se passa un'oggetto crea un ombra da cui si può allora misurare il diametro. Mettendo due si può misurare la larghezza.

## Encoder 

Gli encoder sono un'altro tipo di trasduttore, usati per misurare il cambio nell'angolo e la velocità angolare.

Si monta sull'albero che si vuole misurare a contatto, questo lo possiamo fare perché internamente non è a contatto e funziona con un principio a non contatto.

Ci sono due tipi di encoder, quello rotativo e quello riga ottiva

<!Diagramma rotativo e riga ottica>

Sapendo la distanza tra buchi e il numero di buchi passati sappiamo lo spostamento.

Il numero di buchi che ci sono su un diametro, aumenta la risoluzione della nostra misura.

In molti casi vediamo l'aggiunta di un pezzo fisso per aumentare il contrasto tra buco e non buco per migliorare la certezza dei nostri risultati..

<!Diagramma encoder con pezzo fisso>

Un immagine più dettagliata di un encoder:

<!Diagramma pg.46>

Il segnale che esce da un encoder incrementale è:

<!Diagramma segnale encoder incrementale>

Un encoder incrementale è un encoder per cui sappiamo che l'angolo sta cambiando, non ci dice in che direzione sta cambiando perché non ci riporta un direzione quindi sappiamo solo che esiste una velocità angolare.

L'uso principale di un encoder incrementale è di sapere la velocità angolare di un albero.

Esistono encoder incrementali bidirezionali, questi encoder usano due corone con buchi leggermente sfasati per sapere le direzione, questo è perché sappiamo che in una direzione la corona esterna sarà in anticipo invece nell'altra la corona interna sarà in anticipo.

<!Diagramma pg.49>

Il numero di buchi è dipendente da cost è dimensione del disco, molti buchi e un disco piccolo aumentano il costo.

Contando le tacche che passiamo in un dato intervallo di tempo, possiamo determinare la velocità angolare. Questo è lo stesso principio di funzionamento delle ruote foniche che usano un trasduttore a correnti parassitiche. 

<!Diagramma ruota fonica>

Questo tipo di funzionamento lo mettiamo sulla ruote di una moto o macchine per calcolare la velocità angolare che poi possiamo usare anche per l'ABS.

### Encoder Assoluto

È possibile creare un encoder assoluto, il cui scopo è di determinare l'angolo assoluto del nostro albero.

<!Diagramma pg.52>

Creiamo una ruota con corone a buchi alternanti, questo ci permette di codificarlo in binario, possiamo usare tra 2 a 16 corone basato sulla precisione che vogliamo.

#### Errore di Lettura
Un problema con questo è che esistono, punti dove l'angolo potrebbe esser due, possibili, questo causa problemi perché il sistema sceglierà ogni bit in modo arbitrario e per ciò è possibile che scelta una sequenza di bit che indica un angolo completamente erroneo.

Per evitare tale errore usiamo un codice gray, questo è un sistema dove ogni angolo è un codificato con un bit differenza da quello prima, questo significa che l'errore di letture sarà contenuto tra i due angoli tra cui stiamo misurando e non c'è possibilità di indicare un angolo completamente sbagliato.

### Errore per Arrotondamento
La capacità del cavo di collegamento limita la frequenza di uscita, se questa è superata causa un arrotondamento al fronte onda delle onda quadre:

<!Diagramma arrotondamento>

Usiamo grafici per sapere il limite di ogni cavo e determinare il cavo utile per il segnale che ricaviamo.

<!Diagramma pg.62>

### Problema di Giunto

Giunti accomodano discrepanze angolare e di distacco coassiale.

### Utilizzi Tipici di Encoder

<!Diagramma pg.66>

- Encoder che misura rotazione vite (e.g. in tornio parallelo)
- Misura dei giri di pinioni(?) da cremoliera(?) o cinghia.

<!Utilizzo tipico pg.68>

Usato in sistemi closed loop per controllare che il motore fa quello che vogliamo che faccia.

## Analisi di Fourier

La analisi di Fourier e l'analisi o segnali che possono esser visti con somma di funzioni armoniche. 
Consente il scomporre del segnale in un insieme di tante componenti armoniche. 
È per ciò possibile studiare quali e quante frequenze sono presenti nel segnale.

Non studieremo come usarlo, sono come funzione per i nostri usi. Sarà molto utile nella dinamica.

Prendendo una funzione sinusoidale e una con 3 volta la sua frequenza e un terzo della amplitudine, la somma ci torna ad esser:

<!Diagramma sinusoidi e somma>

Aggiungendo continui segnali di frequenza di multiplo crescente disparsi, quando il numero di segnali tende ad infinito troviamo che la somma è una funzione quadrata:

Con frequenza 1, 3 e 5:
<!Diagramma n = 5>

A sinusoidi dispari infinite:
<!Diagramma segnali dispari e segnale guardo>

Prendendo invece le funzioni con funzione che ha frequenza con multiplo pari, troviamo che la somma tende ad una forma a dente di sega:

<!Diagramma dente di sega>