---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 10 - Errore della Media Quadratica e Approssimazione dell'integrale

## Minimi Quadrati

Usiamo i minimi quadrati per trovare un'andamento medio. Troviamo un polinomio che minimizza gli scarti quadratici.

Nel caso lineare (m=1) abbiamo:
$$\begin{gather}
\widetilde{f} = a_{0}+a_{1}x \\
p_{m}(x) = b_{0} + b_{1}x \\
\frac{\partial \phi}{\partial b_{0}}(a_{0},a_{1}) = 0 \mathop{\longrightarrow}^{\text{Ci da}} \sum_{i=0}^{^{n}}[a_{0}-y_{i}+a_{1}x_{i}]=0 \\
\frac{\partial \phi}{\partial b_{1}}(a_{0},a_{1}) = \mathop{\longrightarrow}^{\text{Ci da}} \sum_{i=0}^{n}[a_{1}x_{i}^{2}-y_{i}x_{i}+a_{0}x_{i}]=0
\end{gather}$$

Quali sono $a_{1}$ e $a_{0}$. Abbiamo 2 incognite per 2 equazioni quindi le possiamo trovare.

Possiamo scrivere queste due equazioni di sommatorie come una matrice in forma: $B \vec{a} = \vec{g}$, dove $\vec{a} = [a_{0},a_{1}]^{T}$

Dobbiamo trovare i valori nella matrice B e nel vettore g.

Tiriamo fuori della sommatorie le variabili che vogliamo:
$$\begin{gather}
a_{0} \overbrace{\cancelto{ (n+1) }{ \sum_{i=0}^{n}1 }}^{b_{11}} + a_{1} \overbrace{\sum_{i=0}^{n}x_{i}}^{b_{12}} = \overbrace{\sum_{i=0}^{n}y_{i}}^{g_{1}} \\
a_{0}\underbrace{\sum_{i=0}^{n}x_{i}}_{b_{21}} + a_{1} \underbrace{\sum_{i=0}^{n}x_{i}^{2}}_{b_{22}} = \underbrace{\sum_{i=0}^{n}x_{i}y_{i}}_{g_{2}}
\end{gather}$$
Dai valori che abbiamo trovare per la matrice B troviamo che la matrice è [sdp](sdp.md). 

Generalizziamo questo ricavo fino al grado m.

$$\begin{gather}
\widetilde{f}(x) = a_{0}+a_{1}x +\dots+a_{m}x^{m} \\
p_{m}(x) = b_{0}+b_{1}x+\dots+b_{m}x^{m} \\
\frac{\partial \phi}{\partial b_{i}}(a_{0},\dots,a_{m}) = 0 \to i=0,\dots,m
\end{gather}$$

Guardando i valori di B che abbiamo trovato, vediamo che andando a destra guadagniamo una potenza e lo stesso in giù. L'andamento in giù continua anche in g per ragioni matematica ovvie.

$$\begin{align}
a_{0} &\sum_{i=1}^{n}1 + a_{1} \sum x_{i} + \dots + a_{m}\sum x_{i}^{m} = \sum y_{i} \\
a_{0} &\sum_{i=1}^{n}x_{i} + a_{1}\sum x_{i}^{2} + \dots+ a_{m}\sum x_{i}^{m+1} =  \sum x_{i}y_{i} \\
&\vdots \\
a_{0}&\sum x_{i}^{m} + a_{1}\sum x_{i}^{m+1}+ \dots+a_{m}\sum x_{i}^{2m} = \sum x_{i}^{m}y_{i}
\end{align}$$

Noi abbiamo preso $\widetilde{f} \in \mathbb{P}_{m}$ ma si potrebbe prendere di natura diversa.

## Approssimazione di Integrali

Ci occupiamo di integrali di funzioni continue, cioè:

$$I(f) = \int\limits_{a}^{b} f(x) \, dx  \to f \in C^{0}([a,b])$$

