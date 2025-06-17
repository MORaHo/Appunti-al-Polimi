---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 2 - Partizione LU, Metodo della Eliminazione Gaussiana e determinazione di matrice partibile per LU

## Partizione LU
Nella ultima lezione abbiamo visto la prima parte della partizione LU, in cui per un sistema di equazioni lineari, $Ax= b$, rimpiazziamo la matrice a con un prodotto di matrici $LU$, cambiando al nostro sistema a:
$$\begin{gather}
Ly = b \\
Ux = y
\end{gather}$$

La prima parte può esser risolta con l'algoritmo:
$$\begin{gather}
y_{1} = \frac{b_{1}}{l_{11}} \\
y_{i} = \frac{1}{l_{ii}} \left[ b_{i}-\sum\limits_{j=1}^{i-1}l_{ii}y_{j}  \right] \;;\; i = 2,\dots,n
\end{gather}$$

### Costo di questo algoritmo

Vogliamo calcolare il costo di questo algoritmo per fare un confronto tra gli algoritmi.

Per ogni elemento abbiamo 1 divisione, (i-1) sottrazioni e (i-1) moltiplicazioni. Ci sono n elementi quindi la somma delle operazioni sarà:
$$\sum_{i=1}^{n}1 + 2\sum_{i=1}^{n}(i-1) = n + 2\underbrace{ \sum_{i=1}^{n}i }_{ \frac{n(n+1)}{2} }-2n = \cancel{ n } + n^{2}+\cancel{ n }-\cancel{ 2n } = n^{2}$$
### Soluzione alla seconda parte

#### Esempio 3 $\times$ 3

$$\begin{bmatrix}
u_{11} & u_{12} & u_{13} \\
0 & u_{22} & u_{23} \\
0 & 0 & u_{33}
\end{bmatrix}\begin{bmatrix}
x_{1}  \\
x_{2} \\
x_{3}
\end{bmatrix} = \begin{bmatrix}
y_{1} \\
y_{2} \\
y_{3}
\end{bmatrix}$$

Possiamo trovare i valori incogniti:

$$\begin{gather}
u_{33}x_{3} = y_{3} \to x_{3 } = \frac{y_{3}}{u_{33}} \\
u_{22}x_{2} + u_{23}x_{3} = y_{2} \to x_{2} = \frac{1}{u_{22}}[y_{2}-u_{23}x_{3}] \\
u_{11}x_{1} + u_{12}x_{2} + u_{13}x_{3} = y_{1} \to x_{1} = \frac{1}{u_{11}}[y_{1}-u_{12}x_{2}-u_{13}x_{3}]
\end{gather}$$

#### Algoritmo Generale

L'algoritmo generale per la soluzione con la matrice U è noto come l'algoritmo delle sostituzioni all'indietro

> [!theorem] Algoritmo delle Sostituzioni all'indietro
> $$x_{n} = \frac{y_{n}}{u_{nn}}$$
> $$x_{i} = \frac{1}{u_{ii}}\left[ y_{i}-\sum_{j=i+1}^{n}u_{ij}x_{j} \right] \;; i = n-1,\dots,1$$

Il costo di questo è lo stesso di quello in avanti.

## Identificazione delle matrici L e U

L'algoritmo della partizione delle matrici è possibile se sappiamo L e U, quindi se non le conosciamo ci occorrerà trovarle.

### Esempio 2 x 2

$$\underbrace{ \begin{bmatrix}
a_{11} & a_{12} \\
a_{21} & a_{22}
\end{bmatrix}  }_{ \text{Nota} }= \underbrace{ \begin{bmatrix}
l_{11} & 0 \\
l_{21} & l_{22}
\end{bmatrix}\begin{bmatrix}
u_{11} & u_{12} \\
0 & u_{22}
\end{bmatrix} }_{ \text{Incognito} }$$

