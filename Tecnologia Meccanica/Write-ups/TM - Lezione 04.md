---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 4 - 

Come la ultima lezione questo è tra le pagine 129-146 nel Groover
## Principi dei Processi di Colata 

Ci ricordiamo che la colata è il processo di riempire una cavità in una forma con metallo liquido. La forma è detta anche stampo, e può esser transitorio o permanente che si rompono e aprono rispettivamente per ritirare il grezzo appena solidificato.

La fonderia è uno dei primi processi della sequenza di produzione, questo è perché permette la produzione di forme complesse con la più facilità e costo minimo.

Near-net shape o vicino a forma finale è come la maggior parte dei pezzi che escono dal processo di fonderia possono esser descritti.

Il processo di fonderia può avere risultati molto diversi, possono esser grandi o piccoli, di qualità alta o bassa, e complessi o semplici.

Quando versato il metallo liquido respira gas dall'aria questo causa la creazione di impurezze e porosità che vogliamo evitare.

### Tassonomia di Sistemi di Colata

<!Diagramma sistema semplice a complesso>

Il sistema alla sinistra è semplice invece il sistema alla sinistra è più complesso e come la maggior parte dei nostri sistemi sembreranno.

Quando colando vogliamo versare velocemente perché non vogliamo che si solidifichi prima che vogliamo ma non possiamo versare troppo velocemente per evitare di creare troppa turbolenza che aumenta quanta aria il nostro metallo respirerà.

L'energia termica richiesta per riscaldare il metallo ad un temperature di fusione sufficiente è la somma dei seguenti termini:

 1. Il calore necessario ad aumentare la temperatura da ambiente T0
fino al punto di fusione Tm;
2. Il calore latente di fusione per convertire il metallo da solido a
liquido HLf;
3. Il calore per aumentare la temperatura del metallo fuso da Tm
affinché possa essere versato (Tc).

La equazione si per il nostro calcolo dell'energia sarà:
$$H = H_{s(T_{m}-T_{0})}+H_{Lf}+H_{L(T_{c}-T_{m})}$$
Dividendo i componenti abbiamo:

$$H = \rho V[C_{s}(T_{m}-T_{0})+H_{Lf}+C_{L}(T_{c}-T_{m})]$$
Dove $C_{s}$ è la capacità termica di solido e $C_{L}$ è la capacità termica di liquido.

## Dimensionamento del Sistema di Colata

Vogliamo sapere le dimensioni del sistema di colata, questo include il canale di colata, il canale di dispersione e gli attacchi.

Questi dimensionamenti sono generalmente basati su informazione empirica e informazione analitica.

Le pareti dalla forma sono a $T_{amb}$ , quindi inizia il raffreddamento appena viene a contatto con la forma, per questo vogliamo le dimensioni giuste per portare il più liquido possibile nella cavità, senza avere troppa turbolenza generata per questo devono esser abbastanza grandi ma non troppo.

L'obbiettivo di un sistema di colata è di permette il liquido di raggiungere tutte le parti della forma prima che inizi a solidificarsi.

Le variabili che dobbiamo considerare sono:

- $T_{\text{colata}}$, se aumenta:
	- fluidità aumenta
	- Tempo prima dell'inizio di solidificazione aumenta
	- Ma, il costo energetico aumenta
- Velocità di colata, se aumenta:
	- Riduce il rischio di solidificazione prematura
	- Si può verificare il rischio di turbolenza e dei seguenti intrappolamenti di aria ed erosioni della forma.

Per il nostro corso useremo un solo tipo di sistema di colata che è:

<!Diagramma sistema di colata>

Per dimensionare questo sistema dovremmo sapere, la area alla base del canale di colata, la area del canale di distribuzione e la area degli attacchi (triangolare).

Esistono modi per filtrare il materiale che entra nella nostra forma, si possono aggiungere separatori di peso a bacino di colata, o filtri per scoria.

<!Diagramma filtri>


## Tipi di Colata

Ci sono 3 distinti di sistemi di colata:

- Diretto
- Sorgente
- In piano

<!Diagramma tipi di colata>

Il sistema di colata diretto detto anche per gravità porta il metallo liquido dall'alto in basso e riempie la forma per gravità. Il sistema in sorgente, porta il metallo liquido in basso per poi riempirlo dal basso verso l'alto, questo sistema è più controllabile. Il sistema di colata in piano è un misto dei due, una parte viene riempita in modo diretto e l'altra in sorgente.

## Dimensionamento di ogni tipo

La legge della continuità ci dice che la portata Q e costante nel tempo:
$$Q = vA = cost\implies v_{1}A_{1}=v_{2}A_{2}$$
<!Diagramma legge continuità>

La legge di Bernoulli ci dice invece:

