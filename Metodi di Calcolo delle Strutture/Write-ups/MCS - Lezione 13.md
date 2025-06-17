---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 13 - MDS come soluzione di sistemi di travi

Prendiamo un esempio di una trave nella sua configurazione staticamente determinata.

<!Diagramma configurazione iniziale>

Identifichiamo i nodi e verifichiamo le loro libertà di spostamento.

Le coordinate lagrangiane che descrivono questo sistema sono:
$$\underline{U} = (\varphi_{b},\varphi_{c})^{T} = (U_{1},U_{2})^{T}$$

Possiamo definire il sistema di equazioni risolventi come:
$$\underline{R}_{FIT} = \underline{\underline{K}}\underline{U}+\underline{P}=\underline{0}$$

Dove $\underline{R}_{FIT}$ è il vettore delle reazioni vincolar, rispondenti ai vincoli fittizzi, $\underline{F}_{R} = \underline{\underline{K}}\underline{U}$ è il vettore delle forze di richiamo elastiche e $\underline{P}$ è il vettore dei carichi "generalizzati".

Nel caso in esame abbiamo:
$$\underline{\underline{K}} = \frac{EI}{L}\begin{bmatrix}
8 & 2 \\2 & 4
\end{bmatrix}$$
$$\underline{P} = \frac{pl^{2}}{12}\begin{bmatrix}
1 \\0
\end{bmatrix}$$
$$\implies  \underline{U} = -\underline{\underline{K}}^{-1}\underline{P} = \frac{pl^{2}}{2EI}\begin{bmatrix}
-\frac{1}{7} \\ \frac{1}{14}
\end{bmatrix}$$
$\underline{\underline{K}}$ può esser visto anche come il vettore delle forze di richiamo elastico, ricavato imponendo $\varphi=1$.

Facciamo un'altro esempi di struttura che ci causerà alcuni problemi:

<!Diagramma secondo esempio>

Anche se abbiamo una singola trave abbiamo 3 cambi di trave su cui possiamo definire la linea elastica.

Prendiamo 3 assi per definire questi tre campi di trave.

Ci sono 4 nodi, per cui possiamo definire 6 coordinate lagrangiane:
$$\underline{U} = (\varphi_{b},u_{b},v_{b},\varphi_{c,}v_{c},u_{c})$$
Questi agiscono solo in B e C perché in A e D ci sono incastri quindi non possono muoversi in nessun modo, invece i nodi B e C essendo continuità della trave possono muoversi in qualsiasi modo, visto che non abbiamo posto nessun vincolo sulle reazioni vincolari.

Stiamo aderendo alle condizioni interne della struttura mettendo un solo angolo in B, questo è perché abbiamo la condizione di continuità in B e avendo un solo angolo ci permette di mantenerla.

Andiamo a cambiare questo vincolo interno in B mettendo una cerniera, se volessimo fare un parallelo alla realtà prima avevamo una giunzione saldata ora abbiamo giunzione bullonata.

<!Diagramma nodo in B>

Gli spostamenti lungo x e y sono gli stessi ma le rotazioni ai due lati del nodo non possono esser più uguali, questo è perché la struttura non ha più la continuità quindi dobbiamo considerare due variabili di rotazioni diverse per i due sezioni estreme per la trave e la colonna.

Avendo applicato la cerniera, le coordinata lagrangiane diventano:
$$\underline{U} = (\varphi_{b}^{BA},\varphi_{b}^{BC},v_{b},u_{b},\varphi_{c,}v_{c,}u_c)$$
L'ipotesi che facciamo spesso quando stiamo facendo i conti a meno e di imporre $EA\to \infty$, questo implica allora che $N=0$. Introducendo questa ipotesi imponiamo un vincolo interno, che cambia la indipendenza dei nodi da l'un l'altro. Per principio ci aspettiamo che ci riduca il numero di coordinate che ci servono per descrivere il sistema, ma vediamo che non toglie tutte quelle che di saremmo aspettati.

