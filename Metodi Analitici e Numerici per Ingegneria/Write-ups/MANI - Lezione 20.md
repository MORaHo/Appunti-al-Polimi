---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 20 - Ricavo di soluzioni a problemi senza soluzione ricavabile

## Esempi
Ci sono casi di problemi che hanno una soluzione ma con la equazione non sono ricavabili. Facciamo degli esempi.
### Esempio 1
Prendiamo il problema di Poisson in più dimensioni e una condizione di omogeneità al bordo:
$$\begin{cases}
-\Delta u =f \to\Omega = (0,1)^{2} \\
+CB \to u = 0\text{ su }\partial\Omega
\end{cases}$$

Perché sia possibile ricavare la soluzione serve che $u \in C^{2}(\overline{\Omega}_{})$. Questo è quello che ci aspettiamo infatti della soluzione però in questo caso, la soluzione esiste ma è possibile che non sia $C^{2}$.

Se prendiamo $f=1\implies f\in C^{0}(\overline{\Omega}_{})$, ci aspettiamo che sia $\in C^{2}(\overline{\Omega}_{})$ ma in questo caso non è vero, vediamo perché.

Facendo una analisi della Laplaciana nel dominio abbiamo che:
<!Diagramma laplaciana del problema nello spazio.>

Vediamo che sull'intero dominio aperto, la laplaciana ha valore $-\Delta u = f = 1$ vediamo invece al bordo che la laplaciana è nulla per la condizione di bordo, questa allora è un discontinuità della derivata seconda, non è possibile che $u$ sia $C^{2}$ visto che la seconda derivata non è continua, non possiamo allora trovare una soluzione integrando. Anche se $u$ è $C^{0}$ e $C^{1}$, non possiamo trovare la soluzione.

Quello che possiamo dire è che $u\in C^{2}(\Omega) \cap C^{0}(\overline{\Omega}_{})$, ma questa è una condizione più debole della condizione $u\in C^{2}(\overline{\Omega}_{})$ che chiediamo per trovare la soluzione.
### Esempio 2
Facciamo un'altro esempio, che abbiamo già visto.

$$\begin{cases}
-u''(x) = f(x)\to x\in(0,1) \\
u(0)=u(1)=0
\end{cases}$$
Prendiamo una f che è particolarmente cattiva, un carico puntiforme.

##### Rappresentazione Matematica di un Carico Puntiforme
La rappresentazione matematica di un carico puntiforme è fatta attraverso la $\delta$ di Dirac in (0,0).

<!Diagramma carico puntiforme>

Definiamo $g_{n}(x)$:
$$g_{n}(x) = \begin{cases}
0  \to x<0,x> \frac{1}{n} \\
1 \to 0 \leq x \leq \frac{1}{n}
\end{cases}$$
Più aumenta n, più è alto e stretto, quindi prendiamo un n abbastanza grande per dire che abbiamo circa definito un problema puntiforme.
$$\delta_{D}(x) = \lim_{ n \to \infty } g_{n}(x)$$

La soluzione al problema è:
<!Diagramma soluzione>

Vediamo immediatamente il problema è continuo ($C^{0}$), ma anche che non è $C^{2}$. Questo di nuovo è un problema perché sappiamo che la soluzione esiste ma non riusciamo a ricavarla con i metodi che abbiamo ora.

### Esempio 3
Applicando due carichi punti formi ricaviamo la soluzione a forma di trapezio che conosciamo:
<!Diagramma esempio 3>
Anche qui però, come prima, non abbiamo una funzione $C^{2}$ solo una $C^{0}$.

### Esempio 4
Definiamo sempre lo stesso problema, ma ora prendiamo un $f$ con equazione:
$$f(x) = \begin{cases}
0\to x\in\left( 0, \frac{2}{5} \right) \cup[\frac{3}{5},1) \\
-1 \to x\in [ \frac{2}{5}, \frac{3}{5} )
\end{cases}$$

La funzione $f$ e la associata soluzione di $u$ è:
<!Diagramma f e soluzione u>

Vediamo che la soluzione ha un misto di sezioni rettilinee e paraboliche.

