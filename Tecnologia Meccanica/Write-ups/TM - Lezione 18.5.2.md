---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 18.5.2 - Imbutitura


Continuazione della lezione 18.5.2

## Imbutitura

L'imbutitura è una deformazione plastica profonda che occorre per stampaggio. È il metodo più diffuso per ottenere semi-finiti e finiti da lamiera.

I settori in cui è più usato sono le moto e gli elettrodomestici

Imbutitura è nota come lo stampaggio a freddo. Può dare forme 3D complesse ad una lamiera e possono esser in effetto forze complesse e sforzi sia di trazione e compressione in parti diverse del pezzo.

### Imbutitura/Imbutitura Profonda

Usata per realizzare forme cave, caratterizzate da cavita profonde rispetto al diametro del pezzo.

### Stampaggio

La forma non è semplicemente cava.

## Tipi di Prodotti

<!Diagramma pg2>

Anche flaggiati e multidiametri, o anche a U non solo cilindrici, le forme possono esser più complesse di solo cilindri, sono solo gli esempi dati.

<!Diagramma pg.3>

Tipicamente sono a spessore costante (per ipotesi nei calcoli), ad assi-assimetrici o forme molto più complesse.

La imbutitura consiste nell'accomodare la lamiera nella matrice tale che aderisca alle pareti e prenda la loro forma.

Dopo l'imbutitura si crea una flangia dove la lamiera è stata afferrata.

Altri esempi di elettrodomestici e altri oggetti casalinghi:

<!Diagramma pg.6>

## Sequenza del processo

<!Diagramma pg.7>

La macchina è composta da punzone, premi-lamiera e matrice, il premi-lamiera permette ce la lamiera mantenga uno spessore costante e ferma il suo scorrimento

<!Diagramma passi dell'imbuttitura>

Guardando la sezione e la flangia, troviamo delle aree di compressione allo spigolo e di trazione lungo la forma imbutita, invece nella flangia troviamo la compressione circonferenziale e la trazione radiale.

## Parametri del Processo

I parametri della macchina sono:

<!Diagramma parametri della macchina>

Per il pezzo imbutito, $D_{b}$ è il diametro del pezzo circolare laminato, invece $D_{f}$ è il diametro interno del pezzo lavorato.

Il gioco, g, dovrebbe esser lo stesso dello spessore ma per inspessimenti locali e gioco naturale richiesto tra punzone e matrici, quello che diciamo è che: $g=1,1t$

Per imbutiti assialassimetrici bisogna fare il calcolo del diametro del disco con dimensionamento iniziale e finale.

Invece per imbutiti non assialassimetrici e geometrie complesse bisogna fare un calcolo grafico del profico del tranciato usando regole empiriche e tabelle, si possono usare anche simulazioni.

## Calcolo del Dimensionamento

### Calcolo del disco primitivo minimo nel caso di geometria cilindrica semplice

Noi studieremo questa geometria semplice poi in industria ci saranno geometrie meno semplici.

Ipotizziamo la costanza del volume e spessore costante.

<!Diagramma fetta>

$$\begin{gather}
\frac{\pi}{4}D^{2}\cdot s = \frac{\pi}{4}d^{2}\cdot s + \pi dsh \\
\frac{\pi}{4}D^{2} = \frac{\pi}{4}d^{2}+\pi dh \\
\frac{D^{2}}{4} = \frac{d^{2}}{4} + dh \implies D=\sqrt{ d^{2}+4dh } \\
\frac{1}{4} (D^{2}-d^{2}) = dh \\
\frac{1}{4}(D-d)(D+d) = dh \\
D=2h_{o}+d \to \frac{1}{4 }2h_{o}\cdot(2h_{o}+2d) = dh \\
h_{o}(d+h_{o})=dh \\
h = \frac{h_{o}}{d}(d+h_{o}) \implies h = h_{o}\left( 1+\frac{h_{o}}{d} \right) \\
\mathcal{E} = \ln \frac{h}{h_{o}}
\end{gather}$$

È vero che h è sempre più grande di $h_{o}$ $\implies$ la lamiera nella sezione angolare viene deformata per far parte delle lamiera.

Una immagine completa degli sforzi nella forma intera è:

<!Diagramma sforzi pg.13>

C'è compressione sulla circonferenza, trazione radiale e compressione.

Lo sforzo circonferenziale è quello più problematico, perché creerebbe dele grinze se non fosse per la semi-lamiera.

Il premi-lamiera può aiutare ma deve anche lui esser fatto bene per non rompere. Se la pressione che applica è troppo bassa il materiale scorre e forma le grinze, invece se è troppo forte il materiale non scorre e quindi il pezzo si rompe.

Dobbiamo trovare la situazione intermedia addata, in cui si forma grinze ma rimangono contenute e possono esser tranciate.


## Realtà della laminazione

<!Diagramma pg.14>

Lo spessore non è costante, invece ci sono degli assottigliamenti e inspessimenti localizzati.

La variazione tollerate sono del ~$10\%$.

## Dimensionamento di raggi di raccordo

Dobbiamo aggiungere raggi di raccordo perché con le forze elevate se non ci fossero i raggi di raccordo ci sarebbe la tranciatura.

Per la prima imbuttitura:
$$\begin{gather}
R_{d} = 4t \\
R_{p} = (5-6)t
\end{gather}$$
Imbutiture progressive:
$$\begin{gather}
R_{d} = (3-4)t \\
R_{p} = (5-6)t \geq R_{d}
\end{gather}$$
Dove $R_{p}$ è raggio sul punzone e $R_{d}$ è quello sulla matrice.

Il punzone anche lui deve esser raccordato più della matrice dato che il pezzo movente.

## Forze di Imbutitura

<!Variabili pg.17>

Forza massima del punzone:
$$F= \pi D_{p}tR_{m}\left( \frac{D}{D_{p}}-0,7 \right)$$
Forze del premi-lamiera:
$$F_{h} = 0,015R_{s}\pi [D_{b}^{2} - (D_{p}+2,2t+2R_{d})^{2}]$$

Le forze applicate dipendono da:
- tipo di materiale
- geometria dello stampo
- velocità d'imbutitura
- Rapporto di imbutitura ($\frac{D}{D_{p}}$)
- lubrificante

## Andamento delle forze rispetto alla corsa 

<!Diagramma pg.18 - meglio da pdf>

Nel caso normale la forza aumenta e diminuisce con la forza. Siccome in questo caso si crea un disomogeneità nello spessore, si posso creare matrici che trafilano il pezzo per creare uno spessore omogeneo, per questo ci sono curve alternative in questi casi, meno gioco si da alla matrice più forza serve per effetto della trafilatura.

<!Diagramma pg.19>

La forza del premi-lamiera non è costante in tutte le aree, per certe parti bisognerà aumenta e diminuire la forze per permettere una velocità di scorrimento costante e appropriata per il pezzo che vogliamo creare.

<!Diagramma pg.21>

L'andamento dele forze controllato elettronicamente e può cambiare a vari punti durante la corsa.

## Rompigrinza

Il rompigrinza è usato per imbutitura di forme complesse per frenara il materiale dove tende a scorrere maggioremente tale che non si formino le grinze.

<!Diagramma pg.22>









