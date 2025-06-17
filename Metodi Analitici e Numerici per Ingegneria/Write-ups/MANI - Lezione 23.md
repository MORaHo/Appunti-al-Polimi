---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 23 - Spazio $\mathbb{V}_{h}$

### Ripasso

Nella ultima lezione fatto una approssimazione della forma debole, con la formulazione di Galerkin e abbiamo iniziato l'analisi di questa formulazione per cui manca solo la convergenza.

## Lemma di Céa
Il Lemma di Céa ci aiuterà nella determinazione della convergenza.

Prendiamo l'errore di discretizzazione e aggiungiamo e sottraiamo $a(u-u_{h},v_{h})$:
$$\underbrace{ a(u-u_{h},u-u_{h}) }_{ \substack{\text{Errore di}\\\text{Discretizzazione}} } \pm a(u-u_{h},v_{h}) = a(u-u_{h},u-v_{h})+\cancelto{ \text{ }0 }{ a(u-u_{h},\underbrace{ v_{h}-u_{h} }_{ \in \mathbb{V}_{h} }) }$$
Il secondo termine si annulla per la ortogonalità che implica che l'errore è nullo per un qualsiasi oggetto di $\mathbb{V}_{h}$.

Per la coercività e continuità il termine ricavato è:
$$\begin{align}
\alpha \lvert\lvert u-u_{h} \rvert\rvert  ^{\cancel{ 2 }}_{\mathbb{V}} \leq a(u-u_{h},u-u_{h}) &= a(u-u_{h},u-u_{h})  \\
&\leq \left|a(u-u_{h},u-v_{h}) \right| \\
&\leq M\cancel{ \lvert\lvert u-u_{h} \rvert\rvert  _{\mathbb{V}} } \cdot \lvert\lvert u-v_{h} \rvert\rvert  _{\mathbb{V}}
\end{align}$$

Abbiamo allora che:
$$\lvert\lvert u-u_{h} \rvert\rvert  _{\mathbb{V}} \leq \frac{M}{\alpha}\lvert\lvert u-v_{h} \rvert\rvert  _{\mathbb{V}}\;\;\; \forall v_{h}\in\mathbb{V}$$
Visto che vale per ogni $v_{h}$ possiamo scrivere allora che:
$$\lvert\lvert u-u_{h} \rvert\rvert  _{\mathbb{V}} \leq \frac{M}{\alpha}\mathop{\text{inf}}_{v_{h}\in\mathbb{V}_{h}}\lvert\lvert u-v_{h} \rvert\rvert  _{\mathbb{V}}$$
Questo è il lemma di Céa.

Questo lemma è strumentale alla richiesta:
$$\lim_{ h \to 0 } \mathop{\text{inf}}_{v_{h}\in\mathbb{V}_{h}}\lvert\lvert v-v_{h} \rvert\rvert  _{\mathbb{V}}=0$$
Questa equazione caratterizza la densità di $\mathbb{V}_{h}$ in $\mathbb{V}$ e ci certifica che $\mathbb{V}_{h}$ riempie $\mathbb{V}$.
Questa richiesta ci dice allora che per $h\to0$, la migliore approssimazione di $v$ in $\mathbb{V}_{h}$ tende a $v$.

### Osservazione

L'errore di migliore approssimazione, cioè:
$$\mathop{\text{inf}}_{v_{h}\in\mathbb{V}_{h}}\lvert\lvert u-v_{h} \rvert\rvert  _{\mathbb{V}}$$
Possiamo usare la definizione di migliore approssimazione per dire che al minimo l'errore di discretizzazione può esser l'errore minimo possibile, cioè l'errore di migliore approssimazione, perciò dandoci un lower-bound per l'errore:
$$\mathop{\text{inf}}_{v_{h}\in\mathbb{V}_{h}}\lvert\lvert u-v_{h} \rvert\rvert  _{\mathbb{V}} \leq \lvert\lvert u-v_{h} \rvert\rvert  _{\mathbb{V}} \leq \frac{M}{\alpha}\lvert\lvert u-v_{h} \rvert\rvert  _{\mathbb{V}}$$

## Definizione di $\mathbb{V}_{h}$

Usiamo il problema più semplice come esempio in questo svolgimento:
$$\begin{cases}
-u''(x) = f(x)&x\in(a,b)=\Omega \\
u(a) = u(b) =0
\end{cases}$$


Sappiamo che $N_{h} = \text{dim}\text{ }\mathbb{V}_{h} <\infty$

Dobbiamo definire $\mathbb{V}_{h}$, lo spazio degli elementi finiti, $\mathbb{V}_{h}\subset H_{0}^{1}(\Omega)$ e la base di $\mathbb{V}_{h}$.

Definiamo $T_{h}$ partizione di $\Omega$:
<!Diagramma partizione di T_h>

Definiamo $T_{h} = \{ k_{j} \}$, dove $k_{j} = [x_{j-1},x_{j}]$, e $\{ x_{j} \}$ è l'insieme dei vertici.

