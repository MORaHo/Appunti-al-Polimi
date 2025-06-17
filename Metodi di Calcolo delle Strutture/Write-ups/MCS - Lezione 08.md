---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 8 - Statica ed Equilibrio delle Travi

## Ripasso

Nella ultima lezione abbiamo studiato la cinematica di una trave con la ipotesi che le sezioni trasversali della trave rimangano rigide:

<!Diagramma studio delle cinematica>

Volevamo trovare il vettore dello spostamento per generico punto x,y:
$$\underline{S}(x,y) = (S_{x},S_{y})^{T}: P(x,y) \to \hat{P}$$

Per non calcolare per ogni punto abbiamo fatto l'ipotesi e abbiamo trovare le due componenti dello spostamento come:
$$\begin{gather}
S_{x} (x,y) = U(x)-y\varphi(x) \\
S_{y}(x,y)= v(x)
\end{gather}$$

Definendo: $\underline{U}(x) = (U,v,\varphi)^{T}$

Possiamo allora definire il vettore dello spostamento in forma matriciale come:
$$\implies \underline{S} = \underline{\underline{A}}(y)\cdot \underline{U}(x)$$

La matrice di conversione sarà:
$$\underline{\underline{A}} = \begin{bmatrix}
1 & 0 & -y \\
0 & 1 & 0
\end{bmatrix}$$
In questo ci sono delle analogia ai corpi rigido che abbiamo visto.

## Conclusione della Cinematica della Trave

Vogliamo descrivere la risposta di una trave elastica a piccoli spostamenti, senza usare la soluzione al continuo di DSV, ma vogliamo ricavare risultati partendo da un approccio simile al MDS per le strutture rigide ad elasticità concentrata che abbiamo visto.

Per il MDS che abbiamo visto le aste rimanevano rigide durante la deformazione della struttura, in questo caso la ipotesi è che la sezione trasversale rimane rigida durante le deformazione.
Quest'approccio è ispirato dal DSV, ma non è sempre uguale, la soluzione al taglio può esser diversa. Questo approccio è ipervincolato rispetto al DSV.

