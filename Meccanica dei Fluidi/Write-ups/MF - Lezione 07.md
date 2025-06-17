---
creation_date: 2024-02-11 14:02
tags:
  - MF
share: true
---
# Lezione 07 - Equazione Globale dell'Equilibrio Dinamico e Flusso di Poiseuille in Condotta

Fin'ora abbiamo guardato solo l'equilibrio nella scala indefinita, questo ci da tutti i dettagli che potremmo richiedere ma è laborioso quindi ora ricaveremo la formula globale.

Abbiamo già trovato la equazione a scala indefinita in 3 forme:
$$\begin{align}
\rho(\underline{f}-\underline{a}) & = div (\underline{\underline{\phi}}) \to \text{Generale Indefinita} \\
& = grad (p) \to \text{Fluido Perfetto} \\
& = grad (p)-\mu \cdot\Delta \underline{v} \to \text{Fluido RSNI} \to \text{Equazione di Navier-Stokes}
\end{align}$$

Per trovare la forma globale, come abbiamo sempre fatto, integriamo nello spazio.

Prendiamo un volume W di controllo di fluido.

<!Diagramma volume di fluido W>

### Integrazione della parte alla sinistra

La parte alla sinistra di tutte queste equazioni e uguale per ogni equazione quindi facciamo il calcolo solo una volta.

$$\int\limits_{W}^{} \rho \cdot \underline{f} \, dW  = \underline{G}$$
Questo calcolo lo avevamo già fatto nella statica quindi non lo vediamo. Questo è l'effetto della massa globale, se $\underline{f}= g$ allora $\underline{ G}$ è il peso.

$$-\int\limits_{W}^{} \rho \frac{d\underline{v}}{dt} \, dW = -\int\limits_{W}^{} \rho\left( \frac{ \partial \underline{v} }{ \partial t } +u \frac{ \partial \underline{v} }{ \partial x } +v\frac{ \partial \underline{v} }{ \partial y } +w \frac{ \partial \underline{v} }{ \partial z }  \right) \, dW  $$

Sappiamo che:
$$\frac{ \partial (AB) }{ \partial x }  = A\frac{ \partial B }{ \partial x } + B\frac{ \partial A }{ \partial x }  \implies  A \frac{ \partial B }{ \partial x } = \frac{ \partial (AB) }{ \partial x } -B \frac{ \partial A }{ \partial x } $$

Applicando questa alla equazione diventa:
$$\frac{ \partial (\rho \underline{v}) }{ \partial t } -\underline{v}\cancel{ \frac{ \partial \rho }{ \partial t } } +\frac{ \partial (\rho u\underline{v}) }{ \partial x } -\underline{v}\cancel{ \frac{ \partial (\rho u) }{ \partial x } } +\frac{ \partial (\rho v\underline{v}) }{ \partial y } -\underline{v}\cancel{ \frac{ \partial (\rho v) }{ \partial y } } +\frac{ \partial (\rho w\underline{v}) }{ \partial z } -\underline{v}\cancel{ \frac{ \partial (\rho w) }{ \partial z } } $$

Gli elementi eliminato non sono 0 da soli, ma messi insieme li possiamo scrivere come la equazione della continuità:
$$-v\left[ \frac{ \partial \rho }{ \partial t } +div(\rho \underline{v}) \right]=0$$
La parte interna messa insieme deve esser uguale a 0, per la continuità quindi li possiamo togliere dalla equazione, and se individualmente non sono 0.

La prima parte dell'integrale è:
$$-\int\limits_{W}^{} \frac{ \partial (\rho \underline{v}) }{ \partial t }  \, dW= \underline{I} $$
$\underline{I}$ è il termine delle inerzie locali.

La seconda parte della integrazione è:
$$-\int\limits_{W}^{} \left( \frac{ \partial (\rho u\underline{v}) }{ \partial x } +\frac{ \partial (\rho v\underline{v}) }{ \partial y } +\frac{ \partial (\rho w\underline{v}) }{ \partial z }  \right) \, dW $$
Espandendo il vettore nel parziale di ogni termine calcoliamo l'integrale:
$$\begin{align}
-\int\limits_{W}^{} \left( \frac{ \partial (\rho uu) }{ \partial x } +\frac{ \partial (\rho vu) }{ \partial y } +\frac{ \partial (\rho wu) }{ \partial z }  \right) \, dW = -\int\limits_{W}^{} div(\rho u\underline{v})  \, dW  &= \int\limits_{A}^{} \rho u\underline{v}\cdot \underline{n}  \, dA \\
 \dots&=\int\limits_{A}^{} \rho v\underline{v}\cdot \underline{n}  \, dA \\