Definiamo anche $h_{j} = \left|k_{j} \right| = x_{j}-x_{j-1}$, e in fine $h= \mathop{\text{max}}_{j} \text{ }h_{j}$, avendo preso la partizione uniforma, sono tutti uguali, ma può cambiare.

Per Céa, $h\to0 \implies$ che la partizione sta diventando infinitamente fitto.

In 2D la partizione di $T_{h}$, può prendere varie forme con le più comuni essendo quadrangoli o taselli.

In 3D si usano più comunamente tetraedri o cubi, possono prendere anche diverse forme in questa dimensione.

Lo spazio degli elementi finiti è definito come:
$$X_{h}^{r} = \{ v_{h} \in C^{0} ([((a,b]) \text{ tale che } v_{h}\bigg|_{k_{j}} \in \mathbb{P}_{r} (k_{j}), \forall k_{j} \in T_{h}\}$$
Gli elementi finiti agiscono come una approssimazione a tratti dove il grado dei tratti può variare.

Generalmente la approssimazione si fa ad elementi finiti lineari come:
<! Diagramma elementi finiti con r=1>

É comune anche l’uso dei tratti parabolici con r=2:
<!Diagramma elementi finiti r=2>

Di solito si sceglie r=1 o r=2 perché riduce il numero di calcoli e le oscillazioni che si presentano con polinomi di grado più alto, in più con polinomi di grado più alto serve una regolarità maggiore che non è garantita. I gradi più alti sono usati in casi favorevoli dove si sa che la regolarità è molto alta.

Sappiamo che $X_{h}^{r}$ non è $\mathbb{V}_{h}$ perché non aderisce alle condizioni di bordo come dovrebbe $\mathbb{V}_{h}$.

Allora $\mathbb{V}_{h} = \{ v_{h} \in X_{h}^{r} \text{ tale che }v_{h}(a)=v_{h}(b)=0\}$ 
È l’insieme delle funzioni ad elementi finiti che rispettano le condizioni di bordo.

Come nello spazio $$## Spazio degli elementi finiti e spazio $\mathbb{V}_{h}$

Lo spazio degli elementi finiti è definito come:
$$X_{h}^{r} = \{ v_{h} \in C^{0} ([((a,b]) \text{ tale che } v_{h}\bigg|_{k_{j}} \in \mathbb{P}_{r} (k_{j}), \forall k_{j} \in T_{h}\}$$
Gli elementi finiti agiscono come una approssimazione a tratti dove il grado dei tratti può variare.

Generalmente la approssimazione si fa ad elementi finiti lineari come:
<! Diagramma elementi finiti con r=1>

É comune anche l’uso dei tratti parabolici con r=2:
<!Diagramma elementi finiti r=2>

Di solito si sceglie r=1 o r=2 perché riduce il numero di calcoli e le oscillazioni che si presentano con polinomi di grado più alto, in più con polinomi di grado più alto serve una regolarità maggiore che non è garantita. I gradi più alti sono usati in casi favorevoli dove si sa che la regolarità è molto alta.

Sappiamo che $X_{h}^{r}$ non è $\mathbb{V}_{h}$ perché non aderisce alle condizioni di bordo come dovrebbe $\mathbb{V}_{h}$.

Allora $\mathbb{V}_{h} = \{ v_{h} \in X_{h}^{r} \text{ tale che }v_{h}(a)=v_{h}(b)=0\}$ 
È l’insieme delle funzioni ad elementi finiti che rispettano le condizioni di bordo.

Come nello spazio $\mathbb{V}$, le condizioni di Dirichlet entrano nella definizione dello spazio $\mathbb{V}_{h}$, mentre le altre rientrano nella equazione.

### Base dello spazio $\mathbb{V}_{h}$

Richiediamo diverse richieste della base $\{ \varphi_{j} \}$ dello spazio $\mathbb{V}_{h}$:
1. Ad elementi facili da integrare
2. Supporto di $\varphi_{j}$ piccolo (ha implicazioni sulla sparsità di A)
3. Base lagrangiana, cioè $\varphi_{j}(x_{i})= \delta_{ij} = \begin{cases}0&\text{altrimenti}\\1&i=j\end{cases}$

Il supporto di una funzione è definito come:
$$\text{supp}(f) = \{ x\in [a,b],\text{ tale che }f(x)\neq 0 \}$$

#### Spazio $X_{h}^{1}$

Definiamo una partizione dello spazio come:
<!Diagramma partizione dello spazio>

I vertici sono i punti definiti della partizione che avremo ogni volte indipendentemente nel grado di approssimazione.

Possiamo definire i nodi e gradi di libertà (degrees of freedom) come il i punti che ci servono per definire la funzione che usiamo per stimare e il valore che questi punti prendono nella funzione.

Il numero di vertici è minore o uguale al numero di nodi, solo per r=1, sono uguali.

#### Base

Definiamo la base come l'insieme delle funzioni lagrangiane che prendono valore 1 dove $i=j$. Le funzioni di base sono note come funzioni a capanna o hat functions. Prendono forma:

<!Diagramma forma funzioni della base>

Ogni nodo ha una funzione per la base.

Il supporto di queste funzioni è: $k_{j} \cup k_{j+1}$.
L'unico caso in cui questo non è vero è per $\varphi_{0}$ e $\varphi_{N}$ dove il supporto è il primo e ultimo tassello rispettivamente.

Questa base funziona se non stiamo considerando le condizioni di bordo.
#### Conseguenza della nostra scelta di base

##### Conseguenza 1
Le condizioni di bordo significano che abbiamo una funzione per ogni nodo non di Dirichlet, perché per i nodi di Dirichlet conosciamo già cos'è la funzione.

Senza Dirichlet abbiamo N+2 $f$ di base: $\varphi_{0},\varphi_{1},\dots,\varphi_{N+1}$

Nel caso full-Dirichlet si servono $\varphi_{1},\dots,\varphi_{N}$
Nel caso in cui abbiamo Dirichlet in cui abbiamo Dirichlet nella prima o ultima, avremo tutte tranne la prima o ultima.

Nel caso in cui abbiamo una condizione di bordo di Robin, la funzione è la dobbiamo definire.

##### Conseguenza 2
La funzione di base prende la forma:
$$\varphi_{j}(x) = \begin{cases}
\frac{x-x_{j}}{x_{j}-x_{j-1}} & x\in k_{j} \\
\frac{x_{j+1}-x}{x_{j+1}-x_{j}} &x\in k_{j+1} \\
0 & \text{altrimenti}
\end{cases}$$

##### Conseguenza 3

Come conseguenza della lagrangianità possiamo scrivere il vettore $v_{h}\in \mathbb{V}_{h}$ come:
$$\begin{gather}
v_{h}(x) = \sum_{j}v_{j}\varphi_{j}(x) \\
v_{h}(x_{i}) = \sum_{j}v_{j}\underbrace{ \varphi_{j}(x_{j}) }_{ \delta_{ij} } = v_{i}
\end{gather}$$

##### Conseguenza 4

Possiamo trovare i valori della matrice di rigidezza:
$$a_{ij} = a(\varphi_{j},\varphi_{i}) = \underbrace{ \int\limits_{a}^{b} \varphi_{j}'\cdot \varphi_{i}'(x) \, dx }_{ \text{dipende dal problema} } $$

Dove $i,j=1,\dots,N$, avendo saltato la prima e la ultima per Dirichlet.

Guardando il diagramma della funzioni di base possiamo intuire la forma della matrice di rigidezza. Vedendo che la funzione di base interseca solo con quella prima di se, quella dopo e se stessa, significa che l'integrale sarà non nulla solo per quei 3 quindi la matrice di rigidezza sarà tridiagonale.

Abbiamo che $a_{ij}\neq 0$ per $j=i-1,i,i+1$

Possiamo trovare il valore dei 3 come:
$$\begin{align}
a_{i,i-1} &= \int\limits_{a}^{b} \varphi_{i}'(x)\varphi_{i-1}'(x) \, dx  = \int\limits_{x_{i-1}}^{x_{i}} \varphi_{i}'(x)\varphi'_{i-1}(x) \, dx  \\
& = -\int\limits_{x_{i-1}}^{x_{i}} \frac{1}{h^{2}} \, dx  = -\frac{1}{h^{2}}\cdot h = -\frac{1}{h} \\
a_{i,i+1} & = \int\limits_{a}^{b} \varphi_{i+1}' (x)\varphi_{i}'(x)\, dx  \\
&= \int\limits_{x_{i}}^{x_{i+1}} \varphi_{i+1}'(x)\varphi_{i}'(x) \, dx  = -\frac{1}{h^{2}}\cdot h = -\frac{1}{h} = a_{i,i-1}\implies \text{simmetria} \\
a_{i,i}&=\int\limits_{a}^{b} [\varphi'(x)]^{2} \, dx = \int\limits_{x_{i-1}}^{x_{i}} [\varphi_{i}'(x)]^{2} \, dx + \int\limits_{x_{i}}^{x_{i+1}} [\varphi_{i}'(x)]^{2} \, dx   = \frac{1}{h^{2}}\cdot h+\frac{1}{h^{2}}\cdot h = \frac{2}{h}
\end{align}$$

Come abbiamo detto A prende la forma tridiagonale:
$$A = \frac{1}{h}\begin{bmatrix}
2 & -1 & \cdots & 0 \\
-1 & 2 &  \ddots & \vdots \\
\vdots  & \ddots & \ddots & -1 \\
0 & \dots  & -1 & 2
\end{bmatrix}$$
Questa matrice e i suoi numeri è specifica al caso di Poisson 1D, full-Dirichlet, ad elementi finiti di grado 1 con passo uniforme h.

Nel caso 2D non si ricava la stessa struttura perché gli indici delle diverse funzioni di base sono difficili da imporre facilmente, ci sono modi diversi per farlo quindi la struttura della matrice può uscire molto diversa.


