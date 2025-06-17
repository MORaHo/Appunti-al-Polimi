---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 14 - 

Stiamo cercando $y \in I \subseteq \mathbb{R} \to \mathbb{R}$ che risolve il problema:
$$\begin{cases}
y'(t) = f(t,y(t)) \to t \in I = [0,T] \\
y(0)= y_{0}
\end{cases}$$

Cosa serve per definire la buona posizione di un problema:
- $\exists!$ di soluzione
- dipendenza continua dai dati

Abbiamo visto alla fine della ultima lezione cosa serve per avere la esistenza e unicità della soluzione.

La continuità del problema rispetto a tutte e due le variabili e la Lipschitz continuità rispetto alla seconda variabile uniformemente rispetto alla prima variabile.

La Lipschitz continuità implica che $\exists L$ tale che:
$$|f(t,y_{1})-f(t,y_{2})| \leq L|y_{1}-y_{2}| \to \forall y_{1},y_{2} \in \mathbb{R}\text{ e }\forall t \in I$$

Dove $L$ è:
$$L = \mathop{max}_{\substack{y\in\mathbb{R}\\t\in I}}\left|\frac{ \partial  }{ \partial y } f(t,y(t))\right|$$

## Dipendenza continua dai dati

La dipendenza dai dati è effettivamente il criterio di stabilità a perturbazioni.

Vogliamo trovare $z:I \subseteq \mathbb{R}\to \mathbb{R}$, soluzione al problema perturbato: 
$$\begin{cases}
z'(t) = f(t,z(t)) + \delta(t) \to t\in I \\
z(0)= y_{0}+\delta_{0}
\end{cases}$$

Definiamo $\delta: I\to \mathbb{R}$ e $\delta_0 \in \mathbb{R}$

Il problema di Cauchy è stabile (secondo Lyapunov) su intervalli, se $\forall$ perturbazioni ($\delta_{0},\delta(t)$) con $\left|\delta_{0} \right|<\mathcal{E}$ e $\left|\delta(t) \right| <\mathcal{E}$ $\forall t\in I$, con $\mathcal{E}>0$, tale che $\exists!z(t)$ soluzione del problema perturbazione, allora $\exists C>0$ tal che $\left|y(t)-z(t) \right|=C\mathcal{E}$, $\forall t \in I$.

In parole povere, le piccole perturbazioni sui dati significa perturbazione ai dati.

#### Osservazioni

È asintoticamente stabile se per $\lim_{ t \to \infty }\left|\delta(t) \right|=0$ allora $\lim_{ t \to \infty }\left|y(t)-z(t) \right| =0$ 

## Metodo Analitici

### Equazioni Differenziali Autonome

La equazioni differenziali autonome sono equazione che non dipendono esplicitamente dalla variabile indipendente t.

Cioè la equazione che prende forma:
$$y'(t) = f(y(t))$$
È banale ma rende la soluzione più snella.
L'unico requisito è che $f \in C^{1}(I)$.

### Proprietà della equazioni differenziali autonome

#### Proprietà 1 - Confronto

Nella equazioni lineari c'è legame diretto e velocità, nelle equazioni non autonome non solo dipende dallo stato ma anche dall'istante in cui c'è quello stato.

Avendo $y(t)$ troviamo direttamente $y'(t)$ indipendentemente da t. Invece nella non autonome se abbiamo $y(t)$, non possiamo ricavare direttamente $y'(t)$ perché varia in base a $t$.

#### Proprietà 2 - Invarianza rispetto ad una traslazione di tempo

Se $\varphi = \varphi(t)$ è soluzione di $y'(t) = f(y(t))$, allora lo è anche la funzione $\psi(t) = \varphi(t-\tau)$ con $\tau \in \mathbb{R}$.

Se siamo capaci risolvere in un intervallo opportuno possiamo shiftare con $\tau$ per usare nell'intervallo di interesse, come:
$$\begin{gather}
\psi'(t) = \varphi'(t-\tau) = f(\varphi(t-\tau)) = f(\psi(t)) \\
\psi'(t) = f(\psi(t))
\end{gather}$$
Non è vero per ogni ODE perché:
$$\begin{gather}
y'(t) = f(t,y(t)) \\
\psi'(t) = \varphi'(t-\tau) = f(\underbrace{ t-\tau }_{ \substack{\text{Non}\\\text{ignorabile}} },\varphi(t-\tau)) = f(t-\tau,\psi(t)) \\
\end{gather}$$
Questo cambio della funzione non è ignorabile, quindi non si può fare.

