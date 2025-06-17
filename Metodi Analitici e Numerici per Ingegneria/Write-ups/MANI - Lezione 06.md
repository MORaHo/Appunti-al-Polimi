---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 6

## Formalizzazione dei Criteri d'Arresto

I due criteri che abbiamo visto il criterio delle iterazioni massime e quello della tolleranza.

Con questi due vogliamo trovare $k_{min}$ tale che:
$$|e^{(k_{min})}| \leq cS \leq TOL$$

Il calcolo dell'errore non è implementabile perché ci servirebbe il valore giusto di x che non sappiamo, perciò riportiamo ad uno stimatore per fare questo calcolo. Il problema con lo stimare è che a volte può esser non affidabile, quindi aggiungiamo una costante di affidabilità, c.

Se questa costante ha valore intorno ad 1, allora diciamo che lo stimatore è affidabile, è se è molto più grande di 1, lo stimatore non lo è.

### C per lo stimare con il residuo relativo
Vogliamo trovare $K_{min}$ tale che $$\frac{|r^{(K_{min})}|}{|b|}  \leq TOL$$Lo stimare è una stima dell'errore relativo all'iterazione e il valore vero cioè:
$$\frac{\overbrace{|e^{(K_{min})}|}^{x-x^{(K_{min})}}}{|x|} \leq \underbrace{ \boxed{ \; } }_{ c } \frac{|r^{(K_{min})}|}{|b|}$$
Aggiungendo una perturbazione ad Ax=b ricaviamo:
$$(A+\delta A)(x+\delta x) = (b+\delta b)$$
Se $\delta A=0 \implies A\underbrace{ (x-\delta x) }_{ \tilde{x} } = (b+\delta b)$
Sappiamo che gli errori relativi tra x e b hanno la relazione:
$\frac{|\delta x|}{|x|} \leq K(A) \frac{|\delta b|}{|b|} = K(A)\frac{|\tilde{r}|}{|b|}$

Da qui possiamo trarre che:
$$\frac{|x-\overbrace{\tilde{x}}^{x^{(K_{min})}}|}{|x|} \leq K(A) \frac{|\tilde{r}|}{|b|}$$
Sostituendo $\tilde{x}$ con $x^{(K_{min})}$,se facciamo un'ultima sostituzione, abbiamo la stessa espressione di prima:
$$\frac{|e^{(K_{min})}|}{|x|} \leq K(A) \frac{|r^{(K_{min})}|}{|b|}$$

Troviamo allora che c per il stimare dell'errore relativo è il coefficiente di condizionamento della matrice A.

Se K(A)$\geq 1$, non possiamo fare lavoro in più (come dovremmo fare se c$\ll 1$, che con K(A) non è possibile) ma non è un problema perché il nostro problema è ben condizionato ed affidabile.

Se il sistema invece non è ben condizionato sappiamo che non è affidabile.

### C per lo stimare ad incremento
Per lo stimatore 2 vogliamo trovare $K_{min}$ tale che $|e^{(K_{min})}| \leq c|x^{(K_{min}+1)}-x^{(K_{min})}| \leq TOL$

In questa condizione per fermarmi dobbiamo fare $(K_{min})+1$ iterazioni.
Prendiamo il caso dove B è [sdp](sdp.md) con $x^{(k+1)} = Bx^{(k)}+g$

L'errore sarà:
$$e^{(K_{min})} = x-x^{(K_{min})} = x-x^{(K_{min}+1)} +x^{(K_{min}+1)}-x^{(K_{min})}$$
Per semplicità diciamo che $S_{2} = \delta x^{K_{min}}$, quindi:
$$|e^{(K_{min})}| = |x-x^{(K_{min}+1)}+\delta x^{(K_{min})}| \leq \underbrace{ |x-x^{(K_{min}+1)}| }_{ |e^{(K_{min}+1)}| } + \underbrace{ |\delta x^{(K_{min})}| }_{ S_{2} }$$

