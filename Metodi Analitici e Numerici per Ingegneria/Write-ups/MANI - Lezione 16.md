---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 16 - Convergenza, Consistenza e Stabilità dei Metodi Numerici

## Congruenza di EE

Abbiamo già trovato nel mezzo la consistenza.

Abbiamo trovate che uno schema converge di ordine p se esiste C tale che:
$$|u_{n}-y_{n}|\leq C(h)= C^{*} h^{p}\to\forall n=0,\dots,N_{h}$$

Abbiamo visto che l'errore per Eulero esplicito può esser scritto come l'accumulo degli errori più l'errore di un solo passo:
$$e_{n}= u_{n}-y_{n} = (u_{n}-u_{n}^{*} )+(u_{n}^{*} -y_{n})$$
Definendo $u_{n}^{*}$ come lo schema avendo posto il valore esatto per il passo prima nello schema:
$$u_{n}^{*}  = y_{n-1}+hf(t_{n-1},y_{n-1})$$
Abbiamo visto che l'errore al singolo passo è:
$$(u_{n}^{*}-y_{n}) = -\frac{h^{2}}{2}y''(\alpha_{n}) \to 0\text{ per }h\to0$$
Da qui abbiamo definito l'errore di troncamento locale come:
$$\tau_{n}(h) = \frac{u_{n}^{*} -y_{n}}{h} = -\frac{h}{2}\underbrace{ y''(\alpha_{n}) }_{ f'(\alpha_{n},y(\alpha_{n})) }$$
E l'errore di troncamento globale come:
$$\tau(h) = \mathop{max}_{n=0,\dots,N_{h}}\left|\tau_{n}(h) \right| = \frac{h}{2}M$$
Dove:
$$M = \mathop{max}_{t\in I}\left|f'(t,y(t)) \right|$$

Possiamo fire allora che:
$$\lim_{ h \to 0 } \tau(h)=0$$
Con questo possiamo dire che Eulero esplicito è consistente di ordine 1.

Guardiamo allora l'altre parte del termine dell'errore:
$$\begin{align}
u_{n}^{*} -u_{n} &= \underbrace{ y_{n-1}+hf(t_{n-1},y_{n-1} }_{ e_{n-1} })-\underbrace{ u_{n-1}-hf(t_{n-1},u_{n-1}) }_{ \text{EE per }u_{n} } \\
&= e_{n-1}+h[f(t_{n-1},y_{n-1})-f(t_{n-1},u_{n-1})]
\end{align}$$
Possiamo riscrivere questo usando la Lipschitzianità, scrivendo:
$$\left|f(t_{n-1},y_{n-1})-f(t_{n-1},u_{n-1}) \right|\leq L \underbrace{ \left|y_{n-1}-u_{n-1}U \right| }_{ e_{n-1} }$$
Scriviamo allora:
$$\begin{align}
\left|u_{n}^{*} -u_{n} \right| &\leq \left|e_{n-1} \right|+h\left|f(t_{n-1},y_{n-1})-f(t_{n-1},u_{n-1}) \right|\leq \\
&\leq \left|e_{n-1} \right| + hL\left|e_{n-1} \right| = (1+hL)\left|e_{n-1} \right|
\end{align}$$
Vediamo che per $h\to 0$, questo termine non si azzera.

Proviamo allora mettere insieme i le due parti dell'errore e se insieme si annullano per $h\to0$:

$$e_{n} = (u_{n} - u_{n}^{*} )+(u_{n}^{*} -y_{n})$$
$$\left|e_{n} \right| \leq \left|u_{n}-u_{n}^{*}  \right| + \left|u_{n}^{*} -y_{n} \right| \leq (1+hL)\left|e_{n-1} \right|+h\left|\tau_{n}(h) \right|$$
Scriviamo delle iterazioni di questo:
$$\begin{gather}
\left|e_{n} \right| \leq (1+hL)\left|e_{n-1} \right| + h \underbrace{ \tau(h) }_{ \text{sempre (+)} } \\
\left|e_{n-1} \right| \leq (1+hL)\left|e_{n-2} \right| + h\tau(h) \\
\left|e_{n-2} \right| \leq (1+hL)\left|e_{n-3} \right|+h\tau(h)
\end{gather}$$

Mettendo la prima e seconda iterazione insieme abbiamo:
$$\begin{align}
\left|e_{n} \right| &\leq (1+hL)[(1+hL)\left|e_{n-2} \right|+h\tau(h)]+h\tau(h)= \\
&= (1+hL)^{2} \left|e_{n-2} \right|+(1+hL)h \cdot \tau(h) + h \cdot \tau(h) \leq \\
&\leq (1+hL)^{2}[(1+hL)\left|e_{n-3} \right|+h\cdot \tau(h)]+(1+hL)\cdot h\cdot\tau(h) + h \cdot \tau(h)= \\
&= (1+hL)^{3}\left|e_{n-3} \right| + (1+hL)^{2}h\tau (h) + (1+hL)h\tau(h) + h\tau(h)
\end{align}$$

Portando alla iterazione con $\left|e_{0} \right|$ arriviamo a:
$$\begin{align}
&\cancelto{ 0 }{ \leq (1+hL)^{n} \underbrace{ \left|e_{0} \right| }_{ =0 } } + (1+hL)^{n-1}h\tau(h)+(1+hL)^{n-2}h\tau(h)+ \\
&+ \dots + (1+hL)^{2}h\tau(h) + (1+hL)h\tau(h) + h\tau(h)= \\
&= h\tau(h)[(1+hL)^{n-1}+(1+hL)^{n-2}+\dots+(1+hL)^{2}+(1+hL)+1]
\end{align}$$

Ricordiamo che possiamo riscrivere:
$$\sum_{i=0}^{n-1}x^{i} = \frac{1-x^{n}}{1-x}$$
Quindi possiamo riscrivere questa ultima iterata come:
$$=\cancel{ h }\tau(h)\cdot \frac{(1+hL)^{N}-1}{\cancel{ h }L} = \frac{(1+hL)^{n}-1}{L}\tau(h)$$
Sappiamo che:
$$e^{x} = \sum_{n=0}^{\infty} \frac{x^{n}}{n!} \geq 1+x$$
Quindi possiamo scrivere come:
$$\leq \frac{e^{hLn}-1}{L}\tau(h)$$
Abbiamo che $h\cdot n= t_{n}-t_{0}$, quindi possiamo finalmente scrivere:
$$\left|e_{n} \right|\leq \frac{e^{ (t_{n}-t_{0})L }}{L}\tau(h) = \underbrace{ \frac{e^{ (t_{n}-t_{0})L }}{L}\cdot \frac{M}{2} }_{ C^{*} \to \text{const. di conv.} }\cdot h$$
$C^{*}$ è la constante ci convergenza che stavamo cercando dall'inizio della lezione.

Questa equazione significa che EE converge con ordine 1.

Facendo calcoli comparabili troviamo che EI è anche lui consistente e convergente di ordine 1.

La difficoltà della risoluzione di EI non è ancora compensata da un benefit di convergenza e consistenza.

#### Osservazioni

$C^{*}$ è comoda solo se $t_{n}$ e $t_{0}$ sono più vicine, più e grande più e insignificativo il limite.

Lo schema converge principalmente per $\tau(h)$ che tende a 0, se non si avesse la consistenze non si avrebbe convergenza, troviamo allora che la consistenza e condizione per la convergenza.

Per ogni one-step l'ordine di convergenza e l'ordine di consistenza sono gli stessi.

Proviamo a rimpiazzare l'esponenziale con una equazione lineare tale che non sia cosi problematica l'ampiezza della finestra temporale.

Avendo l'equazione:
$$u_{n}^{*} -u_{n}= e_{n-1}+h[f(t_{n-1},y_{n-1})-f(t_{n-1},u_{n-1})]$$
Invece di usare Lipschitz continuità usiamo la maggioriamo con un'espansione di Taylor con il tempo congelato, allora:
$$f(t_{n-1},y_{n-1})-f(t_{n-1},u_{n-1})= \frac{ \partial f }{ \partial y } (t_{n-1},\sigma_{n-1})\underbrace{ (y_{n-1},u_{n-1}) }_{ e_{n-1} }$$
Possiamo allora scrivere l'equazione iniziale come:
$$u_{n}^{*} -u_{n} = e_{n-1}\left[ 1+h \frac{ \partial f }{ \partial y } (t_{n-1},\sigma_{n-1}) \right]$$

A questo punto per poter eliminare l'esponenziale e avere una funzione lineare facciamo 3 richieste:
$$\begin{cases}
R_{1} \to \text{che sia derivabile rispetto a y} \\
R_{2} \to \frac{ \partial f }{ \partial y } (t,y(t))\leq 0 \to \text{sistema è dissipativo} \\
R_{3} \to |1+\underbrace{ h\frac{ \partial f }{ \partial y } (t,y(t)) }_{ Q } |<11
\end{cases}$$
Insieme queste richieste ci permettono di avere la linearità di $C^{*}$ rispetto a $t_{n}-t_{0}$

Lavorando sulla terza richiesta cerchiamo che:
$$\begin{gather}
\left|1+hQ \right|<1 \\
-1 <\underbrace{ 1+hQ<1 }_{ \text{sempre vero per R2} }
\end{gather}$$
Visto che la parte destra è sempre vera dobbiamo investigare la parte alla sinistra:
$$\begin{gather}
-2<hQ \\
h<-\frac{2}{Q} = \frac{2}{\left|Q \right|}
\end{gather}$$
La richiesta 3 ci chiede un vincolo sulla distanza tra gli istanti di $t$ che prendiamo.
Questo può esser un problema se $\left|Q \right|$ è molto grande perché con più passi accumuliamo più errore e quindi si può avere un esser molto più alto di quello voluto.

Se è vera la richiesta 3 avremmo che $\left|u_{n}-u_{n}^{*} \right|$ sarà maggiorabile con $e_{n-1}$.

Prendendo l'equazione dell'errore:
$$\left|e_{n} \right|\leq \left|u_{n}-u_{n}^{*}  \right|+h\tau(h)$$

Sotto le ipotesi 1 e 3 allora le diverse iterazioni saranno:
$$\left|e_{n-1} \right| \leq \left|e_{n-2} \right|+h\tau(h)$$
$$\left|e_{n-2} \right|\leq \left|e_{n-3} \right|+h\tau(h)$$
Et cetera.

Mettendo le iterazioni insieme avremmo:
$$\left|e_{n} \right| \leq \left|e_{n-1} \right|+h\tau(h) \leq \left|e_{n-2} \right|+2h\tau(h)\leq \left|e_{n-3} \right|+3h\tau(h)$$

Arrivando a $e_{0}$ avremmo:
$$\leq \cancelto{ 0 }{ \left|e_{0} \right| } + h\tau(h) = nh\tau(h) = (t_{n}-t_{0})\tau(h) = \underbrace{ \frac{(t_{n}-t_{0})M}{2}  }_{ C^{*}  }\cdot h$$

$C^{*}$ ora è lineare, ma abbiamo dovuto imporre 3 richieste che non sono gratuite in termini computazionali di errore.

## Consistenza di Crank-Nicolson

L'errore di troncamento globale per CN ha equazione:
$$\begin{align}
h\tau(h) &= u_{n}^{*} -y_{n} \\
&= y_{n-1}-y_{n}+\frac{h}{2}[f(t_{n},y_{n})+f(t_{n-1},y_{n-1})] \\
&=  -\int\limits_{t_{n-1}}^{t_{n}} \underbrace{ y'(s) }_{ f(s,y(s)) } \, ds + \frac{h}{2}[f(t_{n},y_{n})+f(t_{n-1},y_{n-1})]  \\
&= \frac{h^{3}}{12}f''(\alpha_{n},y(\alpha_{n})) \\
\tau_{n}(h) &= \frac{h^{3}}{12}f''(\alpha_{n},y(\alpha_{n})) \text{ con } \alpha_{n} \in [t_{n-1},t_{n}] \\
\tau(h) &= \frac{h^{2}}{12}N \to N =\mathop{max}_{t\in I} \left|f''(t,y(t)) \right|
\end{align}$$

È consistente per $h\to0$ di ordine 2, quindi sarà l'ordine di convergenza sarà 2.

## Stabilità

La stabilità come sempre è la sensibilità alle perturbazione sui dati.

Esistono 2 tipi di sensibilità per gli ODE:
- Zero-stabilità
- Assoluta stabilità

### Zero-stabilità
Guardiamo la zero-stabilità per EE

Lo schema di EE normale è:
$$\begin{cases}
u_{n+1} = u_{n} + hf(t_{n},u_{n}) \\
u_{0} = y_{0}
\end{cases}$$

EE perturbato ha schema di forma:
$$\begin{cases}
z_{n+1} = z_{n}+h[f(t_{n},z_{n})+\rho_{n+1}] \\
z_{0} = y_{0} = \rho_{0}
\end{cases}$$
Dove $\rho_{n+1},\rho_{0} \in \mathbb{R}$

EE è zero-stabilie se $\exists C>0$ tale che $\forall h \leq h_{0}$ e $\forall\varepsilon >0$ con $\left|\rho_{n}\leq \varepsilon \right|$ per $0 \leq n \leq N_{h}$ si ha $\left|u_{n}-z_{n} \right|\leq C\cdot \varepsilon$ per $0\leq n \leq N_{h}$.

#### Osservazioni

Tutti i metodi one-step (EE,EI,CN) sono zero-stabile se f è continua rispetto ad entrambi gli argomenti e Lipschitz continua rispetto al secondo argomento uniformemente al primo.

### Teorema di Lax-Richtmyer

Ogni metodo consistente è convergente se e solo se è zero-stabile.

### Assoluta Stabilità

Per l'assoluta stabilità invece di guardare una finestra temporale finita guardiamo una che si estende all'infinito.

A differenza dalla zero-stabilità è che ci sono metodi che riescono ad esser assolutamente stabili, e altri che no.

Inoltre tra i metodi che riescono ad esser assolutamente stabili, alcuni possono esser incondizionatamente assolutamente stabili invece altri sono solo condizionatamente assolutamente stabili.

Prendiamo un problema modello del tipo:
$$\begin{cases}
y'(t) = \lambda \underbrace{ y(t) }_{ f(t,y(t)) } \to t\in (0,\infty) , \lambda \in \mathbb{R}^{^{-}} \\
y(0) = y_{0} =1
\end{cases}$$

La soluzione prende la forma:
$$y(t) = e^{ \lambda t }$$

Guardiamo la assoluta stabilità per EE:
$$\begin{gather}
u_{n+1} = u_{n}+ hf(t_{n},u_{n})\ \\
u_{n+1} = u_{n}+h\lambda = (1+h\lambda)u_{n} = (1+h\lambda)^{2}u_{n-1} =\dots = (1+h\lambda)^{n+1}\cancelto{ 1 }{ u_{0} } = (1+h\lambda)^{n+1}
\end{gather}$$

Tale che questo schema converga alla soluzione per $t\to \infty$, serve che:
$$\begin{gather}
\left|1+h\lambda \right|<1 \\
-1 < 1+h\lambda<1
\end{gather}$$
La condizione alla destra è sempre vera perché prendiamo $\lambda$ negativo è impossibile che h sia negativo.

La seconda condizione ci porta ad imporre che:
$$-2<h\lambda \implies  h<-\frac{2}{\lambda} = \frac{2}{\left|\lambda \right|}$$

EE riproduce l'andamento assintotico del problema solo se prendiamo h più piccolo della condizione imposta. Questa richiesta diventa più difficile più grande è $\lambda$. EE allora è condizionalmente assolutamente stabile, data la condizione $h< \frac{2}{\left|\lambda \right|}$.

Facciamo degli esempio al variare di h, e vediamo che se h è più grande del minimo richiesto non converge alla soluzione esatta per $t\to \infty$, e vediamo anche che più si abbassa $h$ più e simile alla soluzione vera.

Guardando lo schema EI invece troviamo che:
$$\begin{cases}
u_{n+1} = u_{n} + hf(t_{n+1},u_{n+1}) \to n \geq 0 \\
u_{0}=y_{0}
\end{cases}$$

Per lo stesso problema troviamo che:
$$\begin{gather}
u_{n+1} = u_{n}+h\lambda u_{n+1} \\
\to (1-h\lambda)u_{n+1} = u_{n} \\
u_{n+1} = \left( \frac{1}{1-h\lambda} \right)u_{n} = \left( \frac{1}{1-h\lambda} \right)^{2}u_{n-1} = \dots = \left( \frac{1}{1-h\lambda} \right)^{n+1}\cancelto{ 1 }{ u_{0} } = \left( \frac{1}{1-h\lambda} \right)^{n+1}
\end{gather}$$

per $n\to \infty$ tende a 0 perché $\lambda <0$.

EI è incondizionatamente assolutamente stabile.
Questo è il vantaggio che abbiamo con EI, dato che tutto il resto è uguale se vogliamo uno schema incondizionatamente stabile dobbiamo accettare il carico computazionale maggiore.

Facendo per CN troviamo:
$$\begin{gather}
u_{n+1} = u_{n} + \frac{h}{2}[\lambda u_{n}+\lambda u_{n+1}] \\
\left( 1-\frac{h}{2}\lambda \right)u_{n+1} = \left( 1+\frac{h}{2}\lambda \right)u_{n} \\
\implies  u_{n+1} = \frac{1+\frac{h\lambda}{2}}{1-\frac{h\lambda}{2}}u_{n} = \dots = \left[ \frac{1+\frac{h}{2}\lambda}{1-\frac{h}{2}\lambda} \right]^{n+1}\cancelto{ 1 }{ u_{0} } = \left[ \frac{1+\frac{h}{2}\lambda}{1-\frac{h}{2}\lambda} \right]^{n+1}
\end{gather}$$
per $n\to \infty$ tende a 0.

Anche CN è incondizionatamente assolutamente stabile. Abbiamo allora scelta libera di h.








