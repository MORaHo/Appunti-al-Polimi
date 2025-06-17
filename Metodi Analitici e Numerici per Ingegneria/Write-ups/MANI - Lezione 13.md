---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 13 - Metodo delle Potenze con Shift e Equazioni Differenziali Ordinarie

Nell'ultima lezione, abbiamo visto il metodo delle potenze per trovare $\lambda_{max}$ e abbiamo enunciato il metodo delle potenze inverse per trovare $\lambda_{min}$.

$$A:\{x,\lambda\}\to A^{-1}:\left\{ x, \frac{1}{\lambda} \right\}$$
Gli autovalori delle due matrici sono gli stessi ma gli autovalori si invertono.

Usiamo la matrice $A^{-1}$ in modo tale che che:
$$\left( \frac{1}{\lambda_{min}(A)} \right)^{-1} \to\lambda_{min}(A)$$

Usiamo 2 ipotesi per questo metodo:
$$\text{Ipotesi 1 per inverse}:  \mid \frac{1}{\lambda_{1}}\mid<\mid \frac{1}{\lambda_{2}}\mid \leq \mid \frac{1}{\lambda_{3}}\mid \leq \dots \leq \mid \frac{1}{\lambda_{n-1}}\mid < \mid \frac{1}{\lambda_{n}}\mid$$
La ipotesi 2 invece la stessa.

L'algoritmo per il metodo delle potenze inverse è, partendo da $x^{(0)}\in \mathbb{C}^{n}$ e $y^{(0)} = \frac{x^{(0)}}{\lvert\lvert x^{(0)} \rvert\rvert }$, per $k =1,2,\dots$ :
$$\begin{gather}
x^{(k)} = A^{-1}y^{(k-1)}, \text{ come:} Ax^{(k)} = y^{(k)} \to \text{Una fattorizzazione poi applichi L e U} \\
y^{(k)} = \frac{x^{(k)}}{\lvert\lvert x^{(k)} \rvert\rvert  } \simeq x_{n} \\
\lambda^{(k)} = (y^{(k)})^{H}A^{-1}y^{(k)} \simeq \frac{1}{\lambda_{n}}
\end{gather}$$
Nell'ultimo passo possiamo usare $A$ invece di $A^{-1}$, visto che abbiamo già trovato $x_{n}$, che è associato allo stesso $\lambda$ e $\frac{1}{\lambda}$ dalle due matrici, quindi possiamo ricaviamo $\lambda_{n}$ direttamente con:
$$\lambda^{(k)} = (y^{(k)})^{H}Ay^{(k)} = \lambda_{n}$$

## Metodo delle Potenze inverse con Shift

Con il metodo delle potenze e il metodo delle potenze inverse troviamo l'autovalore massimo o minimo della matrice A. Se volessimo trovare un'autovalore specifico vicino ad un valore che vogliamo, possiamo applicare uno shift.

Lo shift è:$\mu \in \mathbb{C}$

Da qui vogliamo trovare la coppia di autovalore e autovettore $\lambda_{i},x_{i}$ di A più vicino a $\mu$.

Invece di usare $A$ o $A^{-1}$, ma usiamo invece:
$$A_{\mu} = A- \mu I$$
Da questa equazione prendiamo il significato di shift.
Gli autovalori di questa matrice saranno:
$$\lambda(A_{\mu}) = \lambda(A)-\mu$$
L'autovalore $\lambda_{i}$ sarà l'autovalore per cui il valore assoluto di $\lambda_{i}-\mu$ è il minimo questo significa che l'inverso: $\frac{1}{\lambda_{i}-\mu}$, quindi possiamo usare il metodo inverso con $A^{-1}_{\mu}$ per trovare tale l'autovalore.

L'autovettore come per il metodo delle potenze inverse sarà sempre lo stesso.

L'algoritmo per questo metodo è, partendo da $x^{(0)}\in \mathbb{C}^{n}$ e $y^{(0)} = \frac{x^{(0)}}{\lvert\lvert x^{(0)} \rvert\rvert }$:
$$\begin{gather}
x^{(k)} = A^{-1}_{\mu}y^{(k-1)} \to A_{\mu}x^{(k)} = y^{(k-1)} \\
y^{(k)} = \frac{x^{(k)}}{\lvert\lvert x^{(k)} \rvert\rvert } \simeq x_{i} \\
\sigma^{(k)} = (y^{(k)})^{H}A^{-1}_{\mu}y^{(k)} \simeq \frac{1}{\lambda_{min}(A_{\mu})}
\end{gather}$$

