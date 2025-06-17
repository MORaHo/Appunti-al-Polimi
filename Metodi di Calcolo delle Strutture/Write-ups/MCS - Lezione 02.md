---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 2 - Sistemi Rigidi ad Elasticità Concentrata

Questo è la combinazione di [MCS - Lezione 02](MCS%20-%20Lezione%2002.md) e [MCS - Lezione 02 bis](MCS%20-%20Lezione%2002%20bis%201.pdf).
Non avevo capito bene la seconda parte della lezione quindi sono andato a riguardarla.

Nei sistemi rigidi ad elasticità concentrata guarderemo a:
- Definizione/Formulazione del problema elastico
- Cinematica $\to$ Trasferimento da uno stato ad un'altro
- Statica $\to$ condizioni d'equilibrio
- Risposta elementi elastica $\to$ Risposta di eventuali elementi elastici

## Definizione 

Un corpo rigido è un qualsiasi corpo, nel nostro caso la maggior parte dei corpi che consideriamo son aste.

Un sistema di corpi è composto da $n_{c}$ corpi, e $n_{v}$ vincoli. Questi corpi possono esser connessi all'esterno e fra di loro da aste e molle.

<!Diagramma sistema di corpi generico>

### Configurazione 

La configurazione di un sistema è lo stato dell'sistema ad un qualsiasi punto, la configurazione privilegiata è la configurazione iniziale $C_{0}$ del sistema. 
Nella configurazione iniziale definiamo le molle come indeformate. Invece $C_{s}$ è una configurazione congruente, che soddisfa i vincoli, cioè non si sono rotti vincoli; è anche un sistema equilibrato.
Se esiste $C_{s}$, è la soluzione del problema elastico e possiamo definire tutti i vincoli, le reazioni, deformazioni e spostamenti.

Facciamo la ipotesi di piccoli spostamenti. Ipotizziamo che:
1. Ai fini della scritture delle equazioni di equilibrio, posso 'confondere' le configurazioni $C_{o}$ e $C_{s}$, cioè possiamo porre le forze in $C_{s}$ in $C_{0}$ e definire le reazioni vincolari.
2. Gli spostamenti sono 'piccoli' rispetto ad una dimensione caratteristica del sistema.
 
### Tipi di Collegamento

Ci sono diversi tipi di collegamento che possono occorrere tra corpi rigidi
#### Vincoli Perfetti

Un vincolo è detto perfetto se è olonomo, bilatero e liscio. Cioè se non entrano mai derivate nei calcoli e non dissipa attrito.

Prendiamo $m_{i}$ come la molteplicità dell'i-esimo vincolo, se $m_{i} = 1$ allora è un vincolo semplice.

Ad ogni vincolo associo $m_{i}$ equazioni di vincolo.
Il numero totale di equazioni di vincolo introdotte al sistema è $m_{v}$, che ha equazione:
$$m_{v} = \sum_{i=1}^{n_{v}}m_{i}$$
#### Elementi Elastici

Definiamo gli elementi elastici come 0-dimensionali, cioè la loro azione è puntuale.

Questi elementi elastici in realtà sono molle che possono esser di tipo traslante e rotazionale, ma vedremo che le potremo considerare come lo stesso problema.

Nelle molle traslanti, un cambio di configurazione implica una deformazione della molla:

<!Diagramma cambio di molla traslante>

Lo spostamento relativo sarà:
$$\Delta v = v_{1}+v_{2} \neq 0$$
È la forza che nasce è:
$$N = k_{T}\Delta v$$

Nella molle rotazionali, anche qui un cambio di configurazione implica una deformazione delle molle:

<!Diagramma cambio di molle rotazionale>

Lo spostamento relativo rotazionale sarà:
$$\Delta \phi = \phi_{1} + \phi_{2}$$
Invece il momento generato sarà:
$$M = k_{R}\Delta \phi$$

Definiamo $\Delta v$ e $\Delta \phi$ come deformazioni generalizzate.
Invece definiamo N e M come sforzi generalizzati, anche azioni interne e forze di richiamo elastiche.

In questo caso generalizzato significa che stiamo usando una definizione impropria rispetto alla definizione vera dalla linea elastica.

