---
creation_date: 2024-02-11 14:02
tags:
  - MF
share: true
---
# Lezione 10 - Perdite di Carico locali e distribuite

Vogliamo trovare come cambia il cadente energetico al variare della portata volumetrica.

Sperimentalmente è stata trovata l'equazione di Darcy-Weisbach:
$$J = \lambda  \frac{U^{2}}{2gD}$$
Il problema ora è di trovare com cambia $\lambda$, l'indice di resistenza, in base alla velocità del moto nella condotta.
Per fare questo trovare una relazione in base al numero di Reynolds, permettendoci di differenziare tra il caso laminare e il caso turbolento.

## Abaco di Moody

Per trovare una rappresentazione grafica di questo cambio possiamo usare l'Abaco di Moody.

<!Diagramma Abaco di Moody>

Vediamo alla sinistra il caso laminare, in cui troviamo una relazione lineare tra $\lambda$ e $Re$, numero di Reynolds.

Alla destra invece vediamo una forma diversa di andamento. Nel caso turbolento la scabrezza del tubo ha impatto sull'andamento sull'indice di resistenza. Nel caso del moto laminare la relazione tra l'indice di resistenze ed il numero di Reynolds è: $\lambda = \frac{64}{Re}$.

Nel caso liscio vediamo che c'è un andamento lineare, all'aumentare della scabrezza ($\mathcal{E}$) abbiamo una appiattimento ad un livello progressivamente maggiore. Possiamo disegnare una lineare lineare dove alla sinistra l'indice di resistenza tra decrescendo all'aumentare di $Re$ e alla destra dove l'indice di resistenza rimane piatto. Denotiamo la regione alla sinistra come moto turbolento di transizione e alla destra moto turbolento permanente.

Tra il laminare e il turbolento c'è un moto di transizione che non possiamo spiegare completamente.
### Scabrezza

La scabrezza è un proprietà della superficie della condotta. Fare passare del fluido in un tubo liscio o scabro richiede un costo energetico diverso. Durante la vita di un tubo questa scabrezza varia.

Per valutare usiamo la scabrezza equivalente ($\mathcal{E}$), questa non è la scabrezza media ma la altezza di queste variazioni microscopiche che da la stessa dissipazione energetica del tubo che stiamo guardando.

Ci sono varie equazione che possiamo usare per trovare il valore di $\lambda$.

Nel caso del tubo liscio l'equazione è:
$$\frac{1}{\sqrt{ \lambda }} = -2\log_{10}\left( \frac{2.51}{Re\sqrt{ \lambda }} \right)$$

Nel caso del moto turbolento in transizione usiamo l'equazione di Colebrook-White:
$$\frac{1}{\sqrt{ \lambda }}=  -2 \log_{10}\left( \frac{2.51}{Re\sqrt{ \lambda }}+\frac{\mathcal{E}}{3.71D} \right)$$
Vediamo che da questa equazione possiamo ricavare l'equazione del tubo liscio ponendo $\mathcal{E}=0$.

Nel caso di moto turbolento invece usiamo l'equazione di Prandtl-Von Karman che è:
$$\frac{1}{\sqrt{ \lambda }} = -2\log_{10}\left( \frac{\mathcal{E}}{3.71D} \right)$$
Vediamo che questa equazione è la stessa dell'equazione di Colebrook-White ma dato che $Re$ è diventato molto grande diciamo che possiamo azzerare quel termine.

Al cresce di $\mathcal{E}$ cresce $\lambda$ e al crescere di $\lambda$ crescono le perdite di $J$.

Nel flusso laminare non importa la scabrezza perché il fluido viaggia abbastanza lentamente che l'effetto della scabrezza è trascurabile.

### Perché ci sono distacchi progressivi dall'andamento del tubo liscio?

Nel moto turbolento, vicino alla parete abbiamo lo stesso uno strato piccolo di moto laminare, detto substrato limite laminare. Questo strato è definito dove gli sforzi di attrito sono prevalentemente causati dalla viscosità del fluido, questo succede vicino al tubo.

<!Diagramma rappresentazione grafico>

All'aumentare della velocità e perciò della turbolenza, vediamo che gli sforzi di attrito diventano meno trascurabile.

Lo stato di moto laminare agisce a coprire la scabrezza. Nel caso in cui la scabrezza e completamente sommersa da moto laminare, questo significa che il moto turbolento non risente dei sui effetti quindi agisce come se fosse un tubo liscio, diciamo che è idraulicamente liscio.  Questa è la ragione per cui ogni braccio segue la lineare del tubo liscio.

Il braccio si distacca dalla linea del tubo liscio quando lo strato laminare diventa abbastanza ridotto dalla turbolenza affinché non venga più ricoperto completamente, questo significa che la parte turbolenta del fluido ne risente dei vuoi effetti quindi inizia a deviare dall'andamento del tubo liscio, questo è il distacco.

