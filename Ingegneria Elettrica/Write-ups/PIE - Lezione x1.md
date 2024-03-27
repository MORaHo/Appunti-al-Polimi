---
creation_date: 2023-10-24 22:26
tags:
  - PIE
share: true
---
# Lezione 11 - Tellegen & Boucherot

## Ripasso

<u>Nel caso di circuito RL:</u>

![](Pasted%20image%2020231029161835.png)

$p = vi = \underbrace{ VIcos\phi }_{ \underbrace{ P }_{ \substack{\text{Potenza}\\\text{Attiva}} } }$

![](Pasted%20image%2020231029161850.png)

$\overline{Z} = R + jwL = Ze^{ j\phi }$

$$p = vi = \overbrace{\underbrace{ VI \cos \phi }_{ P } + \underbrace{ VI \cos \phi }_{ P }\cdot \underbrace{ \cos(2wt+2\phi_{v}) }_{ \underbrace{ VI\cos(2wt+\phi_{v}-\phi_{I} }_{ \text{Potenza Apparente} }) }}^{\text{Potenza istantanea vero utilizzatori}}+\underbrace{ VI\sin \phi \sin(2wt+2\phi_{v}) }_{\substack{\text{Energia che alterna senza}\\\text{lavoro $\to$ solo condensatore }\\\text{o induttore}}}$$

**P** = potenza attiva = $VI\cos \phi$ = valore medio di p ($= \frac{1}{T} \int _{0}^{T}p \, dt\:\: [W]$)

**A** = potenza apparente = VI = valore di massima oscillazione rispetto a P. $[VA] \to$per differenziare da W ma sono la stessa cosa.

**Q** = potenza reattive = VIsin$\phi$ $[VAR](\text{Volt Ampere Reattivi})$
Q è l'elemento immaginario della potenza tenuto dagli induttori e conduttori. 

![](Pasted%20image%2020231029161912.png)

Per gli utilizzatori, P > 0 significa che stanno assorbendo e invece per i generatori P > 0 significa che stanno generando.

A è calcolato usando la equazione:
$$A^{2}=P^{2}+Q^{2}$$
Questo è perché sono in relazione come pitagora.

La potenza apparante complessa è calcolata come:
$$\overline{A}= P + jQ=\underbrace{ A }_{ =VI }e^{ j\phi } = A \cos \phi+jA\sin \phi$$
La potenza apparente complesse viene chiamata anche lei potenza apparente, ma sarà evidente la differenza perchè A è un numero reale invece $\overline{A}$ è un numero complesso.

In alcuni caso A viene scritto S, non c'è differenza.

### Come ricavare $\overline{A}$?

![](Pasted%20image%2020231029161927.png)

$$\overline{A} = \overline{V}\underline{I} = Ve^{ j\phi_{v} }\cdot Ie^{ -j\phi_{I} } = VI\cdot e^{ j(\phi_{v}-\phi_{I}) } = VI e^{ j\phi }$$
Per convenienza prenderemo $\phi=0$ quindi in molti casi:
$$A= VI$$
## Teorema di Tellegen

Dato un grafo orientato qualsiasi:

![](Pasted%20image%2020231029161957.png)

Se sono definite per ogni lato 2 variabili $i_{k}$ e $v_{k}$ tale che $i_{k}$ soddisfi LKC e $v_{k}$ soddisfi LKT.

Allora:
$$\implies \sum_{k}v_{k}\cdot i_{k}=0$$
Un grafo oriente è un insieme di forme che include i circuiti e i sistemi meccanici quindi questo teorema può esser applicato anche fuori dalla elettrotecnica.
### Esempi

![](Pasted%20image%2020231029162014.png)

### Tellegen con numeri complessi

Dati i numeri complessi $\overline{V}$ e $\underline{I}$
Tale che LKT e LKC sono soddisfatto allora:
$$\sum_{k}\overline{I}_{k}\overline{V}_{k} = 0 = \sum_{k}\underbrace{ Re_{k} }_{ \substack{\text{Parte}\\\text{Reale}} }+\sum_{k}\underbrace{ Im_{k} }_{ \substack{\text{Parte}\\\text{Immaginaria}} } $$
Vale per il coniugato di $\overline{I} \to \underline{I}$

$\overline{A}=\overline{V}\cdot  \underline{I}$

Dato che vale Tellegen allora:

$$
\begin{align}
\sum_{k}\overline{V}_{k}\underline{I}_{k}&=0 \\
\implies \sum_{k}\overline{A}&=0 \\
\implies \sum_{k}(P_{k}+jQ_{k})&=0 
\end{align}
$$
## Corollario di Boucherot

Il corollario di Boucherot è una estensione del Teorema di Tellegen.

Tellegen ci dive che $\sum_{k}v_{k}\cdot i_{k}=0$ che implica che $\sum_{k}P_{k}=0$.

Estendendo questa ultima parte troviamo che:
$$\sum_k Q_{k}=0 \text{ e }\sum_{k}A_{k}=0$$
![](Pasted%20image%2020231029162036.png)

Compensando localmente significa che l'energia non è persa, ma è scambiata localmente per minimizzare le perdite di transizioni.

Se $Q_{c}=Q_{L} \implies Q_{v} =0$ 

Questo processo è noto come rifasamento e lo studieremo di più la prossima volta.

## Esempio Boucherot

![](Pasted%20image%2020231029162119.png)

Per risolvere questo problema dobbiamo andare sezione per sezione a capire cosa che misura (I o V) viene conservata e poi calcolare 
### Sezione A
![](Pasted%20image%2020231029162147.png)
### Sezione B
![](Pasted%20image%2020231029162203.png)
### Sezione C
![](Pasted%20image%2020231029162219.png)
### Sezione D
![](Pasted%20image%2020231029162254.png)
Non possiamo calcolare con $\overline{V}_{c}$ perché non cade ne su $\overline{V}_{R}$ o $\overline{V}_{Xc}$ quindi dobbiamo cercare $|\overline{I}_{}|$ che è in fase con almeno uno dei due elementi.
### Sezione E 

![](Pasted%20image%2020231029162318.png)

### Passi per Risolvere problema con Boucherot

![](Pasted%20image%2020231029162349.png)