Prendiamo la primitiva di $f$:
$$F(x) = \int\limits_{0}^{x} f(y) \, dx $$
È ricaviamo la derivata di $u$:
$$\begin{align}
u'(x) &= \int\limits_{0}^{x} u''(y) \, dy + c \\
&= -\int\limits_{0}^{x} f(y) \, dy +c \\
& = -F(x)+c
\end{align} $$
Il valore numerico della primitiva di $f$ è:
$$F(x) = \int\limits_{0}^{x} f(y) \, dy = \begin{cases}
0 &x\in\left( 0, \frac{2}{5} \right) = I_{1} \\
-x+ \frac{2}{5} & x\in[\frac{2}{5}, \frac{3}{5}) = I_{2} \\
-\frac{1}{5} & x\in [\frac{3}{5}, 1) = I_{3}
\end{cases} $$
Il secondo valore si può fare facendo la derivata al punto x e vedendo che non c'è area prima di $\frac{2}{5}$ quindi togliendolo da quella area. Al terzo invece l'area non aumenta quindi è la sola area della sezione in $I_{2}$ portata in fine, visto che quella area è lo stesso inclusa nell'integrale.
$$\implies u'(x) = \begin{cases}
c & x\in I_{1} \\
\frac{2}{5}-x +c  & x\in I_{2} \\
\frac{1}{5}+c  &  x\in I_{3}
\end{cases}$$
Facendo l'integrale di questi valori allora troviamo che:
$$u(x) = \int\limits_{0}^{x} u'(y)\;dy+c^{*} \implies u(x) = \begin{cases}
cx+D & x\in I_{1} \\
\frac{x^{2}}{2}-\frac{2}{5}x+cx+E & x\in I_{2} \\
\frac{1}{5}x+cx+F & x\in I_{3}
\end{cases} $$

Le condizioni di bordo sono:
$$\begin{cases}
u(0)=0 \\
u(1)=0 \\
u\left( \frac{2}{5} \right)^{-} u\left( \frac{2}{5} \right)^{+} \\
u\left( \frac{3}{5} \right)^{-} = u\left( \frac{3}{5} \right)^{+}
\end{cases}$$

La soluzione allora è:
$$u(x) =\begin{cases}
-\frac{x}{10} & x\in I_{1} \\
\frac{x^{2}}{2}-\frac{x}{2}+\frac{2}{25} & x\in I_{2} \\
\frac{x}{10}-\frac{1}{10} & x\in I_{3}
\end{cases}$$
La soluzione non solo è $C^{1}([0,1])$ ma è anche $C^{1}([0,1])$.
Vediamo le derivate ai punti di confine tra le sezioni per confermare:
$$\begin{align}
&x=\frac{2}{5}  & -\frac{1}{10} = u'\left( \frac{2}{5} \right)^{-} & \;\;\;\;\;\;\;\;\;\;u'\left( \frac{2}{5} \right)^{+} = x-\frac{1}{2}= \frac{2}{5}-\frac{1}{2} = -\frac{1}{10} \\
&x=\frac{3}{5}   & u'\left( \frac{3}{5} \right)^{-} = \frac{1}{10} & \;\;\;\;\;\;\;\;\;\;u'\left( \frac{3}{5} \right)^{+} = \frac{1}{10}
\end{align}$$
Ma alla derivata seconda si scolla, questo allora significa che non sarà $C^{2}$.
Anche qui non riusciamo ad avere una soluzione.

Abbiamo una ampia gamma di problemi per cui sappiamo esiste una soluzione ma il nostro modello non ricava. Quello che dobbiamo fare allora è estendere il modello per permetterci di trovare la soluzione che non riusciamo a trovare in questo momento.
## Formulazione Debole di Problemi Differenziali
Il modo in cui cambiamo il nostro modello, per permetterci di ricavare la soluzione che in questo momento non riusciamo a ricavare, è di cambiare la formulazione del problema.

Cambiamo la formulazione da una formulazione differenziale (detta forte) ad una detta debole (o integrale).
### Differenze tra la formulazione forte e debole

- Come detto la formulazione forte è differenziale, invece quella debole è integrale
- La equazione Poisson in una dimensione nella formulazione forte è $-u''=f$, invece nella formulazione debole la vedremo.
- La formulazione forte ha spazio di lavoro $C^{2}$, invece la formulazione debole lavora nello spazio di Sobolev
- Nella formulazione forte non riusciamo a ricavare la soluzione ai problemi che abbiamo visto ed altri, nella formulazione debole rientrano tutte le configurazioni fisiche.

### Applicazione della Formulazione Debole su Poisson generico

Proviamo la formulazione debole sugli esercizi. Prendiamo il caso generico per $f$:
$$\begin{cases}
-u''(x) = f(x) & x\in(0,1) \\
u(0) = u(1)=0
\end{cases}$$
Come abbiamo detto prima, abbiamo troppe derivate, quindi riduciamole integrando.

