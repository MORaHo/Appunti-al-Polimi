---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 19 - Fourier and Separazioni di Variabili

Esistono diversi strumenti per risolvere i PDE, noi ne guardiamo due:
- Fourier $\to$ per soluzione periodiche, e utiler per imporre condizioni di bordo perché per $\sin$ e $\cos$ sappiamo dove stanno a 0.

## Serie di Fourier

Guardiamo Fourier in 1 dimensione. In una dimensione trasforma la funzione in valori reali.

Prendiamo per ipotesi che possiamo scrivere funzioni periodiche di periodo $2T$ come la serie trigonometrica:
$$u(x) = \underbrace{ U }_{ \frac{a_{0}}{2} }+\sum_{k=1}^{\infty}\{a_{k}\cos(k\omega x)+b_{k}\omega \sin(k\omega x)\}$$

Dove $U,a_{k},b_{k}\in\mathbb{R}$

Prendiamo anche per ipotesi che la serie di Fourier converge uniformemente in $\mathbb{R}$.

Definiamo le relazioni di ortogonalità:
$$\begin{align}\text{1.}&\int\limits_{-T}^{T} \cos(k\omega x)\cdot \cos(m\omega x) \, dx = \int\limits_{-T}^{T} \sin (k\omega x) \cdot \sin (m\omega x)\, dx=0 \to \text{dove }k \neq m\\\text{2.} &\int\limits_{-T}^{T} \cos (k\omega x) \cdot \sin( m\omega x)\, dx=0 \\\text{3.}&\int\limits_{-T}^{T} \cos ^{2}(k\omega x) \, dx= \int\limits_{-T}^{T} \sin ^{2}(k\omega x) \, dx=T\end{align}$$

Come ricaviamo i calori per $a_{k}, b_{k},U$? Usiamo le relazioni.

Moltiplicando $u(x)$ per $\cos(n\omega x)$ e integrando, utilizzando tutte e tre le relazioni ricaviamo che:
$$\int\limits_{-T}^{T} u(x)\cos(n\omega x) \, dx =Ta_{n}\to a_{n} = \frac{1}{T}\int\limits_{-T}^{T} u(x)\cos(n\omega x) \, dx $$

Se $n=0$:
$$\int\limits_{-T}^{T} u(x) \, dx =2UT \to U = \frac{a_{0}}{2}\to a_{0} = \frac{1}{T}\int\limits_{-T}^{T} u(x) \, dx $$

Moltiplicando per $\sin(n\omega x)$ invece, ricaviamo:
$$b_{n} = \frac{1}{T}\int\limits_{-T}^{T} u(x) \sin(n\omega x)\, dx $$

#### Osservazioni

##### Dispari

Se la funzione è dispari, cioè $u(x) = -u(-x)$, allora $a_{k}=0$ e abbiamo che:
$$b_{k} = \frac{2}{T} \int\limits_{-T}^{T} u(x)\sin(k\omega x) \, dx $$
Allora abbiamo che la funzione è:
$$u(x) = \sum_{k=1}^{\infty}b_{k}\sin(k\omega x)$$

##### Pari

Se la funzione è pari, cioè $u(x) = u(-x)$:

$b_{k}=0$ per $k\geq 1$ e:
$$a_{k} = \int\limits_{-T}^{T} u(x) \cos(k\omega x)\, dx $$

La funzione allora sarà:
$$u(x) = \frac{a_{0}}{2}+\sum_{k=1}^{\infty}a_{k}\cos(k\omega x)$$

##### Serie di Fourier in $\mathbb{C}$

Per lavorare nel campo complesso dobbiamo ricordarci la formula di Eulero:
$$e^{ \pm ik\omega x }=\cos(k\omega x)\pm i\sin(k\omega x)$$

Possiamo allora scrivere la serie di Fourier come:
$$u(x) = \sum_{k=-\infty}^{\infty}c_{k}e^{ ik\omega x }$$
Dove:
$$c_{k} = \frac{1}{2T}\int\limits_{-T}^{T} u(x)e^{ -ik\omega x }  \, dx $$

