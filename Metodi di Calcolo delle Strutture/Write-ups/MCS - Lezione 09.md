---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 9 - Legame Costitutivo delle Travi e Equazione della Linea Elastica

## Ripasso

### Cinematica
La cinematica del generico atto di moto congruente.

Abbiamo visto due casi per la descrizione della cinematica:

Il primo caso è Timoshenko, lo spostamento generalizzato è:
$$\underline{U}(x) = (U(x),v(x),\varphi(x))^{T}$$
Abbiamo usato il legame tra spostamento e deformazioni per ricavare le deformazioni generalizzate:
$$\underline{q}(x) = (\underbrace{ \eta(x) }_{ \substack{\text{Allungamento}\\=U'} },\underbrace{ \chi(x) }_{ \substack{\text{Curvatura}\\\text{Flessionale}\\=-\varphi'} },\underbrace{ t(x) }_{ \substack{\text{Scorrimento}\\\text{Angolare}\\\text{Medio}\\=v'-\varphi} })$$
Lo scorrimento angolare medio è parente dello scorrimento angolare che è la variazione d'angolo tra due fibre disposta perpendicolarmente dopo una deformazione, per noi serve il valore medio.

Lo scorrimento angolare è qualcosa che occorre alla scala indefinita, quello medio lo prendiamo per la scala della sezione.

Il secondo caso è quello di Eulero-Bernoulli. Lo spostamento generalizzato è:
$$\underline{U}_{EB}(x) = (U(x),v(x))^{T}$$
La deformazione generalizzata è:
$$\underline{q}_{EB} = (\eta(x),\chi(x))$$
In Eulero-Bernoulli, mettiamo un vincolo interno:
$$t = v'-\varphi = 0 \implies  v' = \varphi \implies  \chi=-v''$$
Questo vincolo implica che la rotazione $\varphi$ è sempre uguale alla derivata dello spostamento verticale della linea d'asse $v'$.

### Statica
Nella statica la prima cosa che abbiamo fatto è definire le azioni interne.

Imponendo l'uguaglianza del lavoro interno compiuto dagli sforzi locali per le deformazioni del mezzo continuo congruenti con il nostro modello cinematico con il lavoro che avremmo compiuto con un vettore delle azioni interne per le deformazioni generalizzate, così possiamo allora definire $\underline{Q}$, secondo Timoshenko ed Eulero-Bernoulli:

$$\begin{gather}
\text{Timoshenko} \to \underline{Q}(x) = (N(x),M(x),T(x))^{T} \\
\text{Eulero-Bernoulli} \to \underline{Q}_{EB}(x) = (N(x),M(x))
\end{gather}$$
Nel caso di Eulero-Bernoulli, possiamo trovare il taglio con l'equazione del taglio che è conseguenza del vincolo interno imposto nella cinematica:
$$T= \frac{ dM }{ dx } $$

Possiamo anche definire la direzione positiva delle azioni:
<!Diagramma direzioni azioni interne>

La seconda cosa che abbiamo fatto è ricavare le equazioni di equilibrio. Prima abbiamo trovare le equazioni indefinite:
$$\begin{align}
N'+n=0 &\to \text{Problema Assiale}\\
M' - T=0 &\to \text{Problema Flessionale}\\
T'+p=0 &\to \text{Problema Flessionale}
\end{align}$$

In più abbiamo trovato le condizioni di contorno su $N(x),T(x)$ e $M(x)$.
Abbiamo ricavato tutte e due sia direttamente che con energeticamente con il PLV come condizione sufficiente per l'equilibrio della nostra struttura.

## Legame Costitutivo

Il legame costitutivo è il legame tra lo sforzo generalizzato e la deformazione generalizzata, cioè il legame tra la cinematica e la statica.
Per definire il legame consideriamo il materiale con cui stiamo lavorando, possiamo formalizzare il legame tra azioni interne e legame generalizzato.

Per semplificazione dei calcoli facciamo delle ipotesi. Le ipotesi che facciamo sono che il materiale sia elastico lineare, omogeneo e isotropo.

Questo ipotesi implicano che le costanti, E e G, sono le due variabili che definiscono il nostro materiale.

E è il modulo di Young, invece G è il modulo di rigidezza al taglio ed è uguale a $\frac{E}{2(1+\nu)}$, dove $\nu$ è il coefficiente di contrazione trasversale di Poisson.

Sappiamo che possiamo definire le azioni interne come:
$$\underline{Q}(x) = \int\limits_{A}^{} \underline{\underline{B}}^{T}\underline{\sigma} \, dA $$
con $\underline{\sigma} = (\sigma_{x},\tau_{xy})^{T}$
Questo integrale si risolve e ricaviamo:
$$ = \begin{bmatrix} N\\ M\\T\end{bmatrix}$$

Vogliamo descrivere $\underline{\sigma}$ in funzione di E e G.
Il problemi che stiamo considerando sono problemi piani negli sforzi che significa che $\sigma_{y}$ non lo consideriamo perché viene annullato sempre dalla mancanza di forze che deformazione la linea d'asse fuori dal piano.

Nel problema piano negli sforzi, possiamo trovare gli sforzi come:
$$\begin{gather}
\sigma_{x} = \frac{E}{1-v^{2}}\cdot\mathcal{E}_{x} \\
\tau_{xy} = G\cdot\gamma_{xy}
\end{gather}$$
Questi li abbiamo presi dai libri di meccanica strutturale, e li prendiamo come dati.

Usando queste equazioni, possiamo allora definire il vettore degli sforzi come:
$$\underline{\sigma} = \begin{bmatrix} \frac{E}{1-v^{2}} & 0 \\ 0  & G\end{bmatrix}\cdot \begin{bmatrix}\mathcal{E}_{x}\\\gamma_{xy}\end{bmatrix}=\underline{\underline{D}}\underline{\mathcal{E}} = \underline{\underline{D}}\cdot\underline{\underline{B}}\underline{q}$$
Definiamo la matrice $\underline{\underline{D}}$ come la matrice di rigidezza del materiale, avendo lo stesso significa della matrice $\underline{\underline{D}}$ nel caso rigido, solo che in questo la rigidezza in più direzioni è dell'asta e non delle molle.

La equazione finale che abbiamo ricavato è il legame tra sforzi e deformazioni generalizzate che stavamo cerando.

Possiamo allora riscrivere la nostra equazione delle azioni interne come:
$$\underline{Q}(x) = \int\limits_{A}^{} \underline{\underline{B}}^{T}\underline{\sigma} \, dA = \int\limits_{A}^{} \underbrace{ \underline{\underline{B}}^{T}\underline{\underline{D}}\underline{\underline{B}} }_{ \underline{\underline{K}} } \, dA \cdot \underline{q}(x)  = \underline{\underline{K}}_{sez}\cdot q(x)$$
$\underline{\underline{K}}_{sez}$ è la matrice delle rigidezze interna della sezione che definisce il legame costituivo della trave sulla sezione specifica.

Abbiamo estratto $\underline{q}(x)$ dall'integrale perché abbiamo detto che non varia nella sezione stessa, varia solo sezione per sezione.

Abbiamo ricavato un legame costitutivo, partendo da un legame per la singola fibra.

Il legame prende la stessa forma del legame per i corpi rigidi perché descrive lo stesso un legame tra una cinematica lineare rappresentata da $\underline{\underline{B}}$ e una relazione elastico lineare rappresentata da $\underline{\underline{D}}$.

Calcolando $\underline{\underline{K}}$ troviamo che è:
$$\underline{\underline{K}}_{sez} =\int\limits_{A}^{} \begin{bmatrix}
\frac{E}{1-v^{2}}& \frac{E}{1-v^{2}}y & 0 \\
\frac{E}{1-v^{2}}y & \frac{E}{1-v^{2}}y^{2} & 0 \\
0  & 0 & G
\end{bmatrix} \, dA $$

$\frac{E}{1-v^{2}}y$ è detto fattore di accoppiamento tra deformazione assiale e curvatura flessionale, ed è il termine che lega la deformazione assiale all'effetto della curvatura flessionale.

Visto che abbiamo preso un sistema baricentro significa che $\int\limits_{A}^{} y \, dA=0$, che significa che il fattore di accoppiamento si elimina. In più il sistema per sistema baricentro abbiamo che: $\int\limits_{A}^{} y^{2} \, dA=I$, dove I è il momento d'inerzia.
La matrice $\underline{\underline{K}}_{sez}$ allora sarà:
$$\underline{\underline{K}}_{sez}= \begin{bmatrix}
\frac{E}{1-v^{2}}A & 0 & 0 \\
0 & \frac{E}{1-v^{2}}I & 0 \\
0 &  0  & GA
\end{bmatrix}$$

Facendo i calcoli con questa matrice però troviamo che facciamo una sovrastima della rigidezza della trave rispetto alla realtà.

Da un punto teorico allora, quando andiamo a calcolare l'energia di deformazione elastiche del solido di DSV, usiamo la matrice di rigidezza associata al DSV:
$$\underline{\underline{K}}_{sez}^{DSV} = \begin{bmatrix}EA & 0 & 0 \\0 & EI & 0 \\0 & 0 & GA^{*} \end{bmatrix}$$
In cui $A^{*}$ è l'area ridotta di taglio di una sezione. Per un rettangolo $A^{*} =\frac{5}{6}A$.

$\underline{\underline{K}}_{sez}^{DSV}$ è globalmente più flessibile della matrice che abbiamo ricavato con il nostro approccio rigoroso, questo non significa che quella che abbiamo ricavato è inutile, infatti nel caso in cui la nostra matrice non è isotropa, o omogenea o elastico lineare, la matrice $\underline{\underline{K}}$ che troviamo in quel caso sarà l'unica matrice che avremo.
## Equazione della Linea Elastica

Possiamo usare la matrice della rigidezza con un approccio stile MDS, per ricavare una soluzione al problema della linea elastica.

### Metodo degli Spostamenti

Nell'MDS, prima imponiamo il legame costitutivo e la congruenza, poi troviamo l'equilibrio e infine scriviamo tutto in funzione degli spostamenti che ci interessano.


Con questo approccio allora, imponendo il legame costitutivo e la congruenza, avremo che:
$$\begin{gather}
N = EA\cdot \eta = EA\cdot U' \\
M = EI\cdot \chi = -EI\cdot \varphi' \\
T = GA^{*} \cdot t = GA(v'-\varphi)
\end{gather}$$
L'equilibrio ci dice che:
$$\begin{align}
N' + n =0  &\to (EAU')'+n=0\\
M'-T=0 &\to -(EI\varphi')' - GA^{*} (v'-\varphi)= 0\\
T'+p = 0 &\to [GA^{*} (v'-\varphi)]' + p =0 \\
\text{+ condizioni al}&\text{ contorno scritte in base a } v, U \text{ e }\varphi 
\end{align}$$
Se il materiale è omogeneo (che in questo caso lo è), si può tirare fuori EA della derivata nella prima equazione visto che non varierà.