Invece di $\Delta v$ e $\Delta \phi$ possiamo usare la deformazione generalizzata, con simbolo $q_{i}$, e lo sforzo generalizzato prende il simbolo $Q_{i}$.

Per ogni elemento elastico allora usiamo la equazione: $$Q_{i} = k_{i}q_{i}$$

## Cinematica

Vogliamo descrivere la risposta dei vincoli(congruente), vogliamo usare il minimo numero necessario di variabili cinematiche (spostamento o rotazioni)

Usiamo $\underline{U}$, che definiamo lo spostamento generalizzato del sistema din coordinate Lagrangiane.

Prendiamo il punto nel sistema corpo come:

<!Diagramma P nel sistema di corpi>

P avrà posizione:
$$\underline{x}_{p} = x_{p,1}\underline{e}_{1} + x_{p,2}\underline{e}_{2}$$
In forma vettoriale lo scriviamo come:
$$\underline{x}_{p} = \begin{bmatrix}
x_{p,1} \\
x_{p,2}
\end{bmatrix} = (x_{p,1},x_{p,2})^{T}$$

Le molle non introducono restrizione tra $C_0$ e $\hat{C}$, non forzano la posizione di certi punti. Perciò per lo studio della cinematica li togliamo.

Guardando al movimento P tra le due configurazioni, il diagramma sarà:

<!Diagramma dello spostamento di P>

Per definire la di P nel tempo possiamo prendere le coordinate lagrangiane del baricentro:
$$\underline{U}_{Gi} = (u_{Gi},v_{Gi},\phi_{i})^{T}$$

Il vettore di spostamento allora sarà:

$$\underline{S}(\underline{x}_{p}) = \hat{\underline{x}}_{p} - \underline{x}_{p}$$
$$ = \begin{pmatrix}
\underline{S}_{x_{p,1}} \\
\underline{S}_{x_{p_{2}}}
\end{pmatrix} = \begin{pmatrix}
u_{Gi} \\
v_{Gi}
\end{pmatrix}+\begin{pmatrix}
-(x_{p,2}-x_{G,i2}) \\
(x_{p,1}-x_{G,i1})
\end{pmatrix}\phi_{i}$$

La forma matriciale è:

$$\underline{S}(\underline{x}_{p}) = \underline{\underline{A}}_{i}(\underline{x}_{p})\underline{U}_{i}$$

In questo caso $\underline{\underline{A}}_{i}$ è la matrice relativo allo spostamento del generico punto P. Invece $\underline{U}_{i}$ è il vettore delle lagrangiane del corpo privo di vincoli.

La matrice $\underline{\underline{A}}_{i}$ ha valori:
$$\underline{\underline{A}}_{i}(\underline{x}_{p}) = \begin{bmatrix}
1 & 0 & -(x_{p,2}-x_{G,i2}) \\
0 & 1 & (x_{p,1}-x_{G,i1})
\end{bmatrix}$$

E in generale sarà:
$$\underline{S}(\underline{x}) = \underline{\underline{A}}_{i}(\underline{x})\underline{U}_{i} \text{ e valida }\forall \underline{x} \in \Omega_{i}$$

La forma generale matriciale è la deforma discreta, ci sarebbero infinite equazioni per lo spostamento di ogni punto che fa parte del corpo, ma la linearizzazione dipendente da $\underline{U}_{i}$, significa che possiamo usare 3 variabili invece delle infinite iniziali per descrivere il problema perfettamente.

Prendiamo il vettori di tutti i parametri cinematici di ogni corpo rigido del sistema di corpi privo di vincoli e li mettiamo in un singolo:
$$\widetilde{\underline{U}} = \begin{pmatrix}
\underline{U}_{1} \\
\underline{U}_{2} \\
\vdots \\
\underline{U}_{n_{c}}
\end{pmatrix}$$
Questo vettore ha dimensione 3$n_{c} \times1$ dato che ogni corpo ha 3 parametri cinematici.

## Vincoli

I vincoli sono elementi che riducono il numero di coordinate richieste per descrivere il sistema. Dall'ipotesi dei piccoli spostamento le equazioni dei vincoli saranno lineari.

Come detto prima prendiamo $m_{v}$ come il numero di equazioni lineari omogenee imposte dai vincoli.

Se non ci sono cedimenti vincolari, sappiamo che la somma di queste equazioni lineari sarà nullo.

