---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 15 - Proprietà della Trasformata di Laplace e Metodi Numerici per Risolvere gli ODE

Nella ultima lezione abbiamo visto la trasformata di Laplace che prende forma:
$$F(s) = \mathscr{L}[f(t)](s) = \int\limits_{0}^{\infty} f(t)e^{ -st } \, dt $$

Ci permettono di convertire un problema di ODE in un problema algebrico e indietro ad un problema ODE quando abbiamo ricavato la soluzione in forma algebrica.

## Proprietà della Trasformata

### Proprietà 1 - Linearità

Abbiamo descritto questa proprietà nella ultima lezione e abbiamo dato anche un esempio della trasformata e uno della antitrasformata.

### Proprietà 2 - Formule di Shift

Abbiamo visto un esempio dello shift nella ultima lezione quando abbiamo visto che:
$$\mathscr{L}[e^{ at }](s) = \frac{1}{s-a}$$
Vediamo allora che moltiplicando per $e^{ at }$, si causa uno shift a destra di a. Questa moltiplicazione causa un shift nella variabile indipendente.

In forma generale possiamo scrivere che $\forall a\in \mathbb{R}$:
$$\substack{\text{Primo teorema}\\\text{dello shift}}\begin{cases}
\mathscr{L}[e^{ at }\cdot f(t)](s) = F(s-a) \\
\mathscr{L}^{-1}[F(s-a)](t) = e^{ at }\cdot f(t)
\end{cases}$$

Facciamo un esempio per la trasformata:
$$\begin{gather}
\mathscr{L}[\cos(\alpha t)](s) = \frac{s}{s^{2}+\alpha^{2}} = F(s) \\
\mathscr{L}[e^{ \beta t }\cos(\alpha t)](s) = F(s-\beta) = \frac{s-\beta}{(s-\beta)^{2}+\alpha^{2}}
\end{gather}$$

E un esempio per la antitrasformata:
$$\begin{gather}
\mathscr{L}^{-1}\left[ \frac{4}{s^{2}+4s+20} \right](t) = \mathscr{L}^{-1}[F(s+2)](t) = e^{ -2t }\sin(4t) \\
\text{perché}: \\
 f(t) = \sin(\alpha t) \to F(s) = \frac{\alpha}{s^{2}+\alpha^{2}} \\
\frac{4}{s^{2}+4s+20} = \frac{4}{(s+2)^{2}+16} = F(s+2)
\end{gather}$$

### Proprietà 3 - Trasformata del Prodotto di Convoluzione

Avendo le funzione $f(t)$ e $g(t)$ con $t\geq 0$

La convoluzione è:
$$(f^{*} g) = \int\limits_{0}^{t} f(t-u)g(u) \, du   = \int\limits_{0}^{t} f(u)g(t-u) \, du \text{ per }t\geq 0 $$

Supponiamo che abbiamo rispettivamente $F(s)$ e $G(s)$, la trasformata di Laplace della convoluzione è:
$$\begin{gather}
\mathscr{L}[(f^{*} u)](s) = F(s)\cdot G(s) \\
\mathscr{L}^{-1}[F(s)\cdot G(s)](t) = (f^{*} g)(t)
\end{gather}$$

Facciamo un esempio per la trasformata:
$$\begin{gather}
\mathscr{L}^{-1}\left[ \frac{1}{s^{2}(s+1)^{2} } \right](t) \\
\text{per }f(t) = t^{n} \to F(s) = \frac{n!}{s^{n+1}} \mathop{\longrightarrow}_{n=1} \frac{1}{s^{2}}  \\
\mathscr{L}^{-1}\left[ \frac{1}{s^{2}} \right](t) = t\to g \\
\mathscr{L}^{-1}\left[ \frac{1}{(s+1)^{2}} \right] = t\cdot \underbrace{ e^{-t}  }_{ \text{shift} } \to f \\
\mathscr{L}^{-1}\left( \frac{1}{s^{2}} \cdot   \frac{1}{(s+1)^{2}} \right)(t) = \int\limits_{0}^{t} \underbrace{ e^{ -(t-u) }(t-u) }_{ f(t-u) } \cdot \underbrace{ u }_{ g(u) }\, du = \\
= (t+2)\cdot e^{ -t } + (t-2)
\end{gather}$$

