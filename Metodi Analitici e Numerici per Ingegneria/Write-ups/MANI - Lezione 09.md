---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 9 - Errore di Interpolazione e Minimi Quadrati

## Errore di interpolazione

Sia $I = [x_{0},x_{n}]$, e sia $f\in C^{0}([x_{0},x_{n}])$.
Considerando $\{(x_{i},\underbrace{ y_{i} }_{ f(x_{i}) })\}_{i=0}^{n}$ con $x_{i}$ distanti.

Se $f \in C^{n+1}(\overline{I}_{})$ allora $\forall x \in I$ $\exists \alpha = \alpha(x) \in I$ tale che:
$$Enf(x) = f(x) - \Pi_{n}f(x) = \frac{f^{n+1}(\alpha(x))}{(n+1)!}\cdot \prod_{i=0}^{n}(x-x_{i})$$
L'errore è un valore preciso, non è una disuguaglianza. L'unico problema è che non sappiamo cosa sia $\alpha$ e la funzione deve esser n+1 volte regolare che è un molto restrittivo sulla funzioni a cui possiamo applicarlo.

L'unico cosa che sappiamo per fatto è che a tutti i nodi l'errore e nullo per come abbiamo costruito la funzione interpolante.

Per rendere questo errore più concreto, cerchiamo il massimo di questo errore:
$$\mathop{max}_{x\in I} |Enf(x)| \leq \mathop{max}_{x \in I} \frac{|f^{n+1}(x)|}{(n+1)!}\cdot |\prod^{n}_{i=0}(x-x_{i})|$$

Nel momento in cui lo massimizziamo, l'$\alpha$ si rimuove, questo perché o alfa(x) stesso e il punto di massimo, o un'altro x lo è, quindi ponendo x come quel punto dove lo è l'errore alla destra potrà solo esser maggiore o uguale all'errore ad $\alpha(x)$ che è il massimo errore della interpolazione. (Non ho spiegato bene)

### Nodi Equidistanti

Prendendo nodi equidistanti riusciamo a semplificare ulteriormente il calcolo dell'errore dell'interpolazione.

<!Diagramma nodi equidistanti>

Prendiamo la distanza tra due nodi come:
$$h = \frac{x_{n}-x_{i}}{n}$$

Per generalizzare avremmo che:
$$x_{k} = x_{k-1}+h \to\text{per } k =1,\dots,n$$
O possiamo scriverlo come:
$$x_{k} = x_{0}+kh \to \text{con }k = 0,\dots,n$$

Se i nodi sono equispaziati, si può dimostrare che:
$$\begin{align}
|\prod_{i=0}^{n}(x-x)i| &\leq \frac{h^{n+1}}{4}n! \\
\implies  \mathop{max}_{x \in I} |Enf(x) |&\leq  \mathop{max}_{x \in I} \frac{|f^{n+1}(x)|}{\cancel{ (n+1)! }}\cdot \frac{h^{n+1}}{4}\cancel{ n! } \\
&\leq \mathop{max}_{x \in I} \frac{|f^{n+1}|}{n+1}\cdot \frac{h^{n+1}}{4}
\end{align}$$
Per i nodi equispaziati, possiamo dire che:
$$\mathop{max}_{x \in I} |Enf(x) | \leq \frac{h^{n+1}}{4(n+1)}\cdot \mathop{max}_{x \in I} |f^{n+1}(x)|$$

Più nodi abbiamo, meglio si approssima la funzione.
Per $n\to \infty$ $\cancel{ \implies }$$Enf \to 0$, questo dipende dall'ordine delle due parti della funzione.

Il blocco A:
$$\frac{h^{n+1}}{4(n+1)} \to 0 \text{ per } n\to \infty$$

Invece il blocco B:
$$\mathop{max}_{x \in I} |f^{n+1}(x)|$$
Ha 3 possibilità:
- può andare a 0
- può andare a una costante
- può andare a $\infty$

I primi due casi non sono problematici, il terzo lo può esser.

Nel caso in cui il blocco B tenda a $\infty$, la determinazione della convergenza dell'errore dipende dall'ordine di convergenza del blocco A e B.

Se il blocco a destra ha ordine maggiore, ordine va male, come si manifesta questo è una oscillazione che peggiora più ci si avvicina agli estremi della funzione. 

Un esempio sarebbe:
<!Diagramma esempio di errore di interpolazione.>

Questo fenomeno di oscillazione a causa dell'errore è noto come il fenomeno di Runge, e ci sono diversi modi per correggerlo.

## Metodi per correre l'errore

Ci son diversi modi per diminuire l'effetto di Runge. Principalmente questi metodi operano sulla distribuzione di nodi nell'intervallo e considerando il l'andamento della funzione stessa per scegliere i nodi.

Guardiamo 3 metodi:
- Nodi di Chebyshev
- Nodi adattativi
- Interpolazione a tratti
### 1. Nodi di Chebyshev-Gauss-Lobatto