Espandendo dovremmo trovare i diversi valori:
$$c_{0} = \frac{a_{0}}{2};c_{k} = \frac{1}{2}(a_{k}-ib_{k}); c_{-k}=\underbrace{ \overline{c_{k}}_{} }_{ \substack{\text{Complesso}\\\text{coniugato}} } $$
Espandiamo per avere una forma più leggibile:

$$e^{ix} = \cos(x)+i\sin(x)$$
L'inverso di questa funzione può esser scritta in due modi:
$$\begin{gather}
\to e^{ -ix } = \cos(-x)+i\sin(-x) \\
e^{ -ix } = \cos(x)-i\sin(x)
\end{gather}$$

Facendo la somma e differenza:
$$e^{ix}+e^{ -ix } = 2\cos(x)\to \cos(x) = \frac{1}{2}[e^{ix }+e^{ -ix }]$$
$$e^{ ix }-e^{ -ix } = 2\sin(x)\to \sin(x) = \frac{1}{2}[e^{ ix }-e^{ -ix }]$$
Utilizzando la formula di Eulero e le identità appena trovate, possiamo scrivere la serie di Fourier:
$$=\frac{a_{0}}{2}+\sum_{k=1}^{\infty} \frac{a_{k}}{2}(e^{ ik\omega x }+e^{ -ik\omega x })+ \sum_{k=1}^{\infty} \frac{b_{k}}{2i}(e^{ ik\omega x }-e^{ -ik\omega x })$$
Spostando i valori e moltiplicando e dividendo per $i$:
$$\frac{a_{0}}{2}+\sum_{k=1}^{\infty}e^{ ik\omega x }\left[ \frac{a_{k}}{2}-\frac{ib_{k}}{2} \right]+\sum_{k=1}^{\infty}e^{ -ik\omega x }\left[ \frac{a_{k}}{2}+\frac{ib_{k}}{2} \right]$$

Infine:
$$\underbrace{ \frac{a_{0}}{2} }_{ c_{0} } + \sum_{k=1}^{\infty} \underbrace{ \frac{e^{ ik\omega x }}{2}[a_{k}-ib_{k}] }_{ c_{k}e^{ ik\omega x } } + \sum_{k=1}^{\infty}  \underbrace{ \frac{e^{ -ik\omega x }}{2}[a_{k}+ib_{k}] }_{ \overline{c}_{k}e^{ -ik\omega x }  }$$

Siamo riusciti a riesprimere la serie in un'altro modo e siamo riusciti a ricavare i valori nella forma che avevamo detto che li avremmo trovati.

### Troncamento della Serie

Pensando sempre ai computer, come abbiamo detto molte volte, quando c'è un $\infty$ dobbiamo fare un troncamento. Vogliamo che questo troncamento per $n\to \infty$ che converga come fa la funzione.

Prendiamo la troncata n-esima:
$$S_{N}(x) = \frac{a_{0}}{2}+\sum_{k=1}^{N}\{a_{k}\cos(k\omega x)+b_{k}\sin(k\omega x)\}\mathop{\sim}^{?}u(x)$$
Questo troncamento per lo scopo di trovare una funzione è simile a quello che abbiamo fatto per interpolazione, ma in questo caso $u(x)$ è di tipo trigonometrico.

Vogliamo trovare se questo troncamento converge e a cosa converge.
Idealmente per $N\to \infty$ converge a $u(x)$.

#### Proprietà della Serie di Fourier troncata

##### Teorema: Convergenza in media quadratica integrale

Sia $u$ una funzione a quadrato integrabile su $(-T,T)$. Allora:
$$\lim_{ N \to \infty } \int\limits_{-T}^{T} [S_{N}(x)-u(x)]^{2} \, dx =0$$
L'errore quadratico integrato va a 0, cioè come converge.
Inoltre vale l'identità di Parseval:
$$\frac{1}{T}\int\limits_{-T}^{T} u^{2}(x) \, dx =\frac{a_{0}^{2}}{2}+\sum_{k=1}^{\infty}(a_{k}^{2}+b_{k}^{2})$$
Che indica a dove converge.
$(a_{k}^{2}+b_{k}^{2})$ non può fare altro che andare a 0, se no esploderebbe.

