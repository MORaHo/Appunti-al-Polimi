---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 8 - Interpolazione

## Approssimazione di funzioni e dati

Il terzo argomento che studiamo è la approssimazione di funzioni e dati in una spazio.

Consideriamo per semplicità una funzione $f \in C^{0}([a,b])$, e il nostro lavoro sarà di trovare $\widetilde{f}\in \mathbb{P}_{n}$ che rappresenti il meglio possibile la funzione originale $f$ con i punti di $f$ che ci vengono dati.

Possiamo farlo per aiutarci durante l'integrazione in caso di funzioni difficilmente integrabili, rimpiazzando $f$ con $\widetilde{f}$, nella formula: $I(f) = \int\limits_{a}^{b} f(x) \, dx$.

Un metodo di interpolazione che conosciamo già è Taylor. Ma Taylor ha dei problemi, il cui principale è che Taylor è locale, non rappresenta tutta la funzione come vogliamo quindi non ci è utile.
In più Taylor è molto restrittivo, richiedendo che la funzione $f$ sia $\in C^{2}$, che ci riduce molto i casi che sarebbero lo stesso risolvibili.

Nella approssimazione di dati e funzioni, ci viene dato un insieme di coppie di dati, e dai dati tiriamo fuori una legge analitica. 

### Tecniche per l'approssimazione di funzioni e dati