$$h + \cancel{ \frac{P}{g\rho} }+\frac{v^{2}}{2g} = cost$$
Viene cancellato perché consideriamo la pressione costante. 

### Colata Diretta

<!Diagramma colata diretta>

Applicando al sistema di colata diretta troviamo:

$$\begin{gather}
h_{1}+\frac{v_{1}^{2}}{2g} = h_{2}+\frac{v_{2}^{2}}{2g} \\
\text{Dati }h_{2}\text{ e }v_{1} =0 \\
\implies v_{2} = \sqrt{ 2gh_{1} } \\
h_{1} = H_{\text{gravità}} \\
v_{2} = \sqrt{ 2gH_{\text{gravità}} }
\end{gather}$$

### Colata in Sorgente

<!Diagramma colata in sorgente>

Al punto più basso si ha:
$v_{2} = \sqrt{ 2gh_{1} }$

Invece al punto più alto della cavità:

$v_{2f} = \sqrt{ 2g(h_{1}-b) }$

La velocità media sarà:

$v_{m} = \sqrt{ 2gH_{\text{sorgente}} } \to H_{\text{sorgente}} = \left( \frac{\sqrt{ h_{1} }-\sqrt{ h_{1}-b }}{2} \right)^{2}$

### Colata in Piano

<!Diagramma in piano>

Prendiamo $r'$ come la porzione di volume riempita in sorgente e $r''$ la porzione di volume riempita per gravità.

Cioè:
$$\begin{gather}
r' = \frac{v'}{v_{tot}} \\
r'' = \frac{v''}{v_{tot}} \\
v_{tot} = v'+v''
\end{gather}$$

Troviamo che:
$$v_{2} = \sqrt{ 2gH_{\text{piano}} }$$
$$\sqrt{ H_{\text{piano}} } = \frac{1}{\frac{r'}{\sqrt{ H_{\text{gravità}} }}+\frac{r''}{\sqrt{ H_{\text{sorgente}} }}}$$

## Canale Cilindrico o Conico

Per l'equazione $v_{1}A_{1}=v_{2}A_{2}$ troviamo che il cilindro conico è meglio, questo è perché mentre il metallo cade, la sezione diminuisce naturalmente, con la forma conica il fluido aderisce alla pareti meglio e crea punti dove l'aria di potrebbe intrappolare.

## Dimensionamento colata

Troviamo il tempo ideale, cioè il tempo minimo di colata con l'equazione:

$$T_{MF} = \frac{G}{\rho A_{s}v}$$
Dove G è il peso materiale, $A_{s}$ è la area minore attraverso cui il liquido deve passare e $v$ è la velocità che abbiamo appena visto.

Ovviamente non arriveremo mai al tempo ideale per perdite di carico ma è quello che possiamo usare per fare i nostri calcoli.

Per compensare per le perdite di carico, la velocità in questa equazione ha avuto un coefficiente aggiunto, e allora diventa:
$$v = c\sqrt{ 2gH }$$
c dipende dalla aree, se le area attraverso cui il fluido passa sono successivamente più piccole diciamo che il sistema è pressurizzato, se invece le aree diventano più grandi, allora è detto non pressurizzato.

## Principi di Solidificazione di metalli puri

Ci sono diversi aspetti nella solidificazione dei metalli:
- tempo di solidificazione
- i fenomeni di ritiro
- La solidificazione direzionale
- La progettazione della materozza

Un metallo puro ha una linea di raffreddamento così:
<!Diagramma linea di raffreddamento>

Dove il metallo mantiene la stessa temperatura durante la solidificazione.

### La solidificazione

Prima di versare il metallo, lo abbiamo alla temperatura di colata la nostra forma è a temperatura ambiente

<!Diagramma t =t0>

Appena inizia la colata, il primo materiale che tocca la forma si solidifica quasi istantaneamente. La velocità di solidificazione è così alta che i grani hanno tempo per nucleare ma non crescere, questo significa che il primo strato è una pelle di grani fini equiassiali.

<!Diagramma prima solidificazione>

Quando più materiale inizia a solidificarsi, i grani hanno un'po' di tempo per crescere. Dato il gradiente di calore, questi grani crescono prevalentemente nella direzione di questo gradiente. Questo è un strato di grani colonnali.

<!Diagramma seconda solidificazione>

In fine il materiale all'interno non ha un gran gradiente di calore, e ha molto tempo per solidificare in grani grandi ed equiassiali.

<!Diagramma grani grandi>

In fine la struttura avrà un forma come:

<!Diagramma strati di grani>

Questa struttura è disomogenea e perciò probabilmente serviranno trattamenti termici per omogeneizzarla.

Un'altro modo per migliorare la struttura sarebbe di diminuire gli spessori ma in molti casi questa non è una possibilità, e anche li è molto comodo sottoporre a trattamenti termici.






