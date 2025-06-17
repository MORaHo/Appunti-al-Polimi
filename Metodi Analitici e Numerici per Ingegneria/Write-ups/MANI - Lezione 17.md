---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 17

## Metodi di Predictor-corrector

Questi metodi sono come abbiamo visto nel punto fisso, infatti è un concetto che nasce dagli ODE.

Guardando lo schema CN:
$$\begin{cases}
u_{n+1} = \underbrace{ u_{n} + \frac{h}{2} [ f(t_{n},u_{n})+f(t_{n+1},u_{n+1})] \to n \geq 0 }_{ \phi(u_{n+1}) } \\
u_{0} = y_{0}
\end{cases}$$

Essend implicito serve attivare un solver non-lineare. Tuttavia la parte a destra può esser letta come una funzione di punto fisso per trovare $u_{n+1}$.

Come abbiamo visto negli schemi iterativi possiamo usare più iterazione per approssimare un punto fisso:
$$x^{(k+1)} = \phi(x^{(k)})\to \alpha = \phi(\alpha)$$

Quindi possiamo trovare $u_{n+1} \in \mathbb{R}$, con $u_{n+1}^{(k)} \simeq u_{n+1}$ usando uno schema iterativo di se stesso.

Questo che stiamo facendo allora è di chiedere allo schema stesso di fare da metodo di punto fisso per trovare il risultato, utilizzando $u_{n}$ che è l'istante che è andato a convergenza nell'istante prima.

Questo cambio ad uno schema iterativo cambia lo schema da uno schema iterativo a uno schema esplicito.

Se $u_{n+1}^{(0)}$ è "sufficientemente ricca", allora $u_{n+1}^{(1)}$ è già una buona approssimazione per $u_{n+1}$, quindi è possiamo trovarlo in una singolare iterazione.

Cosa significa "sufficiente ricca"?

Se il mio schema implicito è di ordine p, allora $u_{n+1}^{(0)}$ deve esser generata da uno schema esplicito di ordine $\geq p-1$.

Nel caso di CN significa che possiamo usare EE per generare $u_{n+1}^{(0)}$.

Essendo CN implicito di ordine 2 che usiamo come corrector e EE esplicito di ordine 1 che usiamo da predictor.

Possiamo scrivere lo schema come:
$$\begin{cases}
u_{n+1}^{(0)} = u_{n}+hf(t_{n}.u_{n}) \\
u_{n+1}^{(1)} = u_{n}  +\frac{h}{2}[f(t_{n},u_{n})+f(t_{n+1},u_{n+1}^{(0)})]
\end{cases}$$
Questo schema è di Eulero migliorato o schema di Heun.

Essendo CN implicito di ordine 2 che usiamo come corrector e EE esplicito di ordine 1 che usiamo da predictor, potremmo assumere che prendere l'ordine da EE, ma in realtà mantiene l'ordine di CN, ma con lo svantaggio di esser condizionalmente assolutamente stabile.

## Schemi di Ordine Alto

Ci sono due modi per avere schemi di ordine più alti, gli schemi multi-step sono il prima, ma abbiamo già detto che non li vediamo. Il secondo sono i metodi one-step di Runge-Kutta.

## Metodi di Runge-Kutta

Nei metodi Runge-Kutta non abbiamo una sola analisi di $t_{n}$ e $t_{n+1}$ ma anche s stadi intermedi. Infatti chiamiamo questi metodi, metodi di Runge-Kutta a s stadi perché prendiamo un numero di stadi in base a quanti ne vogliamo.

Lo schema generale Runge-Kutta è costruito come:
$$\begin{cases}
u_{n+1} = u_{n}+h\sum\limits_{i=1}^{s}b_{i}\cdot K_{i} \\
K_{i} = f\left( t_{n}+c_{i}h,u_{n}+\sum\limits_{j=1}^{s} a_{ij}K_{j} \right)\to i=1,\dots,s \\
u_{0}=y_{0}
\end{cases}$$