Per vedere quali spostamenti questo vincolo ci toglie, dobbiamo declassare la struttura e analizzarne la cinematica, in questo caso ci dimentichiamo la flessione della struttura per analizzare l'effetto del vincolo sulla azione cinematica:
<!Diagramma cinematica>

Sappiamo immediatamente che gli spostamenti $v_{b}$ e $v_{c}$ si annullano, questo è perché tutti e due generano azione assiale da soli su una trave.

Anche $u_{b}$ e $u_{c}$ generano azione assiale, ma lavorano tutti e due sulla trave BC, questo significa che per non aver azione assiale $u_{b}$ e $u_{c}$ devono esser uguali. Questo significa che possiamo considerarne solo uno dei due.

$$\underline{U} = (\varphi_{b}^{BA},\varphi_{b}^{BC},\varphi_{c},u_{b})$$

Possiamo allora definire la struttura sovravincolata come:
<!Diagramma struttura sovravincolata>

#### Definizione nodi flessibili
Struttura in cui si verificano, a valle dell'introduzione del vincolo sulla estensibilità degli elementi, che i nodi si possono lo stesso muovere, sono note come struttura a nodi flessibili.
#### Definizione nodi rigidi
Strutture dove degli spostamenti dei nodi non sono possibili dopo aver imposto la inestenbilità degli elementi.

Per risolvere il sistema, definiamo N+1 struttura ausiliarie.

La struttura ausiliaria "0" è quella dove $p\neq 0$ e $\underline{U}=0$. Qualsiasi variabile calcolata in questa struttura ha pedice 0:
$$v_{0}(s),u_{0}(s),\varphi_{0}(s),\eta_{0}(s),\chi_{0}(s),N_{0}(s),T_{0}(s),M_{0}(s)$$

Per struttura ausiliaria "i" con $i=1,\dots,N$, si ha $p=0$, $\underline{U}_{i}=1$ e $\underline{U}_{j\neq i}=0$. Troviamo le variabili:
$$v_{i}(s),u_{i}(s),\dots$$

Nella struttura reale, per il principio di sovrapposizione potremmo scrivere:
$$\begin{gather}
v(s) = v_{0}(s)+\sum_{i=1}^{N}v_{i}(s)\cdot U_{i} \\
\dots \\
\dots \\
M(s) = M_{0}(s) = \sum_{i=1}^{N}M_{i}(s)\cdot U_{i}
\end{gather}$$
La struttura reale è equilibrata e cinematicamente ammissibile, invece la struttura "i" è solo cinematicamente ammissibile. 
Possiamo fare come abbiamo fatto nell'MDF e fare il PLV ma la statica della struttura reale e la cinematica della struttura "i". Ricaviamo:
$$\begin{gather}
L_{\text{int}} = \int\limits_{s}^{} M(s)\cdot \chi_{i} \, ds \\
L_{ext} = \int\limits_{s}^{} p(s)\cdot v_{i}(s) \, ds  
\end{gather}$$

Abbiamo definito:
$$\begin{gather}
M(s) = M_{0}+\sum_{j=1}^{N}M_{j}(s)\cdot U_{j} \\
\chi_{i}(s) = \frac{M_{i}(s)}{EI}
\end{gather}$$
Possiamo riscrivere il lavoro interno come:
$$L_{\text{int}} = \int\limits_{S}^{} \frac{M_{0}M_{i}}{EI} \, ds + \sum_{j=1}^{N}\int\limits_{S}^{} \frac{M_{j}M_{i}}{EI} \, ds\cdot U_{j}  $$
Per avere il lavoro esterno e interno uguale:
$$L_{ext} =L_{int}\implies \underbrace{ \sum_{j=1}^{N}\int\limits_{S}^{} \frac{M_{i}M_{j}}{EI} \, ds }_{ K_{ij} }\cdot U_{i}+\underbrace{ \left[ \int\limits_{S}^{} \frac{M_{0}M_{i}}{EI} \, ds-\int\limits_{S}^{} pv_{i} \, ds   \right] }_{ P_{i} } =0\to \forall i=1,\dots,N$$
Questo è un sistema definito della incognite $U_{i}$.

