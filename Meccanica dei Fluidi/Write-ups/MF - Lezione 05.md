---
creation_date: 2024-02-11 14:02
tags:
  - MF
share: true
---
# Lezione 5 - Tubo di Pitot, Processi di Afflusso e Studio di Fluido Reali

## Tubo di Pitot
La prima applicazione pratica del principio di Bernoulli sono i venturimentri.

La seconda applicazione del principio di Bernoulli è il tubo di Pitot.

<!Diagramma tubo di Pitot>

Il tubo di Pitot ci permette trovare la linea di carico totale (LCT) del fluido in moto. Questo occorre perché quando la acqua entra nel tubo si stagna e il carico si trasferisce all'acqua nel suo interno, aumentando il carico rispetto al venturimetro che si fermerebbe solo alla linea piezometrica.

Se prendiamo B come il punto di stagno, ed A come un punto nella stessa linea di corrente, troviamo che:
$$\underbrace{ z_{a} +\frac{P_{a}}{\gamma}+\frac{v_{a}^{2}}{2g} }_{ LCT } = \underbrace{ z_{b}+\frac{P_{b}}{\gamma} }_{ pci }+\frac{v_{b}^{2}}{2g}$$
Al punto B la velocità diventa zero quindi troviamo che per quest'acqua il pci è uguale all'LCT del fluido.

È utile utile perché scopriamo che:

$$v_{a} = \sqrt{ 2g\left( z_{b}+\frac{P_{b}}{\gamma}-z_{a}+\frac{P_{a}}{\gamma} \right) }$$
Permettendoci allora di misurare la velocità del fluido nel tubo.

Possiamo guardare la forma microscopica del tubo di Pitot:
<!Diagramma forma microscopica del tubo di pitot>

Vediamo che ai lati abbiamo delle aperture per i piezometri, questo è fatto apposta cosi non soffrono del carico della velocità del fluido è possiamo allora fare una misura statica. Invece al centro c'è l'apertura per il tubo di Pitot.

Usiamo la ipotesi di Bernoulli in questo caso perché l'errore non è molto alto. In generale quando facciamo misure su piccole quantità di fluido come stiamo facendo qui con l'ipotesi di Bernoulli non abbiamo molto errore e non ci facciamo problemi di usare equazioni molto complicate.
## Processi di Afflusso
I processi di afflusso sono processi di uscita di fluido da contenitori, sia nello spazio libero che nello spazio.
### Caso 1 - Buco nel serbatoio con apertura raccordata
<!Diagramma caso 1>

Facciamo l'ipotesi di avere un serbatoio infinito per poter considerare il fluido permanente. Prendiamo un punto A dove la velocità del fluido è approssimabile a 0 e un punto B sulla sezione nel buco. 
Visto che questa sezione è al confine del serbatoio possiamo allora determinare che la pressione relativa al punto B sia 0, questo sarà vero per ogni B, perché in quella sezione le correnti sono lineari.

Possiamo scrivere allora che:
$$z_{a}+\frac{P_{a}}{\gamma}+\cancel{ \frac{v_{a}^{2}}{2g} } = z_{b}+\cancel{ \frac{P_{b}}{\gamma} } + \frac{v_{b}^{2}}{2g}$$
$$v_{b} = \sqrt{ 2g\left( \underbrace{ z_{a}+\frac{P_{a}}{\gamma}-z_{b}  }_{ h }\right) } \to \text{Velocità torricelliana}$$

Più alto è il battente più veloce è la discesa del pelo libero e più massa esce.

Possiamo calcolare allora la portata volumetrica:
$$Q = v_{b}A_{b}$$
### Caso 2 - Buco non Raccordato
<!Diagramma caso 2>

In questo caso il visto che il buco non è raccordato, le linee di corrente non possono esser lineari al buco, questo significa che diventeranno lineari ad una sezione fuori del buco. Di nuovo la pressione al punto B, dove la linee di correnti sono lineari, sarà 0, questo è perché il fluido è libero quindi al contorno c'è pressione nulla e nella sezione che guardiamo tutte le pressioni sono uguali.

In questo caso il battente è composto in due parti, la altezza del serbatoio e la distanza del buco del punto di linearità delle correnti, stiamo facendo l'ipotesi che questo sia trascurabile, perciò dobbiamo prendere un serbatoio molto alto. 
La equazioni però rimangono le stesse.

Data la ipotesi non possiamo usare la stessa formula per calcolare la portata volumetrica, dobbiamo fare:
$$Q = C_{c} \frac{\pi D^{2}}{4}\sqrt{ 2gh }$$
Dove $C_{c}$ è un coefficiente di contrazione, dato che la prima parte non è abbastanza.
### Caso 3 - Flusso Rigurgitato
Il flusso rigurgitato è quando un fluido viene spinto nello fluido stesso per differenza in pressione.

