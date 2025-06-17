---
creation_date: 2024-02-11 14:02
tags:
  - MF
share: true
---
# Lezione 1 - Proprietà dei fluidi e Sforzi del fluido

## Proprietà dei fluidi

Per proprietà di ogni fluido sono uniche e permettono di identificare il fluido matematicamente.

Sono quantità che spiegano qualcosa che è visto nella realtà, e aiutano perciò a spiegare fenomeni.

### Densità

$\rho \to \text{Densità} \frac{[M]}{[L^{3}]} = \left[ \frac{kg}{m^{3}} \right]$

Più volume del liquido aggiungi, più massa aggiungi
### Comprimibilità

I fluidi sono comprimibili anche se minimamente. I fluidi hanno resistenze alla compressione diverse.

<!Diagramma compressione patatoide>

Abbiamo: 
$$m = \rho w$$
Dove $w$ è il volume.

Dato che $dm = 0 = d\rho w+\rho dw \implies \frac{d\rho}{\rho} = -\frac{dw}{w} = \frac{dp}{k}$

Il termine $\frac{dp}{k}$, ha la variazione della pressione sopra e il modulo di comprimibilità sotto.

### Viscosità

<!Diagramma caffè mischiato>

Vediamo quando giriamo ai punti più distanti che anche il centro inizia a girare, questo è dato della viscosità, che possiamo considerare come la capacità del fluido di scambiare attrito.

In un altro esempio, muoviamo una lastra ad una certa distanza dall'altra:

<!Diagramma velocità tra lastre>

La forza richiesta per portare la lastra alla data velocità sarà:
$$F = \mu  \frac{v}{h}A$$

Dove $\mu$ è la viscosità dinamica.
Possiamo anche definire la viscosità cinematica, che è:
$$\nu = \frac{\mu}{\rho}$$

### Tensione Superficiale

La tensione superficiale è una proprietà che causa due diversi fenomeni. Il primo è che il liquido creare parti curve ai lati, permettendo che possa riempire più dal contenitore ed aderisca ai lati. Quest'ultimo causa anche l'effetto capillare che porta un fluido ad un'altezza maggiore del resto del fluido se è posto in un tubo di diametro piccolo.

<!Diagramma diversi effetti>

In effetti la tensione superficiale genera tensioni che agiscono alle estremità è possiamo modellare come:

<!Diagramma forze con angoli>

La tensione superficiale ha simbolo , $s$ e possiamo trovare la sua altezza data l'azione capire come:

$$\rho g \frac{\pi d^{2}}{4}h = s\pi d\cos\alpha$$
$$h = \frac{4s\cos\alpha}{\rho gd}$$
Vediamo allora che un tubo più piccolo amplificherà di più l'effetto dell'azione capillare

## Sforzi in un sistema statico

Considerando un cubetto di fluido piccolo:
<!Diagramma cubetto nel liquido>

Il pezzo riceve forze da pezzi interno ad esso. Lo sforzo che ogni faccia soffre è $$\sigma = \frac{\underline{F}}{A}$$
In realtà lo sforzo agisce su un area infinitesima, quini sarà:
$$\lim_{ A \to 0 }  \frac{\underline{F}}{A} = \underline{\phi} \to \text{vettore dello sforzo}$$

Lo sforzo sulla faccia cambia anche in base all'angolo della faccia, un sforzo normale alla faccia sarà risentito di più di uno non normale alla faccia.

### Tetraedro di Cauchy

Possiamo usare il Tetraedro di Cauchy per definire lo stato di sforzo e i vettori di sforzo.

Il tetraedro sarà:

<!Diagramma tetraedro>

Da qui troviamo che:

$$\underline{\phi}A + \underline{\phi}_{x}A_{x}+\underline{\phi}_{y}A_{y}+\underline{\phi}_{z}A_{z}= 0$$
$$\underline{\phi}A = -\underline{\phi}_{x}A_{x} - \underline{\phi}_{y}A_{y} - \underline{\phi}_{z}A_{z}$$
$$\underline{\phi} = -\underline{\phi}_{x} \frac{A_{x}}{A} - \underline{\phi}_{y} \frac{A_{y}}{A} - \underline{\phi}_{z} \frac{A_{z}}{A} $$

$$=  \underline{\phi}_{x}n_{x} + \underline{\phi}_{y}n_{y} + \underline{\phi}_{z}n_{z}$$

I componenti $n_{x},n_{y}$ e $n_{z}$ sono i componenti angolari che cambiano in base alla all'angolo del nostro tetraedro, questo implica che lo sforzo sulla superficie principale dipende dalla giacitura della superficie.

I tre sforzi sono vettori che possiamo scrivere come:

$$\underline{\phi}_{x} = \begin{bmatrix}
\phi_{xx} \\
\phi_{xy} \\
\phi_{xz}
\end{bmatrix} \quad \underline{\phi}_{y} = \begin{bmatrix}
\phi_{yx} \\
\phi_{yy} \\
\phi_{yz}
\end{bmatrix} \quad \underline{\phi}_{z} = \begin{bmatrix}
\phi_{zx} \\
\phi_{zy} \\
\phi_{zz}
\end{bmatrix}$$

La forma compatta di questo equazione è:
$$\underline{\phi} = \begin{bmatrix}
\phi_{xx} & \phi_{xy} & \phi_{xz} \\
\phi_{yx} & \phi_{yy} & \phi_{yz} \\
\phi_{zx}  & \phi_{zy} & \phi_{zz}
\end{bmatrix}\begin{bmatrix}
n_{x} \\
n_{y} \\
n_{z}
\end{bmatrix} = \underline{\underline{\phi}} \underline{n}$$
In questa equazione troviamo il tensore degli sforzi $\underline{\underline{\phi}}$, e il vettore normale alla superficie $\underline{n}$.

Questa equazione ci dice formalmente che $\underline{\phi}$ dipende dalla giacitura e che il tensore degli sforzi, detto anche stato di sforzo, è puntuale, cioè se stesso non cambia con la giacitura, sono lo sforzo risentito sulla superficie.

Nel tensore degli sforzi, vediamo che gli elementi sulla diagonale sono gli sforzi perpendicolari che causano la compressione, invece quelli non sulla diagonale sono gli sforzi tangenziali dati dall'attrito.

### Statica

Nella statica non c'è attrito dato che l'attrito è presente in moto è nella statica non siamo in moto.
Detto questo possiamo trovare che:
$$\phi_{xx} = \phi_{yy} = \phi_{zz}$$

Questo significa che il nostro sistema è isotropo è lo sforzo è uguale in qualunque direzione.

In statica, il valore effettivo dello sforzo è la pressione, cioè:

$$\underline{\underline{\phi}} = \begin{bmatrix}
p  & 0 & 0 \\
0 & p & 0 \\
0 & 0 & p
\end{bmatrix} = p \underline{\underline{I}}$$

Perdiamo i 3 attriti e due sforzi per l'isotropia.

Possiamo scrivere i vettori di sforzo direzionale come:

$$\underline{\phi}_{x} = \begin{bmatrix}
p \\
0 \\
0
\end{bmatrix} \quad \underline{\phi}_{y} = \begin{bmatrix}
0\\
p\\
0
\end{bmatrix} \quad \underline{\phi}_{z} = \begin{bmatrix}
0 \\
0 \\
p
\end{bmatrix}$$





