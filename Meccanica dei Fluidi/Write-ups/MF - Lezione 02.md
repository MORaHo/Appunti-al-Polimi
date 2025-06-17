---
creation_date: 2024-02-11 14:02
tags:
  - MF
share: true
---
# Lezione 2 - Legge di Stevino e Spinte Statiche

## Equazione indefinita dell'equilibrio statica

Indefinita significa che stiamo funzionando puntualmente.

Prendiamo una cella di fluido parallelepipeda, e cerchiamo la forza che agisce lungo l'asse x, sulla faccia.

<!Diagramma cubetto>

Possiamo trovare lo sforzo sulla faccia come:
$$\underline{\phi} = \underline{\underline{\phi}}\underline{n} = \begin{bmatrix}
p & 0 & 0 \\
0 & p & 0 \\
0 & 0 & p
\end{bmatrix} \begin{bmatrix}
1 \\
0 \\
0
\end{bmatrix} = \begin{bmatrix}
p \\
0 \\
0
\end{bmatrix} = p \underline{i}$$
La forza allora sarà: 
$$F = \underline{\phi}A = p\,dy\,dz\underline{i}$$

Le altre forze sulla facce y sono dirette dirette come $\underline{j}$ e sulle z come $\underline{k}$.

Vogliamo determinare la forza che agisce sulla faccia opposta a quella che abbiamo visto.

<!Diagramma cubetto>

La forza non può esser lo stesso, perché se siamo in una campo di forze allora dovrà cambiare.

Prendendo la forze come derivabile e continua nello spazio, possiamo prendere la sua espansione di Taylor, che darà:
$$p+ \frac{ \partial p }{ \partial x } dx$$
La forza allora sarà:
$$-\left( p+\frac{ \partial p }{ \partial x }dx  \right)\,dy\,dz\underline{i}$$

La risultante delle azioni di superficie in direzione x è:
$$\cancel{ pdydz\underline{i} } - \left( \cancel{ p }+\frac{ \partial p }{ \partial x }  dx\right)dydz\underline{i}$$
Che possiamo scrivere come:
$$-\frac{ \partial p }{ \partial x } dw\underline{i}$$
w essendo il volume.

Guardando tutte le direzioni e considerando che il fluido è posto in un campo di forze la risultate delle azioni è:
$$-\frac{ \partial p }{ \partial x } dw\underline{i}-\frac{ \partial p }{ \partial y } dw \underline{j} - \frac{ \partial p }{ \partial z } dw\underline{k}+\rho dw\underline{f}=0$$

$\underline{f}$ è l'accelerazione caratteristica del campo di forze, che per noi sarà g, ma per ora teniamo il simbolo $\underline{f}$.

Semplificando troviamo che:
$$\rho \underline{f} = \frac{ \partial p }{ \partial x } \underline{i} + \frac{ \partial p }{ \partial y } \underline{j}+\frac{ \partial p }{ \partial z } \underline{k} = \nabla p$$

Vedremo questa equazione nella forma:
$$\rho \underline{f} = grad(p)$$

Questa equazione è stata derivata da una equazione di equilibrio di forze. Ci dice che la pressione varia per effetto del campo di forze in è posto, e si ammette che p sia derivabile e continua nello spazio.

Caratterizziamo il campo e il fluido con due ipotesi:

1. Il fluido il pesante, cioè: $\underline{f} = g$
2. Il fluido è incomprimibile, questo esclude alcuni fluidi.

La prima ipotesi ci dice che:
$$\underline{f} = \begin{bmatrix}
0 \\
0 \\
-g
\end{bmatrix}= -g\,\underline{k}= -g\,\underbrace{ grad(z) }_{ \underline{k} }$$

La secondo ipotesi ci dice invece che:
$$p = cost$$

Mettendo queste due ipotesi insieme troviamo che:
* - prendiamo il peso specifico $\rho g$ come $\gamma$
$$\begin{gather}
-pg\, grad(z) = grad(p) \\
\gamma\,grad(z) + grad(p)= 0 \\
grad\left( z+\frac{p}{\gamma} \right) = 0
\end{gather}$$

>[!Theorem] Legge di Stevino
> La legge di Stevino è:
> 
> $z + \frac{p}{\gamma} =$ cost
> 
> Ci dice che la pressione nel fluido varia solo con z.