Questo schema dipende da i valori di $b_{i},c_{i}$ e $a_{ij}$.
Possiamo orgaizzare questi valori in un Array di Butcher come:
$$\begin{matrix}
&c &| &A\\
&- &+ &- \\
& &| &b^{^{T}}
\end{matrix}$$

Dove A è la matrice dei valori $a_{ij}$. I diversi vettori e matrici hanno dimensione $A\in\mathbb{R}^{s\times s}$ e $b,c\in \mathbb{R}^{s}$.

Possiamo ricavare i diversi $K_{i}$ con i valori in ogni riga.

Se A è composta da tutti elementi non nulli, allora tutti i K, sono dipendenti da tutti gli altri K, quindi è un sistema non-lineare per cui possiamo usare Newton per sistemi.

Se è strettamente triangolare inferiore, possiamo vedere che ogni $K_{i}$ è dipendente solo da tutti i $K_{i}$ prima di se e anche non se stesso, questo rende RK a s stadi uno schema esplicito.

Se un $K_{i}$ è dipendente da se stesso o un $K_{i}$ che non abbiamo ancora trovato allora è uno schema implicito.

### Esempi di Schemi di Runge-Kutta

#### RK4 $\to$ RK a 4 stadi

Aventi 4 stadi, RK4 è convergente di ordine 4.

Lo schema ha forma:
$$\begin{cases}
u_{n+1} = u_{n}+\frac{h}{6}[K_{1}+2K_{2}+2K_{3}+K_{4}]\to n \geq 0 \\
u_{0}=y_{0}
\end{cases}$$
Con valori $K_{i}$:
$$\begin{cases}
K_{1} = f(t_{n},u_{n}) \\
K_{2}  = f\left( t_{n}+\frac{h}{2},u_{n}+\frac{h}{2}K_{1} \right) \\
K_{3} = f\left( t_{n}+\frac{h}{2},u_{n}+\frac{h}{2}K_{2} \right) \\
K_{4} = f(t_{n+1},u_{n}+hK_{3})
\end{cases}$$

L'Array di Butcher per RK4 è:
$$\begin{matrix}
 & 0 & | & 0 & 0 & 0 & 0 \\
& \frac{1}{2} & | & \frac{1}{2} & 0 & 0 & 0 \\
& \frac{1}{2} & | & 0 & \frac{1}{2} & 0 & 0 \\
&1 & | & 0 & 0 & 1 & 0 \\
&- &+ &-&-&-&- \\
 &  & | & \frac{1}{6}  & \frac{1}{3} & \frac{1}{3} & \frac{1}{6}
\end{matrix}$$

#### EE

Eulero esplicito può esser scritto come Runge-Kutta ad 1 stadio (RK1).

$$u_{n+1}=u_{n}+h\underbrace{ f(t_{n},u_{n}) }_{ K_{1} }$$

L'Array di Butcher per EE è:
$$\begin{matrix}
 & 0 & | & 0\\ &-&+&-\\&&| & 1
\end{matrix}$$

#### Heun = RK2

Lo schema di Heun è:
$$\begin{cases}
u_{n}^{(1)} = u_{n}+ \frac{h}{2}[\underbrace{ f(t_{n,}u_{n}) }_{ K_{1} }+\underbrace{ f(t_{n+1},u_{n+1}^{(0)}) }_{ K_{2} }] \\
u_{n+1}^{(0)} = u_{n} + \underbrace{ h f(t_{n},u_{n}) }_{ K_{1} }
\end{cases}$$

L'Array di Butcher per Heun è:
$$\begin{matrix}
 & 0 & | & 0 & 0 \\
&1 & | & 1 & 0 \\
&-&+&-&- \\
&&| & \frac{1}{2} & \frac{1}{2}
\end{matrix}$$

## Sistemi di ODE

Ora che abbiamo visto come si applicano i metodi numerici per gli ODE di grado 1 possiamo vedere come si applicano per ODE di grado 1.

