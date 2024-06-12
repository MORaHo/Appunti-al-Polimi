---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 21 - Termografia

Guarderemo la termografia all'infrarosso, un metodo di calcolo della temperatura senza contatto, questo funziona in casi di irraggiamento.

## Concetti di Base

Riscaldando un metallo ad un certa temperatura, ha un certo corto colore cambiato.

1. Ogni oggetto è in grado emettere luce se portato ad un certa temperatura
2. Aumenta l'intensità con la temperatura
3. Va dal rosso cupo a bianco brillantante

Tutti i corpi che non sono a 0K emettono onde infrarosso. Irraggiano onde che non possiamo vedere.

La temperatura aumenta con la lunghezza d'onda.

L'infrarosso va da .7$\mu m$ a $50\mu m$. Quello che guardiamo per lo studio della temperatura è la lunghezza d'onda emessa.

Un corpo nero è un corpo ideale che emette la massima possibile radiazione ad una data temperatura.

Il corpo nero a temperatura rilascia più energia a T più alte, e con T più alta la onde che rilascia diventano più corte. Questa dipendenza della energia e lunghezza d'onda sono visti nelle leggi di Planch e Wien:

$$\text{Planch: }W_{BB}(\lambda,T) = \frac{2\pi c^{2}h}{\lambda^{5}[e^{ (hc/k\lambda t)-1 }]} $$

$$\text{Wien: }\lambda_{max} = \frac{2891}{T}$$

La legge di Stephan-Boltzmann ci dice la potenza irradiata del corpo nero:
$$W_{T} = \sigma \cdot T^{4}$$

All'aumentare di T $\to$ W aumenta e $\lambda$ diminuisce.

## Corpo Nero reale

Si può realizzare corpi che possono agire come corpi neri ma corpi neri veri non esistono.

<!Diagramma corpo nero realizzato>

Questi corpi che agiscono come i corpi neri simulano un'assorbimento massimo possibile.

## Emissività

<!Diagramma emissività per diversi tipi di corpi>

Un grey-body è un corpo che ha curva di emissione di forma uguale me ridotta per una costante per ogni lunghezza d'onda rispetto al corpo nero.

Una superfice reale è una superfici che ha un emissività rispetto al corpo nero per ogni lunghezza d'onda variabile minore o uguale al corpo nero.

Il fattore che usiamo è $\mathcal{E}$ $\to$ emissività

Il corpo nero ha $\mathcal{E}=1$, il corpo grigio a $0<\mathcal{E}<1$ costante per ogni lunghezza d'onda.

La superfice reale può avere $\mathcal{E}$ diverse per diverse lunghezze d'onda.

### Fattori da cui dipende l'emissività:

- tipo di materiale
- angolo di visto (forma)
- rugosità superficiale
- temperatura
- lunghezza d'onda

La emissività e misurata sull'oggetto di misura.

La legge di Stephan-Boltzmann che include la emissività è:
$$W_{T} = \mathcal{E}\sigma T^{4}$$

Per determinare $\mathcal{E}$, prendiamo una banda stretta di $\lambda$
 e prendiamo la media della potenza emessa e poi confrontando con il corpo nero determiniamo $\mathcal{E}$. Questo può esser fatto solo con una banda stretta di $\lambda$ per la emissività per quella banda sarà circa la stessa invece se è espansa è più possibile che ci siano cambi.

## Termografia

La termografia è una tecnica per misurare la temperatura non in una punto ma in un'immagine, portando il risultato in una matrice.

È senza contatto, che in certi casi è utile, specialmente in casi pericolosi è di solito l'unico metodo utilizzabile.

Si possono fare misure senza fermare la produzione o pezzi (per esempio cuscinetti in uso)

### Caratteristiche Fondamentali

- $\tau = 21ms$ $\to$ risposta di primo ordine
- campo di misura molto esteso

### Limite all'uso

- Costi (bassi rispetto a tempo fa)
- Necessità un operatore qualificato per il rischio di fare misure errate.
- Grossi impedimenti con materiali a $\mathcal{E}$ bassa, per disturbi
- Necessità di schierare la telecamera dalle emissioni

### Reazione a radiazione infrarossa

<!Diagramma radiazione infrarossa>

$$\rho + \tau +\alpha=1$$

Per materiali opachi:
$$\rho + \mathcal{E}=1$$

#### Radiazione incidente sulla telecamera

<!Diagramma pg.26>

La radiazione che raggiunge la telecamera non è solo quella del corpo ma anche della atmosfera tra il corpo e la telecamera, questa atmosfera può anche assorbire del colore che sta passando per se.

Se ci sonno oggetti che emettono energia, è possibile che dell'energia rifletti sull'oggetto e misuriamo anche quest'energia anche se non è veramente del misurando. Questo è un problema a basse T, per ciò serve isolare il misurando.

### Trasmittanza dell'atmosfera

<!Diagramma pg.28>

Varie sostanze compongono l'atmosfera e assorbono radiazione, possiamo vedere quale banda usare per misurare la temperatura trovando le bande con trasmittanze relativamente costante. In fine troviamo la banda alta e banda bassa. I sensori generalmente funzionano entro queste due bande.

## Detector

Ci sono 2 tipi di sensori:
- microbolometrici $\to$ costano meno
- sensori fotonici

### Microbolometrici

Questi hanno una matrice di "pixel" sensibili, fatte con materiale supportato, che si scalda ed aumenta la sua temperatura

<!Diagramma pg.31>

### Detector Fotonico

Usano cristalli che misurano i fotoni calcolando la cariche che arrivano dei fotoni

### Diagramma telecamera generale

<!Diagramma pg.34>
Si usa il germanio invece del vetro perché il vetro non è trasparente all'infrarosso quindi non può bassare, invece il germanio lo è quindi lo usiamo.

## Frequenze di Campionamento

Il micro-bolometrico tipicamente: 10-50Hz (immagini a secondo) con tempo di integrazione di $20ms$

I fotonici invece arrivano a $1MHz$ visto che sono fatti in modo diverso e ha più vantaggi, non ha inerzia termica visto che usiamo cariche fotoniche. Il sensore è 20000x più pronto.


### Comparazione

<!Diagramma pg.35>

I fotonici hanno principio che il rumore elettrico dipende dalla loro temperatura, per questo le diverse parti vengono raffreddate a molti gradi sotto zero, questo è fatto anche per stabilirli. In generale bisogna aspettare un attimo prima di usare un fotonico dopo averlo accesso per permettere che raggiunga queste temperature.

## Cross-talking

Se un pixel riceve più energia e uno meno quello con più bassa un'pò a quello con meno.
Dobbiamo esser sicuri che se stiamo misuriamo dobbiamo avere abbastanza copertura dei pixel per fare una misure accurata, più è alto l'angolo di vist più pixel riescono a determinare la temperatura attuale. Ai lati ci sono sempre dissipazioni quindi possiamo tagliarli e guardare il centro dell'area colpita.



In generale dipendendo dall'uso se usamo microbolometrici più e più di gamma e poi si passa ai fotonici, se la temperatura tra cambiano velocemente serve usare i fotonici dato il loro tempo di risposta.














