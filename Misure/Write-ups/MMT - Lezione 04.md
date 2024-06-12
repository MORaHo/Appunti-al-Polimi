---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 4 - Sistema di Unita e Aliasing

Un unità di misura e un termina di riferimento adottato per convezione per confrontare un grandezza con altre della stessa specie.

Definizione sistema di unità:
Insieme organico di definizioni di unità di misure pertinenti a
grandezze di specie diverse tra di loro collegate.

Un campione è il termina di riferimento nell'ambito delle grandezze della stessa specie che costituisce l'unità di misure.

I campioni devono esser:

- Accurati
- Accessibili
- Riproducibili
- Invariabili


Esistono grandezze fondamentali e grandezze derivate, le grandezze derivate sono derivata dalle grandezze fondamentali.

I sistemi di unità di misura possono esser non coerenti, cioè ogni grandezza a la sua unità di misura, o possono esser coerenti/assoluti, cioè ogni unità di misura è derivata da una base di unità di misura

Caratteristiche del sistema di unità SI:
- Universali
- Stabile $\to$ non cambia nel tempo
- Accurato $\to$ basse incertezza (più bassa possibile)
- Pratico
- Coerente
- Uniforme
- Decimale

Il SI ha le grandezze fondamentali che sono:

| Grandezza             | Unità |
| --------------------- | ----- |
| Lunghezza             | m     |
| Tempo                 | s     |
| Massa                 | kg    |
| Temperatura           | K     |
| Intensità di corrente | A     |
| Intensità luminosa    | cd    |
| Quantità di materia   | mole  |
Ci sono anche due grandezze supplementari che sono:
- angolo piano $[\text{radiente}]$
- angolo solido $[\text{steradiante}]$

Ogni unità di può ricavare con:
$$\text{Unità SI}: m^{\alpha_{1}}+kg^{\alpha_2}+s^{\alpha_{3}}+A^{\alpha_{4}}+K^{\alpha_{5}}+cd^{\alpha_{6}}+mol^{\alpha_{7}}+rad^{\alpha_{8}}+sr^{\alpha_{9}}$$

Grandezze fondamentali derivate:


| Grandezza               | Unità di misura |
| ----------------------- | --------------- |
| Frequenza               | Hz              |
| Forza                   | N               |
| Energia                 | J               |
| Pressione               | Pa              |
| Potenza                 | W               |
| Potenziale<br>Elettrica | V               |
| Capacita                | F               |
| Resistenza              | $\Omega$        |
| Induttanza              | H               |
| Flusso<br>Magnetico     | Wb              |
Il decibel è l'unica unità misura che non possiamo usare quella equazione perché è un unita di misura creata per modellare il suono che sentiamo, non sentiamo il suono in modo lineare.

$$dB = 10\log_{10} \frac{P_{2}}{P_{1}}$$
Quando lo stiamo misurando vediamo la differenza in tensioni non nelle pressioni:

$$dB = 20\log_{10} \frac{V_{2}}{V_{1}}$$

<!Tabella di decibel>

## Digitalizzazione dei Segnali

Molti degli strumenti che usiamo convertono un segnale analogo in un segnale digitale. Per questo serve il campionamento continuo del misurando.

I segnali prevenienti dai trasduttori sono continui nel tempo e possono assumere tutti i valori fra un limite inferiore e uno superiore. I segnale analogo, varia nel tempo con continuità, ogni valore (ci sono $\infty$) ha $\infty$ cifre.

Per registrate questo si fa la conversione analogico digitale.

Il segnale analogico è disponibile all'utente con continuità nel tempo, può assumere un numero infinito di valori. Invece il segnale digitale è disponibile in forma discreta nel dominio del tempo.

Il segnale analogico è convertito prendendo un numero finito di campioni in intervallo di tempo $\to$ campionamento

Osserviamo il segnale un certo numero di volte al secondo e registriamo queste misure.

Ci sono molti sistemi di conversione con diverse caratteristiche:
- convertitore analogico-digitale
- convertitore digitale-analogico

Molti convertitori sono analogici che poi sono convertiti in digitali.

I vantaggi della conversione:
- elevata insensibilità ai disturbi
- bassa incertezza con costi relativamente contenuti
- ripetibilità e riproducibilità
- compatibilità con sistemi di calcolo (computer)
- facilità di manipolazione, trasmissione, registrazione e riproduzione

Ci sono due fasi nelle conversione:
- Campionamento
- conversione A/D

### Metodo di Digitalizzazione

I dati in termini di tensione vengono convertiti in bit, questi bit rappresentazione se il valore è sopra o sotto una media più e più vicina al valore registrato.

<!Diagramma dimezzazione >

In questa rappresentazione i bit più importanti alla approssimazione sono alla sinistra mentre i bit che si avvicinano più e più al dato sono quelli alla destra.

L'arrotondamento al binario è una sorgente di incertezza ma questo è minimo.

Molti sistemi arrotondano a 8 fino a 32 dipendendo dal bisogno però in generale la maggior parte usano 16 bit.

Questo arrotondamento significa che avremo una funzione a scalini per i successivi arrotondamenti che facciamo:

<!Diagramma scalini>

Con più bit i nostri arrotondamenti aumentano qualità della approssimazione della funzione vera.

Se i fondi scala che abbiamo impostato sono troppo grandi è possibile che stiamo usando bit inutilmente a creare un risoluzione inutilmente accurata, per risolvere questo possiamo cambiare il numero di bit che usiamo, cambiare i fondi scala o più comunamente possiamo amplificare il segnale per portare il nostro massimo e minimo di tale segnale pari ai fondi scala.

### Media nel segnale

In molti casi il segnale che abbiamo avrà una media intorno a cui avremo variazione, non lo vogliamo in generale perché ci importano le variazioni e se ci possiamo contrare su quelle allora è meglio.

Ci sono tre modi per togliere la media:

- Sommatori di tensione che rimuovono la tensione media
- Filtro AC - toglie le variazioni con periodo corto $\to$ più adattato se la media cambia
- Tanti altri

Dato l'esempio del filtro:

<!Diagramma filtro AC>

In questo caso separiamo il nostro segnale con Fourier in parte con alta, media e bassa frequenza, con questo togliamo quelli che hanno una frequenza alta e riusciamo a tenere le parti che variano che vogliamo misurare.

## Aliasing

Data la natura continua dei dati analogici che studiamo, non possiamo prendere tutti i dati, per questo prendiamo i dati ad un data frequenza tale per darci un'immagine di quello che stiamo studiando

<!Diagramma sinosoidi>

Un problema con questo è l'aliasing. L'aliasing è quello che occorre se prendiamo dati ad una frequenza troppo bassa rispetto al segnale analogico. Durante l'aliasing la mancanza di dati causa la approssimazione di una funzione che non è rappresentativa del segnale vero.

<!Diagramma sinosoide linea rossa>


Per non avere l'aliasing bisogna avere la frequenza <u>almeno</u> 2 volte più alto di quello di segnale.

L'aliasing non è correggibile posteriormente, però può esser evitato alzando la frequenza di presa di dati e se non si sa la frequenza del segnale analogico, si può aggiungere un filtro.



