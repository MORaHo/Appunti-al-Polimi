---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 12 - Metodo delle Potenze per ricavare Autovalori e Autovettori

## Autovalori e Autovettori

Per $A \in \mathbb{C}^{n\times n}$

 Abbiamo $\lambda \in \mathbb{C}$ e $v \in \mathbb{C}^{n}$ tale che $Av=\lambda v$.

Ci sono diversi metodi per il ricavo degli autovalori e autovettori.
#### Quoziente di Rayleigh

Noto $v$ allora $\lambda = \frac{v^{H}Av}{\mid\mid v\mid\mid^{2}}$.

Dove $\mid\mid v\mid\mid^{2} = v^{H}v$ e $v^{H}$ è la generalizzazione al campo complesso del trasposto.

Trovato l'autovettore abbiamo l'autovalore.

#### Polinomio Caratteristico

Gli autovalori si trovano per il polinomio caratteristico con:
$$p_{_{A}}(\lambda) = \det(A-\lambda I)$$

Questo non è il metodo preferito perché con matrici grandi richiede risolvere un'equazione non-lineare di grado molto alto, quindi se si può evitare si fare.

> [!note] A questo punto ha detto qualcosa che devo ricontrollare.
> 

#### Matrice Diagonalizzabile

A è diagonalizzabile se $\exists U \in C^{n\times n}$ invertibile tale che $U^{-1}AU = daig(\lambda_{1},\dots,\lambda_{n})$

Se non si può usare questo allora si usano i metodi vediamo ora.
Le matrici diagonali e triangolari hanno $\lambda$ facili da trovare.

## Esempio fisico degli autovalori

Prendiamo il sistema
<!Diagramma del sistema>

Le masse concentrate hanno equazione:
$$\begin{gather}
m\ddot{x}_{1} = k(x_{2}-x_{1})-kx_{1} \\
m\ddot{x}_{2} = k(x_{1}-x_{2})
\end{gather}$$
In forma matriciale possiamo avere:
$$m\begin{bmatrix}
\ddot{x}_{1}\\\ddot{x}_{2}
\end{bmatrix} = \begin{bmatrix}
-2k & k\\k & -k
\end{bmatrix}\cdot \begin{bmatrix}
x_{1} \\x_{2}
\end{bmatrix}$$

Possiamo definire il moto in modo generale come:
$$\begin{gather}
\begin{bmatrix}x_{1} \\x_{2}\end{bmatrix} = \begin{bmatrix}A_{1}\\A_{2}\end{bmatrix}e^{ i\omega t } \\
\begin{bmatrix}\dot{x}_{1}\\\dot{x}_{2}\end{bmatrix} = \begin{bmatrix}A_{1}\\A_{2}\end{bmatrix}i\omega e^{ i\omega t } \\
\begin{bmatrix}\ddot{x}_{1}\\\ddot{x}_{2}\end{bmatrix} = \begin{bmatrix}A_{1}\\A_{2}\end{bmatrix}-\omega^{2}e^{ i\omega t }
\end{gather}$$
Imponendo queste equazioni del moto generalizzato nella equazione nella forma matriciale, abbiamo:
$$\begin{gather}
-m\omega^{2}\begin{bmatrix}A_{1}\\A_{2}\end{bmatrix} \cancel{ e^{ i\omega t } } = \begin{bmatrix}-2k  &  k\\k & -k\end{bmatrix}\cdot \begin{bmatrix}A_{1}\\A_{2}\end{bmatrix}\cancel{ e^{ i\omega t } }\\ \\\underbrace{ 
\begin{bmatrix}2k & -k\\-k & k\end{bmatrix} }_{ A }\cdot \underbrace{ \begin{bmatrix}A_{1}\\ A_{2}\end{bmatrix} }_{ v } = \underbrace{ -m\omega^{2} }_{ \lambda }\cdot \underbrace{ \begin{bmatrix}A_{1}\\A_{2}\end{bmatrix} }_{ v }
\end{gather}$$

È un problema di autovalori di ordine 2 perché ci sono 2 $\omega$ che soddisfano la equazione.

## Metodi Computazionali

Ci sono due tipi di metodi computazionali per calcolare autovalori.

I metodi che calcolano lo spettro intero (QR), sono utili ma non li guardiamo in questo corso.

Altri metodi sono usati per calcolare 1 autovalore target e il corrispondente autovettore, questi sono quelli che guardiamo. Guardiamo:
- Metodo delle potenze
- Metodo delle potenze inverse

## Metodo delle Potenze

Sia $A \in \mathbb{R}^{n\times n}$ con autovettori linearmente indipendenti e autovalori tale che: $$|\lambda_{1}| > |\lambda_{2}|\geq|\lambda_{3}| \geq \dots \geq |\lambda_{n}|$$
Prendiamo il guess iniziale $x^{(0)} \in \mathbb{C}$ e calcoliamo:
$$y^{(0)} = \frac{x^{(0)}}{\mid\mid x^{(0)}\mid\mid}$$
Questo è perché la richiesta computazionale è x unitario, non x stesso.
Cerchiamo allora in effetti ($\lambda_{1},x_{1}$), autovalore e autovettore unitario associato.

