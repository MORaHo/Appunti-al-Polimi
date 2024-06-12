---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 17 - 

## Senosori Lineari

Si usa un striscio, come detto l'ultima lezione, ci sono esempi a colore e a mono-colore, quelli a colore usano 3 strisce per catturare lo spettro RGB.

## Trigger Esterno

Quando c'è una posizione, un sistema usando un segnale e poi possiamo prender l'immagine invece di fare molte foto ridondanti per forse catturarne una utile.

## Telecamere Digitali

In tutte le telecamere digitali la conversione analogico-digitale è integrata nel sistema e poi questo sistema è connesso ad un sistema di processo, per render l'informazione utile.

## Interfacciamento delle telecamere

1. Diretto (USB, gigabit ethernet)
2. Tramite hardware dedicato $\to$ computer a cui si attacca una scheda che si connette alla telecamera

<!Diagrammi pg.41>

### USB

L'USB è lo standard di collegamento, creato per standardizzare il metodo di trasmissione di informazione, ci sono diversi cavi per usi diversi.

#### Vantaggi di USB

- Volontà di collegamento
- Alimentazione diretta

#### Svantaggi di USB

- Non esiste uno standard per telecamere USB per cui ogni dispositivo deve avere i suoi driver
- Il tempo di trasferimento da telecamera a computer non è deterministico.

### TCP-IP

Protocollo internet per il trasferimento digitale tramite cavi ethernet

<!Diagramma pg.44>

#### Vantaggi

- Protocollo e hardware molto diffuso
- TCP-IP permette di sostituire le telecamere senza problema

#### Svantaggio

- Dato che usiamo internet il tempo di acquisizione dipende dalla banda e rete interno a noi nel istante.

### Camera Link

Il camera link è un collegamento standard di telecamera con una scheda. La scheda fa tutto il lavoro di processo è manda l'informazione finalizzata.


## CMOS rolling e global shutter

I sistemi CMOS possono venire in 2 tipi, rolling o global shutter.

Il rolling shutter intende che la immagine è presa linea per linea in orizzontale e verticale, invece global shutter significa che la immagine intera è presa ad un istante. Il rolling shutter costa meno però causa delle distorsioni nelle immagini se ci sono parti movementi.

<!Diagramma pg.47>

## Pre-processing delle immagini

Le operazioni di pre-processing sono utili per:
- evidenziare dettagli
- ridurre rumore
- eliminare distorsione dell'immagine

Le immagini possono esser utilizzate come proiezioni piane della scena reale tridimensionale per lo scopo di prendere misure. In particolare per:
- misure monodimensionali
- misure bidimensionali

L'esercuzione di misure su immagini necessita della massima attenzione per le possibili distorsione create durante le formazione dell'immagine.

Bisogna per ciò por attenzione verso le:
- espressione di pixel in misure reali
- distorsioni di aberrazione ottica

## Prospettiva e Aberrazione ottica

### Prospettiva

Questo è effetto dell'angolo dell'immagine rispetto al soggetto dell'immagine

<!Diagramma prospettiva>

### Aberrazione Ottica

La aberrazione ottica è una deformazione della immagine ai lati, dato generalmente da un'angolo di visto grande e anche della prospettiva.

<!Diagramma aberrazione>

### Warping

Possiamo compensare la aberrazione e prospettiva usando il warping dell'immagine.

#### Operazione

Si prende un lastra con griglia si pone dove voglia che ci sia il nostro soggetto. Vediamo quindi la distorsione della griglia nella immagine scattata, e possiamo porre un filtro di warping per rendere la griglia come dovrebbe esser.

Si prende poi l'immagine e si pone lo stesso filtro per deformarla alla forma giusta.

Il warping causa la creazione di area dove prima c'era immagine e ora no o vice versa.
Con questo metodo possiamo compensare per la prospettiva e aberrazione allo stesso momento.

<!Diagramma pg.55 e 56>

## Operazioni sul singolo pixel

$$g(x,y) = h[f(x,y)]$$

Possiamo prendere i numeri di ogni pixel a cambiare i valori. Per diversi scopi.

## Operazioni sull'intorno del pixel

In queste operazioni si opera con una convoluzione con matrici. Queste operazioni sono chiamate filtri e ci sono diverse dipendendo dalla complessità e il nostro obbiettivo.

Un filtro che riduce rumore come filtro passa basso, riducendo lo sfuoco e amplificando l'intensita
<!Diagramma alto pg.59>

O il filtro si Sabel che crea il contro dell'immagine, ci sono molti filtri simili a questo.

<!Diagramma basso pg.59>

I filtri possono esser molto potenti per diverse operazioni di misura.

## Operazione sull'immagine intera

Ci sono operatori che lavorano su immagini intere. Come la trasformata di Fourier che è usata per rimuovere disturbi.

## Visione per le misure

Con la visione è possibile fare diverse operazione di misura come:
- misurare un punto singolo
- misure di punti contenuti sul piano
- misure di forme 3D
- misure di spostamento
- misurare campi di spostamento di deformazione

### Misure del Punto

<!Diagramma pg.63>

Il laser a triangolazione è un sistema per misure un punto singolo che usa gli stessi principi di funzionamento.

### Misure di Profili 3D

Usiamo profilometri che mandano un laser sul profilo da misurare poi si usa una telecamera per vedere e tracciare come il laser si deforma lungo la superfice.

<!Diagramma profilometri>

### Misure di Superfici

Per questo possiamo usare un sistema scanner e frange. Questo proietta una sequenza di linee nere e bianche che poi si deformano sulla superfice, cosi possiamo determinare la geometria.

## Misure Bidimensionali

Per fare misure bidimensionali ci dobbiamo risolvere ad usare algoritmi come:

- Edge Detection
- Blob Analysis
- Pattern Matching a livello di grigio
- Pattern matching geometrico

### Edge Detection

Con la edge detection si da un immagine, poi usiamo dei filtri per trovare il bordo. Questo è usato anche per misurare il bordo.

<!Diagramma pg.68>

Si usa il cambio di luminosità per trovare il bordo della forma. Un esempio in industria è nella misure delle dimensioni di una pezzo lavorato:
<!Diagramma pg.69>


### Blob Analysis

Possiamo trovare la forma, e poi trovare il baricentro, area, perimetro e altre analisi della forma

<!Diagramma pg.68>

Un esempio è il trovare le dimensioni e altre informazioni su dei pezzi d'industria:
<!Diagramma pg.70>

## Pattern Matching

Nel pattern matching si ha un'immagine di quello che vogliamo tracciare e poi in un'immagine da analizzare troviamo la immagine originale.

Se avessimo un video significherebbe che potrebbe inseguire un'oggetto che si muove.

<!Diagramma pg.75>

Si può dire a robot di andare ad un certo punto, dandogli un'immagine della roba che dovrebbero vedere e facendoli avanzare in quella direzione.

A grigio, cerca l'immagine o con i bordi, cerca i bordi. Quest'ultimo è molto più flessibile nei casi naturali dove c'è molta roba e ci sono pezzi su l'un l'altro.

<!Diagramma pg.76>