Le assi y e z devono esser principali d'inerzia, questo significa che la linea d'asse non esce dal piano. Matematicamente possiamo dire che:
$$\begin{align}
\text{Momento Statico}\to S_{z} &= \int\limits_{_{A}}^{} y \, dA =0 \\
\text{Momento d'Ineriza}\to I_{z} &= \int\limits_{A}^{} y^{2} \, dA >0
\end{align}$$
Per i sistemi rigidi ci siamo chiesti in quali condizioni siano congruenza con rigidezza della trave e i vincoli. Dobbiamo trovare un equivalente per i sistemi elastici. 

Per la congruenza ci chiediamo che il nostro campo di spostamenti, il nostro atto di modo, sia tale da non strappare il materiale e non creare compenetrazioni.

Possiamo garantire questa condizione di congruenza interne, con U,v,$\varphi$ che sono tali per soddisfare la equazione di congruenza interne del continuo, cioè il tensore delle piccole deformazioni del modello continuo.

Questo tensore è composto da valori $\mathcal{E}$ e $\gamma$, dove $\mathcal{E}$ è la deformazione e $\gamma$ è lo scorrimento angolare. Lo scorrimento angolare è quanto varia l'angolo tra dx e dy che inizialmente sono perpendicolari tra loro. Possiamo descrivere $\mathcal{E}$ e $\gamma$ in funzione del nostro modello cinematico come:
$$\begin{gather}
\mathcal{E}_{x} = \frac{\partial S_{x}(x,y)}{\partial x} = \frac{ dU }{ dx } -y \frac{d\varphi}{dx} = U'-y\varphi' \\
\mathcal{E}_{y} = \frac{\partial S_{y}(x,y)}{\partial y} = 0 \to \text{non dipendende da y} \\
\gamma_{xy} = \frac{\partial S_{y}(x,y)}{\partial x}+\frac{\partial S_{x}(x,y)}{\partial y} = \frac{ dv }{ dx } -\varphi(x) = v'-\varphi
\end{gather}$$
Il fatto che $\mathcal{E}_{y}$ è nulla fa senso perché la sezione è rigida, non c'è ragione per cui la altezza debba variare.

Scriviamo allora il vettore delle deformazioni locali del generico punto non nulle del mezzo continuo:
$$\underline{\mathcal{E}} (x,y) = (\mathcal{E}_{x}, \gamma_{xy})^{T}$$

Dai valori trovati (e messi nel vettore delle deformazioni)possiamo distinguere delle quantità che dipendono solo a x per poi poter definire un vettore che varia solo in x, che possiamo usare con una matrice rappresentativa per riportare al problema in due dimensioni. Queste quantità sono: $U', -\varphi'$ e $v'-\varphi$

$U'$ descrive quanto varia la lunghezza della trave per unità infinitesima lungo x. Definiamo $\eta(x) = U'$, è lo chiamiamo, allungamento unitario della linea d'asse.

$\varphi'$ ha senso lo stesso senso matematico della curvatura di una curva, cioè la variazione per unità di lunghezza della rotazione. Definiamo $\chi(x)=-\varphi'$, lo chiamiamo, curvatura flessionale.

$v'-\varphi$, dipende da x. Lo ridefiniamo come $t(x)$, e gli diamo nome di scorrimento angolare medio. Nel caso del continuo, questo è diverso per ogni punto, nel nostro caso però, con l'ipotesi della sezione rigida, quello che era variabile per ogni punto nella sezione ora è un solo valore per l'intera sezione.

Definiamo $\underline{q}(x) = (\eta,\chi,t)^{T}$  come vettore della deformazione generalizzata che possiamo poi applicare ad ogni sezione.

Avendo questo vettore della deformazione, possiamo scrivere in forma matriciale le equazioni di $\mathcal{E}_{x}$,$\mathcal{E}_{y}$ e $\gamma_{xy}$ che abbiamo definito prima:
$$\underline{\mathcal{E}}(x,y) = \underline{\underline{B}}(y)\cdot \underline{q}(x)$$
La matrice $\underline{\underline{B}}$ sarà:
$$\underline{\underline{B}}(y) = \begin{bmatrix}
1  & y & 0 \\
0 & 0 & 1
\end{bmatrix}$$
Siamo riusciti allora a descrivere la deformazione che è funzione di x e y, come il prodotto di una matrice e un vettore, uno dipendente da y e uno dipendente da x.

Questo è un legame come $\underline{U} = \underline{\underline{B}}\underline{q}$ delle aste rigide, che trasferisce un moto generalizzato in nel sistema ad un modo locali di un punto specifico. In questo caso $\underline{q}$ definiamo la deformazione generalizzata di una sezione trasversale rigida e $\underline{\mathcal{E}}$ descrive una deformazione di un punto specifico su quella sezione trasversale.

### Modelli di Trave

Ci sono due principali modelli di trave.

Il primo modello è quello di Timoshenko, che impone $t= v'-\varphi \neq 0$, questo è il modello generico che farà come base per tutti i nostri calcoli nel problema della trave.

Il secondo modello è quello Eulero-Bernoulli, che impone $t = v'-\varphi=0$, questo modello è utile nel caso delle piastre e gusci.

Il modello di Eulero-Bernoulli ha diverse implicazioni:
- $\implies \gamma_{xy}=0$, $\implies$ la trave è indeformabile per taglio e non esistono scorrimento angolari. Queste modello è vero solo se la trave è molto snella, quindi funziona bene per le piastre e gusci.
- $\implies \varphi = v' \implies \chi = -v''$, la curvatura flessionale diventa esattamente la curvatura geometrica dell'asse della trave.
- $\implies \varphi = v'$ è equazione di vincoli, riduciamo di 1 le coordinate, indipendenti/spostamenti generalizzati per descrive l'atto di moto della sezione. Prima avevamo bisogno di 3 coordinate lagrangiane, U,v e $\varphi$ (funzioni di x) per descrivere lo spostamento della sezione trasversale, ora solo 2, perché $\varphi=v'$
	- $\implies \underline{U}_{EB}(x) = (U(x),v(x))^{T}$, è il vettore degli spostamenti generalizzati nel caso di Eulero-Bernoulli
	- $\implies \underline{\mathcal{E}}_{EB} = (\mathcal{E}_{x})$ è il vettore delle deformazioni che si riduce ad uno scalare.
	- $\implies$ l'unica equazione di congruenza si limita a specificare $\mathcal{E}_{x}$ in funzione dell'allungamento, $\eta (x)$ e della curvatura flessionale $\chi(x)$, non c'è più effetto del taglio dato dalla seconda equazione.
$$\implies \underline{\underline{B}}_{EB} = \begin{bmatrix} 1 & y\end{bmatrix}$$
L'introduzione del vincolo interno della indeformabilità per taglio nel caso di Eulero-Bernoulli, riduce di 1 gli spostamenti necessari per descrive il moto della sezione. Come nei corpi rigidi, introducendo un vincolo significa ridurre di 1 le variabili indipendenti.

## Statica della Trave

Con la statica definiamo le azioni interne delle travi e come queste azioni interne stanno in equilibrio con i carichi esterni.

### Cosa sono le azioni interne in una trave

Le azioni interne sono la quantità statica, che compiono lavoro diretto per una deformazione generalizzata, cioè una deformazione descritta da $\eta, \chi$ e $t$.

Il lavoro compiuto dalle azioni interne è:
$$L_{int} = \int\limits_{0}^{l} \int\limits_{A}^{} (\hat{\mathcal{E}}_{x}\sigma_{x}+\hat{\mathcal{E}}_{y}\sigma_{y}+\hat{\gamma}_{xy}\tau_{xy}) \, dA  \, dx $$
Questo è il lavoro compiuto dagli sforzi, per le associate deformazioni generiche figli di un'atto di moto congruente.

Possiamo inserire il nostro modello cinematico in questa equazione e ricavare:
$$= \int\limits_{0}^{l} \int\limits_{A}^{} [\,\sigma_{x}(\hat{\eta}+y\hat{\chi})+\cancelto{ 0 }{ \sigma_{y}\cdot0 }+\tau_{xy}\cdot \hat{t}\,\,] \, dA  \, dx $$
$\sigma_{y}$ non è sempre 0, ma si moltiplica sempre con 0 quindi non importa.

Definiamo il vettore degli sforzi che compiono lavoro per le deformazioni di $\hat{\underline{\mathcal{E}}}$:
$$\underline{\sigma} = (\sigma_{x},\tau_{xy})^{T}$$

In forma compatta allora, la equazione del lavoro interno è:
$$=\int\limits_{0}^{l} \int\limits_{A}^{} \underline{\sigma}^{T}\cdot \underbrace{ \underline{\underline{B}}\hat{\underline{q}} }_{ \underline{\mathcal{E}} } \, dA  \, dx =$$

$\underline{\hat{q}}$ dipende da x, non y quindi possiamo toglierlo dal primo integrale:
$$ = \int\limits_{0}^{l} \left[ \int\limits_{A}^{} \underline{\sigma}\underline{\underline{B}} \, dA  \right]\cdot \hat{q} \, dx $$

Abbiamo definito $\underline{Q}$ come le quantità che generano lavoro diretto per deformazioni generalizzato. Possiamo definire allora una forma implicita di $\underline{Q}$. Vogliamo $\underline{Q}$ tale che:
$$L_{int} = \int\limits_{0}^{l} Q^{T}(x)\cdot\hat{\underline{q}}(x) \, dx $$
Questa è la stessa forma della equazione che abbiamo appena derivato quindi possiamo ricavare che:
$$\implies  Q(x) = \int\limits_{A}^{} \underline{\underline{B}}^{T} \underline{\sigma}\, dA  = \int\limits_{A}^{} \begin{bmatrix} 1 & 0 \\ y & 0 \\ 0 & 1 \end{bmatrix} \cdot \begin{bmatrix} \sigma_{x}\\ \tau_{xy}\end{bmatrix}\, dA $$
$$\int\limits_{A}^{} \begin{bmatrix}
\sigma_{x} \\ y\sigma_{x} \\ \tau_{xy}
\end{bmatrix} \, dA  = \begin{bmatrix} N \\ M \\ T\end{bmatrix}$$

Disegnando una esempio di disposizione delle forze:
<!Diagramma cubetto e azioni interne generate>

Dal modello vediamo che N è effetto di $\sigma_{x}$ come visto nel calcolo, T è effetto di $\tau_{xy}$, di nuovo come nel calcolo e M è effetto di $\sigma_{x}$ posto a y, che crea un momento.

Possiamo determinare anche il verso delle azioni:
<!Diagramma verso delle azioni>

Nel modello della trave alla Timoshenko (quello generale) le azioni interne associate alle tre variabili della deformazione generalizzato ($\eta,\chi$ e $t$), sono le N,M e T che abbiamo ricavato con DSV.

Con DSV, abbiamo risolto un problema di elasticità 3D, in maniera esatta, qui le abbiamo ricavate a partire da un'ipotesi cinematica sulla base di una considerazione puramente energetica.

Nel caso di Eulero-Bernoulli le azioni interne hanno equazione:
$$\underline{Q}_{EB} = \begin{bmatrix}
N\\M
\end{bmatrix}$$
L'azione di taglio c'è, solo che non entra negli sforzi generalizzati nel modello della trave. Visto che $t=0$, non è possibile, calcolare $\tau_{xy}$ di trave.

### Calcolo di Q, dati carichi esterni
Il calcolo di Q, dati carichi esterni è la seconda domanda della statica.

Per semplificare il disegno andiamo dalla rappresentazione 2D a solo l'asse dell'asta.

Prendiamo un'asta, ci poniamo un vincolo generico alle estremità e applichiamo un carico generic lungo x e uno lungo y.

<!Diagramma esempio per la statica>

Per calcolare Q, dobbiamo trovare la equazioni di equilibrio tra Q e F. Ci sono due modi per trovare le equazioni di equilibrio, l'approccio diretto e l'approccio prendendo il PLV come condizione sufficiente di equilibrio.

#### Approccio Diretto
Per l'approccio diretto servono 3 equilibri, uno ad un generico concio, uno all'estremo sinistro e uno all'estremo destro.

Per il concio generico il diagramma di equilibrio sarà:
<!Diagramma di equilibrio concio generico>

Le equazioni di equilibrio saranno:
$$\begin{align}
-N+(N+N'dx)+ndx=0 &\implies N'+n=0 \\
M'dx-Tdx=0 &\implies  M'-T=0 \\
T'+p =0
\end{align}$$
Vediamo immediatamente che il problema assiale è completamente indipendente del problema flessionale, che è retto dalle equazioni di momento e taglio

Nota: Guardando le equazioni di momento e taglio possiamo vedere che:
$M' =T \to M'' +p=0$
Questo implica che se p è costante, M e parabolico e T è lineare.

Guardando l'estremità alla sinistra (x=0), il diagramma di equilibrio sarà:
<!Diagramma di equilibrio estremo di sinistra>

Le equazioni di equilibrio qui saranno:
$$\begin{gather}
N(0)+H_{0}=0 \\
T(0)+V_{0} =0 \\
M(0)+W_{0} =0
\end{gather}$$

Le equazioni di equilibrio all'estremo destro saranno:
$$\begin{gather}
N(l)-H_{l}=0 \\
T(l) - V_{l} = 0 \\
M(l)+W_{l} = 0
\end{gather}$$

Questo è l'approccio che utilizza le equazioni cardinali della statica.
#### PLV come condizione sufficiente di equilibrio

Il modo impreciso per descrivere questo approccio è:

Se $L_{ext} (F,\hat{C}) = L_{int}(Q,\hat{C}) \,\,\forall C \implies$F e Q sono equilibrati, cioè $\{(F,Q)\}\in C^{*}$ 

Formalizziamo questo approccio.

Per primo dobbiamo definire la forza esterna al sistema:
$$L_{ext} = \int\limits_{0}^{l} (p\hat{v}+n\hat{U}) \, dx +\underbrace{ H_{0}\cdot\hat{U}(0)+H_{l}\cdot\hat{U}(0)+V_{0}\cdot \hat{v}(0)+V_{l}\cdot \hat{v}(l)+W_{0}\cdot\hat{\varphi}(0)+W_{l}\cdot \hat{\varphi}(l) }_{ \text{Termini di Bordo} }$$

Le forze interne invece avranno equazione:
$$L_{int} = \int\limits_{0}^{l} \underline{Q}^{T}(x)\hat{\underline{q}} \, dx = \int\limits_{0}^{l} (N\hat{\eta}+M\hat{\chi}+T\,\hat{t}) \, dx  =$$
$$= \int\limits_{0}^{l} N\hat{U}' - M\hat{\varphi}' + T(\hat{v}'-\hat{\varphi}) \, dx $$

Risolvendo tutti i pezzi di questo integrale, integrandoli per parti:
$$\begin{gather}
\int\limits_{0}^{l} N \hat{U}' \, dx  = [N\hat{U}]_{0}^{l} - \int\limits_{0}^{l} N'\hat{U} \, dx  \\
-\int\limits_{0}^{l} M \hat{\varphi}' \, d = -[M\varphi]_{0}^{l} + \int\limits_{0}^{l} M' \hat{\varphi} \, dx   \\
\int\limits_{0}^{l} T\hat{v}' \, d = [T\hat{v}]_{0}^{l} - \int\limits_{0}^{l} T' \hat{v} \, dx  
\end{gather}$$

Mettendo tutte queste integrazioni insieme abbiamo:
$$L_{int} = -(\int\limits_{0}^{l} N'\hat{U} -M'\hat{\varphi} + T'\hat{v} \,dx ) + [N\hat{U}]_{0}^{l} + [M\hat{\varphi}]_{0}^{l} + [T\hat{v}]_{0}^{l}$$
Tra che ci sia equilibrio il lavoro esterno e il lavoro interno devono esser uguali $\forall \hat{C}$, cioè:
$$L_{ext} -L_{int} = 0\,\,\,\,\forall \hat{C}$$
$$L_{ext} -L_{int} = \int\limits_{0}^{l} [(N'+n)\hat{U}+(M'-T)\hat{\varphi}+(T'+\varphi)\hat{v}] \, dx + \underbrace{ [H_{0}+N(0)]\cdot \hat{U}(0) + [H_{l}-N(l)]\cdot\hat{U}(x)+\dots }_{ \text{Termini di Bordo} }=0$$

Dato che vogliamo che sia vera $\forall \hat{C} \implies$deve esser vera $\forall\{\hat{U}(x),\hat{v}(x),\hat{\varphi}(x)\}$

Dato che deve annullarsi $\forall\{\hat{U}(x),\hat{v}(x),\hat{\varphi}(x)\}$, è possibile se solo se tutti i calcoli di annullano.

Dall'annullamento dell'integrale, vengono fuori le condizioni di equilibrio per il concio generico:
$$\begin{align}
N'+n=0\,\,\,\,\forall x &\in (0,l) \\
M'-T=0\,\,\,\,\,\,\,\,\,\,\,&" \\
T'+\varphi=0\,\,\,\,\,\,\,\,\,\,\,&"
\end{align}$$
Non abbiamo mai disegnato un concio, ma siamo lo stesso riusciti a ricavare le condizioni in base energetica, partendo dal PLV come condizione sufficiente di equilibrio.

In più dalle equazione non appartenenti all'integrale, ricaviamo le condizioni di contorno.
$$\begin{align}
H_{0}+&N(0)=0 \\
H_{l}+&N(l)=0 \\
&\vdots
\end{align}$$

##### Caso di trave di Eulero-Bernoulli

Se volevo fare lo stesso con il modello di Eulero-Bernoulli, l'unica cosa che cambierebbe è il lavoro interno:
$$L_{int} = \int\limits_{0}^{l} (N\hat{U}'+M\underbrace{ \hat{v}'' }_{ \hat{\varphi} =\hat{v}'' }) \, dx $$
Risolvendo il secondo pezzo dell'integrale per parti:

$$-\int\limits_{0}^{l} Mv'' \, dx= -[Mv']_{0}^{l} + \int\limits_{0}^{l} M'\hat{v}' \, dx = -[M\hat{v}']_{0}^{l}+[M'v]_{_{0}}^{^{l}} - \int\limits_{0}^{l} M''v \, dx $$

Sviluppando per avere l'equilibrio abbiamo:
$$\begin{gather}
N'+n=0 \\
M'' +p=0
\end{gather}$$
L'equazione assiale è la stessa di prima.
Invece l'equazione del problema flessionale è quella che abbiamo scritto facendo sparire il taglio nell'approccio diretto. Il taglio è ancora calcolabile facendo la derivata solo che non è ricavato direttamente.

Il taglio in è presente nel termine:
$$[M'\hat{v}]_{0}^{l}$$
Che è nelle condizioni di bordo prodotte.

Possiamo riscrivere come:
$M'(x=0,l) \pm V_{o,l}0$

Ci sta dicendo infatti che il momento in equilibrio con la forza verticale applicata agli estremi. Questo per Eulero-Bernoulli, da la condizione di al contorno associata alla forza verticale, in termini di derivata del momento, senza esplicitare il taglio.

