\dots&=\int\limits_{A}^{} \rho w\underline{v}\cdot \underline{n}  \, dA
\end{align}$$
L'ultimo passo che abbiamo appena fatto lo abbiamo ricavando applicando il teorema della divergenza.

Rimettendo insieme gli elementi possiamo scrivere in forma integrale:
$$= \int\limits_{A}^{} \rho \underline{v}\cdot \underline{v}\cdot \underline{n} \, dA = \underline{M}$$
$\underline{M}$ è il flusso di quantità di moto, detto anche spinta dinamica.

Mettendo tutto insieme troviamo che in forma globale $\rho(\underline{f}-\underline{a})$ diventa in forma globale:
$$\underline{G}+\underline{I}+\underline{M}$$
In statica c'era solo $\underline{G}$ perché non c'era $\underline{a}$ che da dove abbiamo ricavato $\underline{I}$ e $\underline{M}$.

Questo è vale per tutte e 3 le equazioni, ora ricaviamo tutte 3 le parti alla destra.

### Globale

Integrando la parte alla destra abbiamo:
$$-\int\limits_{W}^{} div(\underline{\underline{\phi}}) \, dW  = \int\limits_{A}^{} \underline{\underline{\phi}}\cdot \underline{n} \, dA  = \int\limits_{A}^{} \underline{\phi} \, dA = \underline{\Pi}$$
Abbiamo il meno all'inizio perché abbiamo portato tutto alla sinistra (lo facciamo per ogni tipo di fluido) e scopare dopo perché il teorema della divergenza causa un cambio del segno.

$\int\limits_{A}^{} \underline{\phi} \, dA$ è il risultate degli sforzi sul contorno, che possiamo vedere anche come il risultate delle azioni di superficie.

$\underline{\Pi}$ è più complesso di quello che abbiamo visto nella statica perché include tutti gli effetti possibile della viscosità.

$$\rho(\underline{f}-\underline{a} )= div(\underline{\underline{\phi}}) \to \underline{G}+\underline{I}+\underline{M}+\underline{\Pi}=0$$

### Fluido Perfetto

$$-\int\limits_{W}^{} grad(p) \, dW  \underbrace{ = }_{ \text{Th.Green} } \int\limits_{A}^{} p\cdot \underline{n} \, dA  = \underline{\Pi}_{p}$$
Questo lo abbiamo già visto nella statica, incluso l'uso del teorema di Green. Questo è più semplice del caso generale perché non c'è effetto della viscosità.

$$\rho(\underline{f}-\underline{a})= grad(p) \to \underline{G}+\underline{I}+\underline{M}+\underline{\Pi}_{p}=0$$

### Navier-Stokes

La prima parte di questa è la stessa del fluido perfetto quindi la teniamo.

$$\begin{gather}
\int\limits_{W}^{} \mu \cdot\Delta \underline{v} \, dW &= \int\limits_{W}^{} \mu \cdot div(grad(\underline{v})) \, dW  = -\int\limits_{A}^{} \mu \cdot grad(\underline{v})\cdot \underline{n} \, dA \\
& = -\int\limits_{W}^{} \mu \cdot \frac{ \partial \underline{v} }{ \partial n } \, dA = \underline{T} 
\end{gather}   $$
$\underline{T}$ è l'effetto della viscosità sulla dinamica.

$$\rho(\underline{f}-\underline{a}) = grad(p)-\mu \cdot\Delta \underline{v}\to \underbrace{ \underline{G} }_{ \substack{\text{Azioni}\\\text{di massa}} }+\underbrace{ \underline{I}+\underline{M} }_{ \text{Accelerazione} }+\underbrace{ \underline{\Pi}_{p}+\underline{T} }_{ \substack{\text{Azioni di }\\\text{Superficie}} }=0$$
Vediamo traccie delle ipotesi che in ogni formula.

Nel caso Stokesiano vediamo che come abbiamo detto è come il fluido perfetto con qualcos'altro deviante, che in questo caso è $\underline{T}$. Vediamo anche la ipotesi di Newton, che possiamo scrivere in forma più  matematicamente corretta come:
$$\underline{\phi}_{\mu} = -\mu \cdot \frac{ \partial \underline{v} }{ \partial n } $$

## Flusso di Poiseuille in condotta cilindrica

I diagrammi sono gli stessi ma è cilindrico on piano.
Guardiamo questo problema in 2 modi, per primo prendiamo un volume di controllo che occupa tutto il tubo e il volume di controllo è la linea di fusso.

Preso il volume di controllo con la sezione del tubo intero:
<!Diagramma volume di controllo tutto tubo>

Facendo il diagramma degli sforzi agenti sul sistema:
<!Diagramma spinta sul volume di controllo>