Le approssimazioni degli integrali si possono fare anche quando l'integrale ha un salto o un'asintotica, è più difficile e non lo facciamo in questo corso.

Data una funzione f(x) difficile da in integrare, possiamo fare un sostituzione con un polinomio ricavando allora:
$$\widetilde{I}(f) = \int\limits_{a}^{b} \widetilde{f}(x) \, d \to \widetilde{I}(f) \simeq I(f), \text{ con }\widetilde{f} \in \mathbb{P}_{m}$$
### Formule di Quadratura

Le formule di quadratura sono la conversione del calcolo dell'integrale da una forma infinitesima ad una forma discreta.

Per fare la quadratura, prendiamo l'intervallo d'integrazione e facciamo una partizione in M sotto intervalli:
<!Diagramma partizione dell'intervallo di integrazione>

Facciamo M partizioni dell'intervallo, prendendo $x_{0},x_{1},x_{M}$ equispaziati, cioè $x_{k}= x_{0}+kH$, con $H = \frac{b-a}{M}$.

Ogni sotto intervallo può esser definito come:
$$I_{k} = [x_{k-1},x_{k}], \;\;k=1,\dots M$$

La quadratura ha equazione:
	$$I(f) = \int\limits_{a}^{b} f(x) \, dx  = \sum_{k=1}^{M}\int_{I_{k}}^{} f(x) \, dx \simeq \sum_{k=1}^{M}\int_{I_{k}}^{} \widetilde{f}(x) \, dx  = \widetilde{I}(f) $$

## Quadratura a vari ordini

### m = 0

Per l'ordine m=0, rimpiazziamo la funzione con dei valori costanti, per semplicità prendiamo il valore medio.

La quadratura allora sarà:
<!Diagramma quadratura di m=0>

La formula di quadratura del rettangolo/del punto medio è:

Per $I_{k}, \overline{x}_{k} = \frac{x_{k-1}+x_{k}}{2}$

$$\widetilde{I}_{pm}(f) = H\cdot \sum_{k=1}^{M}f(\overline{x}_{k} )$$

In effetti stiamo interpolando a tratti con grado 0, quindi potremmo dire che il polinomio della nostra interpolazione è $\Pi_{0}^{H}$.

Un vantaggio della quadratura del punto medio è che tende a ridurre l'errore perché tende ad avere sia parti dove sovrastima che parti che sottostima. 

Per il caso dove prendiamo l'intervallo intero/ prendiamo un singolo rettangolo.

<!Diagramma quadratura ad un solo rettangolo>

La quadratura sarà:
$$\widetilde{I}(f) = (b-a)f\left( \frac{b-a}{2} \right)$$

### m = 1

Nel caso di grado 1, la forma della quadratura è di un trapezoide:
<!Diagramma quadratura m=1>
Questa è la stessa interpolazione della funzione $\Pi_{1}^{H}f$.

La formula di quadratura è:
$$\widetilde{I}_{T}^{C}(f) = \frac{H}{2}\sum_{k=1}^{M}[f(x_{k+1})+f(x_{k})]$$

Il mezzo sarebbe dalla due valori trovati in f, ma è costante quindi lo abbiamo tirato fuori.
Il pedice indica che è composito, cioè è composto da più sotto-intervalli che è evidente dalla presenza della sommatoria.

Tutti i punti vengono valutati due volte, che non è computazionalmente intelligente, per riduce i calcoli possiamo riscrivere la formula di quadratura come:
$$ = \frac{H}{2}(f(a)+f(b))+H\sum_{k=1}^{N-1}f(x_{k})$$
La prima parte viene dalla al fatto che in questo modo non potremmo scrivere la fine e l'inizia. Nella seconda parte togliamo il pezzo perché anche se facciamo lo stesso la media, stiamo contando lo stesso tutti i valori due volte, quindi il costante si annulla.

Per il singolo trapezio:
<!Diagramma singolo trapezio per integrazione>

