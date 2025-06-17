---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 1 - Introduzione e Fattorizzazione LU

## Introduzione

Esercitazione a BL27.1.3 da L a Piacentino e L.13 per il resto, questi limiti sono dipendenti dal numero di persone iscritte al corso.

## Struttura del Corso

Il corso è composto in due parti:
- La prima parte è sulle basi di analisi numerica, è una parte più semplice.
	- Il libro consigliato è: Scientific Computing with Matlab & Octave da Quarteroni, Saleri e Gervasio
- La seconda parte è quella più difficile di Calcolo Scientifico
	- Il libro consigliato è: Modellistica Numerica per Problemi Differenziali da Quarteroni

### Esami

Ci sono le prove d'itinere il 13 November che coprirà la prima parte, indipendentemente da dove siamo nella seconda parte, è un mix di domanda aperte e a risposta multipla, con domande di teoria e numeriche.

Ci sono 5 appelli, i primi due saranno il 24 Gennaio e il secondo il 12 Febbraio.

## Differenza tra Analisi Numerica e Calcolo Scientifico

L'analisi numerica è l'intersezione tra matematica e informatica:

<!Diagramma venn per analisi numerica>

È l'uso dell'informatica per trovare soluzione approssimate a problemi matematici complessi che ci vorrebbero troppo tempo per facendoli a meno.

Il calcolo scientifico è l'intersezione tra matematica, informatica e ingegneria:

<!Diagramma venn per calcolo scientifico>

Cioè l'uso di analisi numerica nello scopo di trovare soluzioni a problemi ingegneristici, creando realtà virtuali per capire meglio cosa succederà in un sistema, per permetterci di ottimizzare i risultati.

## Errore

I nostri computer non riescono naturalmente a rispondere a certi tipi di domanda, senza il nostro aiuto. Per aiutarli utilizziamo diversi metodi di approssimazione che semplificano i problemi in modo che li possano risolvere con le operazioni di base che i computer riescono a fare facilmente. Questa approssimazione genera errori ad ogni passo, questo è quello che vogliamo minimizzare. Il modello è la parte di analisi numerica che poi usiamo per risolvere il problema fisico.

<!Diagramma dei diversi errori>

L'errore di modello deriva dall'astrazione in un modello a limitate variabili indipendenti.
L'errore computazione viene dall'astrazione della matematica in una forma che può esser completata dai computer. Questo è composto dall'errore di troncamento, dato che usiamo funzioni che funzionano sui numeri reali, dobbiamo troncare il numero di numeri che guardiamo, perché il computer non ha concetto di infinito L'altra parte dell'errore computazionale è il floating point error, questo è dato dal fatto che i computer non riescono a rappresentare tutti i numeri sono un numero finito di numeri quindi in questa approssimazione perdiamo un certo grado di precisione, causando errori.

L'errore è molto importante quando approssimiamo.

### Tipi di Errore

Errore assoluto : $|x-\tilde{x}|$

Errore relativo : $\frac{|x-\tilde{x}|}{|x|}$

L'errore relativo è molto più importante visto che ci da un'idea della magnitudine dell'errore non solo un numero.

## Approssimazione di sistemi di equazioni lineari

### Sistemi di equazione lineari

Per ripasso, i sistemi di equazione lineari possono esser scritti in due modi diversi, la forma compatta e la forma espansa.

#### Forma Compatta 

$$\begin{align}
&Ax = b \to \text{Equazione generica} \\
&A \in \mathbb{R}^{n\times n} \text{  con  } a_{ij} \in A \\
&b \in \mathbb{R}^{n} \to \text{Vettore di termini noti} \\
&x \in \mathbb{R}^{n} \text{  con  } x_{j} \in x \to \text{Vettore di termini incogniti}
\end{align}$$
#### Forma Espansa

$$\left\{\begin{align}
&a_{11}x_{1}+ a_{12}x_{2} + \dots + a_{1n}x_{n} &= b_{1} \\
&a_{21}x_{1} + a_{22}x_{2} + \dots + a_{2n}x_{n} &= b_{2} \\
&\,\,\,\,\,\,\vdots &\vdots \\
&a_{n1}x_{1} + a_{n2}x_{2} + \dots + a_{nn}x_{n} &=b_{n}
\end{align}\right\}$$

#### Unicità della soluzione di una sistema di equazioni lineari 

L'esistenza e unicità di x esiste se A non è singolare, in forma matematica:
$$\exists! x \iff \underbrace{ \det A \neq 0 }_{ \substack{\iff  \\ \text{non singolare}}}$$
Una soluzione di elementi finiti infine porta sempre a risolvere un sistema di equazioni lineari, questo è perché sono utili.



### Metodo per risolvere un sistema di equazioni lineari

#### Regola di Cramer

La regola di Cramer di dice che:

$$x_{i} = \frac{\det(A_{i})}{\det A}$$

Cioè che ogni valore ignoto può esser trovare facendo la divisione tra il determinante della matrice A con la i-esima colonna rimpiazzata con b divisa dal determinante di A.

#### Espansione di Laplace

Il metodo di Laplace ci aiuta a trovare la determinante di una matrice.

$$\det A = \left\{\begin{align}
&a_{11} &n=1 \\
&\sum_{j}^{n} a_{ij} \Delta _{ij}  &n>1
\end{align}\right\}$$
Con: $\Delta_{ij} = (-1)^{i+j}\det(A_{ij})$ dove $A_{ij}$  è A con la riga i e colonna j rimossa.