Se una funzione è quadrato integrabile l'integrale del suo quadrato è finito.

##### Corollario: Teorema di Riemann-Lebesgue
$$\lim_{ k \to \infty } a_{k}=\lim_{ b \to \infty } b_{k}=0$$

##### Convergenza Puntuale

Diciamo che $u$ soddisfa la condizione di Dirichlet in $[-T,T]$ se $u$ è continua in $[-T,T]$ tranne che al più in un numero finito di punti di discontinuità di prima specie, e se l'intervallo $[-T,T]$ può esser suddiviso in un numero finito di sotto-intervalli in ciascuno di quali è monotono.

Se $u$ soddisfa la condizione di Dirichlet in $[-T,T]$ allora $S_{n}$ converge $\forall$ punto in $[-T,T]$ con:
$$\frac{a_{0}}{2}+\sum_{k=1}^{\infty}a_{k}\cos(k\omega x)+b_{k}\sin(k\omega x) = \begin{cases}
\frac{u(x^{+})+u(x^{-})}{2} \to x \in (-T,T) \\
\frac{u(T^{-})+u(-T^{+})}{2} \to x =\pm T
\end{cases}$$

## Separazione di Variabili in Coordinate Cartesiane

Definiamo un problema:
$$\begin{cases}
-\Delta u(x,y)=0  \to (x,y)\in \Omega \\
u(x,0) = g_{1}(x) \to x\in(0,L): \Gamma_{1} \\
u(x,H) = 0 \to x\in(0,L): \Gamma_{2} \\
u(0,y) = u(L,y) \to y\in(0,H): \Gamma_{3}\text{ e }\Gamma_{4}
\end{cases}$$

Definiamo $U:\Omega\to \mathbb{R}$ come una funzione a variabili separabili, tale che:
$$u \simeq U(x,y) = X(x)Y(y)$$
Dove la funzione su x è $X:(0,L)\to \mathbb{R}$ e su y è $Y: (0,H)\to \mathbb{R}$.

Imponiamo le 5 condizioni su U per ricavare le forme di $X(x)$ e di $Y(y)$.

### Passo 1
Imponiamo la prima condizione:
$$\begin{gather}
-\Delta U=0 \\
\implies  - \Delta U = -\frac{ \partial^{2} U }{ \partial x^{2} } -\frac{ \partial^{2} U }{ \partial y^{2} }  \\
\to \frac{ \partial^{2} U }{ \partial x^{2} }  = X''(x)Y(y) \\
\to \frac{ \partial^{2} U }{ \partial y^{2} }  = X(x)Y''(y)
\end{gather}$$
$$\implies \Delta U = X''(x)Y(y)+X(x)Y''(y)=0$$

Possiamo riscrivere questo come:
$$\frac{X''(x)}{X(x)} = -\frac{Y''(y)}{Y(y)} \to x\in(0,L)\text{ e }y\in(0,H)$$
Tale che sia vera $\forall x,y$ serve che:
$$\frac{X''(x)}{X(x)} = -\frac{Y''(y)}{Y(y)} = k$$
$$\implies  \begin{cases}
X''(x)-kX(x)=0 \\
Y''(y) + kY(y) = 0
\end{cases}$$
Abbiamo scritto un problema di x e y, e siamo riusciti a riscriverlo come un problema in x e un problema in y.

### Passo 2
Imponiamo $\Gamma_{3}$ e $\Gamma_{4}$.