### Proprietà 4 - Trasformata della Derivata

Con la trasformata di Laplace possiamo fare la trasformata della derivata attraverso un integrazione per parti.

$$\begin{align}
\mathscr{L}[y'(t)](s) &= \int\limits_{0}^{\infty} y'(t)\cdot e^{ -st } \, dt  = \underbrace{ y(t)e^{ ^{-st} } \Bigg\rvert_{0}^{\infty} - \int\limits_{0}^{\infty} y(t)(-s)e^{ -st } \, dt }_{ \text{Integrato per parti} }  \\
   & = -y(0) + s \underbrace{ \int\limits_{0}^{\infty} y(t) e^{ -st }  \, dt }_{ \mathscr{L}[y(t)](s) } 
\end{align}$$

Abbiamo visto allora che:
$$\mathscr{L}[y'(t)](s) = s\mathscr{L}[y(t)](s)-y(0)$$
Applicando questo ad un ODE di grado 2, vediamo che:
$$\begin{align}
\mathscr{L}[\underbrace{ y''(t) }_{ (y'(t))' }](s) = s\mathscr{L}[y'(t)](s)-y'(0) &= s[s\mathscr{L}[y(t)](s)-y(0)-y'(0)] \\
&= s^{2}\mathscr{L}[y(t)](s)-sy(0)-y'(0)
\end{align}$$

## Esempio applicativo della trasformata di Laplace su un problema di Cauchy

Dato il problema di Cauchy:
$$\begin{cases}
y'(t) = 4y(t)+1\to t\geq 0 \\
y(0)=1
\end{cases}$$

Applichiamo la trasformata di Laplace su:
$$y'(t)-4y(t)=1$$
$$\begin{gather}
\mathscr{L}[y'(t)-4y(t)](s) = \mathscr{L}[1](s) \\
\mathscr{L}[y'(t)-4y(t)(s)] \mathop{=}^{P1} \mathscr{L}[y'(t)](s)-4\mathscr{L}[y(t)](s) \\
\mathop{=}^{P4} s\mathscr{L}[y(t)](s) -\underbrace{ 1 }_{ y(0) } -4\mathscr{L}[y(t)](s) \\
\mathscr{L}[1](s)=\frac{1}{s} \\
\to s\mathscr{L}[y(t)](s)-4\mathscr{L}[y(t)](s)-1 = \frac{1}{s} \\
\text{Preso }Y(s) = \mathscr{L}[y(t)](s) \\
sY(s) -4Y(s)-1 =  \frac{1}{s}\to \text{Problema Algebrico} \\
Y(s)\cdot(s-4) = \frac{1}{s}+1 \to Y(s) = \frac{1}{s-4}\left( 1+\frac{1}{s} \right)= \frac{1}{s-4}+\frac{1}{s(s-4)} \\
\implies  \mathscr{L}[y(t)](s) = \frac{1}{s-4}+\frac{1}{s(s-4)} \\
y(t) = \mathscr{L}^{-1}\left[ \frac{1}{s-4}+\frac{1}{s(s-4)} \right](t) \\
\mathop{=}^{P1} \underbrace{ \mathscr{L}^{-1}\left[ \frac{1}{s-4} \right] }_{ e^{ 4t } } + \underbrace{ \mathscr{L}^{-1}\left[ \frac{1}{s(s-4)} \right](t) }_{ \frac{1}{4}(e^{ 4t }-1) } = e^{ 4t }+\frac{1}{4}(e^{ 4t }-1) = \frac{1}{4}5e^{ 4t }-1
\end{gather}$$

## Metodi Numerici per Risolvere gli ODE

Prendiamo un problema di Cauchy sapendo che la soluzione esiste ed è unica:
$$\begin{cases}
y'(t)=f(t,y(t)) \to t\in[t_{0},T]=I \\
y(t_{0}) = y_{0}
\end{cases}$$

Laplace si può usare solo per ODE a coefficienti costanti, ma un mondo di problema che non sono a coefficienti costanti che dobbiamo risolvere.

Per trovare $y(t)$ andiamo a discretizzare $t$, e andiamo ad approssimare $y(t)$.

<!Diagramma la funzione discretizzata>

Prendiamo $t_{0}<t_{1}<\dots<t_{N_{h}} \equiv T$, cioè prendiamo $N_{h}+1$ punti di campionamento.

Il passo di discretizzazinoe $h = \frac{T-t_{0}}{N_{h}}$

Per i metodi numerici prendiamo approssimazione di valori di y a quegli istanti:
$$u_{n} \simeq y(t_{n}) \to \forall n=0,\dots,N_{h}$$

Chiediamo allo schema che per almeno il primo punto $u_{0}=y_{0}$.
Ci fornisce una approssimazione sulla soluzione esatta della funzione.

## Metodo di Eulero in Avanti

Preso $t=t_{n}$ e $y'(t_{n}) = f(t_{n},y(t_{n}))$, andiamo ad approssimare $y'(t_{n})$ facendo:
$$\frac{y(t_{n+1})-y(t_{n})}{h} \simeq f(t_{n},y(t_{n}))$$

$u_{n}$ approssima $y(t_{n}) = y_{n}$ che è il valore della funzione nell'istante n.
Scambiando questa stima nella funzione di prima:
$$\frac{y_{n+1}-y_{n}}{h} \simeq f(t_{n},y_{n}) \longrightarrow \frac{u_{n+1}-u_{n}}{h} = f(t_{n},y_{n})$$
Facendo questa stima ad ogni istante, possiamo scrivere lo schema:
$$\begin{cases}
u_{n+1} = u_{n}+hf(t_{n},u_{n}) \text{ per }n=0,1,\dots,N_{h} \\
u_{0}=y_{0}
\end{cases}$$
Questo è noto come il metodo di Eulero in Avanti, è uno schema esplicito, cioè non fa riferimento a se stesso per calcolarsi. È anche uno schema one-step, tutti gli schemi che guardiamo per gli ODE sono one-step.

C'è un'accumulo degli errore da un istante ad un'altro.

## Metodo di Eulero all'Indietro

Preso $t =t_{n+1}$ e $y'(t_{n+1}) = f(t_{n+1},y(t_{n+1}))$, per approssimare la derivata a $t_{n+1}$ facciamo:
$$\frac{y(t_{n+1})-y(t_{n})}{h} \simeq f(t_{n+1},y(t_{n+1}))$$
Usando i valori approssimati invece degli errori immediati:
$$\frac{y_{n+1}-y_{n}}{h} \simeq f(t_{n+1},y_{n+1})\longrightarrow \frac{u_{n+1}-u_{n}}{h} = f(t_{n+1},u_{n+1})$$

Lo schema per questo metodo è:
$$\begin{cases}
u_{n+1} = u_{n} + hf(t_{n+1},u_{n+1}) \to n = 0,1,\dots,N_{h}-1 \\
u_{0}= y_{0}
\end{cases}$$
Lo schema del metodo di Eulero all'indietro è uno schema implicito perché per trovare $u_{n+1}$ dobbiamo usare $u_{n+1}$ nella funzione f, questo ci causa più complicazioni, visto che dobbiamo attivare uno schema non lineare per avere la soluzione, e lo dobbiamo attivare per ogni iterazione.

## Metodo di Crank-Nicolson

Il metodo di Crank-Nicolson è un metodo che mette insieme il metodo di Eulero esplicito ed Eulero implicito.

Sommando i due metodi abbiamo:
$$\begin{gather}
2u_{n+1} = 2u_{n}+h[f(t_{n},u_{n})+f(t_{n+1},u_{n+1})] \\
u_{n+1}=u_{n} + \frac{h}{2} [f(t_{n},u_{n})+f(t_{n+1},u_{n+1})]
\end{gather}$$
Lo schema del metodo di Crank-Nicolson:
$$\begin{cases}
u_{n+1} = u_{n} + \frac{h}{2} [f(t_{n},u_{n})+f(t_{n+1},u_{n+1})] \to n = 0,1,\dots,N_{h}-1 \\
u_{0} = y_{0}
\end{cases}$$

Crank-Nicolson è un metodo implicito, è un metodo one-step.

## Analisi di questi schemi

Facciamo l'analisi degli schemi per vedere se c'è un vantaggio agli schemi impliciti.

Guardiamo la convergenza, consistenza e stabilità.
## Convergenza di EE ed EI

Come abbiamo visto nella prima parte del corso vediamo per $h\to0$.

$\forall n=0,\dots,N_{h}$ la convergenza ha equazione:
$$\left|u_{n}-y_{n} \right|\leq C h^{p}$$
Dove p è l'ordine di convergenza dello schema.
Troviamo questo ordine di convergenza per Eulero esplicito e poi diamo solo il risultato per il resto.

L'errore dello schema è:
$$e_{n} = u_{n}-y_{n} = \underbrace{ (u_{n}-u_{n}^{*} )  }_{ \substack{\text{Errore}\\\text{accumulato}} }+ \underbrace{ (u_{n}^{*} -y_{n}) }_{ \substack{\text{Errore}\\\text{associato al}\\\text{passo}} }$$
Dove $u_{n}^{*}$ è la stima di $y_{n}$ avendo $y_{n-1}$ come valore noto. È l'errore del passo se sapessimo esattamente dove siamo e facciamo un passo stimatorio da li.

Graficamente questo errore è:
<!Diagramma errore accumulato ed errore del passo>

Se possiamo far vedere che tutte e due le parti vanno a 0 per $h\to0$ allora possiamo dire che converge.

Guardiamo al secondo termine (e vediamo ci porta a definire la consistenza).

Il secondo termine è:
$$u_{n}^{*} -y_{n} = y_{n-1}-y_{n}+h\underbrace{ f(t_{n-1},y_{n-1}) }_{ y'(t_{n-1}) }$$
Di nuovo $u_{n}^{*}$ è il risultato dello schema se mettiamo il valore vero $y_{n-1}$ invece della approssimazione $u_{n-1}$.

Facciamo una espansione di Taylor centrata in $t_{n-1}$, e valutiamo in $t_{n}$:
$$y(t_{n}) = y(t_{n-1})+hy'(t_{n-1})+\frac{h^{2}}{2}y''(\alpha_{n})\text{ con }\alpha_{n}\in (t_{n-1},t_{n})$$

Mettendo questa stima nel secondo termine semplificiamo l'equazione e abbiamo:
$$u_{n}^{*} -y_{n} = - \frac{h^{2}}{2}y''(\alpha_{n}) \mathop{\longrightarrow}^{h\to0} 0$$
### Definizione di consistenza per uno schema one-step

L'errore di troncamento locale è definito come:
$$\tau_{n}(h) = \frac{u_{n}^{*} -y_{n}}{h}$$
Invece l'errore di troncamento globale è:
$$\tau(h) =max\left|\tau_{n}(h) \right|$$
Per $n=0,\dots,N_{h}$

Uno schema ad un passo si dice consistente quando $\lim_{ h \to 0 }\tau(h)=0$.

Se l'ordine di consistenza è se $\tau(h)= O(h^{q})$, lo schema ha ordine di consistenza pari a q.

Per lo schema Eulero esplicito:
$$\tau_{n}(h) = -\frac{h}{2}y''(\alpha_{n}) = f'(\alpha_{n},y(\alpha_{n}))$$
Ci riferiamo a f perché è noto, invece y no. Non saremmo neanche riusciti a prendere il massimo di $y''$ perché y non è noto.

L'errore di troncamento globale allora è:
$$\tau(h) = \frac{h}{2}M \text{ con } M = \mathop{max}_{t\in I}\left|f'(t,y(t)) \right| = \frac{ \partial f }{ \partial t } +\frac{ \partial f }{ \partial y } \cdot y'(t)$$
$\tau(h)\to 0$ per $h\to0$ con ordine di consistenza 1.