Computazionalmente la cosa più furba è mettere A come abbiamo fatto nel metodo inverso normale, quindi:
$$\sigma^{(k)} = [y^{(k)}]^{H}Ay^{(k)} \simeq \lambda_{i}$$
Ce lo da direttamente senza dover far neanche la somma con $\mu$.
Possiamo farlo lo stesso perché $x_{i}$ è sempre lo stesso per le 3 matrici.

## Scelta dello Shift

### $\lambda v = Av$

$$\begin{gather}
\mid\lambda\mid \cdot \cancel{ \lvert\lvert v \rvert\rvert  }  = \lvert\lvert \lambda v \rvert\rvert   = \lvert\lvert Av \rvert\rvert  \leq \lvert\lvert A \rvert\rvert  _{2}\cancel{ \lvert\lvert v \rvert\rvert }  
\end{gather}$$
Questo vale per una norma compatibile con il valore assoluto.
Questa equazione è la equazione di un cerchio con cui $r  = \lvert\lvert A \rvert\rvert_2$ 

Graficamente questo è:
<!Diagramma raggio del shift>

Questo metodo di scelta solo se r è piccolo, è più facile identificare $\lambda$. 
Tutti gli autovalori sono dentro al cerchio, prendiamo $\mu$ li dentro.
### Cerchi di Gershgorin

L'insieme degli n cerchi della i-esima riga è:
$$C_{i}^{r}= \left\{ z\in\mathbb{C}\text{ tale che }\mid z-\underbrace{ a_{ii} }_{ \text{centro} }\mid  \leq \sum_{\substack{j=1\\j\neq i}}^{n} \underbrace{ \mid a_{ij}\mid }_{ \text{raggio} }     \right\} \to i =1,\dots,n$$
L'insieme degli n cerchi della i-esima colonna è:
$$C_{i}^{c} = \left\{    z\in \mathbb{C} \text{ tale che } \mid z-a_{ii}\mid \leq \sum_{\substack{j=1\\j\neq i}}^{n} \mid a_{ji}\mid  \right\} \to i=1,\dots,n$$

#### Proposizione

Gli autovalori di $A\in \mathbb{C}^{n\times n}$ appartengono alla ragione del piano complesso identificato dalla relazione:
$$\left[\bigcup_{i=1}^{n}C_{i}^{c}\right] \bigcap \left[\bigcup_{i=1}^{n}C_{i}^{r}\right]$$
Dentro a questa area ci dovrebbero esser tutti gli autovalori.

Inoltre, se esistono m cerchi riga(colonna) con $1\leq m<n$, disgiunti dai rimanenti $n-m$ cerchi, allora la loro unione contiene esattamente m autovalori.

Questo significa che se un cerchi è singolare, avrà sicuramente 1 autovalore dentro. Ma anche che i cerchi non devono esser necessariamente pieni se hanno intersezione con altri cerchi, è possibile che un cerchio abbia centro se più autovalori mentre alcuni non hanno un singolo autovalore.

Vogliamo allora trovare aree poco affollate per aiutare il nostro algoritmo.

Cambiano il segno della disuguaglianza vediamo che è la stessa equazione della dominanza per righe e colonna, questo allora significa che se una matrice è dominante per righe o colonne, cioè il raggio del cerchio e minore della distanza dall'origine, allora è impossibile che abbiamo autovalori nulli.

## Equazione Differenziali Ordinarie

Le equazioni differenziali ordinarie(ODE), sono proprio quello, equazioni differenziali che usano differenziali ordinarie invece delle differenziali parziali usate nella equazione differenziali parziali(PDE).

I PDE sono più in uso degli ODE, ma ci sono alcuni usi degli ODE:

1. Legge di Newton $\to$  $m \frac{ d^{2}x(t) }{ dt^{2} } = f(t)$
1. (1-bis) $f=f(x(t)) \to m\frac{ d^{2}x(t) }{ dt^{2} } = -kx(t)\text{ con }k>0$
2. Pendolo $\to$ l $\frac{d^{2}\theta(t)}{dt^{2}}+\alpha \frac{ d\theta }{ dt }+g\sin(\theta(t))=0$ 

Se vogliamo generalizzare una ODE possiamo scriverla come:
$$F(t,y(t),y'(t),\dots,y^{(p)}(t))=0 \to t\in I = [t_{0},T]$$
t è la variabile indipendente, che di solito è il tempo o lo spazio. Invece $y(t)$ è la funzione incognita che stiamo cercando.

Di solito la ODE generica la scriviamo in modo più normale come:
$$y^{(p)}(t) = f(t,y(t),\dots,y^{(p-1)}(t))\;\;t\in I$$
p è l'ordine dell'equazione differenziale, detto anche il massimo ordine di derivata coinvolto.

Nel nostro caso ci limitiamo alla soluzione di problemi $p=1$, cioè:
$$y'(t) = f(t,y(t))\to t\in I$$
Vogliamo approssimare $y(t)$.

Perché ci sia una e una sola soluzione, dobbiamo dare un dato iniziale, la configurazione iniziale:
$$\begin{gather}
y'(t) = f(t,y(t)) \\
y(t_{0})=y_{0}
\end{gather}$$
Questo insieme di ODE e condizione iniziale è detto il problema di Cauchy.

Sono noti: $I,y_{0}$ e $f$, le incognite sono $y: I\to \mathbb{R}$, la funzione è della ODE $f:I\times \mathbb{R}\to \mathbb{R}$.

## Casi di $y(t)$

### Scalare
Il caso scalare è dove y prende un $t\in I$ e ne associamo scalare.

### Vettoriale
Nel caso vettore prendiamo un vettore delle derivate delle n funzioni incognite:
$$\vec{y}'(t) = \vec{f}(t,\vec{y}(t))$$
$\vec{y}(t)$ è vettore delle funzioni incognite.

Ogni funzione incognita è:$y_{i}:I \subseteq \mathbb{R}\to \mathbb{R}$ con $i=1,\dots,n$

Il vettore delle funzioni incognite prende forme:
$$\vec{y}(t) = [y_{1}(t),\dots,y_{n}(t)]^{T}\to \text{n funzioni incognite}$$
Il vettore delle funzioni note è:
$$\vec{f}(t,\vec{y}(t)) = [f_{1}(t,\vec{y}(t)),f_{2}(t,\vec{y}(t)),\dots,f_{n}(t,\vec{y}(t))]$$
$f_{i}$ è funzione di t e di potenzialmente tutte le funzioni incognite.

$f_{i}: I\times \mathbb{R}^{n}\to \mathbb{R}$ con $i=1,\dots,n$

Le condizioni iniziali è:
$$\begin{align}
\vec{y}(t_{0}) &= \vec{y}_{0} \\
y_{1}(t_{0}) &= y_{1,0} \\
y_{2}(t_{0}) &= y_{2,0} \\
\vdots \,\,\,\,\,\,& \,\,\,\,\,\,\,\,\,\,\,\vdots \\
y_{n}(t_{0}) &= y_{n,0}
\end{align}$$
Questa è la soluzione di un sistema di ODE, per come l'abbiamo posto possiamo risolverlo come una ODE di grado 1, usando una metodo analogo al newton per sistemi nel caso del punto fisso.

### ODE di grado n
$$y^{(n)}(t) = f(t,y(t),y'(t),\dots,y^{(n-1)}(t)) \to t\in I=[t_{0},T]$$
Usando delle equazioni ausiliarie, per permetterci di scrivere questa ODE di ordine n, come un sistema di n ODE di ordine 1, che possiamo trattare come una ODE di ordine 1.

Queste n funzioni incognite ausiliarie sono:
$$\begin{align}
y_{1}(t) &= y(t) \\
y_{2}(t) &= y'(t) = y'_{1}(t) \\
y_{3}(t) &= y''(t) = y_{2}'(t) \\
\vdots \,\,\,\,\,& \,\,\,\,\,\,\,\,\,\,\vdots \\
y_{n}(t) &= y^{(n-1)}(t) = y'_{n-1}(t)
\end{align}$$

Ora per convertire queste funzioni incognite ausiliarie in ODE di ordine le deriviamo:
$$\begin{align}
y_{1}'(t) &= y_{2}(t) \\
y_{2}'(t) &= y_{3}(t) \\
\vdots \,\,\,\,\,& \,\,\,\,\,\,\,\,\,\,\vdots \\
y_{n-1}'(t) &= y_{n}(t) \\
y_{n}'(t) &= f(t,y_{1}(t),y_{2}(t),\dots,y_{n}(t))
\end{align}$$

Le condizioni iniziali per $y_{n}'$ sono:
$$y(t_{0})=y_{0},y'(t_{0})=y_{1,0},\dots,y^{(n-1)}(t_{0}) =y_{n-1,0}$$ 
Per la ausiliarie allora le condizioni iniziali saranno:
$$\begin{align}
y_{1}(t_{0})&= y_{0} \\
y_{2}(t_{0}) &= y_{1,0} \\
\vdots \\
y_{n-1}(t_{0}) &=y_{n-2,0} \\
y_{n}(t) &= y_{n-1,0}
\end{align}$$

Se impariamo a risolvere le ODE di primo grado scalari riusciamo a risolvere le ODE di qualsiasi grado riportandole in un sistema di ODE di grado 1.

## Analisi del Problema di Cauchy Scalare

Possiamo categorizzare il problema in base alla natura di f:
- lineare
Esempio:
$$\begin{gather}
y'(t)=3y(t)-3t \\
y(0)=1
\end{gather}$$
- non-lineare
Esempio:
$$\begin{gather}
y'(t) = \sqrt[3]{ y(t) } \to t>0 \\
y(0)=0
\end{gather}$$
- con soluzione solo locale
Esempio:
$$\begin{align}
y'(t) = 1+[y(t)]^{2}\to t>0 \\
y(0)=0
\end{align}$$

## Osservazione

Se f è continua rispetto alla prima variabile, possiamo risolvere integrando:
$$\int\limits_{t_{0}}^{T}  \frac{dy(\tau)}{d\tau} \, d\tau = \int\limits_{t_{0}}^{T} f(\tau,y(\tau)) \, d\tau  $$
e se $y\in C^{1}(I)$, possiamo integrare allora:
$$y(t) = y_{0}+\int\limits_{t_{0}}^{T} f(\tau,y(\tau)) \, d\tau $$
Se sappiamo calcolare la primitiva di F, è facile risolvere ma non è sempre possibile.

Facendo l'analisi del problema di Cauchy, guardiamo a due cose:
1. Condizioni di esistenza e unicità della soluzione al problema
2. Dipendenza continua dei dati

Se troviamo tutte e due diciamo che il nostro problema di Cauchy è ben posto

#### Risultato locale delle analisi

Se $f$ è continua, rispetto ad entrambi gli argomenti, allora $\exists$ alemno una funzione $y\in C^{1}(I)$, soluzione del problema di Cauchy.

Ci potrebbero esser più soluzioni, ma vogliamo che ce ne sia solo una quindi dobbiamo aggiungere un'altra condizioni.

#### Lipschitzianità Uniforme/ Lipschitz Continua

$f: I\times \mathbb{R}\to \mathbb{R}$ è Lipschitziana rispetto a y in I, uniformemente rispetto a y se $\exists$ costante $L>0$ tale che:
$$|f(t,y_{1})-f(t,y_{2})| \leq L|y_{1}-y_{2}| \to \forall t\in I \text{ e }\forall y_{1},y_{2} \in\mathbb{R}$$

Il rapporto incrementale è limitato ma non ci dice niente al limite, quindi richiede meno delle derivabilità. Con la prima condizione implica la esistenza globale

## Esistenza e Unicità Globale

Se $f:I\times \mathbb{R}\to \mathbb{R}$ è:

1. continua rispetto ad entrambi gli argomenti
2. Lipschitziana rispetto ad y, uniformamente rispetto a t

allora $\exists!y:I\to \mathbb{R}$ soluzione di:
$$\begin{gather}
y'(t) = f(t,y(t)): t\in I=[t_{0},T] \\
y(t_{0}) = y_{0}
\end{gather}$$