Questo ultimo passo è ricorsivo è ha un ordine del numero di operazioni pari a $O(n!)$. Se n è molto grande questo significherebbe anni in calcoli

Per certe matrici è possibile avere una costo di $O(n)$, ma in generale è molto costoso quindi non è molto utile.

Dati questi costi operazionali e perciò di tempo, accettiamo dell'errore e andiamo al calcolo numerico.

## Analisi Numerica

L'analisi numerica ci da 2 famiglie di metodi per semplificare e risolvere problemi di sistemi di equazioni lineari.

I metodi diretti sono più accurati ma costano lo stesso un po' di tempo. I metodi iterativi sono più veloci ma sono meno accurati. La scelta tra diretto e iterativo dipende dal problema. Per alcuni problemi malcondizionati possiamo usare solo i metodi iterativi.

Continuiamo ad usare sistemi di equazioni lineari, solo con meno precisione di quello che abbiamo avuto prima.
### Metodi Diretti

Prendiamo $Ax=  b$ , soluzione di ordine n con A non singolare.
#### Fattorizzazione LU di A

Nella fattorizzazione LU prendiamo A come fattore delle matrici L e U loro stesse $\in \mathbb{R}^{n\times n}$

$$A = LU$$

Queste due matrici hanno due strutture specifiche:

L è triangolare inferiore:
$$L = \begin{bmatrix}
&\times &0 &0\\
&\vdots & \ddots &0\\
&\times &\dots &\times
\end{bmatrix}$$

Invece U è triangolare superiore:

$$U=\begin{bmatrix}
&\times &\dots &\times\\
&0 & \ddots &\vdots\\
&0 &0 &\times
\end{bmatrix}$$



##### Definizione di una matrice sparsa

Una matrice è sparsa quando ha n entrate non nulle.

Una matrice $A \in \mathbb{R}^{n\times n}$ ha $n^{2}$ entrate

È sparse se ha $O(n)$ entrate diverse da 0, cioè se ha un numero di entrate non-nulle nello stesso ordine di magnitudine di n.

La sparsità di una matrice è migliore perché riduce i calcoli e ci sono metodi che possiamo usare solo su matrici sparse.

Un esempio di matrice sparse sono le matrici diagonali.

Per la fattorizzazione LU è utile.

#### Ritorno alla fattorizzazione

Possiamo prendere: $Ax = b$, che sarà uguale a:
$$L\underbrace{ Ux }_{ y } = b$$

Possiamo prender $Ux = y$, che ci permette di riportare a due problemi separati:
$$\left\{\begin{align}
&Ly = b \\
& Ux= y
\end{align}\right\}$$
Nella seconda equazione y sarà il termine noto, che possiamo trovare dalla prima equazione.

La differenza dal problema iniziale è che L e U sono sparse, questo ci permette di usare algoritmi più efficienti, che sfruttano il numero grande di 0.

##### Appunto del determinante nella fattorizzazione LU

Sappiamo che $\det A \neq 0$ data la non singolarità, questo allora significa che:
$$A = LU \implies \det A = \det(LU) = \det (L)\cdot \det(U)$$

Per la matrici triangolari il determinante è il prodotto degli elementi sulla diagonale, perciò:

$$=[l_{11}\dots l_{nn}]\cdot[u_{11}\dots u_{nn}] \neq 0$$
Questo implica che nessuno degli elementi sulla diagonale di L o U è nullo.

#### Esempio su $3\times 3$ e poi estrazione di algoritmo

Abbiamo $Ly = b$, che sarà:
$$\begin{bmatrix}
l_{11} &0 &0 \\
l_{21} &l_{22}&0 \\
l_{31} &l_{32} &l_{33}
\end{bmatrix}\begin{bmatrix}
y_{1} \\
y_{2} \\
y_{3}
\end{bmatrix} = \begin{bmatrix}
b_{1} \\
b_{2} \\
b_{3}
\end{bmatrix}$$

Vogliamo trovare $y_{1}$, $y_{2}$ e $y_{3}$:

Troviamo allora:

$$l_{11}y_{1} = b_{1} \to y_{1} = \frac{b_{1}}{l_{11}}$$

$$l_{21}y_{1} + l_{22}y_{2} = b_{2} \to y_{2} = \frac{1}{l_{22}}[b_{2}-l_{21}y_{1}]$$

$$l_{31}y_{1} + l_{32}y_{2}+l_{33}y_{3} = b_{3} \to y_{3} = \frac{1}{l_{33}} [b_{3}-l_{31}y_{1}-l_{32}y_{2}]$$

Vediamo che è impossibile trovare il valore di $y_{i}$ senza sapere tutti i valori prima di quello, per questa ragione chiamiamo questo l'algoritmo delle sostituzioni in avanti.

> [!theorem] Algoritmo delle sostituzioni in avanti
> Dato $Ly=  b$, con $L\in \mathbb{R}^{n\times n}$, matrice triangolare inferiore, le soluzioni di $y_{i}$ per b vettore noto, saranno:
> $$y_{i} = \frac{b_{1}}{l_{11}}$$
> $$y_{i} = \frac{1}{l_{ii}}\left[ b_{i}-\sum_{1}^{i-1}l_{ij}y_{j} \right] \to \text{ per }i=2,\dots,n$$