Troviamo il valore delle diverse variabili note in base a quelle non note.
$$ = \begin{matrix}
a_{11} = l_{11}u_{11} & a_{12} = l_{11}u_{12} \\
a_{21} = l_{21}u_{11}  & a_{22} = l_{21}u_{12} + l_{22}u_{22}
\end{matrix}$$

Vediamo che ci sono 4 equazioni e 6 variabili incognite, questo implica che il sistema è sottodeterminato.

A questo punto se vogliamo determinare il sistema, possiamo o aggiungere 2 equazioni o togliere 2 incognite. 

La comunità scientifica a questo punto a deciso di prendere $l_{11}$ e $l_{22}$ come 1, perciò le equazioni saranno:

$$\begin{gather}
a_{11} = u_{11} \\
a_{12} = u_{12}
\end{gather}$$
Che definiscono la prima riga della matrice U

$$a_{21} = l_{21}u_{11}$$
Che definisce la prima colonna di L, e:
$$a_{22} = l_{21}u_{12}+u_{22}$$
Che definisce la seconda riga di U

### Generalmente

Presa una matrice quadrata A di dimensione n abbiamo:
$$\begin{bmatrix}
A 
\end{bmatrix} = \begin{bmatrix}
\text{\\} & 0 & 0 \\
\dots & L & 0\\
\dots & \dots & \text{\\}
\end{bmatrix}\begin{bmatrix}
\text{\\} & \dots & \dots \\
0 & U & \dots\\
0 & 0 & \text{\\}
\end{bmatrix}$$

La matrice A definisce $n^{2}$ equazioni, e le matrici L e U definiscono $n^{2}+n$ incognite tra di loro.

Di nuovo vediamo che abbiamo più incognite che equazioni per definirle.
Da qui allora togliamo le n incognite in più e la definiamo come 1, ponendole sulla diagonale di L.

## Metodo di Eliminazione Gaussiana (MEG)

### Esempio 3 x 3

Vogliamo convertire la matrice A in una matrice triangolare superiore, nel primo passo prendiamo gli elementi nella prima colonna e tutti quelli dopo il primo elemento li annulleremo, poi alla seconda eliminiamo tutti gli elementi dopo il secondo, ed et cetera per il resto delle colonne se ci sono.

Ad ogni elemento aggiungiamo anche il pedice che indicare a quale passo è stato cambiato.

Abbiamo allora:
$$A = A^{(1)} = \begin{bmatrix}
a_{11}^{(1)} & a_{12}^{(1)}  & a_{13}^{(1)} \\
a_{21}^{(1)} & a_{22}^{(1)} &  a_{23}^{(1)} \\
a_{31}^{(1)} & a_{32}^{(1)} &  a_{33}^{(1)}
\end{bmatrix}$$

#### Passo 1

Prendiamo i coefficienti tra righe come:
$$\begin{gather}
l_{21} = \frac{a_{21}^{(1)}}{a_{11}^{(1)}} \;;\;l_{31} = \frac{a_{31}^{(1)}}{a_{11}^{(1)}}
\end{gather}$$
Per il questo metodo del MEG serve che $a_{11}^{(1)} \neq 0$, se non lo è lo riconosciamo come pivot.

$$\begin{align}
a_{21}^{(2)} &= a_{21}^{(1)} - l_{21}a_{11}^{(1)} = a_{21}^{(1)} - \frac{a_{21}^{(1)}}{\cancel{ a_{11}^{(1)} }}\cancel{ a_{11}^{(1)}  }= 0 \\
a_{22}^{(2)} &= a_{22}^{(1)} - l_{21}a_{12}^{(1)} \\
a_{23}^{(2)} &= a_{23}^{(1)} - l_{21}a_{13}^{(1)} \\
a_{31}^{(2)} &= a_{31}^{(1)} -l_{31}a_{11}^{(1)} = a_{31}^{(1)} - \frac{a_{31}^{(1)}}{a_{11}^{(1)}}a_{11}^{(1)} = 0 \\
a_{32}^{(2)} &= a_{32}^{(1)} - l_{31}a_{12}^{(1)} \\
a_{33}^{(2)} &= a_{33}^{(1)} - l_{31}a_{13}^{(1)}
\end{align}$$