#### Proprietà 3 - Punto di Equilibrio o Stato Stazionario

I punti di equilibrio sono i valori di $y^{*}$ tale che $f(y^{*})=0 \implies y'=0$, il sistema in $y^{*}$ non evolve.

$$y'(t)=f(y(t))\to y(0)=y_{_{0}}$$
Se se lo stato iniziale è di equilibrio, $f(y_{0})=0$ allora $y(t)=y_{0}$ è la soluzione al problema.

Se $f(y_{0})\neq 0 \implies y'(t) = \frac{ dy }{ dt }=f(y(t))$ 
$$\int\limits_{y_{0}}^{y} \frac{d\tau}{f(\tau(t))}  \, = \int\limits_{y_{0}}^{y}  \, = \int\limits_{y_{0}}^{y}  \, dt  $$

#### Proprietà 4 - Analisi di Stabilità

Abbiamo che $f(y)$ i cui punti di equilibrio sono $y_{1},y_{2}$

Prendiamo per esempio l'equazione:
$$f(y(t)) = ry(t)\left( 1-\frac{y(t)}{M} \right) = ry(t)-\frac{r[y(t)]^{2}}{M}$$
I punti di equilibrio di equazione sono:
$$\begin{gather}
y(t)=M \\
y(t)=0
\end{gather}$$
Il diagramma per questa equazione è:
<!Diagramma equazione di f>

La derivata della equazione:
$$f'(y(t)) = \frac{r-2ry(t)}{M}$$
Determiniamo un punto di equilibrio stabile se:
$$f'(y_{i})<0$$
Lo determiniamo instabile se:
$$f'(y_{i})>0$$

Se lo spostamento (funzione+perturbazione) ha una derivata negativa allora ci riporta indietro al punto di equilibrio da cui ci siamo scostati.

In questo caso $y_{1}$ è un punto di equilibrio instabile e lo chiamiamo repulsore, invece il $y_{2}$ è punto di equilibrio stabile e lo chiamiamo attrattore.

##### Definizione di Stabilità

Se $y^{*}$ è punto di equilibrio:
1. È stabile se $\forall\mathcal{E}>0$ $\exists\delta = \delta_{\mathcal{E}}>0$ tale che $\left|y_{_{0}}-y^{*} \right|<\delta_{\mathcal{E}}$; la soluzione associata a $y_{_{0}}$, $(y(t,y_{_{0}}))$ $\exists \forall t \geq 0$ e $\left|y(t,y_{_{0}})-y^{*} \right|<\mathcal{E} \;\;\forall t$. Cioè data una perturbazione piccola, la soluzione è lo stesso vicino.
2. Instabilità
3. Asintotica stabilità: Se è stabile e aggiunta $\exists\delta_{1}>0$  tale che $\left|y_{_{0}}-y^{*} \right|<\delta_{1}$, ne segue $y(t,y_{_{0}})\to y^{*}$ per $t \to \infty$, cioè converge alla soluzione alla soluzione.

Importano solo i casi 1 o 2, il modo migliore è guardare ai grafici o alle derivate.

## Trasformata di Laplace

La trasformata di Laplace è il metodo analitico principe per risolvere gli ODE a coefficienti costanti.

Trasforma un'ODE in un problema algebrico, per cui la soluzione sarà più facilmente ricavabile e poi l'antitrasformata di ci permette di riportare la soluzione nella stessa forma del problema originale.

### Definizione

Data $f=f(t)$ con $t\geq 0$, la trasformata di Laplace di $f$ è:
$$F(s) = \mathscr{L}[f(t)]{(s)} = \int\limits_{0}^{\infty} f(t) e^{ -st } \, dt \to s \in \mathbb{R}$$
E vice versa, data $F = F(s)$, trovare $f=f(t)$ tale che $\mathscr{L}^{-1}[f(t)](s) = F(s)$ richiede il calcolo dell'antitrasformata:
$$\mathscr{L}^{-1}[F(s)](t) = f(t) \iff \mathscr{L}[f(t)](s) = F(s)$$
Ci sono tabelle per con tutte queste trasformate e antitrasformate già calcolate.

### Esempi


Possiamo fare un'esempio dell'uso della Trasformata di Laplace sulla funzione di Heaviside, che ha forma:
<!Diagramma funzione di Heaviside>

Visto che guardiamo per $t\geq 0$, la funzione è 1 $\forall t$.

