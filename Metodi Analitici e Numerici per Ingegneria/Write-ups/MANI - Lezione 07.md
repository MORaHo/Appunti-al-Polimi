---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 07 - Metodo di Newton

## Ripasso

Il metodo del punto fisso ci chiedere se esiste $\alpha \in \mathbb{R}$ tale che $f(\alpha)=0$ e $\phi(\alpha)=\alpha$, preso un legame non univoco opportuno tra le due funzioni.

Per il teorema di Ostrowsky, basta che $x^{(k)}$ sia abbastanza vicino ad $\alpha$ e la derivata di $\phi <1$. Il problema con questo è che non conosciamo $\alpha$ non lo conosciamo, usciamo il metodo della bisezione per trovare un guess iniziale e poi usiamo il metodo del punto fisso per raffinare il valore.
La bisezione non è veloce ma non converge sempre.
Abbiamo trovare anche trovato il numero massimo di iterazioni per arrivare ad una certa tolleranza.

> [!note] 
> La bisezione si applica su f non $\phi$
## Continuazione dell'ultima lezione

Il problema principale della bisezione è che non risolve velocemente problemi semplici come la retta:

<!Diagramma della retta per la bisezione>

Non riesce in un passo a risolvere il sistema, senza che a e b siano simmetrici intorno ad $\alpha$ per cui serve sapere $\alpha$.

Un'altro problema della bisezione non è monotona, prendiamo l'esempio:
<!Diagramma esempio della non-monotonia>

Diverse iterazioni possono esser può lontane o vicine dallo 0, cioè:
$$|x^{(k+1)-\alpha}|>|x^{(k)}-\alpha|$$
L'errore può aumentare anche se infine diminuisce.

### Pro e Contro della bisezione

Un pro della bisezione è che c'è convergenza garantita. I contro invece non riesce a risolvere la radice di una retta e non è monotona.

Il fattore limitante della bisezione è che sfrutta solo il segno della funzione, non tiene a conto dei valori di f, se $f(a)=-0,01$ sarebbe utile sfruttare quel fatto per velocizzare il ricaco.
Questo è molto evidente quando guardiamo la funzione per trovare il $N_{max}$ della bisezione, per cui usiamo la funzione:
$$N_{max} = \log_{2}\left( \frac{b-a}{TOL} \right)-1$$
$N_{max}$ è indipendente da f, dipende sono dall'ampiezza dell'intervallo.

## Ostrowsky generalizzato per funzioni ad ordine più alto

Sia $\alpha$ punto fisso di $\phi:[a,b]\subset \mathbb{R}\to \mathbb{R}$ e $\phi \in C^{p}(\overline{I}_{\alpha})$, per $p\in \mathbb{N}$.

Se $\phi^{(i)}(\alpha)=0$ con $1\leq i\leq p-1$ e se $\phi^{(p)}(\alpha)\neq 0 \implies \exists\delta>0$ tale che $x^{(0)}$ se $|x^{(0)}-\alpha|<\delta \to \{x^{(k)}\}$ converge ad $\alpha$ e $\lim_{ k \to \infty } \frac{x^{(k+1)}-\alpha}{[x^{(k)}-\alpha]^{^{p}}} = \frac{\phi^{(p)}(\alpha)}{p!} \leftarrow$ Taylor.

#### Commenti

Questo è un teorema generalizzato per uno schema di ordine p.
La regolarità di ordine p è posta su $\phi$ non f qui f può avere derivata diverse da 0, basta che $\phi$ non le abbia.

## Schema di Newton

