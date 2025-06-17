---
creation_date: 2024-02-11 14:02
tags:
  - MF
share: true
---
# Lezione 11 - Macchine su Condotte

## Macchine su condotte

Nelle condotte possiamo aggiungere macchine in mezzo per aumentare o diminuire il carico del fluido nella condotta.

Prendiamo per esempio una condotta:
<!Diagramma esempio di condotta>

In questo caso nella condotta abbiamo messo una turbina. 
La turbina cala il l'energia del flusso, invece se avessimo messo una pompa aumenterebbe l'energia del flusso.

Aggiungendo una macchine dobbiamo considerarla nel nostro bilancio energetico. Il bilancio energetico in questo caso è:
$$z_{a}-z_{b} = \underbrace{ \frac{\lambda V^{2}}{2gD} }_{ J }L_{1} + \Delta H_{t}+\frac{\lambda V^{2}}{2gD}L_{2} + \frac{m\alpha}{2g}(V_{1}-V_{2})^{2}+\frac{\alpha V_{2}^{2}}{2g}$$

In modo semplice la turbina è una perdita di carico invece la pompa è un guadagno di carico.

Il procedimento è dopo il bilancio energetico è lo stesso di ogni altro caso, dobbiamo solo tenere a conto della energia persa alla turbina che ci può presentare un'altra incognita che forse dobbiamo determinare.

$\Delta H_{t}$ è la quantità di carico ceduto alla turbina.

Generalmente negli esercizi viene chiesta la potenza, che ci ricordiamo ha equazione:
$$W_{t} = \gamma Q\Delta H_{t}\eta$$

La potenza di un corrente è di $\gamma QH$, in questo caso stiamo solo guardando il cambio nel carico. Abbiamo aggiunto una efficienza per considerare il fatto che ogni macchina non è perfetta.

A questo disegnamo le linee del LCT e LP.
Le linee LCT e LP si tracciano fino alla fine della condotta.

$\Delta H_{t}$ nella LCT e LP sono uguali se il diametro rimane uguale, se non dobbiamo considerare il fatto che dono diversi e quindi la perdita di carico e energia saranno diverse.

Facciamo un esempio con una pompa e diametri diversi:
<!Diagramma pompa e diametri diversi>

In questo caso vediamo che la pompa permette il sollevamento da A e B, negando il flusso naturale che vorrebbe prendere il flusso andando dal serbatoio con carico maggiore a quello con carico minore.

L'equazione di moto sarà:
$$z_{a}-z_{b} = \frac{0,5\alpha V_{1}^{2}}{2g}+J_{1}L_{1}-\Delta H_{p}+J_{2}\cdot L_{2}+\frac{0,5\alpha V_{3}^{2}}{2g}+J_{3}L_{3}+\frac{\alpha V_{3}^{2}}{2g}$$

Sottraiamo il cambio di carico effettuato dalla pompa perché alla destra stiamo considerando le perdite di carico e visto che la pompa sta aumentando il carico è una perdita negativa quindi se prendiamo il cambio di carico in modulo dobbiamo sottrarlo per considerarlo come una perdita negativa.

Vediamo cone le linee LCT e LP che il salto nei due è diverso perché il carico cinetico tra i due è diverso quindi il salto deve tenere a conto di questa differenza.

Anche con una pompa si può andare dal serbatoio alto a quello basso, lo scopo della pompa allora è in questo caso è di aumentare la portata.

## Depressioni in condotte

È possibile avere un condotta dove la LP è minore del livello massimo del fluido, in questo caso il fluido sopra la LP è in depressione relativa.

<!Diagramma LCT e LP causanti depressione>

Una depressione in condotta non è un concetto molto astruso, infatti quando deviamo da una cannuccia creiamo una depressione relativa per spingere il fluido in su.

Prendiamo l'esempio di condotta posta come:
<!Diagramma condotta per depressione>

Vediamo che la condotta è molto sopra il livello della LP.

L'equilibrio di moto è:
$$z_{a}-z_{b} = \frac{0.5\alpha V^{2}}{2g}+JL+\frac{\alpha V^{2}}{2g}$$
Risolvendo questa equazione possiamo trovare la portata.

Le depressioni relative vanno bene, quello che non è fisicamente possibile è una depressione assoluta. Per confermare questa condizione possiamo scrivere l'equazione di moto tra A e C, ci permette di trovare la quantità che ci interessa.

$$z_{a}-\underbrace{ \left( z_{c}+\frac{p_{c}}{\gamma}+\frac{\alpha V_{c}^{2}}{2g} \right)U }_{ \text{ Carico in  C}\to H_{c} } = 0,5 \frac{\alpha V^{2}}{2g}+JL_{c}$$

Da questo possiamo trovare $\frac{p_{c}}{\gamma}$, che è infatti l'unica incognita dota che $V=V_{c}$ essendo il diametro lo stesso, e avendo trovato Q con la prima equazione di moto.

Vogliamo verificare allora se $\frac{p_{c}}{\gamma}>-\frac{p^{*}_{_{\text{ATM}}}}{\gamma}$.

Se è minore bene, significa che non abbiamo sorpassato la soglia massimo per cui si può avere depressioni relative e non depressioni assolute.Nel caso dell'acqua questa soglia è di dieci metri, quindi se provi a succhiare dell'acqua con una cannuccia su 11 metri non ci riuscirai è fisicamente impossibile.

Se è più grande, male. Significa che il fluido non riuscirà a passare la condotta neanche con la depressione.

Nel caso in cui si verifica depressione assoluta, si passa alla logica di un carico motore, ad un caso in cui la logica è di rispetta la fisica e le condizioni limiti del problema.

Questo significa che useremo la equazione di moto tra A e C, imponendo la condizione limite, dove $p_{c}^{*}=0$ per determinare la portata che ci permette di avere un soluzione aderente alla fisica.

La Q iniziale era troppo grossa, questo è quello che causava una condizione di depressione, quindi troviamo un Q nuovo minore che non causa le stesse perdite di carico, alzando la LP e cosi fermando la formazione erronea di depressioni assolute.

C è la sezione di controllo, l'andamento  in C determina l'andamento del problema.

Avendo cambiato, la LCT e LP sono cambiate. Sono diminuite tutte le perdite. LP e LCT dopo questo cambio le disegniamo si da destra che sinistra questo è perché con il cambio di pendenza, le linee non combaciamo più allora ci crea una sezione di canelletta, dove la condotta non è piena di fluido solo una parte lo è.

Questa canaletta è rappresentata da un brusco cambio nelle linee LCT e LP come:
<!Diagramma esempio sezione di canaletta.>

### Altri modi per generare depressioni

Ci sono altri modi per generare depressioni relative.

Si può generare una depressione relativa quando abbiamo un ago di fluido:
<!Diagramma ago di fluido>

Si possono sormontare depressioni relative con la pompa:
<!Diagramma depressione relativa e pompa>

Se la depressione relativa arriva al suo massimo prima della pompa però la pompa non può fare niente se il fluido non gli arriva, quindi questo vale solo nel caso in cui il limite non è sorpassato e il fluido raggiunge la pompa.




