La variazione solo in z è dato il fatto che il campo gravitazionale agisce sono in z, se ci fosse un fluido ferromagnetico in un campo magnetico questo valore sarebbe diverso.

La Legge di Stevino ci dice anche che i piani sono isobari (nel caso delle due ipotesi), e che la variazione è lineare e comandata dal campo specifico in cui è il fluido.

z è detta la quota geodetica, $\frac{p}{\gamma}$ è detta l'altezza piezometrica, e $z+\frac{p}{\gamma}$ è della la quota piezometrica.

#### Esempio

Preso un contenitore aperto, possiamo mappa la pressione come un andamento lineare:

<!Diagramma pressione di esempio in pg.6>

La pressione alla superficie del fluido è $p_{ATM}^{*}$.
Seguendo l'andamento delle rette fino al punto dove ipoteticamente la pressione si annulla (anche se veramente non c'è fluido quindi non si annula), questo punto è detto piano dei carichi idrostatici ($p_{ci}^{*}$). Questo punto è un punto di riferimento per fluidi, perché sapendo questo è $\gamma$, si può trovare la pressione ad ogni altezza nel fluido.

## Pressione Assoluta e Pressione Relativa

Da questo punto in poi aggiungiamo il simbolo * per indicare una pressione assoluta, detta anche vera. 

Invece una pressione relativa è una pressione senza. La pressione relativa la possiamo trovare con l'equazione:
$$p^{*} -p_{atm}^{*}  = p$$
In questo modo eliminiamo $p_{ci}^{*}$ e sappiamo che il nuovo punto dove la pressione si elimina è l'interfaccia tra il liquido e l'atmosfera.

<!Diagramma p_ci mandato giù>

Possiamo trovare la altezza di $p_{ci}^{*}$ facendo:
$$z_{pci}^{*} -z_{pci} = \frac{p_{atm}^{*}}{\gamma}$$

## Casi Particolari della Legge di Stevino

### Contenitore Chiuso

<!Diagramma contenitore chiuso>

 In un contenitore chiuso come quello visto sopra, non abbiamo una pressione nota, dato che non c'è interazione tra atmosfera e fluido.
 
 Questo significa che dobbiamo usare metodi per derivare la pressione ad un punto. 

Questi oggetti possono esser un manometro metallico, o un manometro generico. Il manometro misura la pressione alla quota a cui è non a quella della connessione con il contenitore, quindi se il manometro è sotto la connessione, misurare la pressione a quella altezza, perché anche nel tubo che lo connetta la gravità ha effetto e la pressione starebbe aumentando.

Si possono usare anche i piezometri che non misurano la pressione di se stessi ma di permettono di avere un'interfaccia tra atmosfera e fluido, dandoci il $p_{ci}$, da cui poi possiamo derivare tutte le pressioni.

In problemi con contenitori chiusi, se non ci viene data una condizioni di contorno, non è possibile risolvere il problema.

### Peso Specifico Basso

Nel caso in cui il peso specifico è molto basso, la il peso specifico è considerato trascurabile, e diciamo che pressione è costante indipendente dell'altezza.

Se proviamo a prendere l'altezza di $p_{ci}^{*}$ abbiamo:

<!Diagramma altezza per peso specifico basso>

$$\begin{gather}
z_{pci} + \frac{p_{ci}}{\gamma} = z_{man} + \frac{p_{man}}{\gamma} \\
h = z_{pci} - z_{man} = \frac{p_{man}}{\gamma}
\end{gather}$$
Per $\gamma$ molto piccolo la altezza sarà:
$\frac{p_{man}}{\gamma}  \approx \frac{p_{man}}{0} = \infty$

Per questo consideriamo la pressione come costante.

### Più fluidi

Nel caso di più fluidi <u>immiscibili</u> occorre una stratificazione dei fluidi in base alla massa specifica.
La condizione di contorno in questo caso è l'interazione tra l'atmosfera e lo strato superiore.

<!Diagramma caso a più fluidi>

I due fluidi hanno due pendenza delle pressioni diverse, e hanno $p_{ci}$ diversi. Data le pendenza diverse i $p_{ci}$ si mettono nello stesso ordine in cui i diversi fluidi si ordinano.