Per la relazione che abbiamo detto all'inizio degli schemi tierativi e il fatto che B è [sdp](sdp.md), possiamo scrivere che:
$$\leq \rho(B)|e^{(K_{min})}|+|\delta x^{(K_{min})}|$$

Isolando l'errore possiamo scrivere:
$$\begin{align}
(1-\rho(B))|e^{(K_{min})}| &\leq |\delta x^{(K_{min})}| \\
|e^{(K_{min})}| &\leq \underbrace{ \frac{1}{1-\rho(B)} }_{ c } |\delta x^{ (K_{min})}|
\end{align}$$
Il c sarà sempre positivo perché $\rho(B) \leq 1$
c è vicino a 1 quando $\rho(B)$ è piccolo, più è convergente (più è piccolo $\rho(B)$), più affidabile è l'algoritmo.
Questo vale quando B non è sdp, ma ponendolo come sdp ci permette di trovare l'uguaglianza.

## Equazioni non lineari
La maggior parte delle funzioni non sono lineari. Soli i polinomi di ordine sono lineari e il resto non lo sono.

Il problema che vogliamo risolvere è trovare gli 0 di queste funzioni, un problema equivalente a risolvere un problema lineare (cit. funzione quadratica).

Per risolvere questo problema dobbiamo sapere se c'è $\alpha \in [a,b]$ tale che $f(\alpha)=0$

### Metodi di Punto Fisso

I metodi del punto fisso sono metodi che sono utilizzano i punti fissi di funzioni per trovare le radici di altre funzioni.

Il punto fisso di coseno è raggiungibile iterando il coseno con il valore di se stesso, iniziando con un guess iniziale di un radiante, cioè:
$$\begin{gather}
x^{(0)}= 1 \\
x^{(1)} = \cos(x^{(0)}) \\
x^{(2)} = \cos(x^{(1)}) \\
\vdots \\
x^{(k+1)} = \cos(x^{(k)})
\end{gather}$$

#### Definizione di Punto Fisso

Prendiamo la funzione $\phi:[a,b] \subset \mathbb{R}\to \mathbb{R}$, con $\phi\in C^0([a,b])\implies \phi$ è continua.

$\alpha \in[a,b]$ è punto fisso di $\phi$, se $\phi(\alpha) = \alpha$

Possiamo scrivere questo in modo diverso, come $y(x)= \phi(x)$ e $y(x) = x$, cioè il punto fisso sarà il punto dove la funzione $\phi$ fa intersezione con la bisettrice dei quadranti 1 e 3.

Graficamente si ha:
<!Diagramma intersezione con la bisettrice>

L'algoritmo per trovare il punto fisso è:
$$x^{(k+1)}=\phi(x^{(k)})$$
### Legame tra punti fissi e trovare le radici

Per legare $\phi(\alpha)= \alpha$ e $f(\alpha)=0$, serve scegliere opportunamente il legame tra i due.

A patto di legare opportunamente $f$ e $\phi$, la soluzione di $\phi(x)=x$ sarà soluzione di $f(x)=0$. 

Prendiamo $f(x)= 0$ e lo scriviamo come $\phi(x)=x$ risolvere e troviamo soluzione approssimata di $f(x)$.

Il modo più facile di scrivere $f(x)$ come $\phi(x)$ è:
$$\begin{gather}
f(x)+x-x=0 \\
\underbrace{ f(x)+x }_{ \phi(x) } = x
\end{gather}$$
#### Dimostrando l'equivalenza

Per ipotesi $f(\alpha)=0$, vogliamo trovare $\phi(\alpha)=\alpha$:
$$\phi(\alpha) = \alpha+f(\alpha)$$
Per la ipotesi questo è:
$$\phi(\alpha) = \alpha+\cancelto{ 0 }{ f(\alpha) } = \alpha$$
Per far veder l'inverso abbiamo $\phi(\alpha)=\alpha$, vogliamo trovare che $f(\alpha)=0$:
$$\phi(\alpha)=0$$
$$\cancel{ \alpha }+f(\alpha)+\cancel{ \alpha }=0$$