La equazione prende la stessa forme che abbiamo visto nel MDF, solo che lo abbiamo ricavato in modo diverso.

In forma matriciale possiamo scrivere:
$$\underline{\underline{K}}\underline{U}+\underline{P} = \underline{0}$$

Facciamo un esempio per convincerci che quello che abbiamo detto è $K$ è effettivamente $K$. Per questo esempio definiamo le strutture "1" e "2" che sono:
<!Diagramma struttura "1" e "2">

Prendiamo la statica equilibrata da "1" e prendiamo la cinematica equilibrata di "2".

Il lavoro interno di questa struttura sarà:
$$L_{int}  = \int\limits_{S}^{} M_{1}\cdot \chi_{2} \, dS = \int\limits_{S}^{} \underbrace{ \frac{M_{1}M_{2}}{EI} }_{ K_{12} } \, dS = 1\cdot R = L_{ext}   $$
$$\implies  K_{12} = R$$

$K$ è la reazione vincolare nel nodo per effetto della attivazione della rotazione in B.

Abbiamo visto anche la definizione del termine $\underline{P}$. Quando guardiamo l'equazione che abbiamo ricavato con l'MDF vediamo il termine che coinvolge sia $M_{0}$ e $M_{j}$ non appare, infatti questo termine si annulla sempre, vediamo perché.

#### Calcolo di $P_{1}$

Prendiamo un problema con strutture "0" e "1" che sono:
<!Diagrammi struttura 0 e 1>

Il lavoro interno sarà:
$L_{int} = \int\limits_{S}^{} M_{0}\cdot \chi_{1}  \, dS = \int\limits_{S}^{} \frac{M_{0}M_{1}}{EI} \, dS  = \int\limits_{S}^{} pv_{1} \, ds + W\cdot1 =L_{int}$

Risolviamo questa equazione per $W$:
$$W = \int\limits_{S}^{} \frac{M_{0}M_{1}}{EI} \, ds - \int\limits_{S}^{} pv_{1} \, ds  = P_{1}$$

Questo ci fa vedere che i termini $P_{i}$ sono le reazioni vincolari per effetto di p sulla struttura.
 
Ora invece ci prende la statica da 0 e la cinematica da 1, facciamo l'opposto:
$$L_{int} = \int\limits_{S}^{} M_{1} \cdot \chi_{0}\, ds =\int\limits_{S}^{} \frac{M_{0}M_{1}}{EI} \, ds = 0 = L_{ext} $$
Questo si annulla perché ne Q ne R fanno lavoro perché in "0" non ci sono spostamenti, questo significa che per ogni struttura il termine $\int\limits_{S}^{} \frac{M_{0}M_{1}}{EI} \, ds$ si annulla.

### Proprietà di $\underline{\underline{K}}$

Queste saranno le stesse proprietà che abbiamo visto nei sistemi rigidi, ma ricavati con la linea elastica.

Dimostriamo che la matrice $\underline{\underline{K}}$ è sdp.

È facile dimostrare che è simmetrica perchè:
$$K_{ij} = \int\limits_{S}^{} \frac{M_{i}M_{j}}{EI} \, ds = \int\limits_{S}^{} \frac{M_{j}M_{i}}{EI} \, ds = K_{ji}  $$
Dimostrare che è positiva è un attimo più difficile.

Prendiamo la struttura sovravincolata:
<!Diagramma struttura sovravincolata>