Quando la turbolenza è aumentata sufficientemente la scabrezza è completamente esposta al moto turbolento, da questo punto il suo effetto sul moto non può più aumentare, questa è l'appiattimento rispetto a $Re$.

La linea di transizione non è effetto solo di $Re$ ma anche la sua combinazione con $\mathcal{E}$. Definiamo la sua dipendenza da $Re$ allora ma da:
$$Re^{*}  = \frac{u_{{*} }\mathcal{E}}{\nu} = \frac{\rho u_{*}\mathcal{E}}{\mu}$$
$Re^{*}$ è il numero di Reynolds di attrito, e $u_{*}$ è la velocità di attrito che ha equazione $u_{*} = \sqrt{ \frac{\tau}{\rho} }$, dove $\tau$ è lo sforzo alla parete.

Quando $Re^{*}$ è minore di 70, si è nella zone di moto turbolento di transizione, invece quando è maggiore di 70, si ha moto perfettamente turbolento.

Possiamo vedere che le perdite di carico sono lineari per portate volumetriche basse e non-lineari per portate alte:
<!Diagramma perdite vs portate>

Nel caso laminare le perdite sono lineari perché:
$$J \sim \frac{1}{V}\cdot V^{2} \sim V \sim Q$$
Abbiamo l'$\frac{1}{V}$ perché $\lambda = \frac{64}{Re}$ dove Re e proporzionale alla velocità quindi $\lambda \sim \frac{1}{V}$.

Nel caso turbolento invece:
$$J \sim V^{2}$$
Questo non è lineare, perché:
$$\frac{1}{\sqrt{ \lambda }} = -2\log\left( \frac{\mathcal{E}}{3.71D} \right)$$
In questo caso non c'è relazione tra $J$ e V, quindi rimane proporzionale alla quadrato della velocità media.

Nel zone di transizione non è cosi chiara la relazione.

Usando l'Abaco di Moody possiamo, in base a qualsiasi condizione di moto, possiamo ricavare le loro perdite di carico.

## Perdite di Carico Localizzate/Concentrate

Le perdite di carico localizzate sono le perdite non proporzionali alla lunghezza, sono locali. Queste perdite sono date data discontinuità geometriche, cambi di sezione e presenza di strumenti di misure. 

Noi in questa lezione guardiamo le perdite per cambio di sezione.

### Allargamento brusco della sezione

Il primo esempio che guardiamo è la espansione immediata della sezione:
<!Diagramma espansione della sezione>

Nel fluido vediamo che saranno presenti zone di vortici di fluido circolante, a causa delle perdite di carico locali. Le perdite sono date date dallo strisciamento con questo fluido.

Il punto dove il fluido ritorna ad esser CGV e anche dove la vena di fluido si riattacca alla parete, ed è detto il punto di riattacco.

Per semplicità prendiamo la lunghezza di questa zona come 0. Lo prendiamo anche perché la dimensione rispetto alla dimensione delle condotte è piccola.

Prendiamo il volume di controllo in questa zona di distacco e aggiungiamo anche i vettori delle forze dinamiche:
<!Diagramma zona di circolo>

$\underline{\Pi}_{3}$ è quella forza che agisce sulla ciambella della sezione espansa.

L'equilibrio orizzontale allora sarà:
$$\rho QV_{1}-\rho QV_{2}+p_{1}A_{1}-p_{2}A_{2}+p_{1}(A_{1}-A_{2})=0$$
Nella sezione della ciambella la pressione è $p_{1}$, lo possiamo vedere perché il baricentro è lo stesso del tubo alla sinistra.

Possiamo trovare il cambio di carico come:
$$\Delta H = \left( z_{1}+\frac{p_{1}}{\gamma}+\frac{V_{1}^{2}}{2g} \right)-\left( z_{2}+\frac{p_{2}}{\gamma}+\frac{V_{2}^{2}}{2g} \right) = \frac{\alpha(V_{1}-V_{2})^{2}}{2g}$$
L perdite di carico concentrata nel caso di brusco allargamento sono note come perdite di Borda.

Per il moto turbolento sappiamo che $\alpha=1$.

La pendenza dopo il brusco allargamento di sezione, $J_{1}$, può dipende però tende ad esser minore per la minore V.
Graficamente applichiamo la perdite al punto dove la espansione brusca occorre:
<!Diagramma LCT e LP per allargamento brusco>

La pressione diminuisce lungo la lunghezza del volume di controllo, ma visto che il fluido non è CGV, non possiamo fare una rappresentazione unica del LP.
Dopo il brusco allargamento la distanza tra LCT e LP è minore perché la velocità e diminuita.

### Altri casi di Allargamento

#### Allargamento Progressivo

Per l'allargamento progressivo le linee LCT e LP le disegniamo come:
<!Diagramma LCT e LP>

La perdita di carico è:
$$\Delta H = m\alpha  \frac{(V_{1}-V_{2})^{2}}{2g}$$
$m$ è il coefficiente di Gibson, in questo caso $m<1$ che significa che ci sono perdite ma sono più piccole rispetto al caso brusco.

