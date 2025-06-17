---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 10 - Carico Termico e PLV per Strutture Iperstatiche

Nella ultima lezione abbiamo ricavato la matrice delle rigidezze che genera il legame costitutivo tra azioni interne e deformazioni generalizzate:
$$\underline{Q} = \underline{\underline{K}}_{sez}\underline{q} = \begin{bmatrix} EA & 0 & 0 \\0 & EI & 0\\0 & 0 & GA^{*}  \end{bmatrix}\cdot \underline{q}$$

Nel caso di Eulero-Bernoulli la matrice delle rigidezze è:
$$\underline{Q}_{EB} = \underline{\underline{K}}_{sez}\cdot \underline{q}_{EB} = \begin{bmatrix} EA & 0 \\0 & EI\end{bmatrix}$$

Nel caso di Eulero-Bernoulli, lo scorrimento angolare medio è preso come 0, la equazione del nostro taglio è:
$$T = GA^{*} \cdot t$$
Possiamo riscrivere questa e visto che $t=0$ troviamo che:
$$\frac{T}{GA^{*} } = t=0\implies GA^{*} \to \infty$$

## Carico Termico e Deformazioni Anelastiche

Fin'ora abbiamo considerato solo deformazioni elastiche.

Deformazioni anelastiche sono deformazioni che non occorrono per risposta elastica della trave ma per altre ragioni.

La deformazione anelastica più importante (oltre le deformazioni plastiche) è la deformazione per un carico termico.

Un carico termico occorre quando tutta o una parte dell'asta subiscono una variazione in temperatura rispetto a quando la asta è stata vincolata.

Il diagramma per un carico termico applicato su una trave:
<!Diagramma carico termico su trave generica>

La variazione in temperatura superiore $\Delta T_{s}$ è minore della variazione termica nella parte inferiore $\Delta T_{i}$, questo gradiente termico crea un allungamento linearmente correlato alla variazione nella temperatura. L'allungamento di ogni fibra è determinato allora dalla funzione lineare:
$$dU_{_{T}} = \alpha \Delta T_{}dx$$

Per effetto del carico termico abbiamo sia un'allungamento che una rotazione, questa rotazione può esser trovata usando il gradiente lineare:
$$d\phi_{_{T}} = \frac{\alpha(\Delta T_{i}-\Delta T_{s})dx}{h}$$

Sappiamo che $\chi = -\varphi'$, allora:
$$\chi_{_{T}} = -\varphi'_{_{T}}= \frac{\alpha(\Delta T_{i}-\Delta T_{s})}{h}$$
La curvatura termica è semplicemente uguale lungo tutta la trave.

Sappiamo anche che nel momento flettente, le fibre inferiori sono quelle in tensione, questo occorre anche per il carico termico le fibre inferiori sono tese e quelle sopra compresse.

$\Delta T_{g}$ genera $\Delta U_{_{T}}$

Lo spostamento lungo x è:
$$dU_{_{T}} = \alpha\Delta T_{_{G}}dx$$
L'allungamento allora è:
$$\eta_{_{T}} = U' = \alpha\Delta T_{_{G}} = \frac{\Delta T_{i}h_{i}+\Delta T_{s}Th_{s}}{h_{s}+h_{i}}$$
Questa è la stessa formula di prima in forma di media pesata.

Se consideriamo le deformazioni per il carico termico come:
$$\underline{q}_{T} = (\eta_{_{T}},\chi_{_{T}},0)^{T}$$

Sotto ipotesi di piccoli spostamento la forma che prende il vettore delle deformazioni generalizzati è:
$$\underline{q} = \underline{q}_{ELAST}+\underline{q}_{T}$$
Questa linearità è critica, ci può aiutare in deformazioni plastiche, che occorrono a carichi costanti, possiamo allora aggiungere un componente plastico che non si rimuove mai. Le deformazioni plastiche sono anelastiche, ma in questo corso non le trattiamo.

Visto che abbiamo già definito il legame costitutivo:
$$\underline{Q} = \underline{\underline{K}}_{sez}\cdot \underline{q}_{ELAST}$$
Possiamo riscrivere il vettore delle deformazioni generalizzate come:
$$= \underline{\underline{K}}^{-1}_{sez}\underline{Q}+\underline{q}_{T}$$