$$A^{(2)} = \begin{bmatrix}
a_{11}^{(1)} & a_{12}^{(1)} & a_{13}^{(1)} \\
0 & a_{22}^{(2)} & a_{23} ^{(2)}  \\
0  & a_{32}^{(2)} & a_{33}^{(2)}
\end{bmatrix}$$
#### Passo 2

Definiamo i moltiplicatori:
$$l_{32} = \frac{a_{32}^{(2)}}{a_{22}^{(2)}}$$
Se $a_{22}^{(2)}\neq 0$, anche questo lo chiamiamo pivot.

Troviamo i valori:
$$\begin{align}
a_{32}^{(3)} &= a_{32}^{(2)} - l_{32}a_{32}^{(2)} =a_{32}^{(2)} - \frac{a_{32}^{(2)}}{\cancel{ a_{22}^{(2)} }}\cancel{ a_{22}^{(2)} }=0 \\
a_{33}^{(3)} &= a_{33}^{(2)} - l_{32}a_{32}^{(2)}
\end{align}$$

La matrice sarà:

$$A^{(3)} = \begin{bmatrix}
a_{11}^{(1)}  & a_{12}^{(1)} & a_{13}^{(1)} \\
0 & a_{22}^{(2)} & a_{23}^{(2)} \\
0  & 0 & a_{33}^{(3)}
\end{bmatrix}  =U$$
La matrice finale la chiamiamo U perché è una matrice triangolare superiore, troviamo anche che la matrice L sarà composta dai moltiplicatori che abbiamo trovare tra le matrici per fare la eliminazione.

La matrice sarà:
$$L = \begin{bmatrix}
1 & 0  & 0 \\
l_{21} & 1 & 0 \\
l_{31} & l_{32} & 1
\end{bmatrix}$$

Queste due matrici per L e U potrebbero esser dimostrate ma non lo facciamo.

#### Esempio numerico

<!Diagramma esempio numerico>

#### Costo del MEG

Il costo del MEG è $\frac{2}{3}n^{3}$.

Questo costo con il costo della fattorizzazione ci porta al problema di risolvere il sistema di equazioni lineari.

Il primo modo sarebbe di fare il MEG è più la fattorizzazione LU, il costo di questo è $\frac{2}{3}n^{3}+2n^{2}$

Il secondo modo è di attaccare la matrice A è il vettore noto, fare il MEG su questo è poi dato che abbiamo già U possiamo risolvere il sistema con $\tilde{b}$ che troviamo con il MEG dati i cambi che subirà il vettore dei valori noti.

$$[A|b] \to[U|\tilde{b}]$$

Il costo del secondo è di: $> \frac{2}{3}n^{3}+n^{2}$, non ci sono $n^{2}$ perché non risolviamo L, e è maggiore di $\frac{2}{3}n^{3}$ perché aggiungiamo una colonna che aumenterà il numero di calcoli di un po' rispetto al MEG normale.

La scelta tra il metodo 1 e 2 non è molto facile, l'unico caso in cui è facile è quando si vogliono risolvere molti sistemi tutti usando A. Nel metodo 1 il costo sarà: $\frac{2}{3}n^{3}+q(2n^{2})$, invece il metodo 2 costerebbe: $q\left( \frac{2}{3}n^{3}+n^{2} \right)$, il costo è molto peggiore per il metodo 2 perché ci forza a fare il MEG per ogni vettore, che forza l'aumento del costo.

Il terzo modo è di risolvere con la matrice inversa. Questo modo non è usato perché il costo è di: $$\frac{8}{3}n^{3}+n^{2}$$
Questo è perché per calcolare la matrice inversa serve controllare ogni colonna e riga A con la matrice identità per poter trovare quali valori della matrice inversa formino la matrice identità. Questo è effettivamente lo stesso problema del metodo due nel caso di avere molti vettori che vogliamo controllare. 