#### Altri Legami possibili

Invece di usare x come la funzione di legame, possiamo usare 3x, o qualsiasi altro legame, possiamo scrivere come:
$$\begin{gather}
f(x) +3x-3x=0 \\
f(x)+3x=3x \\
\underbrace{ \frac{f(x)+3x}{3} }_{ \phi(x) } = x
\end{gather}$$

Cambiando il legame possiamo scrivere più funzioni $\phi$ che ci permettono di trovare punti fissi che forse non possiamo trovare con altre $\phi$. Se una $\phi$ non ha punto fisso non significa che un'altra $\phi$ non ne avrà, la molteplicità di $\phi$ ci aiuta. 

## Convergenza di $\phi$ al punto fisso

Prendendo la funzione di prima, possiamo seguire le diverse iterazioni di $\phi$

<!Diagramma funzione che converge>

In questo caso le iterazioni si stanno stringendo su $\alpha$.

Invece in un'altro caso di $\phi$:
<!Diagramma di phi non convergente>

In questo caso vediamo che se $\phi$ non è buono, la successione diverge.

È possibile che $\phi$ non converga. Questo è perché aiuta avere più $\phi$, alcune non funzionano è altre si.

La condizione principale per la convergenza è la derivata. La pendenza di ~1 aiuta la convergenza invece se è molto diversa non converge. Usiamo allora $\phi'(\alpha)$ come il criterio della convergenza.

## Teorema di Ostrowski (locale)

Si considera un intorno $I_{\alpha} = (\alpha-\epsilon,\alpha+\epsilon)$.  Suppongo $\exists!\alpha$ punto fisso di $\phi \in C^{1}(\overline{I}_{\alpha})$.

Se $|\phi'(\alpha)| <1$ allora $\exists\delta >0$ tale che se prendo $x^{(0)}:|x^{(0)}-\alpha|<\delta$, le iterazioni del punto fisso $\{x^{(k)}\}$ convergono ad $\alpha$ e vale:
$$\lim_{ k \to \infty } \underbrace{ \frac{x^{(k+1)}-\alpha}{x^{(k)}-\alpha} }_{ \text{Lineare} } = \phi'(\alpha)$$
#### Ordine di Convergenza

L'ordine della convergenza è l'ordine a cui la convergenza tende al valore esatto del punto fisso.

Una convergenza è detta di ordine p se:
$$\frac{|x^{(k+1)}-\alpha|}{|x^{(k)}-\alpha|^{p}} \leq c \;\;\;\forall k\geq k_{0}$$
Prendiamo c come la tolleranza indipendentemente da k.
Diciamo che la relazione converge in ordine p se esiste c maggiore del rapporto, per ogni k dopo un certo $k_{0}$ (questo ci traduce il concetto di limite)

Questa relazione che stiamo calcolando è l'errore tra due iterazioni successive, con l'ordine p aggiunto alla iterazione precedente.

Quando p=1, la funzione è lineare, quando p=2 è quadratica, quando p=3 è cubica, eccetera.

##### La costante: c

Per ordini di convergenza p>1, il valore di c non importa questo è perché:
$$|x^{(k+1)}| \leq c|x^{(k)}-\alpha|^{p}$$
Per quanto c posse esser grande, quando p>1, l'errore migliora di volta in volta quando anche la grandezza di c può esser dominata date abbastanza iterazioni.

Per p = 1 invece c è critico. Per garantire convergenza il valore di c<1, perché è l'unica cosa che diminuirebbe l'errore. Questa è una condizione simile a $\rho(B)<1$ che abbiamo visto nei sistemi lineari.

### Convergenza di Ostrowsky

Se $|\phi'(\alpha)|<1$ converge
Se $|\phi'(\alpha)|>1$ diverge
Se $|\phi'(\alpha)|=1$ non si può determinare.

#### Esempi