## Energia delle Deformazioni Elastiche

Guardiamo il cambio dalla deformazione iniziale a quella cinematicamente accettabile, doe $\underline{q}(t): 0\to \overline{q}_{}$

L'energia di deformazione elastica senza $\underline{q}_{T}$ sul concio dx è:
$$d\Omega= \frac{1}{2}\overline{\underline{Q}}_{}^{T}\underline{\overline{q}_{} }dx $$

$$\implies  \Omega = \int\limits_{0}^{l} \frac{1}{2} \overline{\underline{Q}}_{} \underline{\overline{q}_{} } \, dx = \frac{1}{2}\int\limits_{o}^{l} \overline{\underline{q}}_{} \underline{\underline{K}}_{sez}\underline{\overline{q}_{} } \, dx  $$
Nel caso delle presenza di un carico termico, prendiamo le deformazione elastiche come:
$$\underline{q}_{ELAST} = \underline{q}-\underline{q}_{T} \implies  \underline{Q} = \underline{\underline{K}}_{sez}(\underline{q}-\underline{q}_{T})$$

Sostituendo questo nella equazione per l'energia abbiamo:
$$\Omega = \frac{1}{2}\int\limits_{0}^{l} (\underline{q}-\underline{q}_{T})^{T} \underline{\underline{K}}_{sez} (\underline{q}-\underline{q}_{T})\, dx $$

## Convenzione

Prendiamo $\overline{T}_{} = \Delta T_{G}$ e $\Delta T = \Delta T_{i}-\Delta T_{s}$, tutti e due per scrivere meno.
## Esempi

Supponiamo una trave incastrata con una carico termico applicato:
<!Diagramma esempio con carico termico>

Vogliamo trovare lo spostamento diretto e trasversale.

Prendiamo per ipotesi che $t=0$

Il carico termico non genera azioni interne, quindi N=0, M=0 e T=0, perché questa sono risposte elastiche.

La cinematica però non sarà nulla:
$$\eta_{_{T}} =\alpha\Delta T_{G} := \alpha \overline{T}_{} $$
$$\chi_{_{T}} = \frac{\alpha(\Delta T_{i}-\Delta T_{s})}{h} := \frac{\alpha \Delta T}{h}$$

Usiamo il PLV per trovare lo spostamento diretto $U_{B}$.

La struttura fittizia è:
<!Diagramma struttura fittizia con concio positivo N*>

Per il PLV prendiamo la statica della struttura fittizia e la cinematica della struttura reale.

Il lavoro esterno è:
$$L_{ext} = 1\cdot U_{B} = \int\limits_{0}^{l} N^{*} \cdot \eta \, dx $$
Dove $\eta = \eta_{_{ELAST}}+\eta_{_{T}} = \cancelto{ 0 }{ \frac{N}{EA} }+\alpha \overline{T}_{}= \alpha \overline{T}_{}$
Il lavoro interno allora è:
$$= \int\limits_{0}^{l} \alpha \overline{T}_{}  \, dx = \alpha \overline{T}  l$$
Lo spostamento allora sarà:
<!Diagramma degli spostamenti>

A 0 deve esser 0 e a $U_{B}$ deve esser il valore calcolato ed è lineare quindi va cosi, in assenza di carichi elastici assiali.

Per trovare lo spostamento trasversale, la struttura fittizia è:
<!Diagramma struttura fittizia per spostamento trasversale>

Prendendo s dalla fine della trave, il momento sarà massimo all'incastro e il taglio è costante.

Il PLV è:
$$L_{ext} = 1\cdot v_{_{B}} = \int\limits_{0}^{l} M^{*}  \chi \, dx =L_{int}$$
$$\chi = \chi_{_{ELAST}}+\chi_{_{T}} = \frac{M}{EI}+\frac{\alpha\Delta T}{h} = \frac{\alpha \Delta T}{h}$$

$$\implies = \int\limits_{0}^{l} -s  \frac{\alpha\Delta T}{h} \, dx  = -\frac{1}{2}l^{2}  \frac{\alpha\Delta T}{h} = -\frac{1}{2} \frac{l}{h}l\alpha\Delta T$$

