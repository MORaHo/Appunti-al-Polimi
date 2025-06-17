---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 1 - Introduzione

## Obbiettivi del Corso

<!Diagramma flusso di progettazione>

L'obbiettivo del corso è facilitare i calcoli nella progettazione di pezzi, e introdurre i concetti che formano la base dell'analisi strutturale.

Vogliamo semplificare i modelli che usiamo tale facciamo i calcoli più semplici che rappresentano lo stesso il comportamento della struttura reale.
Per aumentare la realtà possiamo andare da un sistema di corpi di rigidi ad un sistema di travi deformabili e per aumentare ancora di più potremmo modellare il problema in 3D, questi sono passi che sono troppo difficili da fare a mano, ma sono possibili con modelli al computer. Per questo possiamo usare un modello matematico per fare un calcolo semplice di riferimento (il nostro obbiettivo) e confermare questo risultato con il modello nel computer.

I modelli semplici ci permettono di fare senso del problema e lasciamo le parti complessi ai modelli digitali. Per problemi complessi è già molto per noi semplificare il sistema per avere una modello semplice da cui ricavare valori di riferimento.


I 3 obbiettivi principali sono:
#### 1$^{o}$ obbiettivo

Modellare 3 classi di strutture:

- Corpi rigidi ad elasticità concentrata, questi sono sistemi di corpi rigidi con organi elastici interni al sistema, che generano forze elastiche. Un esempio di questo sono le lampade con modello tra le parti.
- Strutture reticolari e sistemi piani di travi (telai)
- Campi di piastra e graticci di travi

#### $2^{o}$ obbiettivo

- Apprendiamo a calcolare sforzi e deformazione in sistemi iperstatici usando il metodo delle forze e il metodo degli spostamenti.

#### $3^{o}$ obiettivo

Usiamo il metodo degli spostamenti e la discretizzazione per apprendere la base del metodo degli elementi finiti.

La discretizzazione è un'operazione di astrazione da un problema reale a punti infiniti ad un problema a numero di punti finiti. Questo è il passo dopo il metodo degli spostamenti.

## Carichi

Un carico è un'interazione della struttura con l'ambiente circostante.

Ci sono 4 famiglie diversi di carichi:

- Forze verticali (peso,proprio, carichi e impalchi accidentali)
- Forze orizzontali (venti, sismi)
- Cedimenti dei vincoli
- Variazioni termiche


Una struttura che riesce a sostenere un tipo di carico non riesce necessariamente a sostenere un'altro tipo di carico.

Un esempio di questo è questa struttura:

<!Diagramma struttura>

Riesca a rispondere a carichi verticali bene a non quelli orizzontali. Per risolvere questo ci sono molte soluzioni, due di cui sono queste:

<!Diagramma due possibili soluzioni>

Nella prima saldiamo i vincoli perciò non ci sono più problemi, invece nel secondo aggiungiamo una seconda asta. Il secondo approccio non cambia il concetto fondamentale.

Ci sono strategie diverse per risolvere lo stesso problema, il nostro scopo è di risolvere il problema nel modo più semplice usando metodi più veloci.








