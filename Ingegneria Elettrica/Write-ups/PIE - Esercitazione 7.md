---
creation_date: 2023-11-18 21:29
tags:
  - PIE
share: true
---
# Esercitazione 7 - Boucherot e Trifase

## Esercizio 1 - Boucherot

## Trifase

### Caso Semplice

Questo è il caso più semplice di trifase e può esser risolte con un singolo Millman.

### Caso Carichi Trasversali

I carichi trasversali sono carichi che non hanno effetto sugli altri carichi, questi circuiti possono esser trattati come 2 circuiti diversi e perciò risolti con 2 Millman

### Perdita di Simmetria

Se c'è un carico tra le fasi può esser trattato come elemento isolato e risolto separatamente, però bisogna ricordarsi della corrente che passa per quel carico.

### Cavo Connettente

In questo caso i due centri stella diventano lo stesso nodo quindi ogni carichi va in parallelo con l'altro carico connesso allo stesso generatore
### Cavo di Neutro

In questo caso i carichi diventano paralleli ai generatori.

### Carichi a Triangolo

I carichi a in disposizione a triangolo hanno un equivalente a stella quindi si calcolano i valori per i carichi e si cambia la disposizione

Le equazioni:
$$\begin{gather}
\boxed{ \overline{Z}_{1} = \frac{\overline{Z}_{12} +\overline{Z}_{13} }{\overline{Z}_{12} +\overline{Z}_{23} +\overline{Z}_{13} } } \\
\boxed{ \overline{Z}_{2} = \frac{\overline{Z}_{12} +\overline{Z}_{23} }{\overline{Z}_{12} +\overline{Z}_{23} +\overline{Z}_{13} } } \\
\boxed{ \overline{Z}_{3} = \frac{\overline{Z}_{23} +\overline{Z}_{13} }{\overline{Z}_{12} +\overline{Z}_{23} +\overline{Z}_{13} } }
\end{gather}$$

## Esercizio 2

Ci sono cavi dove è possibile evitare usare le equazioni per i carichi (ultimo caso), in caso lo abbiamo evitato per esempio ma in alcuni casi (il prossimo) non si può evitare. È più facile fare sempre lo stesso metodo anche se rallenta così ci sono meno errori.
## Esercizio 3


In questo caso non potevamo evitare di usare le formule per i carichi.
## Esercizio 4