Lo schema di eccellenza per Ostrowsky generalizzato di ordine p=2 è:
$$\phi_{_{N}} = x- \frac{f(x)}{f'(x)}$$

$\phi_{_{N}}$ soddisfa il teorema per p=2, e il fatto che p=2 significa che ricavare $\alpha$ costerà molto meno rispetto agli schemi di ordine 1 che abbiamo visto.

## Metodo di Newton/ Metodo delle Tangenti

Newton ci chiede se esiste $\alpha \in [a,b] \subset \mathbb{R}:f(\alpha)=0$ con $f\in C'([a,b])$

Graficamente risolviamo con Newton con le tangenti, facendo:
<!Diagramma metodo delle tangenti di Newton>

Le iterazioni avranno funzione:
$$\begin{gather}
y=0 \\
y(x) = f(x^{(k)}) + f'(x^{(k)})(x-x^{(k)})
\end{gather}$$

Il ricavo geometrico di Newton è:
$$\begin{align}
0 &= f(x^{(k)})+f'(x^{(k)})(\underbrace{ x }_{ x^{(k+1)} }-x^{(k)}) \\
x^{(k+1)} &= \frac{-f(x^{(k)})+x^{(k)}\cdot f'(x^{(k)})}{f'(x^{(k)})} \\
&= x^{(k)}-\frac{f(x^{(k)})}{f'(x^{(k)})} \,\,\,k \geq 0\text{, dato }x^{(0)}\text{ e }f'(x^{(k)}) \neq 0
\end{align}$$

Lo schema sarà:
$$x^{(k+1)} = \phi_{_{N}}(x^{(k)}) \text{ con }\phi_{_{N}}(x)= x-\frac{f(x)}{f'(x)}$$

Questo è il ricavo geometrico, Newton però è veramente derivata da Taylor, essendo una sua approssimazione.

#### Ricavo con Taylor

Per Taylor ci serve che $f\in C^{2}([a,b])$, questo è una condizione più forte di quella richiesta da Ostrowsky, ma ci serve per Taylor quindi lo imponiamo.

Espandiamo la $x^{(k+1)}$ esima iterazione della funzione:
$$f(x^{(k+1)}) = f(x^{(k)})+f'(x^{(k)})(x^{(k+1)}-x^{(k)}) + O(\underbrace{ [x^{(k+1)}-x^{(k)}]^{2} }_{ =\frac{f''(\alpha_{k})}{2!}(x^{(k+1)}-x^{(k)})^{2} })$$
Questo ultimo termine è una delle possibili espansioni dell'O-grande, con $\alpha_{k}$ che è una valore tra $x^{(k)}$ e $x^{(k+1)}$. La velocità di convergenza va a 0.
Togliendo questo termine è la ragione per cui diciamo che Newton è una approssimazione di Taylor.

Per k opportunamente grande, abbiamo che $x^{(k+1)} \approx\alpha$, sapendo che $f(\alpha)=0$, la equazione diventerà:
$$0\approx f(x^{(k)})+f'(x^{(k)})(x^{(k+1)}-x^{(k)})$$
Da qui possiamo trovare $\phi_{_{N}}$ come prima.

### Commenti

Vediamo che Newton, con il problema della retta riesce a convergere in un solo passo, che è molto meglio del metodo del punto fisso.

<!Diagramma soluzione di Newton>

Presa la retta come $f(x) = a_{0}+a_{1}x$, avremmo che $\alpha = -\frac{a_{0}}{a_{1}}$

Nella prima iterazione troviamo:
$$x^{(1)} = x^{(0)}-\frac{f(x^{(0)})}{f'(x^{(0)})} = x^{(0)}-\frac{a_{0}+a_{1}x^{(0)}}{a_{1}} = -\frac{a_{0}}{a_{1}}=\alpha$$

## Convergenza di Newton

Mettendo delle ipotesi su Newton:
1. $x^{(0)}$ è sufficientemente vicina ad $\alpha$ (per la bisezione)
2. $\alpha$ è zero semplice di f $\to [f(a)=0\text{ ma }f'(\alpha)\neq 0]$, cioè la funzione non ha molteplicità (m) nel punto.
3. $f\in C^{2}([a,b])$

Se le ipotesi 1 e 2 sono vere, Newton converge, ma non possiamo sapere la velocità con cui converge (non possiamo trovare il termine di correzione di Taylor che ci dice la velocità di convergenza)

Se tutte e 3 sono vere, vale il limite:
$$\lim_{ k \to \infty } \frac{x^{(k+1)}-\alpha}{[x^{(k)}-\alpha]^{2}} = \frac{f''(\alpha)}{2f^{'}(\alpha)}$$

Se solo 1 e 3 sono vere, converge ma p=1, perciò si perde il punto di forza di Newton.

#### Newton Modificato

In questo ultimo caso dove le ipotesi 1 e 3 sono vere, possiamo modificare la funzione tale che la convergenza ritorni ad esser quadratica.
Modifichiamo la funzione ad esser:
$$x^{(k+1)} = x^{(k)}-\frac{mf(x^{(k)})}{f'(x^{(k)})} \,\,\,\,k\geq 0$$
Dove m è la molteplicità della radice.

Un esempio dove questo è utile è la funzione $f(x) = (x-1)\log(x)$, dove $\alpha=1$, e $m=2$.

Il grafico della convergenza tra i due è:
<!Diagramma convergenza dell'errore per Newton normale e Newton modificato>


## Criteri D'Arresto

Vogliamo trovare $K_{min} \in \mathbb{N}$ tale che $|e^{(K_{min})}| \leq c S = TOL$

Come negli schemi lineari, abbiamo la scelta tra due stimatori dell'errore.

Il primo è:
$$S_{1} = r^{(k)}$$
e il secondo sarà:
$$S_{2} = \delta^{(k)} = x^{(k+1)}-x^{(k)}$$

### Stimatore 1

$S_{1} = r^{(k)} = f(x^{(k)})$
Possiamo usar il residuo in questo modo perché stiamo cercano gli zero della funzione.
Questo caso può avere 3 diversi casi della stima.
Il primo caso è una sovrastima, come:
<!Diagramma sovrastima>

In questo caso l'errore vero è minore del residuo delle funzione al punto, questo significa che dovremmo fare più operazioni per portare il residuo alla tolleranza che vogliamo anche se l'errore vero è già.

Il secondo caso è la sottostima, come:
<!Diagramma sottostima>

In questo caso il residuo è minore dell'errore vero, quindi finiamo prima che dovremmo.
L'errore di sottostima è molto più grave dell'errore di sovrastima, perché almeno nella sottostima siamo sicuri che sarà sotto la tolleranza che vogliamo.

#### Affidabilità dello stimatore 1

Nel caso 1 $f'(\alpha) \gg 1$
Nel caso 2 $f'(\alpha) \ll 1$

Lo stimatore funziona al suo meglio quando $f'(\alpha) \approx 1$

### Stimatore 2

Lo stimatore 2 ha equazione:
$$S_{2} = x^{(k+1)}-x^{(k)}$$

Quello che vogliamo trovare è una forma simile a:
$$\alpha-x^{(k)} \propto S_{2}$$

Partendo da $\phi$:
$$\begin{align}
\alpha-x^{(k)}&= \alpha-x^{(k+1)}+\underbrace{ x^{(k+1)}-x^{(k)} }_{ \delta^{(k)} }= \\
\alpha-x^{(k+1)}& =\underbrace{ \phi(\alpha) }_{ \phi(\alpha)=\alpha } - \underbrace{ \phi(x^{(k)}) }_{ \phi(x^{(k)})=x^{(k+1)} } = \phi'(\beta_{k})(\alpha-x^{(k)})
\end{align}$$
In questo passo sfruttiamo la funzione $\phi$ è il teorema del punto medio per riscrivere la prima parte dalla destra della prima equazione.

$$\begin{align}
\alpha-x^{(k)} &= \phi'(\beta_{k})(\alpha-x^{(k)}) + \delta^{(k)}  \\
\alpha-x^{(k)} &  = \frac{1}{1-\phi'(\beta_{k})} \delta^{(k)}
\end{align}$$
$\beta_{k}$ è inutile perché non lo conosciamo, pero per k opportunamente grande $\beta_{k} \approx\alpha$, possiamo scrivere allora:
$$\underbrace{ \alpha-x^{(k)} }_{ \text{Errore} } \approx \underbrace{ \frac{1}{1-\phi'(\alpha)} }_{ c }\underbrace{ \delta^{(k)} }_{ S_{2} }$$
Guardando l'equazione ci piacerebbe che c sia 1 che $\implies$ $\phi(\alpha)=0$, che in se $\implies$ la convergenza, per il teorema generalizzato.

Questo stimatore è quello che accompagna di solito gli schemi dove $p \geq 2$.




