## Identificazione dell'idoneità alla fattorizzazione LU

### Esempio

Prendiamo la matrice A e facciamo il MEG:

$$A = A^{(1)} = \begin{bmatrix}
1 & 1  & 3 \\
2 & 2 & 2 \\
3 & 6 & 4
\end{bmatrix} \underbrace{ \to }_{ l_{21}=2;l_{31}=3 } A^{(2)} = \begin{bmatrix}
1 & 1 & 3 \\
0 & 0 & -4 \\
0  & 3 & -5
\end{bmatrix}$$

Il coefficiente $l_{32}$ sara $\frac{3}{0}$ che rende il calcolo impossibile. Questo esempio ci fa vedere che certe matrici non possono fare il MEG, e quindi non è neanche possibile fare la fattorizzazione LU, perché significa che non esistono LU.

C'è una condizione sufficiente e necessaria e 3 condizioni sufficienti per determinare se una matrice può effettivamente fare la fattorizzazione LU, cioè se esistono uniche le matrici L e U.

### Condizione Necessaria e Sufficiente

Sia $A \in \mathbb{R}^{n\times n}$ allora $\exists! LU \iff$ tutte le sottomatrici principali di A di ordine $j$ con $j= 1,\dots,n-1$ sono non singolari ($\det \neq 0$).

#### Osservazione

> [!note] Osservazione
> 
>Questa condizione dice che A ha LU se le sue sottomatrici (eccetto la sottomatrice di ordine n) sono non singolari. Per risolvere il sistema di equazioni lineari $Ax=b$ serve che A sia non singolare, questo significa che è possible che esistono LU ma che esista una soluzione al sistema, se tutte le sottomatrici di ordine minore di n sono non singolari ma A stessa è singolare.

#### Esempi

<!Diagramma diversi esempi per necessario e continuo>
Come vediamo ci sono delle matrici per cui esiste LU ma non è unico e invece ci sono delle altre matrici per cui LU non esiste in generale.


### Condizioni Sufficienti

#### Prima Condizione Sufficiente

Se A ha dominanza diagonale <u>stretta</u> per righe $\implies \exists!LU$ di $A$.

La dominanza diagonale è quando l'elemento sulla diagonale è maggiore (>) in valore assoluto della somma di tutti gli altri elementi sulla riga in assoluto, cioè:
$$|a_{ii}| > \sum\limits_{j=1}^{n}|a_{ij}| \text{ per }i=1,\dots,n \text{ dove }j\neq i$$

#### Seconda Condizione

Se A ha dominanza diagonale <u>stretta</u> per colonne $\implies \exists!LU$ di $A$.

Lo stesso della prima condizione ma sulla colonne invece delle righe.

$$|a_{jj}| > \sum\limits_{i=1}^{n}|a_{ij}| \text{ per }j=1,\dots,n \text{ dove }i\neq j$$

#### Terza Condizione

Se $A$ è una matrice simmetrica e definita positiva $\implies \exists! LU$ di $A$

La simmetria è ovvia, significa che $A = A^{T}$, o che $a_{ij} = a_{ji}$.
Invece una matrice è definita positiva quando:
$$x^{T}Ax >0\quad \forall x \in\mathbb{R}^{n} \text{ con }x \neq 0$$
Il problema con questa definizione è che i computer non possono controllare ogni possibile vettore x, non finirebbe mai il calcolo.

Per fortuna un'altro modo per definire una matrice positiva è una matrice i cui autovalori sono tutti positivi, questo è reso ancora più facile dal fatto che stiamo guardando una matrice simmetrica perché per una matrice simmetrica tutti gli autovalori sono reali e quindi non dobbiamo lavorare con autovalori complessi.

Questo implica che se la matrice $A$ è simmetrica e tutti i sui autovalori sono positivi allora ha esiste una unica matrice LU per A.