$$U(0,y) = U(L,y)=0 \to y\in(0,H)$$
Mettendo questi valori abbiamo:
$$X(0)Y(y) = X(L)Y(y)=0\to \forall y\in(0,H)$$
$$\implies  X(0)= X(L)=0$$
Il nostro problema in x allora è:
$$\begin{cases}
X''(x)-kX(x) = 0 \\
X(0)=0 \\
X(L)= 0
\end{cases}$$
#### Caso 1 $\to$ $k=\lambda^{2}$
Come abbiamo visto nella esercitazione in questo caso la soluzione prende forma:
$$X(x) = Ae^{ \lambda x }+Be^{ -\lambda x } \to A,B \in \mathbb{R}$$
Abbiamo che:
$$\begin{cases}
X(0) = A+B=0 \\
X(L) = Ae^{ \lambda L }+Be^{ -\lambda L }=0
\end{cases}\implies A=B=0$$

#### Caso 2 $\to$ $k=0$
Le soluzione prende forma
$$X(x)= A+Bx \to A,B\in \mathbb{R}$$
E la soluzione sarà:
$$\begin{cases}
X(0)=  A=0 \\
X(L)=  BL=0
\end{cases} \implies  A=B=0$$
#### Caso 3 $\to$ $k=-\lambda^{2}$
La soluzione prende forma:
$$X(x) = A\cos(\lambda x)+B\sin(\lambda x) \to A,B\in\mathbb{R}$$
In questo caso la soluzione è:
$$\begin{cases}
X(0) = A=0 \\
X(L) = B\sin(\lambda L) \to \begin{cases}
\begin{cases}
A=0\\B=0
\end{cases}\to \text{Non interessante} \\
\begin{cases}
A=0 \\
\lambda L = n\pi  \to n=1,\dots
\end{cases} \implies  \lambda=\frac{n\pi}{L}
\end{cases}
\end{cases}$$
Dal fatto che $\lambda$ varia con n, ci sono $\infty$ soluzioni, di cui useremo altre per ridurne il numero ad una sola.

Per ora, le n soluzione al problema in x sono:
$$X_{n}(x)= B_{n}\sin(\lambda_{n} x)$$
X,B e $\lambda$ dipendono tutti da n.

Possiamo riscrivere come:
$$X_{n}(x) = B_{n}\sin\left( \frac{n\pi}{L}\cdot x \right)$$
### Passo 3
Riportiamo la definizione di k che abbiamo trovato nell'ultimo passo:
$$k = k_{n} = -\lambda_{n}^{2} = -\left( \frac{n\pi}{L} \right)^{2}$$
La inseriamo nel problema di y:
$$Y''(y) -\left( \frac{n\pi}{L} \right)^{2}Y(y) = 0 \to y\in(0,H), n=1,\dots$$

Possiamo scrivere $Y$ come:
$$Y(y) = D_{1,n}e^{ (n\pi/L)y }+D_{2,n}e^{ -(n\pi/L)y }$$

Abbiamo gli insiemi degli infiniti valori dei coefficienti $D_{1,n}$ e $D_{2,n}$.

Abbiamo allora trovato definito le infinite $X_{n}(x)$ e $Y_{n}(y)$.

Definiamo le soluzioni fondamentali come:
$$U_{n}(x,y) = X_{n}(x)\cdot Y_{n}(y)$$
Questo sono le infinite funzioni separabili $U$ che aderiscono alle condizioni di differenziabilità e della condizione di $\Gamma_{3}$ e $\Gamma_{4}$.

La formula separabile è la somma di tutte queste soluzioni fondamentali:
$$U(x,y) = \sum_{n=1}^{\infty} X_{n}(x)Y_{n}(y)$$
Imponiamo ad ogni soluzione fondamentale la condizione di $\Gamma_{2}$:
$$\begin{gather}
U(x,H) = 0 \to x \in (0,L) \\
U_{n}(x,H) = X_{n}(x )Y_{n}(H) = 0 \to x \in (0,L) \\
\implies  Y_{n}(H)= 0
\end{gather}$$
Usiamo questo per eliminare uno di $D_{1}$ o $D_{2}$.

Riscriviamo questa equazione come:
$$Y_{n}(H) = D_{1,n}e^{ (n\pi/L)H }+D_{2,n}e^{ -(n\pi/L)H }=0 \to n =1,\dots $$