Prima di integrare prendi $v$, funzione test/trial.
$u,v\in \mathbb{V}$, dove $\mathbb{V}$ è un spazio che tiene a conto delle condizioni di bordo, tale che $u(0)=u(1)=0$.
Scriviamo:
$$-u''(x)v(x) = f(x)v(x)$$
Integriamo questa nel dominio:
$$-\int\limits_{0}^{1} u''(x)v(x) \, dx  = \int\limits_{0}^{1} f(x)v(x) \, dx $$

Per ridurre le derivate di $u$, integriamo per parti:
$$\int\limits_{0}^{1} u'(x)v'(x) \, dx -u'(x)v(x)\Bigg|_{0}^{1} = \int\limits_{0}^{1} f(x)v(x) \, dx $$
Applichiamo le condizioni di bordo:
$$-u'(1)\cancelto{ 0 }{ v(1) } +u'(0)\cancelto{ 0 }{ v(0) }=0$$

Cerchiamo $u\in \mathbb{V}$ tale che:
$$\begin{gather}
\int\limits_{0}^{1} u'(x)v'(x) \, dx =\int\limits_{0}^{1} f(x)v(x) \, dx &\forall v\in\mathbb{V}
\end{gather}$$
Questa è la forma debole del problema.

Abbiamo ridotto il numero delle derivate.
## Definizione dello spazio $\mathbb{V}$
Cos'è questo spazio $\mathbb{V}$ su cui dipendiamo per la formulazione debole.

Facciamo guess su cos'è questo spazio:
$$\mathbb{V} = C_{0}^{1}(0,1) = \{v\in C^{1}(0,1) \text{ tale che }v(0)=v(1)=0\}$$
Cioè ha uno insieme delle funzioni a regolarità $C^{1}$ e che rispetta la condizioni di bordo.

Possiamo dire immediatamente che questo guess non è giusto perché non rispetto il secondo ancora il secondo esempio. Non è giusto ma ci punta nella direzione giusta.
### Spazi di Banach e Hilbert
Introduciamo due tipi di spazio che ci aiuteranno ad arrivare alla definizione di $\mathbb{V}$.

Lo spazio di Banach è uno spazio vettoriale, normato, completo
Lo spazio di Hilbert è uno spazio di Banach dotato di prodotto scalare che induce la norma.

Uno spazio completo significa che tutte le successioni di Cauchy sono convergenti, cioè:
$$(a_{n})_{n}\in \mathbb{N}\text{ se }\varepsilon>0\;\exists N\in\mathbb{N}\text{ tale che }\left|a_{n}-a_{k} \right|<\varepsilon\; \forall n,k\geq N$$

$\mathbb{V}$ serve che sia un spazio di Hilbert, $C_{0}^{1}$ non è spazio di Hilbert.
### Spazi di Lebesgue

Uno spazio di Lebesgue ($L^{^{p}}(\Omega)$) e definito:

$$L^{^{p}}(\Omega)= \left\{ f:\Omega \to \mathbb{R} \text{ tale che }\int\limits_{\Omega}^{} \left|f(x) \right|^{p} \, dx < \infty \right\} \text{ per }1 \leq p <\infty$$
Cioè è l’insieme di funzioni per cui esiste finito l‘integrale della p-esima potenza della funzione integrato nel dominio.

Questo spazio è dotato di norma che prende la forma:
$$\lvert\lvert f \rvert\rvert_{L^{^{p}}(\Omega)} = \left[ \int\limits_{\Omega}^{} \left|f(x) \right|^{p} \, dx  \right]^{\frac{1}{p}}$$

Uno spazio di Lebesgue, dotato della norma di Lebesgue, è uno spazio di Banach.

##### Osservazione
Tra tutti gli spazi $L^{^{p}}$ di Banach, quello con $p=2$ è uno spazio di Hilbert.

Lo spazio è definito come:
$$L^{2}(\Omega) = \left\{ f:\Omega\to \mathbb{R}: \int\limits_{\Omega}^{} \left|f(x) \right|^{2} \, dx <\infty \right\}$$
Cioè è lo spazio delle funzioni quadrato sommabili.