L'andamento degli spostamenti trasversali allora è:
<!Diagramma dello spostamento trasversale>

In questo caso è meno lo spostamento perché abbiamo preso positivo in giù e l'asta va in su.

Con il MDS invece se volessimo trovare lo spostamento dovremmo ricavare $\eta_{_{T}}$ e $\chi_{_{T}}$ dalla condizioni di contorno.

## Soluzione della linea elastica per sistema iperstatici

La soluzione delle linea elastica per sistemi iperstatici, come per i corpi rigidi non è semplice. Per risolvere la linea elastica possiamo usare sia il metodo delle forze che il metodo degli spostamenti. Il metodo degli spostamenti è più difficile da formula rispetto al metodo delle forze perché dobbiamo ricavare le condizioni di congruenza per poi trovare gli spostamenti e in questo caso è più difficile.

### Esempio S=1

Prendiamo il problema:
<!Diagramma problema iperstatico>

Dobbiamo definire s+1 strutture ausiliarie per risolvere il problema.

La struttura ausiliaria "0" e i diagrammi delle sue azioni interne:
<!Diagramma ausiliare 0 e azioni interne>

La struttura ausiliaria 1 e le suo azioni interne:
<!Diagramma ausiliare 1 e azioni interne>

Per il principio delle sovrapposizione degli effetti:
$$M(s) = M_{0}+XM_{1}$$
$$\chi = \chi_{_{ELAST}}+\cancelto{ 0 }{ \chi_{_{T}} } \implies  \chi_{_{ELAST}} = \frac{M}{EJ} = \frac{M_{0}+XM_{1}}{EI}$$

Per il PLV prendiamo la statica della struttura 1 e la cinematica della struttura reale(isostatica principale)

$L_{ext} = 1\cdot v_{b}=0$ perché $\Delta v_{b}=v_{b}=0$

$$\begin{align}
L_{int} &= \int\limits_{}^{} M_{1}(s)\cdot \chi(s) \, ds \\
& = \int\limits_{0}^{l} M_{1}(s) \cdot \frac{M_{0}(s)+XM_{1}(s)}{EI} \, ds = \\
&= \int\limits_{0}^{l} \frac{M_{1}^{2}(s)}{EI} \, ds \cdot X + \int\limits_{0}^{l} \frac{M_{1}(s)M_{0}(s)}{EI} \, ds = \\
&= \eta_{_{11}}X + \eta_{_{01}} 
\end{align}$$

In questo caso:
$$\eta_{_{11}} = \int\limits_{0}^{l} \frac{M_{1}^{2}(s)}{EI} \, ds = \frac{1}{EI}\int\limits_{0}^{l} s^{2} \, ds = \frac{l^{3}}{3EI}  $$
$$\eta_{_{01}} = \int\limits_{0}^{l} \frac{M_{0}(s)M_{1}(s)}{EI} \, ds  = \frac{p}{2EI}\int\limits_{0}^{l} s^{2} \, ds  = \frac{pl^{4}}{8EI}$$

Tale che $L_{ext} = L_{int}$ allora $\eta_{_{11}}X+\eta_{_{01}}=0$

La seconda equazione è nota come Equazione di Müller-Brezlau, è la equazione risolvmente per la trave a un grado di iperstaticità

Per risolvere il sistema allora:
$$X = -\frac{\eta_{_{01}}}{\eta_{_{11}}} = -\frac{3}{8}pl$$

Facendo una analogia a quello che abbiamo visto nell'ultima lezione con il PLV per risolvere la linea statica di una struttura statica, l'$M_{1}$ in questo caso è l'equivalente del $M^{*}$ in quello e $M_{0}$ è $M$. Il problema è lo stesso.

$\eta_{_{01}}$ è lo spostamento nella struttura principale nella direzione delle incognite dato dai carichi esterni.

$\eta_{_{11}}$ è detta flessibilità della struttura ed è sempre $>0$.
Invece, $\eta_{_{01}}$ è effetto dei carichi esterni $\lesseqgtr 0$ 
### Variazione del problema