<!Diagramma caso 3>
In questo caso la sezione di contatto è verticale e sommersa, quest'ultimo fatto significa che la pressione in B non sarà nulla, ma sarà lo stesso lineare, quindi uguale su tutta la sezione.

La equazione sarà:
$$\underbrace{ z_{a}+\frac{P_{a}}{\gamma} }_{\text{pci a Sx} }+\cancel{ \frac{v_{a}^{2}}{2g} } = \underbrace{ z_{b} + \frac{P_{b}}{\gamma} }_{ \text{pci a Dx} }+\frac{v_{b}^{2}}{2g}$$
Possiamo scrivere lo stesso:
$$v_{b}= \sqrt{ 2gh }$$
Ma in questo caso il battente è la differenza nella altezza dei fluidi tra il lato a sinistra ed il lato a destra.
La portata volumetrica è:
$$Q = C_{c} \frac{\pi D^{2}}{4}\sqrt{ 2gh }$$

Sulla sezione la velocità costante perché $z+\frac{P}{\gamma}$ è costante, data la velocità nulla.
### Caso 4 - Flusso Libero di Parete Verticale
<!Diagramma caso 4>

Questo è il caso più complicato perché h non è costante.
La particelle in alto nella sezione contratta sono più lente di quelle più in basso.

Prendiamo h al centro della sezione del buco:
$$z_{a}+\frac{P_{b}}{\gamma}+\frac{v_{a}^{2}}{2g} =z_{b}+\frac{P_{b}}{\gamma}+\frac{v_{b}s}{2g}$$
$$v_{b} = \sqrt{ 2g\left( z_{a}-\frac{P_{a}}{\gamma}-z_{b} \right) }$$
Lo $z_{b}$ cambia in base al punto dove consideriamo quindi lo imponiamo noi, tale che il battente sia al centro della sezione.

Prendiamo D la dimensione del buco. Trascurando la variazione e la non-linearità delle velocità scriviamo:
$$Q = C_{c} \frac{\pi D^{2}}{4}\sqrt{ 2gh }$$
Questo non sarà un valore esatto ma una approssimazione ragionevole della soluzione al sistema.

$C_{c}$ è il coefficiente di efflusso che viene calibrato per compensare per le diverse perdite.

## Fluido Reale/Fluido Reale Stokesiano-Newtoniano (Incomprimibile) 

Quando considerando il tensore degli sforzi abbiamo già visto il caso dove:
$$\underline{\underline{\phi} }= p \underline{\underline{I}}$$
Questo è il caso del fluido perfetto, e funziona solo quando l'oggetto è piccolo.

Invece ora guardiamo il fluido reale Stokesiano-Newtoniano (incomprimibile), che è il legame costitutivo dei fluidi viscosi.

Non lo dimostriamo perché e un modello fisico che non possiamo mai provarle. Facciamo ipotesi e creiamo delle equazioni e guardiamo dove ci portano.

Tanti fluidi si comportano come fluidi reali.

Per definire il tensore degli sforzi di deformazione, iniziamo definendo la velocità di deformazione.

Prendiamo un fluido e un campo di moto.

<!Diagramma campo di moto>

La velocità del punto 2 sarà la velocità del punto 1 sviluppata in serie:
$$\underline{v}_{2} = \underline{v}_{1}+grad(\underline{v})\,d\underline{x}$$

$grad(\underline{v})$ è:
$$grad(\underline{v}) = \begin{bmatrix}
\frac{ \partial u }{ \partial x }  & \frac{ \partial v }{ \partial x }  & \frac{ \partial w }{ \partial x }  \\
\frac{ \partial u }{ \partial y }  & \frac{ \partial v }{ \partial y }  & \frac{ \partial w }{ \partial y }  \\
\frac{ \partial u }{ \partial z }  & \frac{ \partial v }{ \partial y }  & \frac{ \partial w }{ \partial z } 
\end{bmatrix}=$$

