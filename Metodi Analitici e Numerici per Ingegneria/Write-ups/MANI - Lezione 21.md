---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 21 - Lemma di Lax-Milgram

## Ripasso e Formalizzazione
Nella ultima lezione siamo andati da una formulazione forte di un problema di Poisson ad una debole, cambiando lo spazio operativo in modo opportuno per permetterci le operazioni che vogliamo.

Prendiamo il problema nella sua formulazione forte:
$$\begin{cases}
-u'' = f  & \text{in } \Omega = (0,1) \\
u(0)=u(1)=0
\end{cases}$$

Con la formulazione debole dobbiamo trovare $u,v \in\mathbb{V}$ tale che: $$\int\limits_{0}^{1} u'(x)v'(x) \, dx = \int\limits_{0}^{1} f(x)v(x) \, dx $$
Da questa formulazione possiamo usare la disuguaglianza di Cauchy-Schwarz (CS), che in modo generale dice:
$$\underbrace{ \left|(f,g) \right| }_{ \substack{\text{Modulo del}\\\text{Prodotto}\\\text{Scalare}} } \leq \lvert\lvert f \rvert\rvert_{_{L^{2}(\Omega)}}\cdot \lvert\lvert g \rvert\rvert_{_{L^{2}(\Omega)}}$$
Questo significa che per aver soluzione, indipendentemente da chi è $u$, serve che $u',v',f,v\in L^{2}(\Omega)$.