La due tecniche per l'approssimazione di funzioni e dati che guardiamo sono:
- interpolazione (per l'approssimazione di funzioni)
- minimi-quadrati (per l'approssimazione di dati)

Nell'interpolazione cerco il polinomio che riproduce i valori di y associati ai valori x. $\widetilde{f}$ interpola le coppie di valori, dato un minimo finito di dati della funzione

<!Diagramma esempio interpolazione>

Invece nella tecnica dei minimi-quadrati troviamo una retta o parabola che rappresenta l'andamento generale dei dati, nel caso in cui i dati non ragionevolmente interpolabili:

<!Diagramma minimi-quadrati>

## Interpolazione

Dato un insieme di coppie di dati:
$${(x_{i},y_{i})}_{i=0}^{n}$$
Dove $x_{i} \neq x_{j}$, i valori di $x_{i}$ sono i punti o tempi che creano l'ascisse, e i valori di y saranno $y_{i} = f(x_{i})$

Dobbiamo trovare $\widetilde{f}$ tale che $\widetilde{f}(x_{i}) = y_{i}\,\,\to\,\, i=0,\dots,n$

Gli $x_{i}$ sono i nodi di interpolazione e gli $y_{i}$ sono i valori da interpolare.

Il fatto che i varia da 0 ad n, significa che abbiamo n+1 condizioni da interpolazione.

Ci sono modi diversi per definire e ricavare $\widetilde{f}$ che includono:
- $\in \mathbb{P}_{n}$ $\to$ quello che vediamo in questa parte del corso
- Fourier $\to$ quello che vedremo più tardi nel corso
- Rappresentazione razionale = $\frac{P_{t}(x)}{P_{s}(x)}$, che non vedremo

La definizione di $\mathbb{P}_{n}$ è:
$$\mathbb{P}_{n} = \{a_{0}+a_{1}x+\dots+a_{q}x^{q}, \,a_{i}\in\mathbb{R},q\in\mathbb{N}\}$$

## Interpolazione Polinomiale di Lagrange

### Proposizione
Siano $\{(x_{i},y_{i})\}_{i=0}^{n}$ con $x_{i}$ distinti. Allora $\exists!$ polinomio interpolatore di grado $\leq n,$ $\Pi_{n}$ tale che $\Pi_{n}(x_{i}) = y_{i}\,\,\to\,\,i=0,\dots,n$
##### Commenti:
Se $\Pi_{n}$ è usato per interpolare funzione la notazione corretta sarebbe $\Pi_{n}f$, ch è un simbolo unico.

Se ho n+1 coppie di dati, il mio polinomio interpolatore avrà grado n. Invece per i minimi quadrati si hanno polinomi di grado 1 o 2 per n coppie di dati.

Meno incognite ci sono meno lavoro computazione dobbiamo fare.
### Dimostrazione di Unicità di $\Pi_{n}$
La unicità si dimostra per assurdo.

Per assurdo esistono 2 polinomi interpolatori tale che:
$$\begin{gather}
\Pi_{n} \in \mathbb{P} \to \Pi_{n}(x_{i}) = y_{i} \,\,\to\,\,i=0,\dots,n \\
\Pi_{n}^{*}  \in \mathbb{P} \to \Pi_{n}^{*} (x_{i}) = y_{i} \,\,\to\,\,i=0,\dots,n
\end{gather}$$
Definiamo la funzione $\Gamma$:
$$\underbrace{ \Gamma_{n} (x) }_{ \in\mathbb{P}_{n} } = \Pi_{n}(x) - \Pi_{n}^{*} (x)$$
Questo significa che:
$$\Gamma_{n}(x_{i}) = \Pi_{n}(x_{i}) - \Pi_{n}^{*} (x_{i}) = y_{i}-y_{i} = 0\,\,\forall i$$
È un polinomio di grado n con n+1 zeri, questo è vero solo se la funzione è la identità nulla,cioè:
$$\Gamma_{n}(x) = 0\,\,\forall x \implies \Pi_{n}(x)-\Pi_{n}^{*} (x) = 0\,\,\forall n$$
$$\implies \Pi_{n}(x) = \Pi_{n}^{*} (x) \implies  \text{Unicità}$$
### Dimostrazione delle esistenza/Costruzione di $\Pi_{n}$
#### Polinomio Caratteristico di Lagrange
Partiamo da un caso semplice. 
In generale abbiamo $x_{0},x_{1},x_{2}$ e $y_{0},y_{1},y_{2}$.
In questo caso semplice i dati saranno:
$x_{0}=0,\,x_{1}=0,5,\,x_{2}=1$ e $y_{0}=0,\,y_{1}=1,\,y_{2}=0$

Mappando i dati avremo:
<!Diagramma dati mappati>

Definiamo $\varphi_{1} \in\mathbb{P}$, dove l'indice è il nodo in cui abbiamo valore diverso da 0.

$\varphi_{1}$ è tale che:
$\varphi_{1} (x=0)=0$, $\varphi_{1}(x=0,5) = 1$ e $\varphi_{1}(x=1) = 0$

Possiamo imporre tutte le condizioni dove il $\varphi$ si annulla, applicandole in modo tattico per creare il polinomio e avremmo:
$$x(x-1)$$
Questo polinomio è congruente con le due condizioni annullanti ma non è congruente con quella che ci da 1. In generale il primo passo nella generazione del polinomio è imporre gli zeri.

Per imporre $\varphi_{1}(0,5)$ vediamo modifichiamo le costante in modo appropriato tale che ci dia il valore giusto.

Visto che vogliamo che sia 1, scriviamo:
$$\varphi_{1}(x) = \frac{x(x-1)}{0.5(0,5-1)} = 4(x-x^{2})$$
Scriviamo il denominatore tale che al valore dove vogliamo un valore diverso i valori di cancellano l'un l'altro lasciano l'uno che stiamo cercando.

Per generalizzare:
Di vengono dati $x_{0},x_{1},\dots,x_{n}$ e valori associati $y_{0}=0,y_{1}=0,\dots,y_{k-1}=0,y_{k}=1,y_{k+1}=0,\dots,y_{n}=0$

Abbiamo allora n nulle e il k-esimo valore è 1 valore unitario.

Guardiamo per primo tutti gli annullamenti:
Prendiamo $\varphi_{k}\in \mathbb{P}_{n}$

Scriviamo allora il polinomio:
$$(x-x_{0})(x-x_{1})\dots(x-x_{k-1})(x-x_{k+1})\dots(x-x_{n})$$
Produciamo allora n monomi che si annullano al loro associato x.

Per soddisfare la condizione unitarià, $\varphi_{k}$ sarà:
$$\begin{gather}
\varphi_{k}(x) = \frac{(x-x_{0})(x-x_{1})\dots(x-x_{k-1})(x-x_{k+1})\dots(x-x_{n})}{(x_{k}-x_{0})(x_{k}-x_{1})\dots(x_{k}-x_{k-1})(x_{k}-x_{k+1})\dots(x_{k}-x_{n})} \\
\varphi_{k}(x) = \prod_{i=0}^{n} \frac{(x-x_{i})}{(x_{k}-x_{i})}\text{ per }i\neq k
\end{gather}$$
Questo è il polinomio generale che stavamo cercando, lo nominiamo il polinomi caratteristico di Lagrange.

Possiamo dire anche che:
$$\varphi_{k}(x_{i}) = \delta_{k} \to k=0,\dots,n$$x
Dove $\delta_{k}$ è il $\delta$ di Kronecker, che ha valore 1 quando i=k e valore 0 quando i $\neq$ k

Si hanno n+1 polinomio caratteristici, in base a quale indice mettiamo y = 1.
#### Polinomio Interpolatore Generale di Lagrange

Il limite delle funzioni che abbiamo appena visto è che possiamo trovare solo funzioni in cui solo un valore è diversa 1.
Cerchiamo quindi una funzione che può avere più di un valore diverso da 0.

Prendiamo $\Pi_{2} \in \mathbb{P}$, tale che $\Pi_{2}(x_{0})=y_{0}$, $\Pi_{2}(x_{1})=y_{1}$ e $\Pi_{2}(x_{2})=y_{2}$.

Conosciamo che esistono $\varphi_{0}$,$\varphi_{1}$ e $\varphi_{2}$ tale che:
$$\begin{matrix}
\varphi_{0}(x_{0})=1 & \varphi_{0}(x_{1})=0 & \varphi_{0}(x_{2})=0 \\
\varphi_{1}(x_{0})=0 & \varphi_{1}(x_{1})=1 & \varphi_{1}(x_{2})=0 \\
\varphi_{2}(x_{0} )=0 & \varphi_{2}(x_{1})=0 & \varphi_{2}(x_{2})=1
\end{matrix}$$

Sfruttiamo il fatto che possiamo definire tante $\varphi$ e facciamo un combinazione lineare per trovare $\Pi_{2}$.

Abbiamo allora che:
$$\Pi_{2}(x)= \underline{A}\varphi_{0}(x)+\underline{B}\varphi_{1}(x)+\underline{C}\varphi_{2}(x)$$
Avendo l'equazione, imponiamo le condizioni per trovare i diversi valori.
$$\Pi_{2}(x_{0})= \underline{A}\underbrace{ \varphi_{0}(x_{0}) }_{ 1 }+\underline{B}\underbrace{ \varphi_{1}(x_{0}) }_{ 0 }+\underline{C}\underbrace{ \varphi_{2}(x_{0}) }_{ 0 }=y_{0}$$
$$\implies \underline{A}=y_{0}$$
$$\Pi_{2}(x_{1})= \underline{A}\underbrace{ \varphi_{0}(x_{1}) }_{ 0 }+\underline{B}\underbrace{ \varphi_{1}(x_{1}) }_{ 1 }+\underline{C}\underbrace{ \varphi_{2}(x_{2}) }_{ 0 }=y_{1}$$
$$\implies \underline{B}=y_{1}$$
$$\Pi_{2}(x_{2})= \underline{A}\underbrace{ \varphi_{0}(x_{2}) }_{ 0 }+\underline{B}\underbrace{ \varphi_{1}(x_{2}) }_{ 0 }+\underline{C}\underbrace{ \varphi_{2}(x_{2}) }_{ 1 }=y_{2}$$
$$\implies \underline{C}=y_{2}$$
Mettendo tutto insieme allora troviamo che l'equazione è:
$$\Pi_{2}(x)= y_{0}\varphi_{0}(x)+y_{1}\varphi_{1}(x)+y_{2}\varphi_{2}(x)$$
Allora per trovare $\Pi_{n}$ generale ci servirà sapere solo $x_{0},x_{1},\dots,x_{n}$e $y_{0},y_{1},\dots,y_{n}$ .

La formulazione generale per il due ricavo sarà:
$$\begin{align}
 \Pi_{n}(x) &= y_{0}\varphi(x)+y_{1}\varphi_{1}(x)+\dots+y_{n}(x)\varphi_{n}(x) \\
&= \sum_{k=0}^{n} y_{k}\varphi_{k}(x) = \sum_{k=0}^{n}\left( y_{k}\cdot\left( \prod _{\substack{i=0\\i\neq k}}^{n}  \frac{x-x_{i}}{(x_{k}-x_{i})} \right) \right)
\end{align}$$
Questa è la formula generale del Polinomio Interpolatore di Lagrange

Possiamo vedere che funzione perché facendo:
$$\Pi_{n}(x_{i}) = \sum_{k=0}^{n}y_{_{k}}\underbrace{ \varphi_{k}(x_{i}) }_{ \delta_{k} } = y_{i}\underbrace{ \varphi_{i}(x_{i}) }_{ 1 } = y_{i}$$
Questo vale perché per $x_{i}$ l'unica $\varphi$ che non si annulla, e quella che a lo stesso pedice.

Questo verifica che per un qualsiasi caso di $x_{i}$ si annulla.