L'equazione di quadratura è:
$$\widetilde{I}_{T}(f) = \frac{(b-a)}{2}[f(a)+f(b)]$$

### m = 2

La funzione di quadratura per il grado due prende la forma parabolica.

<!Diagramma quadratura m = 2>

La funzione di quadratura sarà:
$$\begin{align}
\widetilde{I}_{S}^{C} &= \frac{H}{6} \sum_{k=1}^{M}[f(x_{k+1})+4f(\overline{x}_{k} )+f(x_{k})] \\
& = \frac{H}{6} [ f(a)+f(b)] + \underbrace{ \frac{H}{3} }_{ \frac{H}{6}\cdot2 }\sum_{k=1}^{M-1}x_{k} + \frac{2}{3} H \sum_{k=1}^{M} f(\overline{x}_{k} )
\end{align}$$
Prendiamo l'indice S per Simpson che originò questa interpolazione.

Prendendo una singola parabola, il diagramma è:
<!Diagramma parabola singola>

$$\widetilde{I}_{S} = \frac{b-a}{6} \left( f(a)+4f\left( \frac{a+b}{2} \right)+f(b) \right)$$
Questo è Simpson semplice/ ad un'intervallo.
## Errore di Quadratura

Definiamo $\overline{x}_{} = \frac{a+b}{2}$