Applicando rotazioni in B e C generiamo delle reazioni:
$$\begin{cases}
F_{R1} = K_{11}U_{1}+K_{12}U_{2} \\
F_{R2} = K_{21}U_{1}+K_{22}U_{2}
\end{cases}\implies \underline{F}_{R} = \underline{\underline{K}}\underline{U}$$
Dove:
$$\underline{U} = [\varphi_{b},\varphi_{c}]^{T}$$

Utilizzando il teorema di Clapeyron, troviamo che il lavoro effettuato da questi reazioni è:
$$W_{F_{R}}  = \frac{1}{2}\underline{F}_{R}^{T}\underline{U} = \frac{1}{2}\underline{U}^{T}\underline{K}\underline{U}>0$$
Il lavoro effettuato da queste reazioni non può esser alto che positivo, perché dobbiamo mettere energia nel sistema per deformarlo. Questo allora significa che la matrice $\underline{\underline{K}}$ è positiva.

Possiamo definire l'energia della deformazione elastica $\Omega$ che è:
$$\Omega = \frac{1}{2}\underline{U}^{T}\underline{K}\underline{U}$$

Possiamo fare veder che la energia immagazzinata è quella che mettiamo nella struttura per fare lavoro e deformarla.

Possiamo ricavare l'equazione per l'energia della deformazione elastica in modo diretto facendo:
<!Diagramma struttura sovracaricata>

Per un sistema senza carichi esterni possiamo definire le variabili nel modo:
$$\begin{gather}
v(s) = \sum_{i=1}^{N} v_{i}(s)U_{i} \\
\chi(s) = \sum_{i=1}^{N}\chi_{i}(s)U_{i} \\
M = -EI\chi
\end{gather}$$

La energia della deformazione elastica ha equazione:
$$\Omega = \frac{1}{2}\int\limits_{S}^{} M\chi \, ds $$
Possiamo definire il momento e la curvatura flessionale come:
$$M = -EI \sum_{i=1}^{N}\chi_{i}U_{i}$$
$$\chi  =\sum_{j=1}^{N}\chi_{j}U_{j}$$
La energia della deformazione elastica allora la possiamo scrivere come:
$$ = \frac{1}{2}\sum_{i=1}^{N}\sum_{j=1}^{N}\int\limits_{S}^{} EI\chi_{i}\chi_{j} \, dsU_{i}U_{j} = \sum_{i=1}^{N}\sum_{j=1}^{N}\int\limits_{S}^{} \underbrace{ \frac{M_{i}M_{j}}{EI} }_{ k_{ij} } \, ds U_{i}U_{j}  $$
Ritroviamo di nuovo la forma matriciale che è:
$$\Omega = \frac{1}{2}\underline{U}^{T}\underline{\underline{K}}\underline{U}>0$$

Questo $\Omega$ è per una struttura senza carichi esterni. Se i carichi esterni sono conservativi possiamo definire il potenziale dei carichi esterni ($V_{p}$) come:
$$\begin{align}
V_{p} &= -\int\limits_{S}^{} p\sum_{i=1}^{N}v_{i}U_{i} \, ds=  \\
& = -\sum_{i=1}^{N}\int\limits_{S}^{} pv_{i}(s) \, dsU_{i}= \underline{P}^{T}\underline{U} 
\end{align}$$

La energia potenziale totale del sistema è:
$$\Pi = \Omega+V_{p} = \frac{1}{2}\underline{U}^{T}\underline{\underline{K}}\underline{U}+\underline{P}^{T}\underline{U}$$

Possiamo far vedere che tale che non ci sia variazione nella energia potenziale totale, dobbiamo imporre il nostro sistema di equazioni risolventi:
$$\delta \Pi = \delta \underline{U}^{T}[\underline{\underline{K}}\underline{U}+\underline{P}]=0\;\;\forall\delta \underline{U} \iff \underline{\underline{K}}\underline{U}+\underline{P}=\underline{0}$$
Vediamo allora che il nostro procedimento nel ricavo di una soluzione è corretto.