Dato il problema:
<!Diagramma variazione del problema>

La isostatica principale è:
<!Diagramma isostatica principale>

La ausiliare 1 è:
<!Diagramma ausiliare 1>

Per il principio delle sovrapposizione degli effetti abbiamo che:
$$\begin{gather}
\chi = \dots = \frac{M_{0} +M_{1}X}{EI} \\
q_{b} = \frac{Q_{b}}{k_{b} }= \frac{\cancelto{ 0 }{ Q_{b_{0}} }+XQ_{b_{1}}}{k_{_{b}}} = \frac{X\cdot1}{k_{b}}
\end{gather}$$>

Per il PLV abbiamo:

$$\begin{gather}
L_{ext} = 1\cdot \Delta v_{b}=0 \\
L_{int} = \int\limits_{0}^{l} M_{1} \, \chi ds + Q_{B_{1}}\cdot q_{b} = \text{stesso di prima} + \frac{X\cdot1^{2}}{k_{b}}  \\
\eta  = \frac{l}{3EI} +\frac{1}{k_{b} }= \frac{l}{3EI}(1+\overline{C_{b}}_{} )
\end{gather}$$
$\overline{C}_{b}$ è la flessibilità adimensionale delle molle, ed ha equazione:
$$\overline{C}_{b} = \frac{3EI}{lk_{b}}  \geq 0$$

$$\begin{gather}
\eta_{_{01}} = \frac{1}{8} \frac{pl^{4}}{EI} \\
X = -\frac{3}{8}  \frac{pl}{1+\overline{C}_{b} } 
\end{gather}$$

La presenza della molla cambia la flessibilità della trave, questo significa allora che se la molla fosse spenta, cioè se $\overline{C}_{b}=0$ allora $\chi = -\frac{3}{8}  pl$
Per $\overline{C}_{b} \to \infty$ : $X =0$

Nella modellazione per scegliere una molle non possiamo considerare $k_{b}$, dobbiamo considerare $\overline{C}_{b}$, per tiene a conto sia della molla che la trave con cui sta interagendo.


## Esempio di Iperstatica con s=2

Preso il problema:
<!Diagramma problema>

Il problema si risolve in maniera identica.

La isostatiche principale con le incognite iperstatiche sarà:
<!Diagramma isostatica principale>

$X_{2}$ è il momento di continuità in B, perché la barra non si ferma spezza ma è continua.

La condizioni che dobbiamo mantenere sono che $\varphi_{_{A}}=0$ e $\Delta \varphi_{_{B}}=0$.

La ausiliare "0"  con il diagramma del momento è:
<!Diagramma ausiliare 0 con diagramma del momento>

La ausiliare "1" con il diagramma del momento è:
<!Diagramma ausiliare 2 con diagramma del momento>

La ausiliare "2" con il diagramma del momento è:
<!Diagramma ausiliare 2 con diagramma del momento>

Visto che abbiamo 2 incognite dobbiamo scrivere 2 equazioni:

$$1\cdot \varphi_{_{A}} = \int\limits_{}^{} M_{1} \cdot  \frac{M_{0}+X_{1}M_{1}+X_{2}M_{2}}{EI}\, ds $$
$$1\cdot\Delta \varphi_{B} = \int\limits_{}^{} M_{2} \cdot \frac{M_{0}+X_{1}M_{1}+X_{2}M_{2}}{EI}\, ds $$
Le equazioni allora saranno:

$$\begin{gather}
\eta_{_{11}}X_{1} +\eta_{_{12}}X_{2} +\eta_{_{01}}=0 \\
\eta_{_{21}}X_{1} +\eta_{_{22}}X_{2}+\eta_{_{02}}=0
\end{gather}$$

$$\implies \underline{\underline{\eta}}\underline{X}+\underline{\eta}_{0}=0$$

In generale gli elementi della matrice sono:
$$\eta_{_{ij}} = \int\limits_{0}^{l} \frac{M_{i}M_{j}}{EI} \, ds $$
$$\eta_{_{0i}} = \int\limits_{0}^{l} \frac{M_{i}M_{0}}{EI} \, ds $$