Isolando $D_{2,n}$ abbiamo:
$$D_{2,n} = \frac{D_{1,n}e^{ (n\pi/L)H }}{e^{ -(n\pi/L)H }} = -D_{1,n}e^{ 2(n\pi/L)H }$$
Avendo isolato $D_{2,n}$, possiamo scrivere la funzione separata in y come:
$$Y_{n}(y) = D_{1,n}[e^{ (n\pi/L)y} - e^{ 2(n\pi/L)H } \cdot e^{ -(n\pi/L)y }]$$

Sappiamo che:
$$\sinh(z) = \frac{e^{ z }-e^{ -z }}{2} = -\sinh(-z) = - \frac{e^{ -z }-e^{ z }}{2}$$
Vogliamo riscrivere la funzione in y nella stessa forma.
Iniziamo prendendo $Q=\frac{n\pi}{L}$, e riscrivendo la parte della funzione di y nelle parentesi quadre come:
$$\begin{align}
&[e^{ Qy }-e^{ 2QH }\cdot e^{ -Qy }]  \frac{e^{-QH }}{e^{ -QH }} \\
&= \frac{e^{ Q(y-H) }-e^{ Q(H-y) }}{2e^{ -QH }}\cdot 2 \\
&=  2 \cdot \frac{e^{ Q(y-H) }-e^{ -Q(y-H) }}{2e^{ -QH }} \\
&= - 2 \frac{e^{ Q(H-y) }+e^{ -Q(H-y) }}{2e^{ -QH }} = -2 \cdot \frac{\sinh\left[ \frac{n\pi}{L}(H-y) \right]}{e^{ -QH }}
\end{align}$$
$$\implies  Y_{n}(y) = \underbrace{ D_{1,n}\cdot -2 \cdot e^{ QH } }_{ D_{1,n}^{*}  }\cdot \sinh \left[  \frac{n\pi}{L} (H-y)\right]$$
La soluzione fondamentale allora è:
$$\begin{align}
U_{n}(x,y) &= X_{n}(x)Y_{n}(y) \\
& = B_{n}\sin\left( \frac{n\pi}{L}x \right)D_{1,n}^{*} \sinh\left[ \frac{n\pi}{L}(H-y) \right] \\
&= C_{n}\sin\left( \frac{n\pi}{L}x \right)\sinh\left[ \frac{n\pi}{L}(H-y) \right]
\end{align}$$
Questa soluzione soddisfa la differenziazione e le condizioni di bordo di $\Gamma_{2},\Gamma_{3},\Gamma_{4}$.

### Passo 4
Imponiamo la condizione a $\Gamma_{1}$ per definire definitivamente la funzione si soluzione al problema.

La condizione di $\Gamma_{1}$ impone:
$$U(x,0) = g_{1}(x) \to x\in(0,L)$$

Possiamo scrivere allora che:
$$\sum_{n=1}^{\infty} C_{n}\sin\left( \frac{n\pi}{L}x \right)\sinh\left( \frac{n\pi}{L}H \right) = g_{1}(x)$$
Il $\sin\left( \frac{n\pi}{L}x \right)$ nella funzione è simile al $\sin(n\omega x)$ che è nella serie di Fourier, questo è un indizio che possiamo usare Fourier.

Se $g_{1}(x)$ è quadrato sommabile (che avevamo preso per ipotesi) si può espandere come serie di Fourier tale che:
$$g_{1}(x) = \sum_{n=1}^{\infty}a_{n} \sin\left( \frac{n\pi}{L}x \right)$$

Consegue allora che:
$$C_{n}\sinh\left( \frac{n\pi}{L}H \right) =a_{n}$$
$$C_{n} = \frac{a_{n}}{\sinh\left( \frac{n\pi}{L}H \right)}$$

La funzione soluzione al problema differenziale allora è:
$$U(x,y) = \sum_{n=1}^{\infty} \frac{a_{n}}{\sinh\left( \frac{n\pi}{L}H \right)}\sin\left( \frac{n\pi}{L}x \right)\sinh\left( \frac{n\pi}{L}(H-y) \right)$$