Il sistema intero è risolto dalla equazione:
$$\sum_{j=1}^{3n_{c}} z_{ij}\widetilde{U}_{i} = 0 \quad \to i = 1,\dots,m_{v}$$

In questa equazione $z_{ij}$ è l'elemento generico della matrice $\underline{\underline{Z}}$ che rappresenta l'interazione tra i corpi rigidi e i vincoli, rappresentando in effetti la forma del sistema di corpi rigidi.

$\widetilde{U}_{i}$ è l'i-esimo elemento di $\widetilde{U}$, non la coordinata stessa ma l'insieme della coordinate del corpo.

i è la riga della matrice $\underline{\underline{Z}}$, ci sono $m_{v}$ perché ci sono $m_{v}$ equazioni lineari omogenee rappresentate nel vettore $\underline{\underline{Z}}$.

Ogni sistema avrà un forma diverse di questa equazione, dato che ogni i-esime equazione lineare cambierà in base al vincolo che stiamo guardando nel sistema.

##### Esempio

<!Diagramma esempio>

### Generalizzazione

Guardando la matrice e il significato di ogni variabile è palese questa sia un prodotto matriciale tra la matrice delle equazioni vincolari rappresentanti del sistema $\underline{\underline{Z}}$ è la matrice delle coordinate cinematica lagrangiane $\widetilde{U}$, perciò possiamo scrivere quella formula in forma matriciale come:
$$\underline{\underline{Z}}\widetilde{U} = \underline{0}$$

Le dimensioni di $\underline{\underline{Z}}$ e $\widetilde{U}$ sono $m_{v} \times 3n_{c}$ e $3n_{c}\times 1$ rispettivamente.

Per trovare le soluzioni a questo sistema di equazioni lineari, facciamo l'ipotesi che tutte le equazioni dei vincolo sono linearmente indipendenti, cioè nessuno dei vincoli è inutile ai fini del sistema di corpi.

#### Soluzioni al sistema
Ci sono 3 casi di soluzioni al sistema cinematico

##### Caso 1 - Cinematicamente Sovradeterminato

Se $m_{v} > 3n_{c}$, il sistema è definito cinematicamente sovradeterminato. 
L'unico soluzione a questo sistema è $\widetilde{U} =\underline{0}$, cioè la configurazione iniziale.

##### Caso 2 - Cinematicamente Determinato

Se $m_{v} = 3n_{c}$, il sistema è definito cinematicamente determinato. L'unico soluzione possibile è come prima $\widetilde{U} = \underline{0}$, cioè la configurazione iniziale.

##### Differenza tra il caso 1 e il caso 2
Questi due casi sono trattati diversamente per l'unica ragione che nel caso 1 se un vincolo cede, cioè $m_{v}$ diminuisce di 1, il numero di soluzioni rimane uguale perché il sistema potrà esser anche sovradeterminato o diventerà determinato, in tutti e due casi il numero di soluzioni è uguali. Invece nel caso determinato se cede un vincolo, il numero di soluzioni cambia, come vedremo ora.

##### Caso 3 - Cinematicamente Sottodeterminato

Se $m_{v} < 3n_c$ il sistema verrà detto sotto determinato. Questo è il caso che ci interessa.

Questi tipi di sistemi ammettono $\infty^{N}$ soluzioni con $N = 3n_{c}-m_{v}$ essendo il numero di gradi di libertà del sistema.

Troviamo che la dimensione del vettore di coordinate lagrangiane $\widetilde{U}$
avrà un sottovettore $\underline{U}_{N\times 1}$ che sarà dovrà esser usato per descrivere il sistema.

Per trovare le variabili incognite dobbiamo fare la partizione del vettore $\widetilde{U}$ e della matrice $\underline{\underline{Z}}$.

Scriviamo $\widetilde{U}$ come:
$$\widetilde{U} = \begin{pmatrix}
\widetilde{U}_{A\;\; m_{v}\times 1} \\
\widetilde{U}_{B \;\;\underbrace{ 3n_{c}-m_{v} }_{ N } \times 1}
\end{pmatrix}$$
Possiamo riarrangiare la equazione matriciale come:

$$\underline{\underline{Z}}\widetilde{U} = \underline{0} \to (\underline{\underline{Z}}_{A\;m_{v}\times m_{v}},\underline{\underline{Z}}_{B\;m_{v},N})\begin{pmatrix}
\underline{\widetilde{U}}_{A} \\
\underline{\widetilde{U} }_{B}
\end{pmatrix} = \underline{0}$$

Questa partizione ci permette di separare le coordinate incognite $\widetilde{U}_{A}$ dalle variabili $\widetilde{U}_{B}$ che saranno le lagrangiane che danno libertà al nostro sistema e ci permettono di definirlo.

In $\underline{\underline{Z}}$ ci sono meno righe che colonne, ci sono più incognite che equazioni, per questa ragione separiamo le parti delle equazioni che ci definiscono le incognite e la parte in più. Da qui usiamo le incognite che non riusciamo a definire con le equazioni, e le definiamo arbitrariamente in base al sistema, queste incognite definiscono le parti delle equazioni che non saremmo riusciti ad usare e per ciò ci completa il sistema di equazioni, permettendoci di trovare la incognite che non abbiamo scelto arbitrariamente.

Grazie alla separazione abbiamo anche $\underline{\underline{Z}}_{A}$, che è una matrice quadrata, questo implica che $rango(\underline{\underline{Z}}_{A}) = rango(\underline{\underline{Z}}) = m_{v}$.
 
 Questo fatto del rango implica che esiste la matrice inversa di $\underline{\underline{Z}}_{A}$, permettendoci allora di definire $\widetilde{U}_{A}$ in funzione di $\widetilde{U}_B$ e dei coefficienti che non si determinano direttamente in $\underline{\underline{Z}}$ cioè $\underline{\underline{Z}}_{B}$, e finalmente i valore che rappresentano i vincoli in $\underline{\underline{Z}}_{A}$.

La equazione diventerà:
$$\widetilde{U}_{A} = -\underline{\underline{Z}}_{A}^{-1}\underline{\underline{Z}}_{B}\underline{\widetilde{U} }_{B}$$

I valori di $\widetilde{U}_{B}$ sono presi arbitrariamente, e i punti da dove prendiamo i valori di $\widetilde{U}$ per formare $\widetilde{U}_{B}$ sono arbitrari, cioè possiamo prenderli dall'inizio, dalla fine o qualsiasi parte del vettore.

Fissati gli N valori di $\widetilde{U}_{B}$, i valori di $\widetilde{U}_{A}$ conseguiranno per effetto dei vincoli del sistema che sono descritti in $\underline{\underline{Z}}$ e nella nostra equazione da $\underline{\underline{Z}}_{A}$ e $\underline{\underline{Z}}_{B}$.

La ragione perché ci sono $\infty^{N}$ soluzioni al sistema cinematicamente sottodeterminato è infatti perché ci sono infiniti valori a cui le variabili in $\widetilde{U} _B$ possono esser posti.

In effetto questo è come i sistemi che abbiamo visto a MAAM, per esempio la biella, dove prendevamo una variabile, $\alpha$ nel caso della biella, e sapendo la forma del sistema potevamo determinare tutte le altre variabili che ci sarebbero potute importare.

I valori in $\widetilde{U}_{B}$ sono così arbitrari, che cambiamo il suo nome a $\underline{U}$, lo stesso vettore che abbiamo visto prima. 
L'equazione allora sarà:

$$\widetilde{U}_{A} = -\underline{\underline{Z}}_{A}^{-1}\underline{\underline{Z}}_{B}\underline{U}$$
Che possiamo infine riscrivere come:

$$\underline{\widetilde{U}} = \begin{pmatrix}
-\underline{\underline{Z}}_{A}^{-1}\underline{\underline{Z}}_{B} & \underline{\underline{0}} \\
\underline{\underline{0}} &\underline{\underline{I}}
\end{pmatrix}\underline{U} = \underbrace{ \underline{\underline{T}} }_{ 3n_{c} \times N}\underbrace{ \underline{U} }_{ N\times 1 }$$

Dove $\underline{\underline{T}}$ è la matrice di trasformazione rappresentativa unica al sistema di corpi rigidi che stiamo studiando. La matrice converte un numero minimo di coordinate lagrangiane nel vettore intero delle coordinate del sistema, descrivendo interamente tutte le roto-traslazioni di tutti i corpi.

<!Diagramma esempio che ha fatto alla fine>