Con i nodi di Chevyshev aumentiamo la fittezza dei nodi agli estremi, più nodi abbiamo agli estremi più forziamo la adiacenza alla funzione vera.

Nell'intervallo $[-1,1]$, per $i=0,\dots,n$, prendiamo i punti:
$$x_{i}^{*} =-\cos\left( \frac{\pi i}{n} \right)$$

<!Diagramma distribuzione di punti di Chebyshev>

I punti risultano esser più vicini agli estremi e più lontani al centro.

I punti di Chebyshev usano questa distribuzione nell'intervallo intero che stiamo guardando, facendo:
$$x_{i}^{C} = \frac{b+a}{2}+\frac{b-a}{2}\cdot x_{i}^{*} $$

Con questi nodi si crea un teorema, che dice:
$$\text{Se }f\in C^{1}(\overline{I}_{} ) \implies \Pi_{n}f\to f\text{ per }n\to \infty$$
Questo significa che per un $\Pi_{n}f$ generato con i nodi di Chebyshev serve meno una funzione meno restrittiva per fare una interpolazione.

L'errore con Chevyshev è contenuto ma il suo problema è che funziona solo con funzioni specifiche.

### 2. Nodi Adattativi

I nodi adattativi sono nodi per usando la derivata della funzione per determinare la distribuzione dei nodi.

<!Diagramma nodi adattativi>

Usiamo una discretizzazione lasca dove ci sono le sezioni piatte e aumentiamo la fittezza dove il gradino è più alto.

Questo è il metodo usato dalla funzione plot in matlab.

### 3. Interpolazione a tratti (piecewise)

Questa è diversa dalla interpolazione di lagrange, che è globale, l'interpolazione a tratti è un insieme di interpolazioni locali.

<!Diagramma a tratti>

Anziché usare tutti i nodi insieme, ne guardiamo un po' alla volta, dividendo in sotto-intervalli e poi facendo interpolazioni, sotto=intervallo per sotto-intervallo.

Se usiamo 2 nodi per intervallo, troviamo rette in ogni sotto-intervallo, visto che le rette non possono oscillare, più nodi abbiamo meno l'errore sarà.

Prendendo $x_{i}$ distinti.
Il nostro intervallo sarà:
$$I_{i} [x_{i},x_{i+1}]\text{ con }i=0,\dots,n-1$$
La larghezza di ogni intervallo sarà $h_{i} = x_{i+1}-x_{i}$, e definiamo $H =\mathop{max}_{i}h_{i}$.

Prendiamo $\Pi_{1}^{H}f \in C^{0}(\overline{I}_{})$, dove 1 indica che è lineare, H significa che tiene a conto di H e che stiamo facendo una interpolazione a tratti.

Imponendo una ristrizione ad $I_{i}$, prendiamo $\Pi_{1}^{H}f|_{I_{i}} \in \mathbb{P}_{1}(\overline{I}_{_{i}})$ tale che $\Pi_{1}^{H}f(x_{i}) = y_{i}$ per $i=0,\dots,n$

La caratterizzazione analitica di funzione di interpolazione intervallo per intervallo è:
$$\Pi_{1}^{H}f|_{I_{i}}(x) = f(x_{i})+ \frac{f(x_{i+1})-f(x_{i})}{x_{i+1}-x_{i}}(x-x_{i})$$

Fogliamo accertarci che sia una soluzione alle onde, l'errore massimo di interpolazione è:
$$\mathop{max}_{{x \in I_{i}}}|[f(x)-\Pi_{1}^{H}f(x)]|_{I_{i}}|$$
Globalmente i nodi non sono equispaziati ma intervallo per intervallo lo sono, quindi visto che stiamo guardando a questa scala va bene

L'errore sarà:
$$\mathop{max}_{{x \in I_{i}}}|[f(x)-\Pi_{1}^{H}f(x)]|_{I_{i}}| \leq \frac{h_{i}^{2}}{4^{*} 2} \cdot\mathop{max}_{x\in I_{i}}|f''(x)|$$

Guardando l'intervallo intero, massimizziamo tutte le parti:
$$\mathop{max}_{x \in I}|f(x)-\Pi_{1}^{H}f(x)| \leq \frac{H^{2}}{8} \mathop{max}_{x\in I}|f''(x)|$$
Per $n\to \infty$, H $\to$ 0, invece la seconda parte è una costante perché non è più dipendente da n come prima. Rimane la seconda derivata perché stiamo trovando il valore per ogni sotto-intervallo della seconda derivata, per quanto ora stiamo guardando l'intervallo intero, non cambia il fatto che il nostro polinomio interpolante è una serie di polinomi interpolanti di lineari che usano la seconda derivata per stimare l'errore quindi usiamo anche lungo tutto l'intervallo la seconda derivata.

Il fatto che H $\to$ 0, mentre l'altra parte rimane constante, significa che l'errore anche lui tende a 0, risolvendo il problema delle oscillazioni.