La trasformata sarà:
$$F(s) = \mathscr{L}[f(t)](s) = \int\limits_{0}^{\infty} 1e^{ -st } \, dt = \left[ \frac{e^{ -st }}{-s} \right]^{\infty}_{0} $$
Per gestire l'$\infty$ usiamo un limite:
$$= \lim_{ b \to \infty } \left[ -\frac{1}{s} e^{ -st } \right]_{0}^{\infty} = \lim_{ b \to \infty } \left[ -\frac{1}{s}e^{ -sb }+\frac{1}{s}e^{ 1 } \right] = \frac{1}{s}$$
Questo funzione per $s>0$, se $s$ fosse $<0$, allora il termine alla sinistra diventerebbe $\infty$.

Facciamo un'altro esempio con l'equazione: $f(t)= e^{ at }$
$$\begin{align}
F(s) &= \mathscr{L}[e^{ at }](s) = \int\limits_{0}^{\infty} e^{ at }e^{ -st } \, dt =\int\limits_{0}^{\infty} e^{ (a-s)t } \, dt=  \\
& = \lim_{ b \to \infty } \int\limits_{0}^{b} e^{ (a-s)t } \, dt = \lim_{ b \to \infty } \left[ \frac{e^{ (a-s)t }}{(a-s)} \right]_{0}^{b}= \frac{1}{s-a} 
\end{align}$$
Questo è vero se $a-s<0$.

Un'ultimo esempio è per l'equazione: $f(t) = e^{ t^{2} }$
$$\begin{align}
F(s) &= \mathscr{L}[e^{ t^{2} }](s) = \lim_{ b \to \infty } \int\limits_{0}^{b} e^{ t^{2} } e^{ -st }\, dt=  \\
& = \lim_{ b \to \infty } \int\limits_{0}^{b} e^{ t^{2}-st } \, dt\geq \int\limits_{\left|s \right|}^{b} e^{ t^{2} -st} \, dt \geq \int\limits_{\left|s \right|}^{b} e^{ 0 } \, dt = 1(b-\left|s \right|)   \to \infty
\end{align}$$
$$\implies \nexists\mathscr{L}[e^{ t^{2} }](s)$$

Sappiamo che $b>\left|s \right|$ allora $t \geq \left|s \right|$ allora $t^{2} \geq \left|s \right|t$ allora $t^{2}-\left|s \right|t>0$

### Proprietà della Trasformata di Laplace

> [!note]-
> Facciamo la prima oggi e poi il resto la prossima lezione. In più per ogni proprietà la spieghiamo e poi facciamo un esempio per la trasformata ed un esempio per la antitrasformata.

#### Proprietà 1 $\to$  Linearità

Siano $f(t)$ e $g(t)$ due funzioni che ammettono $\mathscr{L}$, ovvero esistono $F(s)$ e $G(s)$. Allora:
$$\mathscr{L}[f(t)+g(t)](s) = F(s)+G(s)$$
E:
$$\mathscr{L}[c(f)](s) = cF(s)\;\;\;;\;\;\;\;\forall c \in\mathbb{R}$$
$\forall s$ tale che $F(s)$ e $G(s)$ siano definiamo.

Inoltre si ha:
$$\mathscr{L}^{-1}[F(s)+G(s)](t) = f(t)+g(t)$$
$$\mathscr{L}^{-1}[cF(s)] = cf(t) \,\,\,;\,\,\,\forall c \in \mathbb{R}$$

##### Esempi

Esempio trasformata:

$f(t) = \sin(3t)+2$

$$\begin{align}
F(s) &= \mathscr{L}[\sin(3t)+2](s)= \mathscr{L}[\sin(3t)](s)+\mathscr{L}[2](s) \\
&=\frac{3}{s^{2}+9} + 2 \mathscr{L}[1](s) = \frac{3}{s^{2}+9} + \frac{2}{s}
\end{align}$$
Tutto questo lo abbiamo preso dalle tabelle.

Esempio antitrasformata:

$$F(s) = \frac{3}{s^{2}+16}-\frac{7}{(s-5)(s-12)} = \frac{3}{4}\cdot \frac{4}{s^{2}+16} - \frac{7}{(s-12)(s-5)}$$
$$f(t) = \frac{3}{4} \mathscr{L}^{-1}\left[ \frac{4}{s^{2}+16} \right]-\mathscr{L}^{-1}\left[ \frac{7}{(s-12)(s-5)} \right](t) = \frac{3}{4}\sin(4t)-e^{ 12t }+e^{ 5t }$$