### Errore punto medio (semplice)
$$\begin{align}
I(f) - \widetilde{I}_{pm}(f) &= \int\limits_{a}^{b} f(x) \, d - (b-a)f\left( \frac{a+b}{2} \right)   \\
& = \int\limits_{a}^{b} f(x) \, d - \int\limits_{a}^{b} f(\overline{x}_{} ) \, dx   \\
& = \int\limits_{a}^{b} [f(x)-f(\overline{x}_{} )] \, dx 
\end{align}$$
Facciamo Taylor quindi un requisito per questo calcolo è che: $f \in C^{2}([a,b])$
$f(x) = f(\overline{x}_{} + f'(\overline{x}_{}))(x-\overline{x}_{}) + \frac{f''(\alpha(x))}{2}(x-\overline{x}_{})^{2}$

Tornando al calcolo dell'errore abbiamo:
$$= \int\limits_{a}^{b} f'(\overline{x}_{} )(x-\overline{x}_{} ) \, dx + \frac{1}{2}\int\limits_{a}^{b} f''(\alpha(x))(x-\overline{x}_{} )^{2} \, dx  $$
Risolviamo la prima parte delle funzione, la componente derivata è costante quindi la tiriamo fuori e risolviamo solo l'integrale del monomio:
$\int\limits_{a}^{b} (x-\overline{x}_{}) \, dx = \frac{(x-\overline{x}_{})^{2}}{2}|_{_{a}}^{^{b}} = \frac{1}{2}\left[ \left( b-\frac{a+b}{2} \right)^{2}-\left( a-\frac{a+b}{2} \right)^{2} \right] = \frac{1}{2}\left[ \frac{(b-a)^{2}}{4}-\frac{(a-b)^{2}}{4} \right]=0$
Questo ci lascia con il loro componente alla destra.

Per il teorema del valore medio dell'integrale possiamo riscriverlo come:
$$ = \frac{1}{2}f''(\beta)\int\limits_{a}^{b} (x-\overline{x}_{} )^{2} \, dx \text{ per }\beta\in[a,b]$$

Risolvendo l'integrale:
$$\int\limits_{a}^{b} (x-\overline{x}_{} )^{2} \, dx  = \frac{(x-\overline{x}_{} )^{3}}{3}|_{a}^{b} = \frac{1}{3}\left[ \left( b-\frac{a+b}{2} \right)^{3}-\left( a- \frac{a+b}{2} \right)^{3} \right] = \frac{1}{3}\left[ \left( \frac{b-a}{2} \right)^{3}-\left( \frac{a-b}{2} \right)^{3} \right] = \frac{1}{2}(b-a)^{3}$$
L'errore allora ha valore:
$$= \frac{1}{24}(b-a)^{3}f''(\beta)$$

### Errore punto medio (composito)

L'errore nel composito sarà la somma dell'errore di ogni sottointervallo:
$$\begin{align}
I(f) - \widetilde{I}_{pm}^{C}(f) &= \sum_{k=1}^{M}\left[ \underbrace{ \int_{I}^{} f(x) \, dx-\widetilde{I}_{pm}^{C}(f)|_{I_{i}} }_{ \frac{1}{24}H^{3} f''(\beta_{k})}  \right] \\
& = \frac{H^{3}}{24} \sum_{k=1}^{M} f''(\beta_{k})
\end{align}$$
Usiamo il teorema del valore medio al calcolo dell'integrale in forma discreta. Definendo $\alpha \in [a,b]$.
$$\begin{align}
&=\frac{H^{3}}{24}Mf''(\alpha) \\
&= \frac{(b-a)}{24}H^{2} f''(\alpha)
\end{align}$$
Vediamo che la forma composita e la forma semplice hanno forma uguale, cambia la costante che mettiamo nella seconda derivata.
### Errore Trapezio (semplice)

L'errore sarà:
$$I(f)-\widetilde{I}_{T}(f) = \int\limits_{a}^{b} \underbrace{ \underbrace{ E_{1}f }_{ \substack{\text{Errore}\\\text{di}\\\text{Interp.}} } }_{= \frac{f^{(n+1)}(\gamma(x))}{(n+1)!} \prod_{i=0}^{n}(x-x_{i})} \, dx $$
$$= \int\limits_{a}^{b}  \frac{f''(\gamma(x))}{2}(x-a)(x-b) \, dx $$
Per il teorema dei valori medi troviamo: $\sigma \in [a,b]$
$$ = \frac{1}{2}f''(\sigma)\int\limits_{a}^{b} (x-a)(x-b) \, dx $$
Integrando l'integrale per parti abbiamo:
$$\begin{align}
&= -\int\limits_{a}^{b} \frac{(x-a)^{2}}{2} \, dx+\cancelto{ 0 }{ \frac{(x-a)}{2}^{2}(x-b)|_{a}^{b} }  \\
&= -\frac{1}{2} \int\limits_{ a }^{b} (x-a)^{2} \, dx  \\
&=-\frac{1}{2} \frac{(x-a)^{3}}{3}|_{a}^{b} = -\frac{1}{6} (b-a)^{3}
\end{align}$$
L'errore allora ha equazione:
$$ = -\frac{1}{12}(b-a)^{3}f''(\sigma)$$
### Errore Trapezio (composito)

L'errore per il trapezio composito è:
$$-\frac{1}{12}(b-a)H^{2}f''(\rho)$$
con $\rho\in[a,b]$

### Confronto degli errori

Per il punto medio e trapezio gli errori sono:
$$\begin{gather}
I(f)-\widetilde{I}_{pm}(f) = \frac{1}{24} (b-a)^{3}f''(\beta) \\
I(f) -\widetilde{I}_{pm}^{C}(f) = \frac{b-a}{24}H^{2} f''(\alpha) \\
I(f) = \widetilde{I}_{T}(f) = -\frac{1}{12} (b-a)^{3} f''(\sigma) \\
I(f) - \widetilde{I}_{T}^{C}(f) = -\frac{1}{12}(b-a)H^{2}f''(\rho)
\end{gather}$$

Questo che vediamo è che con l'aumento nel grado delle funzioni di integrazione l'errore aumenta, questo è consistente con quello che abbiamo visto negli esempi. La ragione per cui l'errore è minore e perché i rettangoli tendono a sottovalutare in parti e sopravalutare in altre parti, che si annulla causa un errore minore. Questo ci fa vedere che non è solo qualcosa è limitato alle funzioni che abbiamo disegnato ma è un fenomeno generale che causa l'errore ad esser minore. A parità di costante per la derivata seconda.