Definiamo ogni funzione incognite come:
$$y_{i}:[t_{0},T] \subset \mathbb{R}\to \mathbb{R},i=1,\dots,m$$
Quali sono questi $y_{1},y_{2},\dots,y_{m}$.

Possiamo definire il sistema di ODE:
$$\begin{cases}
y_{1}' (t) = f_{1}(t_{n},y_{1}(t),y_{2}(t),\dots,y_{m}(t)) \\
y_{2}' (t) = f_{2}(t_{n,}y_{1}(t),y_{2}(t),\dots,y_{m}(t)) \\
\vdots \\
y'_{m}(t) = f_{m}(t_{n},y_{1}(t),y_{2}(t),\dots,y_{m}(t))
\end{cases}$$
Definiamo le condizioni iniziali come:
$$\begin{cases}
y_{1}(t_{0}) = y_{1,0} \\
y_{2}(t_{0}) = y_{2,0} \\
\vdots \\
y_{m}(t_{0}) = y_{m,0}
\end{cases}$$

Vogliamo riportare questo sistema alla forma:
$$\begin{cases}
y'(t) = f(t,y(t)) \\
y(t_{0})= y_{0}
\end{cases}$$

Per fare questo possiamo definire diversi vettori. Per primo possiamo definire il vettore di funzioni incognite come:
$$\vec{y}(t) = \begin{bmatrix}
y_{1}(t) \\
y_{2}(t) \\
\vdots \\
y_{m}(t)
\end{bmatrix}$$

Un vettore delle funzioni note, se stesso funzione del vettore delle funzioni incognite, come ogni suo componente:
$$\vec{F}(t,\vec{y}(t)) = \begin{bmatrix}
f_{1}(t,\vec{y}(t)) \\
f_{2}(t,\vec{y}(t)) \\
\vdots \\
f_{m}(t,\vec{y}(t))
\end{bmatrix}$$
In forma breve:
$$\vec{y}'(t) = \vec{F}(t,\vec{y}(t))$$

Introduciamo il vettore delle condizioni iniziali:
$$\vec{y}_{0} = [y_{1,0},\dots,y_{m,0}]^{^{T}}$$

Possiamo allora scrivere il sistema come:
$$\begin{cases}
\vec{y}'(t) = \vec{F}(t,\vec{y}(t)) \\
\vec{y}(t_{0}) = \vec{y}_{0}
\end{cases}$$
Dove $\vec{y}(t_{0})$ è il vettore dei punti iniziali che vogliamo definire.

EE nel case scalare ha forma:
$$\begin{cases}
u_{n+1} = u_{n}+hf(t_{n},u_{n}) \\
u_{0}=y_{0}
\end{cases}$$

Invece in forma vettoriale lo scriviamo come:
$$\begin{cases}
\vec{u}_{n+1} = \vec{u}_{n} + h \vec{F}(t_{n},\vec{u}_{n}) \\
\vec{u}_{0} = \vec{y}_{0}
\end{cases}$$

In questo schema $\vec{u}_{n+1} \simeq \vec{y}(t_{n+1})$. Tale che questo sia vero ogni elemento di $\vec{u}_{n+1}$ deve approssimare l'associato elemento nel vettore $\vec{y}_{n+1}$.

Questo significa che dobbiamo imporre lo schema per ogni elemento tale che:
$$\begin{cases}
u_{n+1,1} = u_{n,1} + hf_{1}(t_{n},u_{n,1}u_{n,2},\dots,u_{n,m}) \\
u_{n+1,2} = u_{n,2} + hf_{2}(t_{n},u_{n,1}u_{n,2},\dots,u_{n,m}) \\
\vdots \\
u_{n+1,m} = u_{n,m} + hf_{m}(t_{n},u_{n,1}u_{n,2},\dots,u_{n,m})
\end{cases}$$

È il vettore delle condizioni iniziali significa che sono uguali elemento per elemento.

### Generalizzando $\to$ $\theta$-method