## Minimi Quadrati

Nel caso di molto dati molto vicini, la interpolazione non è la scelta migliore. Cerchiamo qualcosa che definisce l'andamento medio dei dati.

<!Diagramma minimi quadrati parabolici>

Questa relazione che troviamo ci permette di estrapolare un andamento generale invece di avere valori assoluti per tutti i punti, permettendoci anche ci determinare cosa succederà se volessimo estendere i dati.

Dato un insieme di coppie di dati $\{(x_{i},y_{i})\}_{i=0}^{n}$ con $x_{i}$ distinti.
Dobbiamo cercare $\widetilde{f} \in \mathbb{P}_{m}$ di solito con $m\ll n$ tale che:
$$\sum_{i=0}^{n}[y_{i}-\widetilde{f}(x_{i})]^{2}\leq \sum_{i=0}^{n}\underbrace{ [y_{i}-p_{m}(x_{i})] }_{ \forall p_{m} \in \mathbb{P}_{m} }^{2}$$
Cioè, gli scarti quadrati associati associati a $\widetilde{f}$ sono minori o uguali agli scarti quadratici associati a $p_{m}$ generico. $\widetilde{f}$ è fra tutti i $p_{m}$ quello che minimizza lo somma degli scarti quadratici.

### Osservazioni

- m è qualsiasi
- se $\widetilde{f}$ esiste (non è garantito) è detto approssimazione ai minimi quadrati
- per m = 1, $\widetilde{f}$ è una retta, ed è detta la retta di regressione
- se prendiamo m = n, ogni punto è nodo, quindi la somma quadratica è 0 per ogni $x_{i}$, allora $\widetilde{f}(x_{i})=y_{i}$, allora stiamo facendo un'interpolazione. L'interpolazione è un caso speciale dei minimi quadrati quando m = n.
- Di solito $\widetilde{f}(x_{i}) \neq y_{i}$ per $i=0,\dots,n$

### Costruzione del Polinomio e il Problema di Minimizzazione

$$\widetilde{f}(x) = a_{0}+a_{1}x+\dots+a_{m}x^{m}$$
Quello che vogliamo trovare sono i valori, $a_{0},a_{1},\dots,a_{m}$
$$p_{m}(x) = b_{0}+b_{1}x+\dots+b_{m}x^{m}$$

$$\sum_{i=0}^{n}[y_{i}-a_{0}-a_{1}x_{i}-\dots-a_{m}x_{i}]^{2}\leq \underbrace{ \sum_{i=0}^{n}[y_{i}-b_{0}-b_{1}x_{i}^{2}-\dots-b_{m}x_{i}^{m}]^{2} }_{ \phi(b_{0},b_{1},\dots,b_{m}) }$$
Il minimo è raggiunto quando $b_{0}=a_{0}$, $b_{1}=a_{1}$,$\dots$, $b_{m}=a_{m}$

$$\implies \phi(a_{o},a_{1},\dots,a_{m}) = \mathop{min}_{b_{0},b_{1},\dots,b_{m}}\phi(b_{0},b_{1},\dots,b_{m})$$
Fissando m = 1:
$$\phi(a_{0},a_{1}) = \mathop{min}_{b_{0},b_{1}}\,\phi(b_{0},b_{1})$$
Questa è la funzione per la retta di minimizzazione.

$$\begin{gather}
\phi(b_{0},b_{1}) = \sum_{i=0}^{n}[y_{i}-b_{0}-b_{1}x_{i}]^{2} \\
\phi(b_{0},b_{1}) = \sum_{i=0}^{n}[y_{i}^{2}+b_{0}^{2}+b_{1}^{2}x_{i}^{2}-2y_{i}b_{0}-2y_{i}b_{1}x_{i}-2b_{0}b_{1}x_{i}]
\end{gather}$$
Trovare $a_{0}$ e $a_{1}$ allora significa trovare il minimo di paraboloide.

<!Diagramma paraboloide>

$$\begin{gather}
\frac{\partial \phi}{\partial b_{0}}(a_{0},a_{1})=0 \\
\frac{\partial \phi}{\partial b_{1}}(a_{0},a_{1})=0 \\
 \\
\frac{\partial \phi}{\partial b_{0}}(b_{0},b_{1}) = \sum_{i=0}^{n}[2b_{0}-2y_{i}+2b_{1}x_{i}] \\
\frac{\partial \phi}{\partial b_{1}}(b_{0},b_{1}) = \sum_{i=0}^{n}[2b_{1}x_{i}^{2}-2y_{i}x_{i}+2b_{o}x_{i}]
\end{gather}$$

Quando $(b_{0},b_{1})=(a_{0},a_{1})$, le ultime due funzioni si annullano. Queste sono due equazioni lineari con incognite $a_{0}$ e $a_{1}$, che possiamo trovare risolvendo il sistema.



