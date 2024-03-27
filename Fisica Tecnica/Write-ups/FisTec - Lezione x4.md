---
creation_date: 2023-11-09 16:13
tags:
  - fistec 
share: true
---
# Lezione 14 - Ciclo Rankine

Il ciclo Rankine è il ciclo usato nelle grosse centrali termoelettriche, non valgono le leggi dei gas ideali quindi dobbiamo usare le tabelle e la regola della leva.

## Ciclo di Carnot a Vapore

Il ciclo di Carnot a vapore potrebbe esser realizzato in due modi, succede che il ciclo è impossibile da realizzare.
### Caso A

![](Pasted%20image%2020231119175016.png)

Operando sotto la campana si un limite su $T_{max}$. Tra 2 e 3 deve avere un titolo maggiore a 0,9 perché la collisione delle particelle erode la turbina che le muove. Invece tra 4 e 1 è impossibile creare un compressione che operi con fluidi bifase quindi solo questo è impossibile.

### Caso B

![](Pasted%20image%2020231119175034.png)

Il caso due ha problemi simili, e in più tra 1 e 2 si hanno pressione variabili quindi non è facile progettarlo.

## Ciclo Rankine $\to$ Ciclo Chiuso

Il ciclo Rankine è una modifica del ciclo di Carnot che lo rende possibile.

<!Diagramma T-s ciclo Rankine>

Per aumentare il rendimento teniamo $T_{h}$ il più alto possibile.
Il diagramma è magnificato in alcune parti specialmente tra 1 e 2, perché la distanza tra i due punti in scala reale è minima tale che sembrerebbero come lo stesso punto.

Tra 2 e 3 occorre una somministrazione di calore isobara cioè uno riscaldamento isobaro.
Tra 3 e 4 occorre una espansione isoentropica. Questo è il punto dove è importante che il titolo almeno  0,9 e vogliamo P il più basso possibile per diminuire la energia persa.
Tra 4 e 1, occorre una sottrazione di calore isobara al condensatore, prendiamo quasi sempre che $P<P_{atm}$

L'acqua usata come vapore nel ciclo Rankine deve esser sottoposta a trattamenti per rimuovere i sali e gas(particolarmente $O_{2}$)

### Analisi Energetica

#### Pompa

$$\begin{gather}
\underbrace{ l_{p,e} }_{ \substack{\text{Lavoro}\\\text{entrante}\\\text{dalla pompa}} } = \underbrace{ h_{2}-h_{1} }_{ \text{Da tabelle} } \simeq v_{1}(P_{2}-P_{1}) \\
dh = \underbrace{ \cancel{ Tds } }_{ \text{Isoentropica} } + Pdv \implies  dh = h_{2}-h_{1}=v_{1}(P_{2}-P_{1}) \\
\text{Dobbiamo sapere } \underbrace{ P_{1} \text{ o }T_{1} }_{ \text{Legati} },\text{ e } P_{2}
\end{gather}$$

### Caldaia

$$q_{3}=h_{3}-h_{2}$$
$h_{3}$ si prende dalle tabelle dei vapori sovrariscaldati, per questo allora dibboiamo sapere $T_{max}$ e $P_{max}$ del ciclo.
Invece $h_{2}$ lo sappiamo già dalla pompa.

### Turbina

$$l_{t,n}=h_{3}-h_{4}$$
Sappiamo $h_{3}$ dalle tabelle.
Per $P_{max}$ e $T_{max}$ sappiamo $h_{3}$ e $s_{3}$, invece nel punto 4 abbiamo una miscela liquido vapore con $s_{4} = s_{3}$ (vedi diagramma T-s del ciclo). Dato che sappiamo $P_{min}$ o $T_{min}$ quindi possiamo trovare $s_{4}$ dalle tabelle.

Sapendo $s_{4}$, e sapendo che è una miscela possiamo usare $s_{LS}$ e $s_{VS}$ a quella pressione e temperatura per trovare il titolo. A questo punto avendo trovato il titolo e sapendo che è una miscela possiamo trovare $h_{4}$ con l'equazione:
$$(1-x_{4})h_{LS}+x_{4}h_{VS}=h_{4}$$
### Rendimento

$$\eta_{\tiny{R}}=\frac{L_{netto}}{Q_{e}} = \frac{Q_{e}-Q_{u}}{Q_{e}}=1-\frac{Q_{u}}{Q_{e}}$$
Il lavoro netto che è $l_{netto} = l_{t,u}-l_{p,e}=q_{e}-q_{u}$

Troviamo allora che la pompa contribuisce circa 1% del lavoro totale. Per confrontare nel ciclo Joule-Brayton contribuiva circa il 50% del lavoro.

### Bisogna Sapere:
I dati necessari per un ciclo Rankine sono:

- $P_{max}=P_{2}=P_{3}$
- $P_{min}(=P_{1}=P_{4})$ o $T_{min} (=T_{1}=T_{4})$
- $T_{max}=T_{2}=T_{3}$
## Metodi per Aumentare il Rendimento

### Abbassamento della pressione di condensazione

![](Pasted%20image%2020231119180222.png)

Questo cambiamento diminuisce $T_{c}$, siamo limitati però a $T_{atm}$. Il condensatore è importante perché non vogliamo che non entri l'aria se no viene cambiato il ciclo intero.

