---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 20 - Misure di Temperatura a Contatto

I concetti che abbiamo visto nella ultima lezione sono la base della creazione di trasduttori per misurare la temperatura. 

#### Tipi di Strumenti per la misura di temperatura

- termometri a espansione
- termometri a resistenza metallica (termoresistenze)
- termistori
- termocoppie
- Pirometri e termocamere (termocamere)

Oggi guarderemo i primi 3.

## Termometri a espansione

- solidi $\to$ misure della flessione per dilatazione
- liquidi $\to$  dilatazione termica di mercurio e altri liquidi
- gas $\to$ PV = nRT per misurare T

### Dilatazione di Liquidi

La misura di fa usando liquidi che si dilatano significativamente, come il mercurio.

Il mercurio ha campo di misure tra $-39^{o}C$ e $538^{o}C$
Altri metalli invece hanno valori:
- alcool fino a $-60^{o}C$
- toluolo fino a $-90^{o}C$
- pentano fino a $-200^{o}C$
- miscela di propano e propilene fino a $-220°C$

Cambiando il materiale si possono fare misure a T molto basse, con costi bassi.
Il funzionamento è quello di un sistema di primo ordine raggiungendo il valore finale con crescita a poi spianatura.

In funzione dello strumento e liquido la incertezza può cambiare. La incertezza cambia specialmente con la temperatura.

#### Vantaggi

- Lettura immediata
- Facilmente utilizzabile
- Poco costoso
#### Svantaggi
- Fragile
- Non può esser ritarato
- Intervallo limitato
- Poco accurato $\pm 0,5^{o}C$

### Dilatazione di solidi

Si prendono due metalli con coefficienti di dilazione molto diversi e si mettono invece come:
<!Diagramma pg.36>

Poi quando si forma una $\Delta T$, la barra si incurva. Si possono allora fare delle misure guardando la variazione.

Questi possono esser usati come interruttori che agiscono a certe temperature.

Un esempio è:
<!Diagramma pg.38>
Altri:
<!Diagrammi pg.39 e 40>

#### Vantaggi
- Facile lettura
#### Svantaggi
- Campo di misure limitato
- Poco accurato $\pm 0,5^{o}C$

## Termometri a resistenza metallica (Termoresistenza)

Noti anche come RTD, questo tipo di termometro usa metalli che cambiano la loro resistenza in base alla temperatura.

Questo è per l'equazione:
$$R = \frac{\rho l}{A}$$
La temperatura agisce sulla lunghezza ed è quello che sfruttiamo per fare la misura della temperatura.

La resistenza ad una data temperatura è la resistenza a zero gradi moltiplicato per una somma di coefficienti di temperatura:

$$R_{T} = R_{0}(1+\alpha T+\beta T^{2}+\delta T^{3}+\dots)$$
Questi coefficienti dipendono dal materiale. In generla i materiali utilizzati sono:
- platino
- nichel $\to$ maggiore sensibilità
- rame $\to$ maggiore linearità

<!Diagramma pg.49>

La caratteristiche ideali del materiali sarebbero:
- $\alpha$ elevato $\implies$ elevata sensibilità
- $T_{fus}$ alto $\implies$ elevato campo di misura
- linearità
- stabile nel tempo

Il coefficiente $\alpha$ può esser trovato con:
$$\alpha = \frac{R_{100}-R_{0}}{100 R_{0}}$$

Il platino ha una incetezza di $\pm 0.5^{o}C$ tra $-200^{o}C$ e $150^{o}C$, possiamo dire allora che:
$$R_{T} \cong R_{o}(1+\alpha T)$$


#### Designazione delle termoresistenze

- Simbolo Pt
- Valore di resistenza a 0°C (R0)
- Classe di tolleranza
- Numeri di fili di collegamento
- Campo di temperatura di impiego

Usiamo $Pt$ perché il metallo più comunemente usato 

#### Costruzione di termoresistenze

<!Diagrammi pg. 53 e 45>

### Circuiti di Misura

#### 2 fili

<!Diagramma pg.55>

Misurando la resistenze con un multimetro usufruendo della legge di Ohm, possiamo fare una misura delle temperatura. C'è qualche incertezza che dobbiamo misurare.

Potremmo usare anche un ponte di Wheatstone data la resistenza variabile. Con questo però esiste la termoresistenza del cavo, quindi devono esser molto corit e non sotto posti ad alti $\Delta T$

<!Diagramma pg.56>

#### 3 fili

La soluzione ai problemi con i due fili è il sistema 3 fili.

<!Diagramma pg.58>

Aggiungendo un'altro cavo alla resistenza variabile nel ponte di Wheatstone. Questo rende $R_{c_{1}}$ e $R_{c_{2}}$ neganti rispetto a l'un l'altrto. Questo significa che con $\Delta T$ gli effetti di dilatazione si cancellano in termini di resistenza quindi non sono più importanti.

#### Vantaggi 
- ottima accuratezza
- elevato campo di misura
- stabili e lineari
#### Svantaggi
- costi
- sensibilità a vibrazioni e urti
- costante del tempo elevata a causa di involucro
- effetto Joule può causare errori

## Termistori

<!Diagramma pg.65>

Come termoresistenze ma con materiali semi-conduttori invece di materiali metallici, anche i semi-conduttori hanno $\Delta R$ negativa per $\Delta T$ positiva.

R diminuisce con $\Delta T$, ma possono esser "drogati" per cambiare questo comportamento tale che R aumenti con $\Delta T$, o in altri casi per cambia la risposta in una lineare visto che possono avere risposte estremamente non-lineari.