La norma di questo spazio è:
$$\lvert\lvert f \rvert\rvert  _{L^{^{p}}(\Omega)} = \left[ \int\limits_{\Omega}^{} \left|f(x) \right|^{2} \, dx  \right]^{\frac{1}{2}}$$
Il prodotto scalare in questo spazio è:
$$(f,g)_{L^{^{p}}(\Omega)} = \int\limits_{\Omega}^{} f(x)g(x) \, dx $$
Vediamo questo prodotto scalare induce la definizione della norma, perché se prendiamo $g=f$, ritroviamo la norma. Questo fatto significa che è uno $L^{2}(\Omega)$ spazio Hilbert.

$L^{2}$ non è $\mathbb{V}$ ma c'è legato.

##### Esemplari di Spazi di Lebesgue
$L^{1}(\Omega)$ e $L^{\infty}(\Omega)$ sono due casi specifici di spazi di Lebesgue.

$L^{1}(\Omega)$ è lo spazio delle funzioni integrali secondo l'integrale di Lebesgue.
Invece $L^{\infty}(\Omega)$ è lo spazio delle funzioni limitate in $\Omega$.

La funzioni limite in $\Omega$ sono definite come:
$$\{f:\Omega\to \mathbb{R}\text{ tale per cui}\left|f(x) \right|\leq M<\infty \text{ quasi ovunque nello spazio}\}$$
##### Dimensione degli spazi di Lebesgue
La dimensione degli spazi di Lebesgue è ordinata come:
$$L^{q}(\Omega) \subseteq L^{p}(\Omega) \subseteq L^{1}(\Omega) \text{ quando }1 \leq p\leq q$$

Facciamo un esempi dimostrativo. Prendiamo la funzione generica:
$$f(x) = \frac{1}{x^{\alpha}}$$
Tutte le funzioni di questo tipo sono $L^{2}(0,1)$ se $0<\alpha< \frac{1}{2}$, invece tutte funzioni di questo tipo sono $L^{1}(0,1)$ se $0<\alpha<1$.

La prima soluzione è ricavata facendo:
$$\begin{align}
\int\limits_{0}^{1} \left| \frac{1}{x^{\alpha}} \right|^{2} \, dx  &= \int\limits_{0}^{1} x^{-2\alpha} \, dx \\
&=\lim_{ \varepsilon \to 0^{+} }\left[  \frac{1}{1-2\alpha}x^{1-2\alpha} \right]_{\varepsilon}^{1} \\
&= \frac{1}{1-2\alpha}\lim_{ \varepsilon \to 0^{+} }[1-\varepsilon^{1-2\alpha}] < \infty 
\end{align} $$
Tale che non vada all'infinito: $1-2\alpha>0\implies\alpha< \frac{1}{2}$.

La seconda soluzione ricavata in modo equivalente facendo:
$$\begin{align}
\int\limits_{0}^{1}  \left| \frac{1}{x^{\alpha}} \right| \, dx &= \int\limits_{0}^{1} x^{-\alpha} \, dx \\
&= \lim_{ \varepsilon \to 0^{+} } \left[ \frac{1}{1-\alpha}x^{1-\alpha} \right]_{\varepsilon}^{1} \\
&= \frac{1}{1-\alpha} \lim_{ \varepsilon \to 0^{+} } [1-\varepsilon^{1-\alpha}]<\infty
\end{align} $$
Anche qui tale che non vada all'infinito: $1-\alpha>0 \implies \alpha<1$.
#### Integrale di Lebesgue e confronto con Riemann

##### Integrale di Riemann
L'integrale di Riemann è l'integrale che consideriamo abbiamo sempre considerato.

Prendiamo la funzione generica:
<!Diagramma funzione generica>

L'integrale di Riemann è basato sulla partizione lungo x della funzione in x intervalli. Prendiamo due punti e prendiamo sia il rettangolo con altezza uguale al punto più in basso che il rettangolo associato al punto più in alto.

Questi rettangoli hanno forma:
$$U(P_{x})  =\sum \Delta x_{i}\cdot (sup(f)\bigg|_{I_{i}})$$
$$L(P_{x}) = \sum \Delta x_{i}\cdot (inf(f)\bigg|_{I_{i}})$$
Definiamo l'integrale di Riemann come:
$$\int\limits_{R}^{}  = \lim_{ n \to \infty } U(P_{x}) \, dx  = \lim_{ n \to \infty } L(P_{y})$$
Dove $n$ è il numero di partizioni che prendiamo.
##### Integrale di Lebesgue
L'integrale di Lebesgue è definito in modo diverso dall'integrale di Riemann. Lebesgue lavora tramite una partizione lungo y invece di x.

Secondo queste partizioni ne prendiamo sempre due e definiamo i rettangoli il rettangolo al punto più alto e quello ad altezza al punti più basso.