### Aumento della temperatura di riscaldamento dal vapore

![](Pasted%20image%2020231119180243.png)

Questo cambiamento aumenta l'area e aumenta la temperatura più grande $T_{h}$.

### Aumentare la pressione della caldaia

![](Pasted%20image%2020231119180317.png)

Dato che $T_{3}$ è fissato si sposta $s_{4}$ diminuendo il titolo (andando a destra si dimuisce il titolo).

Per riferimento nel 1922 si su usava una pressione pari a 2,7 MPa, ora invece si una pressione pari a 30MPa(pressioni supercritiche).

### Ciclo Rankine con Riscaldamento

![](Pasted%20image%2020231119180359.png)

$$\begin{gather}
q_{e}=(h_{3}-h_{2})+(h_{5}-h_{4}) \\
l_{t,u} = (h_{3}-h_{4})+(h_{5}-h_{6})
\end{gather}$$
Si trova che con il primo $\eta_{\tiny{R}}$ aumenta del 4-5%, però ogni riscaldamento aumenta il rendimento di metà di quella percentuale, perciò di solito di usano al massimo 2.

![](Pasted%20image%2020231119180420.png)

### Ciclo Rankine con Rigenerazione

![](Pasted%20image%2020231119180523.png)

Aumentando T da 2 a $2'$ con il vapore che entra nella turbina riduciamo la enegia che richiediamo per riscaldare.

#### Ciclo Rankine con Rigenerazione Aperto

![](Pasted%20image%2020231119180503.png)

$$\begin{gather}
q_{e}=h_{5}-h_{4} \\
q_{u}=(1-y)(h_{7}-h_{1}) \\
y = \frac{\dot{m}_{6}}{\dot{m}_{5}} \to \text{frazione di vapore estratto} \\
l_{t,u}= (h_{5}-h_{6})+(1-y)(h_{6}-h_{1}) \\
l_{p,e} = (1-y)l_{p_{1},e} + l_{2,e} \\
l_{p_{1},e} = v_{1}(P_{2}-P_{1}) \\
l_{p_{2},e} = v_{3}(P_{4}-P_{3})
\end{gather}$$
#### Ciclo Rankine con Rigeneratore chiuso

Il ciclo Rankine con rigeneratore chiuso è simile a quello con rigeneratore aperto, ma invece di riscaldare attraverso miscelamento di liquidi di temperature diverse, si riscalda attraverso conduzione attraverso un materiali invece di contatto diretto.

### La cogenerazione

La cogenerazione è la generazione contemporanea di lavoro e calore che occorre nel ciclo Rankine.

![](Pasted%20image%2020231119180557.png)

Il fattore di utilizzazione ci dice quanta energia che mettiamo nel sistema è convertite in lavoro utile, che in questo caso è il lavoro erogato dalla turbina.

$$\mathcal{E}_{u}=\frac{L_{netto}+Q_{erogato}}{Q_{tot}}=\frac{L_{n}-Q_{p}}{Q_{e}}= 1-\frac{Q_{u}}{Q_{e}}\to \text{Idealmente pari a 1}$$

In un ciclo un'pò più complesso abbiamo diverse direzioni in cui il vapore potrebbe andare per generare diversi tipi di energia e esiste una valvola che impone quale e quando di questo tipo di energia viene prodotto.

![](Pasted%20image%2020231119180627.png)

In questo caso possiamo scegliere tra 4 e 5 per scegliere che tipo di energia vogliamo ricavare.

Il sistema viene progettato per il ciclo 5,7,10 perchè questo è il più vicino ai cicli reali.

## Ciclo Combinato gas-vapore $\to$ non da sapere

Questo ciclo è un ciclo da gas(tapping cicle) con un ciclo vapore (bottoming cicle)

HRSG = Heat Recovery Steam Generation

Di solito $\eta > 0,5$

## Ciclo Frigorifero a Vapore

Questo è un ciclo motore quindi in un diagramma T-s si va in senso antiorario.

<!Diagramma cicli frigorifero T-s e P-h>

Si ha:
$$\eta = \frac{\dot{L}_{cis}}{\dot{L}_{crr}}\leq 1$$
Dove:
$$\begin{gather}
\dot{L}_{cis}=m(h^{*} _{2is}-h^{*} _{1}) \\
\dot{L}_{cr} = \eta(h_{2}^{*} -h_{1}^{*} )
\end{gather}$$

Diamo la ultima equazione perché di solito ci viene dato quel rendimento che è il rendimento del compressore.

Tra 1 e 2 occorre una compressione isoentropica
Tra 2 e 3 occorre una cessione di calore isobara (in un condensatore)
Tra 3 e 4 occorre una laminazione isoentalpica ( in valvola o in tubo capillare)
Invece tra 4 e 1 occorre un assorbimento di calore isobaro (in un evaporazione)

Tra 3 e 4 $h_{4}=3$ ma $s_{4}\gg s_{3}$ che permette questa laminazione.

##### Bisogna Sapere:

- $T_{min}$ o $P_{min}$
- $T_{max}$
- $P_{max}$
- $\eta_{\tiny{\text{Compressione}}}$

Fine Termodinamica dalla prossima lezione si inizia la trasmissione del calore.