Quindi oggetti di tipo y trovano $x_{1}$.

### Algoritmo

Per $k=1,\dots$

$$\begin{gather}
x^{(k)} = Ay^{(k-1)} \\
y^{(k)} = \frac{x^{(k)}}{\mid\mid x^{(k)}\mid\mid} \\
\lambda^{(k)} = (y^{(k)})^{H}Ay^{(k)}
\end{gather}$$

Per $k\to \infty$, $y^{(k)} \simeq x_{1}$ e $\lambda^{(k)} \simeq\lambda_{1}$
Il primo passo in questo algoritmo è preso in modo simile ad un punto fisso perché prende $\lambda=1$ che significa che la equazione per $k\to \infty$ è $Av=v$

### Criterio d'Arresto

$N_{max}$ in questo caso è:
$$N_{max} = \underbrace{ \frac{|\lambda^{(k)}-\lambda^{(k-1)}|}{|\lambda^{(k)}|}  }_{ \text{Incremento Relativo} }< \mathcal{E} $$

### Perché si chiama metodo delle potenze?

Per capire perché si chiama metodo delle potenze, scriviamo alcune iterazioni:

$$\begin{align}
&k=1 & x^{(1)} = Ay^{(0)}\,;\,&&y^{(1)} = \frac{Ay^{(0)}}{\mid\mid x^{(1)}\mid\mid} \,;\,&&\lambda^{(1)} = (y^{(1)})^{H}Ay^{(1)} \\
&k=2 & x^{(2)} = Ay^{(1)}\,;\,&&y^{(2)} = \frac{Ay^{(1)}}{\mid\mid x^{(2)}\mid\mid}\,;\,&& \lambda^{(2)} = (y^{(2)})^{H}Ay^{(2)}
\end{align}$$
$y^{(2)}$ può esser riscritto come:
$$y^{(2)} = \frac{A^{2}y^{(0)}}{\mid\mid x^{(1)}\mid\mid \cdot\mid\mid x^{(2)}\mid\mid} = \beta^{(2)}A^{2}y^{(0)}$$

In questa equazione:
$$\beta^{2} = (\mid\mid x^{(1)}\mid\mid \cdot\mid\mid x^{(2)}\mid\mid)^{-1}$$

Iterazione k-esima:
$$\begin{gather}
x^{(k)} = Ay^{(k-1)} \\
y^{(k)} = \beta^{(k)}A^{k}y^{(0)} \\
\beta^{(k)} = \left( \prod_{i=1}^{k}\mid\mid x^{(i)}\mid\mid \right)^{-1} \\
\lambda^{(k)} = (y^{(k)})^{H}Ay^{(k)}
\end{gather}$$
Da qui vediamo perché chiamato metodo delle potenze e vediamo anche la forma più computazionalmente utile del metodo.

## Analisi della convergenza

Per fare questa analisi sfruttiamo la ipotesi 2, che dice che i nostri autovettori sono linearmente indipendenti e perciò formano base di $\mathbb{C}^{n\times n}$

Il nostro guess iniziale possiamo scriverlo come:
$$x^{(0)} = \sum_{i=1}^{n}\underbrace{ \alpha_{i} }_{ \in \mathbb{C} }x_{i} \implies  y^{(0)} = \gamma^{(0)}\sum_{i=1}^{n}\alpha_{i}x_{i}$$
In questo caso $x_{i}$ sono gli autovettori che formano la base di A.
È $\gamma^{(0)}$ è:
$$\gamma^{(0)} = \frac{1}{\mid\mid x^{(0)}\mid\mid}$$

La convergenza in questo caso implica che $x^{(k)}$ ha la direzione $x_{1}$ e $\lambda^{(k)}$ ha il valore di $\lambda_{1}$.

Nella prima iterazione:
$$\begin{gather}
x^{(1)} = Ay^{(0)} = \gamma^{(0)}\sum_{i=1}^{n}\alpha_{i}\underbrace{ Ax_{i} }_{ \lambda_{i}x_{i} }= \gamma^{(0)}\sum\alpha_{i}\lambda_{i}x_{i} \\
y^{(1)} = \gamma^{(1)}\sum_{i=1}^{n}\alpha_{i}\lambda_{i}x_{i} \\
\gamma^{(1)} = (\mid\mid x^{(0)}\mid\mid \cdot\mid\mid x^{(1)}\mid\mid)^{-1}
\end{gather}$$

La seconda iterazione è:
$$\begin{gather}
x^{(2)} = Ay^{(1)} = \gamma^{(1)}\sum_{i=1}^{n}\alpha_{i}\lambda_{i}\underbrace{ Ax_{i} }_{ \lambda_{i}x_{i} } = \gamma^{(1)}\sum_{i=1}^{n}\alpha_{i}\lambda_{i}^{2}x_{i} \\
y^{(2)} = \gamma^{(2)} \sum_{i=1}^{n}\alpha_{i}\lambda_{i}^{2}x_{i} \\
\gamma^{(2)} = (\mid\mid x^{(0)}\mid\mid \cdot\mid\mid x^{(1)}\mid\mid \cdot\mid\mid x^{(2)}\mid\mid)^{-1}
\end{gather}$$
Per la iterazione k allora questi sono:
$$\begin{gather}
y^{(k)} = \gamma^{(k)}\sum_{i=1}^{n}\alpha_{i}\lambda_{i}^{k}x_{i} \\
\gamma^{(k)} = \left( \prod_{i=0}^{k}\mid\mid x^{(i)}\mid\mid \right)^{-1}
\end{gather}$$