Vediamo in più che non c'è legame tra il problema assiale e quello flessionale, sono completamente disaccoppiati. Questo significa si può ricavare $U'$ indipendentemente delle altre due equazioni.

Nel caso in cui la trave non omogeneo o non è simmetrico intorno all'asse, non sarebbero più indipendenti, questo è perché l'allungamento differenziale tra diverse parti della sezione della trave causerebbe un'inflessione nella trave.

In questo caso, date tutte le ipotesi il problema flessionale che stiamo considerando è quello della linea elastica generale, quindi lo risolviamo.

Dalle equazioni di equilibrio che abbiamo ricavato, vediamo che il problema flessionale è composto da problema di derivata ordinaria.

Le equazioni che abbiamo sono:
$$\begin{gather}
-(EI\varphi')' - GA^{*} (v'-\varphi) = 0 \\
[GA^{*} (v'-\varphi)]' + p =0
\end{gather}$$
Dalla prima equazione vediamo che possiamo definire la parte nella derivata della seconda equazione, quindi la riscriviamo come:
$$-(EI\varphi')'' + p =0 \to(EI\varphi')''=p$$
La prima equazione la possiamo riscrivere come:
$$GA^{*} v'-GA\varphi = -(EI\varphi')' \to v' = \varphi - \frac{1}{GA}(EI\varphi')'$$

Da qui i due passi rimasti per risolvere la linea elastica:
1. Calcolare $\varphi$ derivata da p
2. Calcolare v derivata da $\varphi$ che abbiamo calcolato.

#### Esempio

Facciamo un esempi dello sviluppo per gli ultimi due passi:
<!Diagramma problema esempio>

Il primo passo è di ricavare $\varphi$
Le equazione che abbiamo sono:
$$EI \varphi''' = p \to \varphi''' = \frac{p}{EI}$$
Integrando troviamo:
$$\begin{gather}
\varphi'' = \frac{p}{EI}x+a_{2} \\
\varphi' = \frac{1}{2} \frac{p}{EI}x^{2}+a_{2}x+a_{1} = 0 \\
\varphi = \frac{1}{6} \frac{p}{EI}x^{3} + \frac{a_{2}}{2}x^{2}+a_{1}x+a_{0}
\end{gather}$$

Per trovare i coefficienti e risolvere queste equazioni dobbiamo definire 4 condizioni di contorno che saranno:
$$\begin{gather}
v_{a} =v(0) = 0 \\
\varphi_{a} = \varphi(0) = 0 \\
M_{B} = M(l) = 0 \\
T_{B} = T(l) = 0
\end{gather}$$
Direttamente possiamo dire che: $\varphi(0)=0 \implies a_{0}=0$
M e T non ci piacciono perché non li abbiamo direttamente nelle nostre equazioni, quindi li riscriviamo in funzione di $\varphi$.
Usiamo la congruenza interne e i legami per definire:
$$\begin{gather}
 M = EI\chi = -EI\varphi'
\end{gather}$$
Se $M(l) = 0\implies -EI\varphi'(l)=0 \implies \varphi'(l)= 0 \leftrightarrow M_{B} = 0$

$T = M'$, con $T_{B}= 0 \iff \varphi''(l) = 0$
Possiamo allora trovare la seconda costante: $\frac{pl}{EI}+a_{2} = 0 \to a_{2} = -\frac{pl}{EI}$

Con questo possiamo trovare la terza costante: $\varphi'(l) =0 \to \frac{1}{2}\frac{pl^{2}}{EI}-\frac{pl^{2}}{EI}+a_{1}=0 \to a_{1} = \frac{pl^{2}}{EI}$

Per finire il primo passo troviamo $\varphi(x)$ come:
$$\varphi(x) = \frac{pl^{3}}{EI}\left[ \frac{1}{6}\left( \frac{x}{l} \right)^{3}-\frac{1}{2}\left( \frac{x}{l} \right)^{2}+\frac{1}{2} \frac{x}{l} \right]$$
Il secondo passo è di trovare $v$ con $\varphi$, e integrando la seconda equazione dell'equilibrio troviamo che:
$$v(x) = \frac{pl^{4}}{EI}\left[ \frac{1}{24} \left( \frac{x}{l} \right)^{4}-\left( \frac{x}{l} \right)^{3}+\frac{1}{4}\left( \frac{x}{l} \right)^{2} \right]- \frac{pl^{2}}{GA^{*} }\left[ \frac{1}{2}\left( \frac{x}{l} \right)^{2}-\frac{x}{l} \right]+C$$
Per la prima condizione di contorno abbiamo che: $v(0)=0 \iff C=0$

Allora troviamo lo spostamento trasversale in v come:
$$v_{B}= v(x=l) = \underbrace{ \frac{pl^{4}}{EI}\cdot \frac{1}{8} }_{ v_{b}^{(M)} }+\underbrace{ \frac{pl^{2}}{GA^{*} }\cdot \frac{1}{2} }_{ v_{b}^{(T)} }$$
La prima parte dello spostamento, da $\frac{1}{EI}$, è il contriubuto della deformabilità flessionale allo spostamento. La seconda parte, da $\frac{1}{GA^{*}}$, invece è il contributo della deformabilità tagliente allo spostamento di B. 

Possiamo trovare un rapporto tra l'effetto del taglio e del momento, riscrivendo come:
$$ = \frac{1}{8} \frac{pl^{4}}{EI}( 1+\underbrace{ \frac{EI}{GAl^{2}} }_{ \frac{v_{b}^{(T)}}{v_{b}^{(M)}} }\cdot4 )$$

Prendendo per esempio una sezione rettangolare:
$$\begin{gather}
\frac{E}{G} = 2(1+\nu) \\
I = \frac{1}{2}bh^{3} \\
A^{*} = \frac{5}{6} bh \\
\frac{v_{b}^{(T)}}{v_{b}^{(M)}} = \frac{2(1+v)\cdot \frac{1}{2}bh^{3}}{\frac{5}{6}bh\cdot l^{2}}\cdot 4  = \frac{4(1+\nu)}{5}\cdot \left( \frac{h}{l} \right)^{2} = \text{cost}\cdot \frac{1}{\Lambda^{2}}
\end{gather}$$

$\Lambda = \frac{h}{l}$ è la snellezza della trave.

Per travi di snellezza ordinaria $v_{b}^{(T)}$ è fondamentalmente trascurabile.

La rotazione al punto B è:
$$\varphi_{B} = \varphi(l) = \frac{1}{6}\cdot\frac{pl^{3}}{EI}$$
 Vediamo che nello spostamento trasversale avevamo l'influenza della deformabilità per taglio, in questo caso non entra. Per le travi snelle se ignoriamo il taglio non ha effetto sulla rotazione.
### Metodo delle Forze

Quello che abbiamo ci con il metodo simile al MDS, ci da una espressione per ogni punto della trave, che è superfluo. Usiamo il PLV e il metodo delle forze per ricavare solo l'informazione che vogliamo come abbiamo fatto nel caso delle travi rigide. Lo possiamo fare perché conosciamo già l'espressione del lavoro interno per la trave.

#### Esempio

Presa la stessa trave con le stesse forze e condizioni di contorno.

La nostra struttura reale isostatica è:

<!Diagramma trave struttura reale isostatica>

Per il PLV dobbiamo sapere le azioni interne della struttura reale, che avranno diagrammi:
<!Diagramma azioni interne di taglio e momento flettente>

Struttura fittizia C$^{*}$

<!Diagramma struttura fittizia>

In questa struttura abbiamo applicato un carico nello stesso posto, direzione e verso dello spostamento che vogliamo calcolare.

Le azioni interne avranno diagrammi:
<!Diagrammi azioni interne>

Per il PLV usiamo la statica della struttura fittizia e la cinematica della struttura reale.

$$L_{ext} = 1\cdot v_{b} = \int\limits_{0}^{l} (M^{*} X+T^{*} t) \, ds = \int\limits_{0}^{l} \left( \frac{M^{*}M}{EI} + \frac{T^{*}T}{GA^{*} } \right) \, ds = v_{b}^{(M)}+v_{b}^{(T)} $$

Per calcolare la rotazione allo stesso punto dovremmo applicare un momento nel punto, per cui le azioni interne della struttura sono:
<!Diagramma azioni interne per momento>

Il fatto che il taglio è 0 significa che la deformazione tagliente sparisce come abbiamo visto nell'approccio diretto.









