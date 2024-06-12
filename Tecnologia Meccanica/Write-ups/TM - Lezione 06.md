---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 6 - 

## Ripasso
Le materozze chiudono la direzione di solidificazione su se stesse. Decidiamo posizioni basta sul tempo di solidificazione di diverse parti del pezzo.

La variabile principale che possiamo controllare oltre il materiale che fondiamo per trovare il tempo di solidificazione è il modulo termico che ha equazione:
$$M_{x} = \frac{\text{Volume}}{\text{Superfice di scambio}}$$
La equazione per il tempo di solidificazione è:
$$T_{TS} = C_{m}\cdot M^{n}$$
Abbiamo visto tutto questo ieri.

### Ritiro
Durante i processi di raffreddamento occorre un ritiro volumetrico e poi un ritiro lineare del materiale.

Il ritiro volumetrico percentuale occorre durante le solidificazione ed è risolto con una materozza.
Il ritiro lineare percentuale occorre durante il raffreddamento del solido ed è risolto con un sovradimensionamento del pezzo.

## Ruolo della materozza

Se non ci fossero le materozze nella nostra cavità si svilupperebbero macrocavità date dal ritiro del materiale all'interno del pezzo, come visto qui:

<!Diagramma diagrammi ritiro>

Un esempio reale lo possiamo vedere qui:

<!Immagine ritiro interno vero>

Dato per esempio un forma a scalino, la materozza deve esser più grande e di un fattore della forma e viene posto in alto, perché cosi ci arriva il materiale colato per ultimo e si raffredderà per ciò per ultimo. Se non ci fosse si creerebbe una cavità in cima alla parte del grezzo più grande.

<!Diagramma esempio scalino>

Aggiungiamo coefficienti di sicurezza per ogni parte, le parti che ci aspettiamo solidifichino per primi il coefficiente sarà 1,1, invece per parti che pensiamo che si solidificherà per ultimo usiamo 1,2 e cosi possiamo avere un buona idea.

## Difetti

Ci sono 3 tipi di difetti di cui ci dobbiamo preoccupare durante la colata. Il primo tipo di difetto sono le cavità interne macroscopiche generate durante il ritiro del metallo dato dalla solidificazione, abbiamo già parlato di questo quindi non verrà scritto di nuovo.

### Microporosità (da ritiro)

Il secondo difetto possibile è la microporosità create nelle dendriti.
Come detto quando abbiamo parlato delle dendriti, quando hanno abbastanza tempo di sviluppare le dendriti intrappolano tra i loro rami, questi non hanno modo per uscire, quindi quando anche loro si inevitabilmente solidificano si creano microcavità interne date dal ritiro di ognuna delle parti intrappolate.

![](Pasted%20image%2020240302203926.png)

Ci sono 2 modi per contrastare lo sviluppo delle dendriti:
1. Riduzione di t di solidificazione e intervallo liquidus e solidus
2. Sperimentalmente è connesso alla materozza, può riempire queste perché riesce a spingere liquido con molta pressione

### Microporosità (a gas)

Le microporosità a gas sono microporosità causate dalla respirazione da metalli liquidi di gas nell'aria. Quando questi metalli solidificano, la solubilità dei gas nei metalli diminuisce, questo spinge fuori i metalli e causa la coalizzazione di essi in bolle che non possono uscere data la solidificazione contemporanea del metallo, quindi formano microporosità interne al metallo:

<!Diagramma solubilità>

Ci sono modi per evitare queste microporosità:
- riempire lo spazio di argon
- legare con disossigenanti che possono esser rimossi senza problema.
- Applicazione di pressione del pezzo dopo solidificazione $\to$  comprime i pori

L'unico problema è tutti questi comportano costi.

## Dimensionamento sistema di alimentazione

Per il dimensionamento settiamo due variabili che ci importano x e y:

$$x = \frac{M_{m}}{M_{p}}>1$$
$$y = \frac{V_{m}}{V_{p}}$$

In questo caso $M_{p}$ è il modulo termico del pezzo totale o la parte che solidifica per ultima, qualsiasi è meglio applicabile.

Per determinare questi due valori usiamo il diagramma di Caine:

<!Diagramma Caine>

La linea divisoria tra dimensionamenti buoni e non buoni è definita dalla relazione:
$$Y \geq \frac{a}{x-c}+b$$

a $\to$  basato sul materiale (e.g. acciaio 1,1)
b $\to$ ritiro volumetrico in solidificazione
c $\to$ rapporto tra velocità di raffreddamento di grezzo e materozza o contatto con forma, se sono la stessa forma c = 1, se no allora c$\neq$ 1

