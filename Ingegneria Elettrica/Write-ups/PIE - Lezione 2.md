---
creation_date: 2023-09-13 16:06
tags:
  - PIE
parent: 
child: 
share: false
---
# Lezione 2

Nei sistemi elettrici bisogna usare condizioni dove si possono trascurare degli effetti, la condizione principale e' che il sistema abbia una frequenza abbastanza bassa tale che rispetto alle onde generate una stanza e' un punto materiale, in tale caso il sistema viene detto di esser in regime quasi-stazionario. 

In questo corso inizieremo con la corrente diretta. Poi studieremo la corrente alternante.

La cosa piu' difficile nella manipolazione dell'elettricita' e' la accumulazione di tale energia. Le batterie hanno densita' energetiche rispetto agli idrocarburi come il petrolio, ma i motori a energia pura sono molto piu' efficienti dei motori a combustion interna.

<! Disegno generatore di tensione ideale con v = dW/dq>
![](Drawing%202023-09-18%2021.17.56.excalidraw.png)

In regime quasi-stazionario, i campi sono irrotazionali quindi idealmente non dissipano energia. Nel caso dei telefoni o linee di trasmissione che hanno frequenze elevate, il sistema viene portato fuori dal regime quasi-stazionario.

<! Notazione della tensione>
![](Drawing%202023-09-18%2021.22.excalidraw.png)
Tutte le tensioni sono uguali, non dipendono dal tragitto tra i punti ma solo la differenza in potenziale tra i due punti. Le frecce sono un simbolo della tensione e simboleggiano la direzione, si possono porre senza sapere la tensione precisa e 
La tensione viene misurata usando un voltmetro. 
<! Simbolo voltmetro>
![](Drawing%202023-09-18%2021.25.excalidraw.png)

## [Legge delle Tensioni](https://it.wikipedia.org/wiki/Leggi_di_Kirchhoff)

<! DIagramma ciclo di tensioni>
![](2023-09-18%2021.28.excalidraw.png)


Se il campo e' conservative un percorso chiuso non occupa lavoro, dato un percorso chiuso $\implies$ $\sum_kv_k=0$
Per calcolare si trova un percorso chiuso e un verso di circolazione(linea a tratti). Usando il diagramma come esempio, $v_1-v_2-v_3-v_4 = 0=-v_1+v_2+v_3+v_4$ , si sottrae perche' hanno versi opposti. 

## Bipoli

Gli elementi elettrici di solito hanno due morsetti, percio' l'elemento e' detto bipolare. Un circuito e' un insieme di bipoli connessi attraverso cui la corrente puo' scorrere e un circuito chiuso puo' esser rappresentato.

I circuiti sono modelli della realta' ma non sono la realta', nel senso che elementi di circuiti non rimangono statici e nel caso della batteria si scaricano, riducendo quanta tensione genera. Per questa ragione immaginiamo il sistema come quasi-statico, perche' se non lo facessimo i calcoli si complicherebbero troppo.circuiti sono modelli della realta' ma non sono la re
## Resistori

<! Diagramma circuito con resistore>
![](2023-09-18%2021.31.excalidraw.png)


I resistori sono elementi di circuiti che dissipano la tensione generata dall' generatore di tensione. Quanta tensione dissipano dipende dalla corrente che scorre nel sistema.

### Legge di Ohm

$$V = iR$$
$$i = \frac{dq}{dt}\rightarrow[A]$$
Per la corrente la velocita' delle cariche non e' un fattore, importa solo che si spostano per generare corrente.

Ogni materiale ha un resistenza, la resistenza dipende da fattori secondo la seguente equazione:
$$R = \rho\cdot\frac{l}{s} $$
In questa equazione $\rho$ e' la resistivita' del materiale in cui sta scorrendo la corrente, $l$ e' la lunghezza del materiale del pezzo di materiale e $s$ e' la area della superfice attraverso cui la corrente scorre.

### Tipi di Materiale

- Conduttori: R$\downarrow$ , $\rho\downarrow \rightarrow$ Metalli
- Isolanti: R$\uparrow$ , $\rho\uparrow\rightarrow$ Ceramiche o altri materiali usati nei resistori
- Semi-conduttori: Non saranno molto in questo corso

Dato che ogni materiale ha resistenza, i cavi di rame anche loro hanno resistenza ma dato che il rame e' un conduttore, la resistenza e' abbastanza bassa che e' trascurabile, invece i resistori hanno resistenze elevate che non possono esser trascurate.

$vi = \frac{dW}{dq} \cdot \frac{dq}{dt} = \frac{dW}{dt} = P[W]$
$P$ e' la potenza.

<! Diagramma amperometro>
![](2023-09-18%2021.36.excalidraw.png)
L'amperometro e' l'elemento che misura la corrente in un circuito.

## [Convenzioni](https://it.wikipedia.org/wiki/Convenzione_degli_utilizzatori_e_dei_generatori)

<! Diagramma convenzioni da wikipedia, perche nessuna di quelle che ho trovato ha uno sfondo>
![](2023-09-18%2021.37.excalidraw.png)
### Convenzione degli utilizzatori

Gli utilizzatori sono elementi che usano la potenza generata dai generatori, per questa ragione la direzione del flusso della corrente e la direzione della tensione sono opposti, questo permette fa in modo che i calcoli trovino una potenza $P>0$. In questa convenzione se si stabilisce una direzione per la corrente o la tensione, l'altro deve avere senso opposto, tale non e' vero per i generatori. Per ricordare piu' facilmente si puo' dire che gli utilizzatori creano tensioni dissipanti che cancellano le tensioni generate dai dissipati, quindi la direzione della tensione dissipativa e' opposta alla tensione generata dai generatori e alla direzione della corrente. Se la freccia avesse lo stesso verso della corrente, il tensione sarebbe negative, percio' per mantenere i segni per la Legge di Ohm si cambia il senso, mantenendo il valore positivo.
### Convenzione dei generatori

I generatori sono elementi che tendenzialmente generano tensione e potenza, e percio' la corrente e tensione hanno lo stesso senso. La ragione perche' non e' necessariamente vero, e' illustrato nel caso b. In questo caso ci sono ci sono due elementi generatori. I due generatori generano tensione nella direzione dello stesso resistore, in questo caso la direzione di diminuzione del potenziale e' dettato da qualunque generatore generi meno tensione, se per esempio il generatore a sinistra genera piu' tensione, quindi genera piu' potenza, il generatore alle destra non genera piu' tensione ma invece diventa un utilizzatore, ricaricandosi e generando tensioni dissipanti. Percio' la direzione della tensione e corrente non sono necessariamente uguali e invece dipende da caso a caso. Un generatore generatore ha $P>0$, mentre un generatore utilizzatore ha $P<0$.

## Circuiti con piu' elementi

<! diagramma di circuiti a piu' elementi>
![](2023-09-18%2021.42.excalidraw.png)

Ci sono due tipi di orientamenti per elementi in circuiti. Gli elementi possono esser in serie, in questo caso gli elementi seguono l'un l'altro, e in parallelo posti su due rami diversi che divergono allo stesso morsetto.

## [Legge di Kirchhoff delle correnti](https://it.wikipedia.org/wiki/Leggi_di_Kirchhoff)

<! Diagramma sistema S>
![](2023-09-18%2021.51.excalidraw.png)

In qualsiasi sistema S chiuso la corrente in entrata e uscita sono la stessa.
$$\sum_{k}i_{k}\implies i_1+i_2-i_3$$
<! Diagramma maglia e ramo monopolare>
![](2023-09-18%2021.55.excalidraw.png)