#### Allargamento Immenso

Un allargamento immenso della sezione è effettivamente lo stesso di un fluido che entra in un serbatoio gigante. Significa che tutta la velocità è persa.

La LP va direttamente alla linea del fluido. La LCT anche lei va alla linea del fluido ma questo è dopo la perdita di carico.

<!Diagramma LCT e LP per allargamento immenso>

La perdita di carico è:
$$\Delta H = \alpha  \frac{V^{2}}{2g}$$

### Contrazione di Sezione

La contrazione di sezione è diversa rispetto all'allargamento della sezione, il profilo del fluido è:
<!Diagramma fluido contrazione del fluido>

Vediamo che dopo la contrazione della sezione, è presente un ulteriore contrazione contrazione della vena del fluido, portando ad un punto noto come un uncino di fluido. Questo uncino è il punto dove la velocità raggiunge il suo massimo e la pressione il suo minimo. Dopo questo uncino, il fluido si riattacca alle pareti della condotta tornando ad esser un fluido CGV.

La linee LCT e LP prendono forma:
<!Diagramma LCT e LP>

Come prima quando il fluido è in fase ci cambio della dimensione della sezione non è CGV, quindi non possiamo tracciare una singola LP. Per ciò tracciamo un andamento generale, che prende un minimo all'uncino e poi ritorna all'andamento normale.

Perché abbiamo ridotto la sezione, la velocità dopo sarà maggiore della velocità prima quindi la pendenza sarà maggiore.

La perdita di carico sarà:
$$\Delta H = k\alpha  \frac{V_{2}^{2}}{2g}$$
Con $k=0.5$ quando $\frac{D_{1}}{D_{2}} \geq 2$.

### Imbocco da serbatoio (Contrazione Immensa)

Se abbiamo una contrazione immensa possiamo agire come se avessimo un imbocco da un serbatoio. La contrazione immensa significa che $D_{1}1 \gg D_{2}$ quindi avremo $k=0,5$

La perdita di carico allora sarà la stessa di quella prima.
Anche l'andamento sarà un uguale, solo prima della perdita la LP e LCT saranno al livello del fluido invece di avere una andamento lineare non costante.

### Raggio Raccordato

In un raggio raccorda la perdita di carico è 0, l'andamento della LCT e LP allora sarann:
<!Diagramma LCT e LP raggio raccordato>

In questo caso prendiamo il punto dove il fluido diventa CGV alla parete verticale del serbatoio, l'LP non è CGV prima di questo punto quindi prendiamo un andamento generale che tende alla linea del fluido.

### Imbocco con tubo addizionale interno

La forma di questo tubo è:
<!Diagramma imbocco con tubo addizionale interno>

La perdita di carico è:
$$\Delta H = 1.16 \alpha  \frac{V^{2}}{2g}$$

### Restringimento Progressivo

Il restringimento progressivo ha perdita di carico nulla.

## Impianto Completo

Negli impianti mettiamo tutte queste forme insieme per capire per capire le forze in azione poter progettare appropriatamente i sistemi di supporto per la condotta.

Prendiamo il caso più semplice di impianto, due serbatoi con un tubo tra i due. Mettendo insieme tutto quello che abbiamo visto, possiamo tracciare le linee LCT e LP di questo sistema:

<!Diagramma esempio impianto completo>

Da qui possiamo ricavare una equazione di moto. La equazione di moto è una equazione che rappresenta la LCT, è il principio per cui l'impianto dissipa energia.

In questo caso l'equazione di moto è:
$$z_{1}-z_{2} = 0.5 \alpha  \frac{V^{2}}{2g}+JL+ \alpha  \frac{V^{2}}{2g}$$

La condizione di equilibrio degli impianti è che dissipano tutta l'energia che gli diamo in forma di energia potenza.

Ci sono 3 tipi di esercizi che possiamo avere da questo tipo di problema. I primi due sono il ricavo di $z_{1}$ o $z_{2}$, l'altro invece è il ricavo di $V$.

Prendiamo il caso in cui $z_{1}$ o $z_{2}$ sono incognite.

Preso $z_{2}$ e $Q$ noti, cos'è $z_{1}$?

La velocità ha equazione:
$$V = \frac{Q}{\frac{\pi D^{2}}{4}}$$
Da qui possiamo ricavare il numero di Reynolds, per cui avremo:
$$Re = \frac{\rho VD}{\mu}$$

Se è minore di 2000, il moto è laminare quindi $\alpha = 2$ e $\lambda=\frac{64}{Re}$. Invece se è maggiore di 2000, sappiamo che $\alpha=1$, e nota la scabrezza e il numero di Reynolds possiamo ricavare $\lambda$ dall'abaco di Moody.

Da qui possiamo isolare V.

La equazione di moto è equivalente a $\tau \sim \frac{ \partial p }{ \partial x }$. La stessa energia che abbiamo la dissipiamo.



