Esempio 1:
$$\begin{gather}
\phi(\alpha) = \cos(\alpha) \\
\phi'(\alpha) = -\sin(\alpha) \\
|\phi'(\alpha)| =  |\sin(\alpha)|  <1 \forall\alpha \neq 0 \implies \text{converge}
\end{gather}$$

Esempio 2:
$$\begin{gather}
\phi(x)  = x^{2}-1 \\
\phi'(x) = 2x \\
x=\phi(x) \to x^{2}-x-1=0 \\
\alpha_{1,2} = \frac{1\pm \sqrt{ 1+4 }}{2} = \frac{1\pm \sqrt{ 5 }}{2} \\
|\phi'(\alpha_{1,2})| = |1\pm \sqrt{ 5 }| >1 \implies \text{non converge}
\end{gather}$$

Esempio 3:

$$f(x) = \log(x)+2$$
Prendiamo in omaggio il $\phi$ di Newton:
$$\phi_{n}(x) = x-\frac{f(x)}{f'(x)}$$
Un'altro $\phi$ può esser quello normale:
$$\phi_{1}(x) = \log(x)+2+x$$
Ed un terzo $\phi$:
$$\phi(x) = xf(x) = x\log(x)+2x=0$$

Il terzo $\phi$ e quello di Newton funzionano, invece la seconda no.
Questo dimostra che avere più $\phi(x)$ aiuta a identificare i punti fissi che un'altra funzione forse non riesce ad identificare.

## Bisezione

Una parte problematica cdi Ostrowsky è che dobbiamo usare $\alpha$, che è quello che dobbiamo identificare, per determinare se il guess iniziale è abbastanza vicino per garantire la convergenza.

Per risolvere questo problema possiamo usare il teorema della bisezione per stimare $\alpha$. Usare il teorema della bisezione è utile perché converge sempre ed è facile da implementare.

L'uso della bisezione come aiuto ad metodo dei punti fissi identifica un tipo di schema chiamato predictor-corrector, in cui il 'predictor' è usato per avere una stima buona di un valore e il 'corrector' è usato per portare questa stima ad una buona tolleranza.

Nel teorema della bisezione si raccolgono intervalli successivi in cui sappiamo che il valore $\alpha$ rientra. 
Sappiamo che $\alpha$ rientra perché facciamo questa operazione su $f(x)$ di cui $\alpha$ è uno zero, e per il teorema degli zeri f(a)<0 e $f(b)>0$.

<!Diagramma bisezione>

Per l'algoritmo si inizia con $I^{(0)} : [a,b]$, con $a^{(0)}=a$ e $b^{(0)}=b$
Le media di questi due valori sarà:
$$x^{(0)} = \frac{a^{(0)}+b^{(0)}}{2}$$

Da qui facciamo $f(x^{(0)})\cdot f(a^{(0)})$:
- se <0 allora: $a^{(1)}=a^{(0)}$ e $b^{(1)}=x^{(0)}$
- se >0 allora: $a^{(1)}=x^{(0)}$ e $b^{(1)}=b^{(0)}$
- se = 0, allora $x^{(0)}$ è $\alpha$ e non dobbiamo continuare.

Da cui si continua ad iterare.

I requisiti per la bisezione è sono che f sia continua e $f\in C^{0}([a,b])$

#### Verifico della convergenza

$$|e^{(k)}| = |x^{(k)}-\alpha| < \frac{1}{2}|I^{(k)}| = \frac{b-a}{2^{k+1}}=(b-a)\left( \frac{1}{2} \right)^{k+1} \underbrace{ \to }_{ k\to \infty }0$$
Visto che per k che tende a infinito, l'errore va a 0, allora la bisezione converge.\

Possiamo usare questo calcolo come funzione di arresto dicendo che:
$$|e^{(k)}| \leq (b-a)\left( \frac{1}{2} \right)^{k+1} < TOL$$
Da qui possiamo trovare $K_{min}$ che sarà:
$$\begin{gather}
\frac{b-a}{TOL} < 2^{k+1} \\
K_{min} > \log_{2}\left( \frac{b-a}{TOL} \right)-1
\end{gather}$$