La formula del fluido come abbiamo visto è:
$$\underline{G}+\underline{I}+\underline{M}+\underline{\Pi}_{p}+\underline{T}=0$$

$\underline{I}$ non sappiamo come è diretto ma non importa perché guardiamo un moto permanente quindi è questa spinta è nulla.

La somma di $\underline{M}_{1}$ e $\underline{M}_{2}$ è nulla perché:
$$\int\limits_{A}^{} \rho \cdot \underline{v}\cdot \underline{v}\cdot \underline{n} \, dA $$
In $\underline{M}_{1}$, $\underline{v}\cdot \underline{n} = u$ e $\underline{M}_{2}$ è: $\underline{v}\cdot \underline{n}=(-u)$, perché la direzione di x e $M_{2}$ sono opposta quindi ne esce $-u$. Vediamo allora che la somma dei due integrali si annulla.

$\underline{M}_{3}$ è 0 perché al controlo si ha la condizione di aderenza quindi $\underline{v}$ è 0.

$\underline{T} = -\int\limits_{A}^{} \mu \frac{ \partial \underline{v} }{ \partial n } \, dA$ $\implies \underline{T}_{1} = \underline{T}_{2}=0$, perché $\underline{n}$ è diretto verso la destra e visto che per la sezione non varia la velocità (flusso CGV) non varia, allora questi due componenti sono nulli.

$\underline{T}_{3}$ invece punta verso destra perché se guardiamo il diagramma della velocità, vediamo che la derivata della velocità tende a diventare orizzontale. Anche se la velocità alla parete è 0, la derivata non lo è quindi vediamo che $\underline{T}$ è orizzontale puntando nella direzione opposta a x.

L'equilibrio orizzontale che abbiamo trovato allora è:
$$\Pi_{1x}+\Pi_{2x}+T_{3x}=0$$

La distribuzione delle pressioni normale è garantita dal fatto che il flusso è CGV.

L'andamento della linea piezometrica è lineare e pendente in giù per il gradiente delle pressioni che abbiamo preso.
Visto che questo andamento è come nella statica lo ricaviamo nello stesso modo in cui lo abbiamo fatto nel passato.

Risolvendo l'equilibrio abbiamo che:
$$p_{1}A-p_{2}A-\tau p_{w}L$$

In questo caso $\tau$ è lo sforzo di trazione, $p_{w}$ è il perimetro bagnato/ circonferenza del volume di controllo e L è la lunghezza del volume di controllo.

$T_{3}$ è uniforme perché il sistema è assial-assimettrico.

Possiamo riscrivere $p_{1}-p_{2}$ come $-\frac{ \partial p }{ \partial x }L$, allora abbiamo:
$$-\frac{ \partial p }{ \partial x } A= \tau p_{w}$$
$$ \implies  \tau  = -\frac{ \partial p }{ \partial x } \cdot \frac{A}{p_{w}} = -\frac{ \partial p }{ \partial x } \mathcal{R}$$

$\mathcal{R}$ è il raggio idraulico, questo non è un vero raggio, è solo una grandezza di scala. Per una sezione circolare è $\frac{D}{4}$.

La equazione di equilibrio allora è:
$$\tau  = -\frac{ \partial p }{ \partial x } \mathcal{R}$$
In questo equilibrio $-\frac{ \partial p }{ \partial x }$ è la forza matrice, invece $\tau$ è la forze resistente che equilibra $\frac{ \partial p }{ \partial x }$.

Il moto uniforme è dato da questo equilibrio, se non ci fosse questo equilibrio ci sarebbe accelerazione o decelerazione.

Ragionando nell'ambito delle condotte un'po' di più, invece del generale, troviamo che:
$$-\frac{ \partial  }{ \partial x } \left( z+\frac{p}{\gamma} \right) = J \to \text{Cadente Piezometrico}$$

J è l'angolo di pendenza della linea piezometrica.

Possiamo allora scrivere anche:
$$\tau = \gamma\mathcal{R}J$$
Da qui vediamo che la ragione per cui la linea piezometrica pende è l'attrito.

### Profilo degli Sforzi e della Velocità

Non siamo ancora riusciti a ricavare il profilo della velocità nella sezione, non si può fare al livello globale.

Per trovarla si può fare la forma indefinita o l'approccio intermedio applicando l'equazione di dinamica global al singolo tubo di corrente.

Prendendo il singolo tubo di corrente come 
<!Diagramma tubo delle correnti di controllo>

Gli sforzi agenti sul nostro volume di controllo è:
<!Diagramma sforzi su volume di controllo>

Vediamo di nuovo che $\underline{I}$, $\underline{M}_{1}$, $\underline{M}_{2}$, $\underline{T}_{1}$ e $\underline{T}_{2}$ sono nulli. In questo caso anche $\underline{M}_{3}$ si annulla non per le condizioni di aderenza come prima ma perché il flusso è uniforme e CGV quindi le linee di corrente non si intersecando, allora il versore normale sarà perpendicolare alla velocità annullandosi.