Ora possiamo sfruttare la ipotesi 1 dell'ordine degli autovalori, isoliamo il termine dell'autovalore dominante e possiamo scrivere
$$\begin{align}
y^{(k)} &= \gamma^{(k)}\left[ \alpha_{1}\lambda_{1}^{k}x_{1}+\sum_{i=2}^{n}\alpha_{i}\lambda_{i}^kx_{i} \right] \\
& = \alpha_{1} \lambda_{1}^{k}\left[ x_{1}+\sum_{i=2}^{n} \frac{\alpha_{i}}{\alpha_{1}}\cdot\left( \frac{\lambda_{i}}{\lambda_{1}} \right)^{k}x_{i} \right] \text{con }\alpha_{1}\neq 0
\end{align}$$
L'ipotesi 1 ci dice che:
$$|\lambda_{1}| > |\lambda_{2}|\geq|\lambda_{3}| \geq \dots \geq |\lambda_{n}|$$

Per $k\to \infty$ allora:
$$\left( \frac{\lambda_{i}}{\lambda_{1}} \right)^{k}\to 0 \implies  \underbrace{ \sum_{i=2}^{n} \frac{\alpha_{i}}{\alpha_{1}}\cdot \left( \frac{\lambda_{i}}{\lambda_{1}} \right)^{k}x_{i} }_{ =0 }$$
Implica che $y^{(k)}$ si allinea con $x_{1}$ per $k\to \infty$
Che in se implica che $\lambda^{(k)}$ tende a $\lambda_{1}$

Troviamo il $\lambda^{(k)}$ con il quoziente di Rayleigh

### Osservazioni

### Velocità di Convergenza

$$\begin{align}
\mid\mid x_{1}-y^{(k)}\mid\mid &= \\
&=\mid\mid x_{1}-x_{1}-\sum_{i=2}^{n}  \frac{\alpha_{i}}{\alpha_{1}} \left( \frac{\lambda_{i}}{\lambda_{1}} \right)^{k}x_{i}\mid\mid \\
& = \mid\mid \sum_{i=2}^{n}  \frac{\alpha_{i}}{\alpha_{1}} \cdot \left( \frac{\lambda_{i}}{\lambda_{1}} \right)^{k}x_{i} = \left[ \sum_{i=2}^{n} \left[ \frac{\alpha_{i}}{\alpha_{1}} \right]\cdot \left( \frac{\lambda_{i}}{\lambda_{1}} \right)\right]^{1/2}
\end{align}$$

Dentro alle parentesi si ha:
$$\frac{\mid\lambda_{1}\mid}{\mid\lambda_{1}\mid} > \frac{\mid\lambda_{2}|}{|\lambda_{1}|} \geq \dots \geq \frac{\mid\lambda_{n}|}{|\lambda_{1}|}$$

Questo significa che nel caso migliore dove ogni $\lambda_{i}$ con $i\neq 1$  è uguale a $\lambda_{2}$, la equazione la possiamo scrivere come:
$$\leq \mid \frac{\lambda_{2}}{\lambda_{1}}\mid ^{k}\cdot \left[ \sum_{i=1}^{n}\left[ \frac{\alpha_{i}}{\alpha_{1}} \right]^{2} \right]^{1/2}$$

Il termine alla sinistra tende a 0, ed è l'indicatore della velocità di convergenza. Più sono lontani più è veloce la convergenza.

## Metodo delle Potenze Inverse

Questo metodo è usato per trovare l'autovalore minimo e l'associato autovettore.

Questo metodo richiede che A sia invertibilie.

Gli autovalori di A, $\lambda$, sono gli inversi degli autovalori di $A^{-1}$, $\frac{1}{\lambda}$.

Applichiamo il metodo delle potenze su $A^{-1}$ e troviamo $\frac{1}{\lambda_{n}}$ che invertiamo per trovare $\lambda_{n}$.

Gli autovettore delle matrice non si trovano in modo immediato, dobbiamo fare dei calcoli:
$$\begin{gather}
Ax=\lambda x \\
A^{-1}Ax = \lambda A^{-1}x \\
x= \lambda A^{-1}x \\
A^{-1}x = \frac{1}{\lambda}x
\end{gather}$$

Gli autovettore di A sono gli autovettori di $A^{-1}$

La ipotesi che usiamo per questo metodo è:
$$\frac{1}{\mid\lambda_{1}\mid} < \frac{1}{\mid\lambda_{2}\mid} \leq \dots < \frac{1}{\mid\lambda_{n}\mid}$$






