I casi limiti sono:
$x \to \infty \implies y \to b$ 
$y\to \infty \implies x\to c$

Guardando il grafico vediamo che per qualsiasi valore di x, è possibile avere infiniti valori di y. Quello che dobbiamo scegliere per y è un valore che ci completa tutti i requisiti ma non va troppo oltre la linea, per non sprecare le nostre risorse.

### Come scegliere $V_{m}$?

Le forme di della materozza sono limitate, tra tante opzioni ci sono:
- cilindriche
- semi-sferiche
- meta cilindro-sfera
- cilindro esteso

<!Diagramma forme materozza>

Le materozza possono esser anche di due famiglie:
- celo aperto
	- hanno liquido a contatto con l'ambiente
- cieche $\to$ sono a contatto con la forma
	- tendenzialmente avranno una calotta semisferica
	- C'è una spina in terra porosa che mantiene la pressione atmosferica, se no ci sarebbe una depressione interna alla cavità

Noi useremo solo a materozze cilindriche e dimensioneremo quelle.

<!Diagramma cilindro e inverso>

Il valore $\delta$ è la relazione tra la altezza e diametro del cilindro, dove:
$$H = \delta D$$

Dato che:
$$\begin{gather}
M_{m} = \frac{V_m}{S_{m}} = \frac{\frac{\pi}{4}D^{2}H}{\pi DH+\frac{\pi}{4}D^{2}} = \frac{DH}{4H+D}=\frac{D\delta}{4\delta+1} \\
D =\frac{4\delta+1}{\delta} M_{m} \text{ ma } M_{m} = xM_{p} \\
\implies y = \frac{V_{m}}{V_{p}} = \frac{\frac{\pi}{4}\delta}{V_{p}}D^{3} = \frac{\frac{\pi}{4}\delta}{V_{p}}\cdot \frac{(4\delta+1)^{3}}{\delta^{3}}M_{m}^{3}= \frac{\pi}{4} \frac{M_{p}^{3}}{V_{p}} \frac{(4\delta+1)^{3}}{\delta^{2}}x^{3} \\
\implies y = kx^{3}
\end{gather}$$

Vediamo allora che y con $\delta$ fisso ha una lezione cubica con x, per questo quello che faremo è scegliere il valore che $\delta$ e x per poi trovare y.

Minimizzando questa ultima ultima equazione troviamo che il valore di y allo stesso valore di x è quando $\delta =\frac{1}{2}$ 

Possiamo tracciare le isodelta di questa funzione nel grafico per vedere questo ultimo punto:

<!Diagramma isodelta>

La altezza può esser più alta per condizioni costruttive della forma, per questo a non prendiamo direttamente $\delta=.5$. Ci sono molti criteri per cui possiamo non scegliere $\delta=.5$, pero sappiamo che 0.5 è il valore con "waste" minore.

### Valore di c

<!Diagramma cavità con pareti>

Le cavità si realizzano con modelli in legno con la forma finale voluta più le parti ausiliarie.

Il valore c è dato dal materiale che incapsula la materozza e la sua velocità di trasmissione di calore rispetto alla velocità di trasmissione della forma, se la forma e la materozza sono incapsulate dallo stesso materiale, allora c = 1, se invece la materozza è incapsulata da materiali termoisolanti, allora c $<1$.

Prendiamo per esempio un pezzo dove, x=1,3, a=1,1, $\delta=1,5$.

Se immaginiamo di aver trovato H e D, ma H è troppo alta per le staffe che abbiamo in magazzino, possiamo aumentare D per compensare. Se anche D è inibito dalla forma della cavità, possiamo togliere la sabbia che avrebbe incapsulato la materozza e mettere un materiale termoisolante, questo diminuirebbe c permettendo valori minori di y tale per soddisfare le condizioni.

<!Diagramma curva cambiata per c cambiato>

Con materiali isolanti si può diminuire il volume o altezza e mantenere gli da quando non c'era il materiale.

## Raggio di Influenza

Ogni materozza ha un raggio di influenza dentro a cui la struttura è più omogenea.

Caine non ci può dire quante materozze ci può solo dire quale volume darle.

Il raggio di influenza è determinato in modo empirico , per esempio con le piastre il raggio di influenza è 3 volte lo spessore della piastra:

<!Diagramma raggio di influenza>

Aggiungendo una seconda materozza si riduce il volume del pezzo, quindi si può diminuire la loro dimensione, si riciclano questi passi per trovare la forma adatta per il progetto

<!Diagramma 2 materozze.>





