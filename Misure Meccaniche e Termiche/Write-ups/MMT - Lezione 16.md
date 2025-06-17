---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 16 - 

Sismometri e accelerometri sono comodo perché ci danno le accelerazioni assolute. Gli accelerometri sono basati sul funzionamento finisco su quarzo.

## Servoaccelerometro

<!Diagramma pg.29>

I servo accelerometri usano un sistema massa, molla e smorzatore per misure la accelerazione. A questo sistema viene aggiunto un induttore per cui possiamo misurare la induttanza e per ciò trovare la accelerazione della massa.

Se molle sono fatte così la massa non scappi a 0, ma non avere molto effetto quando è presente accelerazione.

Il funzionamento vero è con la bovina, si fa passare una corrente alternata per generare un campo magnetico. La massa è libera di scorrere per piccoli spostamenti nella direzione della sensibilità. 

C'è un trasduttore capacitativo che misura lo spostamento di M. Il segnale da C va ad un'amplificatore che poi alimenta la bovina. Vogliamo che la massa di stessa nello spesso punto, quindi la corrente che va alle bovine è proporzionale alla forza applicata a M, questo è tale che possiamo tenere la massa nello stesso punto. Se riusciamo a tenere la massa nello stesso punto significa che quella corrente passata nella bovina è proporzionale alla forza sulla massa, questo può esser usato per trovare la massa.

Un sistema servoaccelerometrico è costituito da:
- massa sismica (con frequenza propria <1Hz che viene dalla molle)
	- Le molle sono deboli invece detta di avere una "rigidezza elettrica molto maggiore"
- trasduttore di spostamento molto sensibile
- sistema elettronico che, grazie ad una bobina e ad una corrente circolante, mantiene la massa fissa rispetto allascatola

Il diagramma di funzionamento per questo sistema e di uno di retroazione/autocontrollo, per avere la accelerazione e posizione giusta

<!Diagramma pg.31>

### Valori Caratteristici

- molto sensibile (1000V/g)
- accelerazione a bassa frequenza
- campo di impegno 0-500 Hz $\to$ limitato dal sistema di retroazione, può misurare ad accelerazione costante quando $w=0Hz$
	- L'accelometro sono a $w=1$ non è molto buono invece i servoaccelerometri vanno bene
- strumento delicato quando non alimentato
## Fissaggi Accelerometri

- perni filettati
- cera d'api $\to$ funziona bene
- colla
- magnete permanente $\to$ per macchine dove si fanno molto misure in punti diversi
- sonda tenuta manualemene
- nastro biadesivo

Il problema è che quando uso una di queste opzioni, quella avrà la propria resistenza e smorzamento

<!Diagramma pg.35>

A frequenze più alte bisogna stare attenti. Si usa perno fare misuramenti caricati elettricamente.

Applicano l'accelerometro, si cambia di un'pò misure di accelerazione, questo può cambiare le frequenza (abbassando le frequenze proprie) e amplitudini a $w$ alte.

Molto importante per misurandi a basse frequenze.

## Taratura Accelerometri

Dobbiamo usare un'accelometro già tarato per tarare il nuovo.

Un metodo è back to back:
<!Diagramma pg.41>

Un'altro metodo è mettendo i due a lati opposti della tavola vibrante:
<!Diagramma pg.42>

Ci sono sistemi portatili per tarare gli accelerometri:
<!Diagramma pg.44>

## Taratura di Servoaccelerometri

Si può usare la accelerazione di gravità come punto di riferimento dato che riescono a misurare a $w=0$. Si fanno altre misure come gli accelerometri per trovare definitivamente.

## Misure attraverso sistemi di visione

Il processo di formazione dell'immagine può esser inteso come il processo opposto della visione.

La formazione d'immagine è il processo di creare un immagine da un'oggetto, invece la visione è la determinazione di un oggetto da un'immagine.

#### Visione Umana vs Artificiale

<!Diagramma tabella>

Le immagini digitali in bianco e nero si ottiene un file, che è composto da una matrice dove ogni cella rapresenta la inintesità della luminosità del colore.

$$I = f(x,y,t)$$

Un immagine una mappa di intensità della luce fissata t.