Possiamo definire allora lo spazio:
$$H^{1}(\Omega) = \{ v:\Omega\to \mathbb{R}:v\in L^{2}(\Omega),v'\in L^{2}(\Omega) \}$$

Questo spazio rispetta le condizioni di regolarità imposte sulla funzione, ma non rispetta ancora la condizioni di bordo, possiamo definire allora:
$$H_{0}^{1}(\Omega) = \{ v\in H^{1}(v)\text{ tale che } v(0)=v(1)=0\}$$
$$\implies H_{0}^{1} = \mathbb{V}$$
Le definizioni di $H_{0}^{1}$ e $H^{1}$ sono in base a $v$ perché $v$ è la funzione test, $u$ è compreso fra tutte le possibili $v$ che possiamo prendere.

La formulazione debole ha senso fisico del PLV.

$\mathbb{V}$ è spazio di Hilbert e Banach.

Se guardiamo l'esempio della ultima lezione che ci stava dando i più problema:
<!Diagramma valore assoluto>

La funzione è in $H_{0}^{1}(0,1)$ perché secondo Lebesgue, la funzione salto, la derivata di questa funzione è integrabile.
Questo risultato ci fa vedere allora che:
$$H_{0}^{1}(0,1)\not\subset C^{1}([0,1])$$

## Effetto delle condizioni di bordo sulla formulazione debole

Prendiamo l'esempio:
$$\begin{cases}
-u'' +\sigma u(x) = f(x) & x\in(0,1) \\
u'(0) = h_{0};u'(1) = h_{1}
\end{cases}$$
La condizione di bordo in questo caso è di Neumann non omogeneo.

Prendiamo $h_{0},h_{1}\in \mathbb{R}$ e $\sigma>0$.

Scriviamo la formulazione debole, identificando lo spazio $\mathbb{V}$:
$$-\int\limits_{0}^{1} u''(x)v(x) \, d+\int\limits_{0}^{1} \sigma u(x)v(x) \, dx  = \int\limits_{0}^{1} f(x)v(x) \, dx  $$
Integriamo il primo pezzo per parti:
$$\int\limits_{0}^{1} u'(x)v'(x) \, dx -u'(x)v(x)\bigg|_{0}^{1} + \int\limits_{0}^{1} u(x)v(x) \, dx  = \int\limits_{0}^{1} f(x)v(x) \, dx $$
$$-u'(x)v(x)\bigg|_{0}^{1} = -\underbrace{ u'(1) }_{ h_{1} }v(1)+\underbrace{ u'(0) }_{ h_{0} }v(0)$$

Possiamo classificare le condizioni al bordo in 2 modi:
1. Essenziali, queste sono solo le condizioni di Dirichlet, sono condizioni che influenzano lo spazio $\mathbb{V}$.
2. Naturale, queste sono le condizioni di Neumann, Robin, Misto e le troviamo nella formulazione debole.

Dirichlet va nello spazio non appargono nella formulazione, invece il resto rimangono nella formulazione.

Visto che le condizioni di bordo sono note, portiamo tutto alla destra:
$$\int\limits_{0}^{1} u'(x)v'(x) \, d x + \int\limits_{0}^{1} \sigma u(x)v(x) \, dx  = \int\limits_{0}^{1} f(x)v(x) \, dx + h_{1}v(1)-h_{0} v(0) $$

Dobbiamo trovare $u\in \mathbb{V}$ tale che sia vero $\forall v\in \mathbb{V}$.

Questa formula chiede che $u,u',v,v'$ e $f$ sia $L^{2}$.
$$\implies \mathbb{V} = H^{1}(\Omega)$$
Non ci sono condizioni di bordo di Dirichlet a cui dobbiamo aderire quindi $\mathbb{V}$ non è $H^{1}_{0}$.

Dovremmo fare in stare anche i termini di bordo, serve che $v$ sia continua, in $H^{1}$ una funzione è continua (lo vedremo dopo).

Cambiando l'equazione cambia l'equazione della formulazione debole, cambiando le condizioni di bordo cambia $\mathbb{V}$, Dirichlet appare in $\mathbb{V}$ mentre le altre no.

### Osservazioni su CB miste:

Preso il problema a condizioni di bordo miste:
$$\begin{cases}
-u''+\sigma u(x) = f(x) \\
u(0) = 0\text{ e }u'(1) = h_{1}
\end{cases}$$

Dee rispetto le condizioni di essenziali:
$$\int\limits_{0}^{1} u'(x)v'(x) \, dx -u'(x)v(x)\bigg|_{0}^{1} + \int\limits_{0}^{1} \sigma u(x)v(x) \, dx = \int\limits_{0}^{1} f(x)v(x) \, dx  $$

$-u'(x)v(x)\bigg|_{0}^{1} = -\underbrace{ u'(1) }_{ =h_{1} }v(1) + \underbrace{ u'(0)v(0) }_{ =0 }$

$$\implies \mathbb{V} = H^{1}_{\Gamma_{_{D}}}(\Omega)$$

Dove $H^{1}_{\Gamma_{_{D}}}(\Omega) = \{ v\in H^{1}(\Omega): v\big|_{\Gamma_{_{D}}}=0 \}$

Cioè $H^{1}$ che rispetta le condizione di bordo di Dirichlet.
In questo caso rispetto che $v(0)=0$, quindi $H^{1}_{\Gamma_{_{D}}}$ sarà:
$$H^{1}_{\Gamma_{_{D}}}(\Omega) = \{ v\in H^{1}(\Omega): v(0)=0 \}$$
Le miste cambiano sia la formulazione che lo spazio.

## Lemma di Lax-Milgram

#### Nota sulla Notazione usata
Nel lemma di Lax-Milgram scriveremo le formulazioni deboli come:
$$?u\in \mathbb{V} \text{ tale che }a(u,v)=F(v)\;\;\forall v\in\mathbb{V}$$

Negli ultimi esempi queste prendevano diverse forme, per il primo esempio con le condizioni di Dirichlet erano:
$$a(u,v) = \int\limits_{0}^{1} u'v' \, dx \Bigg/ \;F(v) = \int\limits_{0}^{1} fv \, dx $$
Nel secondo esempio con le condizioni di Neumann erano:
$$a(u,v) = \int\limits_{0}^{1} u'v' \, dx +\int\limits_{0}^{1} \sigma uv \, dx \Bigg/\;F(v) = \int\limits_{0}^{1} fvdx \, dx+h_{1}v(1)+h_{0}v(0) $$

### Il Lemma

Sia $\mathbb{V}$ uno spazio di Hilbert, sia $a(\cdot,\cdot):\mathbb{V}\times \mathbb{V}\to \mathbb{R}$ forma bilineare, continua, e coerciva, sia $F(\cdot):\mathbb{V}\to \mathbb{R}$ un funzionale lineare e limitato. Allora $\exists!$ la soluzione di:
$$?u\in\mathbb{V} \text{ tale che }a(u,v)=F(v)\;\;\forall v\in\mathbb{V}$$

#### Significato dei termini

##### Bilineare
$$a(\beta v+\gamma w,z) = \beta a(v,z)+\gamma a(w,z) \text{ e }a(v,\beta w+\gamma z)=\beta a(v,w)+\gamma a(v,z)\; \forall u,v,z\in \mathbb{V} \text{ con }\beta,\gamma\in \mathbb{R}$$
Cioè è lineare lungo tutte e due le funzioni.

##### Continua
$$\exists M>0\text{ tale che }\left|a(u,v) \right| \leq M \lvert\lvert u \rvert\rvert _{_{\mathbb{V}}}\cdot \lvert\lvert v \rvert\rvert_{_{\mathbb{V}}} \;\forall u,v\in\mathbb{V} $$

Sapendo che: $\lvert\lvert v \rvert\rvert_{L^{2}(\Omega)} = \left[ \int\limits_{\Omega}^{} \left|v(x) \right|^{2} \, dx \right]^{1/2}$ la norma di $\mathbb{V}$ è:
$$\lvert\lvert v \rvert\rvert  _{H^{1}} = \left[\lvert\lvert v \rvert\rvert_{L^{2}(\Omega)}^{2}+\lvert\lvert v' \rvert\rvert_{L^{2}(\Omega)}  \right]^{1/2}$$
Fa senso visto che $H^{1}$ coinvolge sia $v$ che $v'$.
È effettivamente un upper-bound sulla funzione.
##### Coerciva
$\exists\alpha>0$ tale che $a(u,u)\geq \alpha \cdot \lvert\lvert u \rvert\rvert_{_{\mathbb{V}}}^{2}\;\;\forall u\in\mathbb{V}$.
È effettivamente un lower-bound sulla funzione.

##### Lineare
$$F(\beta v+\gamma z) = \beta F(v)+\gamma F(z) \;\;\forall\beta,\gamma\in\mathbb{R}\text{ e }\forall v,z\in \mathbb{V}$$

##### Limitato
$$\exists C>0\text{ tale che }\left|F(v) \right|\leq C\lvert\lvert v \rvert\rvert _{_{\mathbb{V}}}\;\;\forall v\in\mathbb{V}$$

#### Spiegazione

3 di questi termini sono da dimostrare e 3 che sono scontati.

Tra gli scontati il fatto che $\mathbb{V}$ è uno spazio di Hilbert è dato per scontato ed è come è costruito lo spazio che lo rende di Hilbert.

Le altre due condizioni scontate sono la bilinearità e la linearità. Questo è perchè $a(\cdot,\cdot)$ e $F(\cdot)$ prendono forma di integrali in questo caso, allora possiamo dire che per la linearità dell'integrale $a(\cdot,\cdot)$ e $F(\cdot)$ saranno lineari.

Il resto devono esser trovati.

## Esempio Applicativo di Lax-Milgram

Prendiamo il problema nella forma:
$$\begin{cases}
-\mu_{0}u''(x)+\sigma_{0}u(x)=f&x \in(0,1) \\
\mu_{0}u'(0) = q_{1} \\
\mu_{0}u'(L)=q_{2}
\end{cases}$$
Prendiamo $\mu_{0},\sigma_{0}\in\mathbb{R}^{^{+}}$ e $q_{1},q_{2}\in\mathbb{R}$.

Scriviamo queste equazione in forma debole:
$$-\int\limits_{0}^{L} \mu_{0}u''(x)v(x) \, dx +\int\limits_{0}^{L} \sigma_{0}u(x)v(x) \, dx =\int\limits_{0}^{L} f(x)v(x) \, dx $$
Integriamo per parti:
$$\int\limits_{0}^{L} \mu_{0}u'(x)v'(x) \, dx -\mu_{0}u'(x)v(x)\bigg|_{0}^{L}+\int\limits_{0}^{L} \sigma_{0}u(x)v(x) \, dx =\int\limits_{0}^{L} f(x)v(x) \, dx $$
$$-\mu_{0}u'(x)v(x)\bigg|_{0}^{L} = -\underbrace{ \mu_{0}u'(L) }_{ q_{1} }v(L) + \underbrace{ \mu_{0}u'(0) }_{ q_{1} }v(0)$$

Scriviamo questa equazione in forma per il lemma di Lax-Milgram, tale che:
$$?u\in\mathbb{V}\text{ tale che }a(u,v)=F(v)\;\;\forall v\in\mathbb{V}$$

Lo scriviamo come:
$$\begin{cases}
a(u,v) = \int\limits_{0}^{L} \mu_{0}u'(x)v'(x) \, dx+\int\limits_{0}^{L} \sigma_{0}u(x)v(x) \, dx   \\
F(v) = \int\limits_{0}^{L} f(x)v(x) \, dx + q_{2}v(x)-q_{1}v(x)  \\
\mathbb{V}=H^{1}(\Omega)\text{ perché tutte e due CD di Dirichlet}
\end{cases}$$

#### Richiamo/Risultato 1

$$H^{k}(\Omega) \subset C^{0}(\Omega)$$
Dove $H^{k}$ è lo spazio che richiede la regolarità $L^{2}$ delle k derivate.

Questo è vero per $k > \frac{d}{2}$, dove $d$ è la dimensione del problema.

Se $d=1$ vale per $k > \frac{1}{2}$, $H^{1}(\Omega)\subset C^{0}(\overline{\Omega}_{})\implies \exists v(L)$ e $\exists v(0)$

Per $d=2$ vale per  $k>1$ e per $d=3$ vale per $k > \frac{3}{2}$.

Abbiamo $d=1$ e $k=1$, quindi possiamo procedere con Lax-Milgram, visto che la funzione è continua.

Procedimento:
1. $\mathbb{V}$ è di Hilbert
2. $a(\cdot,\cdot)$ è bilineare per la linearità dell'integrale.
3. $a(0,0)$ è continua.

##### Dimostrazione continuità

$$\begin{align}
\left|a(u,v) \right| & = \left|\int\limits_{0}^{L} \mu_{0}u'(x)v'(x) \, dx + \int\limits_{0}^{L} \sigma_{0}u(x)v(x) \, dx   \right| \\
\substack{\text{Disuguaglianza}\\\text{Triangolare}} &\leq \mu_{0}\left|\int\limits_{0}^{L} u'(x)v'(x) \, dx  \right|+\sigma_{0}\left|\int\limits_{0}^{L} u(x)v(x) \, dx  \right|  \\
&\mathop{\leq}^{\text{CS}} \mu_{0} \lvert\lvert u' \rvert\rvert_{L^{2}(\Omega)}\cdot \lvert\lvert v' \rvert\rvert  _{L^{2}(\Omega)} + \sigma_{0}\lvert\lvert u \rvert\rvert  _{L^{2}(\Omega)}\cdot \lvert\lvert v \rvert\rvert  _{L^{2}(\Omega)}
\end{align}$$
Quello che stiamo cercando è una forma come:
$$?M>0 \;\;\left|a(u,v) \right| \leq M\lvert\lvert u \rvert\rvert  _{_{\mathbb{V}}}\lvert\lvert v \rvert\rvert  _{_{\mathbb{V}}}$$

Non abbiamo ancora questa norma dello spazio $\mathbb{V}$, abbiamo solo quella dello spazio $L^{2}$.

#### Richiamo/Risultato 2

Prendiamo la uguaglianza che abbiamo trovato prima in forma con la radice quadrata:
$$\lvert\lvert v \rvert\rvert ^{2}_{H^{1}(\Omega)} = \lvert\lvert v \rvert\rvert  ^{2}_{L^{2}(\Omega)}+\lvert\lvert v' \rvert\rvert  _{L^{2}(\Omega)}^{2}$$
$$\implies \lvert\lvert v \rvert\rvert  _{L^{2}(\Omega)} \leq \lvert\lvert v \rvert\rvert  _{H^{1}(\Omega)}\text{ e }\lvert\lvert v' \rvert\rvert  _{L^{2}(\Omega)}\leq \lvert\lvert v \rvert\rvert  _{H^{1}(\Omega)}$$

Possiamo riscrivere l'equazione dopo CS come:
$$\begin{align}
&\leq \mu_{0}\lvert\lvert u \rvert\rvert  _{H^{1}(\Omega)}\lvert\lvert v \rvert\rvert  _{H^{1}(\Omega)} + \sigma_{0}\lvert\lvert u \rvert\rvert  _{H^{1}(\Omega)}\lvert\lvert v \rvert\rvert  _{H^{1}(\Omega)} \\
&=\underbrace{ (\mu_{0}+\sigma_{0}) }_{ M }\lvert\lvert u \rvert\rvert  _{_{\mathbb{V}}}\lvert\lvert v \rvert\rvert  _{_{\mathbb{V}}}
\end{align}$$
Abbiamo dimostrato la continuità.

4. Coercività $\to$ il passo più difficile

$$?\alpha>0\;\;a(u,u)\geq \alpha \lvert\lvert u \rvert\rvert  _{_{\mathbb{V}}}^{2}$$

$$\begin{align}
a(u,u) & = \mu_{0}\int\limits_{0}^{L} [u'(x)]^{2} \, dx +\sigma_{0}\int\limits_{0}^{L} [u(x)]^{2} \, dx  \\
& \geq min(\mu_{0},\sigma_{0})\int\limits_{0}^{L} [u'(x)] \, dx +min(\mu_{0},\sigma_{0})\int\limits_{0}^{L} [u(x)]^{2} \, dx  \\
& \geq \underbrace{ min(\mu_{0},\sigma_{0}) }_{ \alpha } \underbrace{ \left[ \int\limits_{0}^{L} [u'(x)]^{2} \, dx + \int\limits_{0}^{L} [u(x)]^{2} \, dx  \right] }_{ \lvert\lvert u \rvert\rvert  _{_{\mathbb{V}}}^{2} }
\end{align}$$
Questa ultima identificazione la abbiamo ricavata dal secondo richiamo/risultato.

#### Richiamo/Risultato 3

Se $v \in H_{0}^{1}(\Omega)$ (o $v\in H^{1}_{\Gamma_{_{D}}}(\Omega)$), allora $\lvert\lvert v \rvert\rvert_{L^{2}(\Omega)}\leq C_{p}\lvert\lvert v' \rvert\rvert_{L^{2}(\Omega)}$.

Questo a risolvere problemi più difficili.

##### Esempio di Poisson

Problema:
$$-u''(x) = f(x)$$

$$\begin{align}
a(u,u) &=\int\limits_{0}^{L} [u'(x)]^{2} \, dx 
\end{align}$$

Per conseguenza del risultato 3 abbiamo risultato 4:

#### Risultato 4

$$\begin{align}
\lvert\lvert v \rvert\rvert  ^{2}_{H^{1}(\Omega)} &= \lvert\lvert v  \rvert\rvert^{2}_{L^{2}(\Omega)}+\lvert\lvert v' \rvert\rvert  ^{2}_{L^{2}(\Omega)}   \\
&\leq C_{p}^{2} \lvert\lvert v' \rvert\rvert  ^{2}_{L^{2}(\Omega)}+\lvert\lvert v' \rvert\rvert  ^{2}_{L^{2}(\Omega)} \\
&= (C_{p}^{2}+1)\lvert\lvert v' \rvert\rvert  ^{2}_{L^{2}(\Omega)} \\
&\implies \lvert\lvert v' \rvert\rvert  ^{2}_{L^{2}(\Omega)} \geq \frac{1}{C_{p}^{2}+1}\lvert\lvert v \rvert\rvert  ^{2}_{H^{1}}
\end{align}$$

Possiamo riscrivere la soluzione al problema di Poisson come:
$$a(u,u) = \lvert\lvert u' \rvert\rvert  ^{2}_{L^{2}(\Omega)}\geq \frac{\lvert\lvert u \rvert\rvert  ^{2}_{_{\mathbb{V}}}}{C_{p}^{2}+1}\to \text{Coercività}$$
$$\implies \alpha = \frac{1}{C_{p}^{2}+1}$$

5. $F(\cdot)$ lineare, di nuovo questo è dato dalla lineare dell'integrale.

6. $F(\cdot)$ limitato

$$?C>0\;\;\left|F(v) \right|\leq C\lvert\lvert v \rvert\rvert  _{_{\mathbb{V}}}$$

In questo caso è:
$$\begin{align}
F(v) &= \left|\int\limits_{0}^{L} f(x)v(x) \, dx -q_{1}v(0)+q_{2}v(L) \right| \\
&\leq \left|\int\limits_{0}^{L} f(x)v(x) \, dx  \right|-\left|q_{1} \right|\left|v(0) \right| + \left|q_{2} \right|\left|v(L) \right| \\
&\mathop{\leq}^{\text{CS}} \lvert\lvert f \rvert\rvert  _{L^{2}(\Omega)}\cdot \lvert\lvert v \rvert\rvert  _{L^{2}(\Omega)} + \left|q_{1} \right|\left|v(0) \right|+\left|q_{2} \right|\left|v(L) \right| \\
&\mathop{\leq}^{\text{R2}} \lvert\lvert f \rvert\rvert  _{L^{2}(\Omega)}\cdot \lvert\lvert v \rvert\rvert  _{H^{1}(\Omega)} + \cdots 
\end{align}$$
Non sappiamo scrivere il secondo e terzo valore tale che ci diano una norma di $\mathbb{V}$.

#### Richiamo/Risultato 5 $\to$ Stima della Traccia

Sia $\Omega \subset \mathbb{R}^{d}$ aperto, limitato, con bordo regolare, $\exists$ funzione lineare e continua: $\gamma:H^{k}(\Omega)\to L^{2}(\partial\Omega)$. Abbiamo:
$$\lvert\lvert \gamma(v) \rvert\rvert  _{L^{2}(\partial\Omega)} \leq C_{_{T}}\lvert\lvert v \rvert\rvert  _{H^{k}(\Omega)}$$

Scriviamo allora questa equazione come (prendendo per dato ma non dimostrato che il valore assoluto è equivalente alla norma $L^{2}$):

$$\begin{align}
&\leq \lvert\lvert f \rvert\rvert  _{L^{2}(\Omega)}\cdot \lvert\lvert v \rvert\rvert  _{H^{1}(\Omega)} + \left|q_{1} \right|C_{_{T}} \lvert\lvert v \rvert\rvert  _{H^{1}(\Omega)}+\left|q_{2} \right|C_{T}\lvert\lvert v \rvert\rvert  _{H^{1}(\Omega)} \\
&= \underbrace{ (\lvert\lvert f \rvert\rvert  _{L^{2}(\Omega)}+\left|q_{1} \right|C_{T}+\left|q_{2} \right|C_{T}) }_{ C }\cdot \lvert\lvert v \rvert\rvert  _{_{\mathbb{V}}}
\end{align}$$