Definiamo i due rettangoli come:
$$\begin{gather}
U(P_{y}) = \sum \mu(A)\cdot c_{i} \\
L(P_{y}) = \sum \mu(A)\cdot c_{i-1}
\end{gather}$$
$\mu(A)$ è una misura non è necessariamente la lunghezza, la useremo la lunghezza/spessore per semplicità.

L'integrale di Lebesgue è definito matematicamente come:
$$\int\limits_{L}^{}  \,= \lim_{ n \to \infty } U(P_{y}) = \lim_{ n \to \infty } L(P_{y}) $$
##### Esempio
Definiamo la funzione di Dirichlet come:
$$\chi(x) = \begin{cases}
1 & x\in \mathbb{Q} \\
0 & x\in \mathbb{R} \setminus \mathbb{Q}
\end{cases}$$
Con l'integrale di Riemann non si può integrare.
Con Lebesgue invece:
$$\int\limits_{0}^{1} \chi(x) \, dx =0\cdot\underbrace{ \mu(\mathbb{R}\setminus\mathbb{Q}) }_{ =1 } + 1\cdot \underbrace{ \mu(\mathbb{Q}) }_{ =0 }=0$$

### Definizione dello Spazio $\mathbb{V}$
Definiamo finalmente questo spazio $\mathbb{V}$.

Come abbiamo detto prima dobbiamo trovare $u\in\mathbb{V}$ tale che:
$$\int\limits_{0}^{1} u'(x)v'(x) \, dx =\int\limits_{0}^{1} f(x)v(x) \, dx \to \forall v\in \mathbb{V}$$
Questo spazio $\mathbb{V}$ deve tenere a conto delle condizioni di contorno della funzione $v$.
#### Teorema
Date le funzioni $\varphi,\psi:(0,1)\to \mathbb{R}$, se $\varphi^{2}$ e $\psi^{2}$ sono (Lebesgue) integrabili, cioè se $\varphi,\psi\in L^{2}(\Omega)$ allora è (Lebesgue) integrabile anche $\psi \varphi$, cioè $\varphi \psi\in L^{1}(\Omega)$.

(Da questo punto in poi tutti gli integrali sono integrali di Lebesgue)
#### Disuguaglianza di Cauchy-Schwarz
Una conseguenza di questo teorema è la disuguaglianza di Cauchy-Schwarz:
$$\left|\int\limits_{0}^{1} \varphi(x)\psi(x) \, dx  \right|\leq \lvert\lvert \varphi(x) \rvert\rvert_{L^{2}(\Omega)}\cdot \lvert\lvert \psi(x) \rvert\rvert_{L^{2}(\Omega)}$$
#### Definizione dello Spazio $\mathbb{V}$
Usiamo questo teorema e disuguaglianza per definire lo spazio $\mathbb{V}$ che usiamo per la formulazione debole.

La nostra formulazione debole è:
$$\underbrace{ \int\limits_{0}^{1} u'(x)v'(x) \, dx }_{ (1) } =\underbrace{ \int\limits_{0}^{1} f(x)v(x) \, dx }_{ (2) } $$
Per fare stare in piedi (1) servono:
$$u' \in L^{2}(\Omega)\text{ e }v' \in L^{2}(\Omega) $$
Per fare stare in piedi (2) invece:
$$f\in L^{2}(\Omega)\text{ e }v\in L^{2}(\Omega)$$

Serve che siano $L^{2}(\Omega)$ perché come dice il teorema $\varphi^{2}$ e $\psi^{2}$ devono esser integrabili e anche $\varphi \psi$ devono esser integrabili.

La condizione posta su $f$ che è un dato significa che stiamo estendendo le richieste anche sui dati.

Per soddisfare le richieste allora, definiamo finalmente $\mathbb{V}$ come:
$$\mathbb{V} = \{v\in(0,1)\to \mathbb{R}\text{ tale che }v\in L^{2}(0,1), v'\in L^{2}(0,1)\text{ e }v(0)=v(1)=0\}$$

Se volessimo potremmo definire:
$$H^{1}(0,1) = \{ v\in L^{2}(\Omega),v'\in L^{2}(\Omega) \}$$
E possiamo ridefinire $\mathbb{V}$ come:
$$\mathbb{V} = \{ v\in(0,1)\to \mathbb{R}\text{ tale che }v\in H^{1}(\Omega)\text{ e }v(0)=v(1)=0 \}$$