Valori temporali:

- tempo di esposizione
	- tempo di acquisizione per cui i nostri valori sono determinati
	- shutter time
	- La immagine è l'integrazione dell'intensità della luce a diversi punti
- Numero di immagini che vogliamo prendere al secondo

Valori di Luminosità:

- di solito ogni valore d'intensità e tenuti in un valore di 1 byte, quindi ci sono 256 valori possibili di luminosità
- Per l'ingegneria di solito sono in bianco e nero perché di solito non ci importa il colore
- Nel caso di immagini a colore si usando 3 pixel invece di 1 nel formato RGB

## Sistemi per acquisizione di immagini

Ci sono 2 sistemi tipi di acquisizione di immagini:
- bidimensionale
- lineari, che acquisiscono una linea alla volta (per scanner o laminazione)

## Sensori

- CCD o CMOS
- mono colore o a colore
- lineari o matriciali

## CCD $\to$ da anni 70

- composto da pixel sensibili alla luce, che agiscono come cella fotovoltaica. (non guarderemo il motodo di funzionamento)
- campo di sensibilità simile a quello umano, campo visibile.

## CMOS

I CMOS sono sistemi di acquisizione più moderni.

- Hanno area matrice di pixel
- Realizzato con tecnologia simili ai microprocessori, per questo riusciamo a creare chip con parti sensibili alla luce poi parte di conversione e processing digitale. Il grossi vantaggi dei CMOS sono la possibile compattazione e risparmio energetico.

## Vantaggi e Svantaggi
#### Vantaggi CMOS su CCD

- Accesso casuale ai pixel
- Maggiore dinamica
- costo decisivamente inferiore
- livello di integrazione superiore
- consumi energetici inferiori
- possibile integrare funzionabilità
- anti-blooming e anti-smearing

#### Svantaggi

- rapporto segnale/ disturbo peggiore
- peggiore sensibilità, ogni pixel è più piccolo
## Approfondimenti
#### Approfondimento sull'accesso casuale

L'accesso casuale significa che possiamo acquisire tutta l'immagine o solo pezzi dell'immagine, aumenta la velocità di acquisizione se solo una parte è acquisita.

Possiamo definire una region of interest.

#### Approfondimento Dinamica

Permette di avere sensibilità diverse in base alla luminosità.

Si può fare una linearizzazione logaritmica come qui:
<!Diagramma pg.23>
Per rendere dettaglio maggiori.

## Rumore Termico

Acquisendo immagini, c'è un effetto termico sui sensori. Se a buio aumenta il tempo di esposizione, si integra la luce ma anche il rumore di fonde della temperatura dell'ambiente e della telecamera stessa, questo è perché aumentando la il tempo la temperatura si può omogalizzare.

## Effetto Moiré

Effetto che appare su tessuti a fibre piccole:
<!Diagramma pg.25>

## Ottenimento di Immagini Digitali a Colore

### Mono-chip
Si usano filtro a mosaico. Davanti ad ogni pixel si mettono filtri di colore a diversi colori:

<!Diagramma pg.28>

Bisogna poi fare un'interpolazione per determinare la intensità di ogni colore basato sui vicini.
<!Diagramma pg.29>

Nell'industria questo non funziona, questo è perché questo approccio crea un'aliasing ai bordi delle figure, questo significa che non è possibile definire il bordo che ci serve per fare il processing dell'immagine.

### Altre Soluzioni

#### 3 chip
Ci sono metodi anche a 3 chip:

<!Diagramma pg.31>

Dopo l'ottica si ha un prisma che divide la luce e mettendo un filtro davanti ad ogni separazione della luce, questi poi vanno a sensori individuali che poi possiamo usare per ricostruire  l'immagine.

#### 3 scatti

Si fanno 3 scatti e poi si mette tutto insieme, questo è un'approcio a costo basso.

#### Foveon Technology

Ogni pixel ha 3 strati e poi si mette insieme, ma non utilizzato più a causa del filtro di Bayer (sistema a 1 chip)

<!Diagramma pg.33>

Il Foveon ha dei vantaggi ma giustificano abbastanza il suo costo elevato.