Possiamo generalizzare ogni schema in modo possiamo una variabile e definire i diversi schemi e altri gli altri infiniti schemi che non vediamo:
$$\begin{cases}
\vec{u}_{n+1} = \vec{u}_{n} + h[\theta \vec{F}(t_{n+1},\vec{u}_{n+1})+(1-\theta)\vec{F}(t_{n,}\vec{u}_{n})] \\
\vec{u}_{0} = \vec{y}_{0} \\
0 \leq \theta \leq 1
\end{cases}$$

Per $\theta=0$ $\to$ EE
Per $\theta = 1$ $\to$ EI
Per $\theta=\frac{1}{2}$ $\to$ CN

$\theta = \frac{1}{2}$ è il confine della stabilità assolutamente condizionata e incondizionata, perciò di solito nella pratica si va a $\theta = \frac{2}{3}$ per avere stabilità assoluta.

## Equazioni Differenziali a Derivate Parziali (PDE)

Le ODE prendono forma:
$$y=y(t)$$
E abbiamo una condizione iniziale, lo chiamiamo iniziale perché di solito la ODE è di solito la variabile indipendente è il tempo.

I PDE invece prendono la forma:
$$u=u(t,x)\text{ o }u = u(x,y)$$

I PDE sono dipendenti da più di una variabile indipendente.

La realtà è un PDE di forma:
$$u = u(t,x,y,z)$$
Perché cambia sia con il tempo che con lo spazio.

Per i PDE invece di condizioni iniziali di solito si parla di condizioni di bordo, questo termine tiene a conto della forma multidimensionale dei PDE. Se il PDE è dipendente dal tempo e dallo spazio (in qualsiasi dimensione) allora si danno sia i valori iniziali che le condizioni di bordo.

La funzione note dei PDE prende forma:
$$F\left( \vec{x},t,y,\underbrace{ \frac{ \partial u }{ \partial t } ,\frac{ \partial u }{ \partial x } ,\dots,\frac{ \partial u }{ \partial x_{d} } }_{ \text{Derivate di ordine 1} }, \underbrace{ \; }_{ \text{Derivate di Ordine 2} },\dots, \frac{\partial^{^{p_{_{1}}+\dots+p_{d}+p_{t}}}u}{\partial x_{1}^{p_{1}}\cdots\partial x_{d}^{p_{d}}\partial t^{p_{t}}},g \right)=$$

Il vettore $\vec{x} = [x_{1},\dots,x_{d}]^{T}$ è il vettore di dipendenza dello spazio.

Il termine grande alla fine è il grado di dipendenza massimo che prendiamo rispetto alle variabili indipendenza.

$\Omega \subset \mathbb{R}^{d}$ è il dominio dove $d$ può avere valore 1,2 o 3.

$g$ è la dipendenza dai dati.

L'ordine del PDE è:
$$p = p_{1}+\dots+p_{d}+p_{t}$$
$p_{1}$ è il grado massimo di dipendenza rispetto alla prima variabile indipendente dello spazio che prendiamo. Ogni altro termine è il rispettivo per le variabili.

### Classificazioni di PDE

#### Forma
I PDE possono esser classificati in 2 tipi di forma:
- lineari:$$\frac{ \partial u }{ \partial t } -\frac{ \partial^{2} u }{ \partial t^{2} } =f$$
- non-lineare: $$\frac{ \partial u }{ \partial t } -\mu \frac{ \partial^{2} u }{ \partial x^{2} } +u^{2} = \widetilde{f}$$
Il caso lineare è quello che guardiamo generalmente.
Il caso non-lineare è più complesso perché la funzione incognite dipende non linearmente da se stessa.

#### Tempo-dipendenza

Si può avere una PDE stazionaria e una non-stazionaria.

La stazionaria non è variabile nel tempo e quella non-stazionaria è una variabile nel tempo.

#### Dimensione dello spazio

In base a d la nostra funzione è variabile in dimensioni dello spazio diverse:

- se d = 1, abbiamo un intervallo
- se d = 2, abbiamo una area
- se d = 3, abbiamo un volume