Se stiamo cercando il cambio della pressione possiamo scrivere velocementè:
$$p_{c} = \gamma_{1}h_{1} + \gamma_{2}h_{2}$$

Liquidi diversi possono esser usati per misurare la pressione en manometri semplici.

<!Diagramma manometro semplice>

Mettiamo il fluido più pesante del fluido interno, dato che è molto pesante il suo $p_{ci}$ è molto più basso di quello che vediamo nei piezometri, questo permette questi strumenti ad esser più compatti.

La interazione tra il fluido pesante e l'atmosfera definisce il $p_{ci}$ del fluido pesante, la altezza a cui arriva il punto di contatto tra il fluido interno e il fluido pesante può esser usata per calcolare la pressione usando la legge di stevino per il fluido pesante.

## Spinte statiche su una superficie piana

Il diagramma che guardiamo è una sezione di fluido che copre una sezione di superficie piana. 

<!Diagramma superficie piana con fluido con riferimento>

La linea di interazione tra il piano dei carichi idrostatici è la superficie è detta la retta di sponda.

Prendiamo una parte di una sezione della superficie piana e sappiamo che la forza che agisce sul punto perpendicolarmente alla superficie sarà:
$$ F = pdA\underline{n}$$
Una equazione simile a $pdydz\underline{n}$ che abbiamo già visto.

La risultante delle forze è:
$$\begin{align}
\underline{S} &= \int\limits_{A}^{} p \underline{n}  \, dA \\
&=\int\limits_{A}^{} \gamma z\underline{n} \, dA = \int\limits_{A}^{} \gamma x\sin\alpha \underline{n} \, dA \\
&=\gamma \sin\alpha \underline{n} \int\limits_{A}^{} x \, dA  = \gamma \sin\alpha \underline{n}x_{G}A= \\
&= \gamma z_{G}\underline{n}A = p_{G}A\underline{n}   
\end{align}$$

Per trovare la spinta su un'area delle superficie piana dobbiamo sapere la sua area, la pressione al baricentro e il vettore normale.

Per quanto possiamo usare questo calcolo della spinta sulla superficie, il fatto che la pressione aumenta in funzione della altezza implica che la retta d'azione di questo vettore di solito non passa per il baricentro.

Per trovare a quale altezza agisce usiamo il momento generato dal fluido interno al punto di sponda che sappiamo dovrà aver momento uguale a 0.

Partiamo definendo il momento elementare:
$$\underbrace{ \gamma x\sin\alpha dA }_{ \text{Forza elementare} } \,\cdot  \underbrace{ x }_{ \text{Braccio} }$$

Diciamo che la somma del momento in ogni punto può esser rappresentate come un momento generato in un singolo punto $x_{cs}$:
$$\underbrace{ \int\limits_{A}^{} \gamma x^{2} \sin\alpha\, dA }_{ \text{Momento generato} } = \gamma \sin\alpha x_{G}A \, \underbrace{ x_{cs} }_{ \substack{\text{Braccio}\\\text{che}\\\text{vogliamo} \\\text{trovare}}}$$

Semplificando troviamo che:
$$x_{cs}\underbrace{ x_{G}A }_{ M } = \underbrace{ \int\limits_{A}^{} x^{2} \, dA }_{ I } $$
In cui la parte della alla sinistra $x_{G}A$ è il momento statico della superficie rispetto alla retta di sponda, invece la parte alla destra è il momento d'inerzia rispetto all'asse parallela.

La posizione del centro di spinta allora sarà:
$$x_{cs} = \frac{I}{M}$$
Per la legge di trasportazione possiamo fare questo calcolo rispetto ad un'asse parallela all'asse di sponda passante per il baricentro, facendo così la equazione diventa:
$$x_{cs} = x_{G} + \frac{I_{o}}{M}$$

La distanza tra $x_{G}$ e $x_{cs}$ è detta eccentricità.

La posizione di $y_{cs}$ anche lei può cambiare ma studieremo sempre superfici simmetriche quindi non cambierà.

##### Esempio

<!Diagramma esempio finale>

L'unica cosa che ci dobbiamo ricordare per questi esercizi è il momento d'inerzia di un rettangolo che è $\frac{bh^{3}}{12}$