Perciò diamo due nomi dipendendo se la resistenza cambia con lo stesso segno del cambio della temperatura:
- NTC $\to$ negative temperatura coefficient
- PTC $\to$ positive temperature coefficient

I NTC hanno funzionamento come:
$$R_{T} = R_{0}e^{ (\beta(1/T-1/T_{0})) }$$
I PTC hanno funzionamento come:
$$R_{T} = R_{0}e^{ \beta(T-T_{0}) }$$


La parte semi-conduttore di solito è sinterizzata (compressa ad alta T) per avere una forma precisa. Ci permette anche di avere forme molto variabili e utile per diverse occasioni.

A causa delle tecnologia di realizzazione hanno coefficienti di temperatura molto più elevato rispetto alla termoresistenze.

Sono dunque strumenti molto sensibili ma molto non-lineari.

Dato che hanno $\Delta R$ alti per $\Delta T$, non importa la resistenza dei cavi, semplificandoci allora il calcolo e il sistema di misura.
#### Vantaggi
- libertà di forma
- piccole dimensioni
- tempi di risposta molto piccoli ($\tau$ bassi $\to$ molto pronto), massa con area possibilmente alta $\to$ possono esser molto pronti
- costi bassi
- possibilità di collegamento a 2 fili (resistenze dei cavi trascurabili)
#### Svantaggi
- campi di misura limitati
- non lineari
- fragili

## Termocoppie

Il funzionamento delle termocoppie è basato sull'effetto Seebeck. L'effetto Seebeck è quando due metalli sono connessi da giunti a temperatura diverse allora passa della corrente.

Questi sensori sono molto semplici sia in costruzione che funzionamento, permettendo la trasduzione della temperatura in f.e.m direttamente mediante effetto termoelettrico.

Il campo di misura ci permette di misurare temperatura molto basse e temperature molto elevate.

<!Diagramma termocoppia>

se $A=B \implies f.e.m=0$
se $\Delta T = 0 \implies f.e.m =0$

I giunti sono noti come giunto di misura a T non nota e giunto di riferimento a T nota.
#### Effetto Peltier

Questo è opposto di Seebech, dice che se ho due metalli e indico una corrente nel circuito, uno dei due giunti si riscalda e l'altro si raffredda.

Può esser usato per creare frigoriferi che non fanno rumore.

### Proprietà delle termocoppie

#### Proprietà 1

<!Diagramma pg.80>

Se ho 2 giunti a $T_{1}$ e $T_{2}$, $\Delta T$ nei fili non cambia la f.e.m generata. Importano solo le temperature dei giunti non dei fili.

#### Proprietà 2

<!Diagramma pg.82>

Se interrompo uno dei due e ci metto un'altro cavo, se i nuovi giunti hanno la stessa $T$ allora la f.e.m non cambia

#### Proprietà 3

<!Diagramma pg.83>

Se togliamo un giunto e ci mettiamo un cavo, basta che i due nuovi giunti hanno la stessa T allora la f.e.m non cambia.

#### Proprietà 4

<!Diagramma pg.85>

Se la coppia A, C genera $E_{AC}$, e la coppia B,C genera $E_{BC}$ allora la coppia A,B genera $E_{AB} = E_{AC}+E_{BC}$

<!Diagramma pg.86>

Ci permette di usare un metallo con il platino come metallo di riferimento, e poi possiamo cambiare l'altro metallo, trovando il E generato.

Possiamo allora creare una tabella di E generate con platino e possiamo dire 2 metalli che non sono platino, possiamo usare il riferimento con il platino per trovare i valori senza dover sperimetnale. Ci permette di fare scelta con $T_{fus}$ e sensibilità volute.

#### Proprietà 5

<!Diagramma pg.89>

La coppia AB a $T_{1}$ e $T_{2}$ genera $E_{12}$, la coppia AB a $T_{2}$ e $T_{3}$ genera $E_{23}$ allora la coppia AB a $T_{1}$ e $T_{3}$ genera $E_{12}+E_{23}$

Ci permette di fare la misura senza avere riferimento a $0^{o}$, se sappiamo la $E$ generata tra 0 e la temperatura di riferimento nuova.

Dobbiamo sapere però la temperatura nuova di riferimento, quindi dobbiamo fare una misura di quella con un'altro strumento.

La termocoppie non sono perfettamente lineari, hanno comportamento fortemente non lineare, significa che allo stesso $\Delta T$ tra i giunti la f.e.m generata non è necessariamente uguale.

Ci sono delle termocoppie commerciali, sappiamo allora bene la caratteristiche, che poi possiamo condizionare bene con il circuito adeguato.


### Tipi di Termocoppie diffuse

<!Diagramma pg.95>

Ogni termocoppia ha la sua linearità, campo di misura, incertezza e sensibilità che la rende adeguata per certi usi e non altri.

#### Sensibilità

<!Diagramma pg.97>

#### Campi di Misura

<!Diagramma pg.98>

#### Incertezza

<!Diagramma pg.99>

### Circuiti di Misura per Termocoppie

#### Tipo 1: Circuito di Laboratorio

<!Diagramma pg.101>

Usato per ridurre l'incertezza il più possibile.


#### Tipo 1a

<!Diagramma pg.102>

#### Tipo 2 

<!Diagramma pg.103>

La maggior parte dei circuiti delle termocoppie

#### Termopile

Termocoppie messe in serie per sommare la tensione, utile per fare la media di vari punti.

<!Diagramma pg.104>

### Vantaggi
- semplici
- robuste
- basso costo
- vasta varietà in tipi e forme
- ampi campi di misura
### Svantaggi
- non-lineari
- bassi valori di tensione in uscita
- necessità di riferimento
- poco stabili
- poco sensibili