$\underline{T}_{3}$ è di nuovo orizzontale perché la velocità alle pareti vanno a sinistra quindi le contrasta.

L'equilibrio orizzontale è di nuovo:
$$\Pi_{1x}+\Pi_{2x}+T_{3x}=0$$
$$\begin{align}
\tau &= -\frac{ \partial p }{ \partial x } \frac{A}{p_{w}} = \gamma  \frac{A}{p_{w}}J \\
& = \gamma  \frac{\pi r^{2}}{2\pi r }J = \gamma  \frac{r}{2}J
\end{align}$$

Questa equazione ci dice allora che $\tau$ è funzione lineare della coordinata radiale è ha profilo nella stessa forma che abbiamo visto:
<!Diagramma profilo della trazione>

Mettendo quest'ultima equazione insieme alla legge di Newton $\underline{\phi} = -\mu \frac{ \partial \underline{v} }{ \partial n }$. In questo caso $\underline{v}= u$ e $n= r$ allora:
$$= -\mu \frac{ \partial u }{ \partial r } $$

Per trovare il profilo di velocità allora, integriamo:
$$\int\limits_{}^{} \frac{ \partial u }{ \partial r }  = \int\limits_{}^{} -\frac{\gamma J}{2\mu}r  \to u(r) = -\frac{\gamma J}{4\mu} r^{2}+k $$
Trovando il valore della velocità al bordo del tubo:
$$u(r=R) = -\frac{\gamma J}{4\mu}R^{2}+k=0\to \text{Condizone di Aderenza}$$
Troviamo che la equazione per il profilo di velocità è:
$$u(r) = \frac{\gamma J}{4\mu}(R^{2}-r^{2})$$

<!Diagramma profilo della velocità>

La velocità al centro del tubo è:
$$u(r=0) = u_{max} = \frac{\gamma J}{4\mu}R^{2}$$
La velocità media del fluido è:
$$U = \frac{Q}{A} = \frac{1}{A} \int\limits_{A}^{} u \, dA  = \frac{1}{A} \int\limits_{0}^{2\pi} \int\limits_{0}^{R} \left[ \frac{\gamma J}{4\mu} (R^{2}-r^{2})\right]r \, dr  \, d\theta  = \frac{u_{max}}{2}$$

Vediamo allora che le linea di carico totale per ogni punto nella sezione sarà tra la linea di carico totale e la linea piezometrica:
<!Diagramma variazione di LCT>

Questo però non ci piace, perché non ci fa vedere niente.
Quello possiamo fare allora è usare la definizione della potenza per trovare una linea di carico (H) totale che rappresenta il fluido intero.
Questo è lo stesso che abbiamo visto con Bernoulli perché il carico si può vedere vedere come una energia/peso.

Per ricordarci il carico è:
$$H = z+\frac{p}{\gamma}+\frac{v^{2}}{2g}$$
La potenza allora ha equazione:
$$dP = \gamma HdQ$$

Integrando ricaviamo:
$$P = \int\limits_{A}^{} \gamma Hu \, dA  = \int\limits_{A}^{} \gamma\left( \underbrace{ z+\frac{p}{\gamma}+\frac{u^{2}}{2g}U }_{ H } \right)u \, dA $$
$$\begin{align}
 &= \gamma\left( z+\frac{p}{\gamma}\right) \int\limits_{A}^{} u \, dA + \int\limits_{A}^{} \frac{u^{3} \, dA}{2g}  =  \\
& = \gamma\left( z+\frac{p}{\gamma} \right)Q + \frac{\int\limits_{A}^{} u^{3} \, dA}{2g}\cdot \frac{U^{3}A}{U^{3}A}  \\
&= \gamma\left( z+\frac{p}{\gamma} \right)Q+  \frac{U^{2}}{2g}Q\frac{\int\limits_{A}^{}u^{3}   \, dA}{U^{3}A}   \\
&  = \gamma\left( z+\frac{p}{\gamma} +\underbrace{ \frac{\int\limits_{A}^{} u^{3} \, dA}{U^{3}A} }_{ \alpha } \cdot \frac{U^{2}}{2g}\right)Q
\end{align}$$
$\implies$ La potenze è $\gamma \cdot Q\cdot \text{Carico Totale Opportunamente Definito}$.
 Questo carico totale è il carico totale che usiamo per definire la LCT del flusso.

<!Diagramma LCT con carico opportunamente definito>

$\alpha$ è il coefficiente di ragguaglio della potenza cinematica, e in questo è 2.