Per arrivare ad un punto che noi (studenti) non sappiamo già, facciamo una separazione di questa matrice, definendo una matrice simmetrica ed una anti-simmetrica che sommate sarà la matrice iniziale:
$$=\underbrace{ \begin{bmatrix}
\frac{ \partial u }{ \partial x }  & \frac{1}{2}\left( \frac{ \partial v }{ \partial x } +\frac{ \partial u }{ \partial y }  \right) & \frac{1}{2}\left( \frac{ \partial w }{ \partial x } +\frac{ \partial u }{ \partial z }  \right) \\
\frac{1}{2}\left( \frac{ \partial u }{ \partial y } +\frac{ \partial v }{ \partial x }  \right) & \frac{ \partial v }{ \partial y }  & \frac{1}{2}\left( \frac{ \partial w }{ \partial y } +\frac{ \partial v }{ \partial z }  \right) \\
\frac{1}{2}\left( \frac{ \partial u }{ \partial z } +\frac{ \partial w }{ \partial x }  \right) &  \frac{1}{2}\left( \frac{ \partial v }{ \partial z } +\frac{ \partial w }{ \partial y }  \right)  & \frac{ \partial w }{ \partial z } 
\end{bmatrix} }_{ \underline{\underline{D}} } + \underbrace{ \begin{bmatrix}
0 & \frac{1}{2}\left( \frac{ \partial v }{ \partial x } -\frac{ \partial u }{ \partial y }  \right) & \frac{1}{2}\left( \frac{ \partial w }{ \partial x } -\frac{ \partial u }{ \partial z }  \right) \\
\frac{1}{2}\left( \frac{ \partial u }{ \partial y } -\frac{ \partial v }{ \partial x } \right)  &  0 &  \frac{1}{2}\left( \frac{ \partial w }{ \partial y } -\frac{ \partial v }{ \partial z }  \right) \\
\frac{1}{2}\left( \frac{ \partial u }{ \partial z } -\frac{ \partial w }{ \partial x }  \right) & \frac{1}{2}\left( \frac{ \partial v }{ \partial z } -\frac{ \partial w }{ \partial y }  \right) & 0
\end{bmatrix} }_{ \underline{\underline{\Omega}} }$$

### Perché abbiamo fatto questa separazione?

In $\underline{\underline{D}}$ ci sono velocità di deformazione e $\underline{\underline{\Omega}}$ sono velocità angolari.

Vediamo che sono velocità di deformazione facendo esempi semplici:

Prendiamo un particella di fluido che si sta muovendo:

<!Diagramma espansione>

Ci sono 2 modi in cui questa particella si può deformare, la prima è espansione la seconda è la strizione/attrito.

Nel caso della espansione, abbiamo un $d\mathcal{E}_{x}$ e $d\mathcal{E}_{y}$, che sono le deformazioni infinitesimali.

La loro velocità sarà:
$$\begin{gather}
\frac{d\mathcal{E}_{x}}{dt} = \frac{(u_{b}-u_{a})dt}{dxdt} = \frac{ \partial u }{ \partial x }  \\
\frac{d\mathcal{E}_{y}}{dt}= \frac{(u_{c}-u_{a})dt}{dydt} = \frac{ \partial v }{ \partial y } 
\end{gather}$$

Questo sono le stesse velocità di deformazione che abbiamo visto, sono i contributi per espansione.

$d\mathcal{E}_{x}$ nasce perché A e B si spostano in x a velocità diverse. Se non c'è differenza nella velocità non c'è deformazione.

Troviamo allora che gli elementi sulla diagonale di $\underline{\underline{D}}$ sono le velocità di deformazione per espansione.

Guardando allora le deformazioni per storzione, che sono l'effetto dell'attrito.

<!Diagramma deformazione per storzione>

Ci interessano gli angoli perché la deformazione non è molta. Prima l'angolo interno era di 90 gradi, invece per la storzione vale $\gamma$.

La velocità di questa deformazione angolare allora, sarà:
$$\frac{d\gamma}{dt} = -\frac{ d\alpha}{ dt } -\frac{d\beta}{dt} = -\frac{(v_{b}-v_{a})dt}{dxdt} - \frac{(u_{c}-u_{a})dt}{dydt}$$
Questa deformazione esiste perché A e B si muovono a velocità diverse non in x ma in y, quindi $d\alpha = \frac{(v_{b}-v_{a})dt}{dx}$

La velocità di deformazione angolare allora sarà:
$$\frac{d\gamma _{x}}{dt}  = -\left( \frac{ \partial v }{ \partial x } +\frac{ \partial u }{ \partial y }  \right)$$

Queste due deformazioni con le stesse presenti nella matrice $\underline{\underline{D}}$, ben sì che dobbiamo considerare un coefficiente di $-\frac{1}{2}$ per la velocità di deformazione angolare.

$\underline{\underline{\Omega}}$ è funzione solo di velocità angolari, che non cambiano la deforma della particella di fluido che abbiamo preso, quindi ci importa la matrice $\underline{\underline{D}}$.

Definiamo allora che il legame costitutivo per il fluido reale è derivato dalla velocità di deformazione e perciò abbiamo:
$$\underline{\underline{\phi}} = f(\underline{\underline{D}})$$
Cioè lo sforzo della deformazione è funzione della velocità di deformazione.



