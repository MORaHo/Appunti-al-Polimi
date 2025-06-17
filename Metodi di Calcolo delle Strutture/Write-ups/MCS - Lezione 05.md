---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 5 

## Ripasso

### Definizioni della ultima lezione

Abbiamo definito che un sistema cinematico ammissibile è descritto come:
$$\hat{C}:\{\hat{\underline{U}},\underline{\hat{\widetilde{U}}}=\underline{\underline{T}}\hat{\underline{U}},\hat{q}=\underline{\underline{B}}\underline{\hat{U}}\}$$
Invece un sistema staticamente ammissibile (dopo le sostituzioni che abbiamo fatto), è descritto come:
$$C^{*} : \{\widetilde{\underline{F}}^{*} ,\underline{X}^{*} ,\underline{R}^{*} =\underline{\underline{M}}^{(0)}\underline{\widetilde{F}}^{*} + \underline{\underline{M}}^{(x)}\underline{X}^{*} , \underline{Q}^{*} =\underline{\underline{N}}^{(0)}\underline{\widetilde{F}}^{*} +\underline{\underline{N}}^{(x)}\underline{X}^{*} \}$$

Ricaviamo R e Q applicando una forza i carichi esterni e una volta le incognite iperstatiche come se fossero carichi esterni.
Per come abbiamo preso R e Q, possiamo sfruttare strutture isostatiche ausiliarie e principali per ricavarli.

Una configurazione isostatica è scritta come quella iperstatica, ma senza i componenti delle incognite iperstatiche.

### PLV come "identità"

$$L_{ext} = \underline{\widetilde{F}}^{*T}\hat{\widetilde{\underline{U}}} = \underline{Q}^{*T}\hat{\underline{q}}=L_{int} \iff \forall C^{*} ,\hat{C}$$
Questi sono valori test, i valori veri non sono posti, questa sta dicendo che se la relazione per ogni possibile valore di F,U,Q e q allora la relazione della energia vale.

#### Corollario 1
Se $L_{ext}  = \widetilde{\underline{F}}^{T}\hat{\underline{\widetilde{U}}}= \underline{Q}^{T}\hat{\underline{q}}=L_{int}$ vale $\forall \hat{C} \implies \{\underline{\widetilde{F}},\underline{Q}\}\in C^{*}$

Dati $\underline{\widetilde{F}}^{T}$ e $\underline{Q}^{T}$, se è verificata la relazione $\forall \hat{C}$, allora $\underline{\widetilde{F}} \text{ e } \underline{Q}$, individuano una statica ammissibile, cioè sono in equilibrio.
#### Corollario 2

Se $L_{ext} = \underline{\widetilde{F}}^{*T}\underline{\widetilde{U}} = \underline{Q}^{*T}\underline{q} = L_{int}$ vale $\forall C^{*} \implies \{\underline{\widetilde{U}}, \underline{q}\}\in \hat{C}$

Dati $\underline{\widetilde{U}},\underline{q}$ se l'equazione è verificata $\forall C^{*}$ sono congruenti/ individuano una cinematica ammissibile.

## Applicazione del Corollario 2

Possiamo riscrivere la parte sinistra del corollario come:
$$\underline{\widetilde{F}}^{*T} \underline{\widetilde{U}} = \underbrace{ \underline{\widetilde{F}}^{*T}\underline{\underline{N}}^{(0)T} }_{ \underline{Q}^{*T}  } \,\,\underline{q} $$
Questo significa che facendo variare $C^{*}$, cioè prendendo $\underline{\widetilde{F}}$ qualsiasi, non dobbiamo trovare Q. 

Nel passato abbiamo scritto che la deformazione generalizzata ha equazione:
$$Q_{i} = k_{i}q_{i}$$
Quando $k_{i} > 0$.
In forma generale per il sistema lo stato di deformazione ha equazione:
$$\begin{align}
\underline{q} &= \underbrace{ \begin{pmatrix}
\frac{1}{k_{1}} \\
 & \ddots \\
 &  & \frac{1}{k_{i}}
\end{pmatrix} }_{ \underline{\underline{C}} }\cdot \underline{Q} \\
&=\underline{\underline{C}}\underline{Q}  \\
&= \underline{\underline{C}}\underline{\underline{N}}^{(0)}\underline{\widetilde{F}}
\end{align}$$
In questa equazione non stiamo usando $\underline{Q}^{*}$ ma $\underline{Q}$, quindi questa relazione è definita da $\underline{\widetilde{F}}$  non $\underline{\widetilde{F}}^{*}$. $\underline{q}$ dipende dalla forze esterne applicate veramente alla struttura non dalle generiche forze che possiamo applicare alla struttura.

Tornando al corollario:
$$\underline{\widetilde{F}}^{*T} \underline{\underline{N}}^{(0)}\underline{q} =\underline{\widetilde{F}}^{*T} \underline{\underline{N}}^{(0)} \underline{\underline{C}}\underline{\underline{N}}^{(0)}\underline{\widetilde{F}}  $$
Isolando le forze test abbiamo che:
$$\underline{\widetilde{F}}^{*T} (\underline{\widetilde{U}}-\underline{\underline{N}}^{(0)}\underline{\underline{C}}\underline{\underline{N}}^{(0)}\underline{\widetilde{F}}) $$
Questo si annulla $\forall \underline{\widetilde{F}}^{*}$ allora è staticamente ammissibile e sappiamo che:
$$\underline{\widetilde{U}} = \underline{\underline{N}}^{(0)T} \underline{\underline{C}}\underline{\underline{N}}^{(0)}\underline{\widetilde{F}}$$

NB:
$\underline{\widetilde{F}}^{*}$: è un carico qualsiasi di test, stiamo provando tutte le $C^{*}$
$\underline{\widetilde{F}}$: è il vettore dei carichi effettivamente applicatti alla strutture. vettori di carichi nel problema reale.

### Esempio Pratico
La struttura principale di questo esempio è:
<!Diagramma strutture principale>
L'obbiettivo di questo problema è di trovare lo spostamento di $v_{b}$ che sarà U. Per trovare questo secondo il secondo corollario, dobbiamo trovare lo spostamento generalizzato dato dalle forze esterne e trovare il $\underline{Q}^{*}$ che è il risultato che $\underline{\widetilde{F}}^{*}$ scelto arbitrariamente che mettiamo sulla struttura ausiliaria.

La struttura ausiliaria è:
<!Diagramma struttura ausiliaria>

La soluzione alla struttura reale è:
<!Diagramma soluzione reale>

Le equazioni saranno:
$$\begin{gather}
v_{c}^{*} 2l-P_{1}^{*} \frac{l}{2}-P_{2} \cdot \frac{3}{2}l = 0 \\
v_{a}+v_{c} = P_{1}+P_{2} \\
-Q-P_{2} \frac{l}{2}+v_{c}l=0
\end{gather}$$
Le equazioni ci danno la soluzione che:
$$\begin{gather}
v_{c} = \frac{3P_{2}+P_{1}}{4} \\
v_{a} = \frac{3P_{1} +P_{2}}{4} \\
Q = \frac{P_{1}+P_{2}}{4}l
\end{gather}$$

Possiamo trovare il $\underline{Q}$ del problema reale per trovare $\underline{q}$, che sarà:
$$\underline{q} = \frac{(P_{1}+P_{2})l}{4k_{b}}=v_{b}$$
La soluzione alla struttura ausiliaria:
<!Diagramma struttura ausiliaria>
Facciamo solo un lato perché sarà lo stesso.

Avendo posto $\underline{\widetilde{F}}^{*}=1$, per semplicità, possiamo trovare:
$$Q^{(1)}-\frac{1}{2}l=0\to Q^{(1)}=\frac{1}{2}lQ$$
Questo $Q^{(1)}$ è l'equivalente del $\underline{Q}^{*}$ che è un equilibrio con $\underline{\widetilde{F}}^{*}$ unitario che abbiamo preso.

Nel PLV:
Prendiamo la statica ammissibile dalla struttura ausiliarie perché $\underline{\widetilde{F}}$ e $\underline{Q}^{*}$.
Invece prendiamo la cinematica ammissibile dalla struttura reale perché $\underline{q}$.

Con il secondo corollario allora troviamo:
$$L_{ext} = 1^{*} v_{b} = \frac{1}{2}l \cdot \frac{(P_{1}+P_{2})l}{4k_{b}}=L_{int}$$
$$\implies v_{b} = \frac{(P_{1}+P_{2})l^{2}}{8k_{b}}$$

Abbiamo posto $\underline{\widetilde{F}}^{*}$ su B apposta per trovare $v_{b}$.

Se avessimo applicato una forza unitaria in modo diverso come:
<!Diagramma applicazione diversa>

Il PLV avvrebbe avuto equazione:
$$L_{ext} = 1 \cdot v_{b}+1\cdot v_{G1} = \underline{Q}^{*} \cdot \underline{q}=L_{int}$$
In questo caso allora avremmo avuto due incognite da risolvere con 1 equazione che è impossibile, quindi per risolvere il sistema, applichiamo sempre solo una forza alla volta e facciamo i calcoli.

Se volessimo trovare 2 spostamenti possiamo creare un'altro sistema ausiliario e definire la forze nel secondo punto.

Per ogni sistema e punto che guardiamo avremmo un valore di $\underline{q}$ diverso unico per quel punto e quel sistema.

#### Verifica con la cinematica
La rappresentazione cinematica del problema sarà:
<!Diagramma verifica cinematica>

Lo spostamento generalizzato sarà: $q=2\phi$.
Dove $\phi = \frac{q}{2} = \frac{(P_{1}+P_{2})l}{8k_{b}}$ 
Sapendo che $v_{b} = l\phi$, avrà valore:
$$v_{b} = l\phi = \frac{(P_{1}+P_{2})l^{2}}{8k_{b}}$$
Che in effetti è lo stesso spostamento di quello che abbiamo visto prima. 
## Equazioni di Congruenza

> [!note] 
> Tutto questo è spiegato molto meglio nella prossima lezione. Non ha spiegato molto bene in questa lezione, non qui.


Vogliamo usare il corollario 2 per scrivere automaticamente le equazioni di congruenza per il metodo delle forze.

### Esempio

<!Diagramma esempio>

La soluzione del sistema principale sarà:
<!Diagramma soluzione principale>
In questo caso avendo staccato la molle e il fatto che la molla non genera forze, lo spostamento sarà solamente quello della trave.

La soluzione del sistema ausiliare primario sarà:
<!Diagramma soluzione ausiliario>

In questo caso la molle spezzata genera una forza che trattiamo come forze esterna per la trave, sia la trave che la molle si sposteranno, e lo fanno in direzioni opposte.

Sapendo questi spostamenti generalizzati nei due casi, possiamo trovare lo spostamento relativo tra le due aste:
$$\eta = (\underbrace{ \phi^{(1)}_{A,\text{molle}}+\phi^{(1)}_{A,AB}) X }_{ \text{Ausiliare 1} } + \underbrace{ \phi^{(0)}_{A,AB} }_{ \text{Ausiliare "0"} }= 0$$
Lo spostamento relativo tra la molla (al punto di contatto con la trave) e la trave deve esser 0, per il fatto che sono connesse.

Per confermare la congruenza dobbiamo allora trovare il valore della incognita iperstatica, X, che ci consente la congruenza.

Questa equazione dello spostamento relativo è l'equazione di congruenza del metodo delle forze.

Come abbiamo visto lo spostamento relativo è la somma delle equazioni lineari, quindi moltiplicando per X ci permette di trovare l'effetto.

Generalizzando un po', X è il valore che ci permette la convergenza:
$$\eta = \eta_{_{11}}X+\eta_{_{01}}=0 \implies  X = -\frac{\eta_{_{01}}}{\eta_{_{11}}}$$

### Equazione della congruenza generale

Prendiamo una struttura X volte iperstatiche, dando per scontato che conosciamo tutte le strutture ausiliarie.

La equazione di congruenza per la struttura principale è:
$$\eta_{_{0i}} = \underline{n}_{i}^{(x)T} \cdot \underbrace{ \underline{\underline{C}}\,\underline{\underline{N}}^{(0)}\,\underline{\widetilde{F}} }_{ \underline{q} }$$
In $\eta_{_{0i}}$, lo zero ci dice che è la struttura principale (con tutte le iperstatiche sconnesse) e lo i ci dice la direzione dello spostamento, agisce con il $\phi_{A,AB}^{(0)}$ dell'esempio.

$\underline{n}_{i}^{(0)}$ è il lavoro compiuto dalle azioni interne nella i-esime struttura ausiliaria.

Invece lo spostamento indotto nell i-esima strutture ausiliare, dal j-esimo carico ad 1 è:
$$\eta_{ij} = n_{j}^{(x)T} \cdot \underline{\underline{C}}n_{i}^{(x)}$$
In questo caso $\underline{\underline{C}}n_{i}^{(x)}$ è la deformazione generalizzata nell'i-esimo struttura ausiliaria, mentre $n_{j}^{(x)T}$ è le azioni interne del j-esimo carico.

Ritornando alla definizione di Q:
$$\underline{Q} = \underline{\underline{N}}^{(0)}\underline{\widetilde{F}}+\underline{\underline{N}}^{(x)}\underline{X}= \underline{\underline{N}}^{(0)}\underline{\widetilde{F}}+\sum_{j=1}^{s}\underline{n}_{j}^{(x)}X_{j}$$
In questo caso $n_{j}^{(x)}$ è la j-esime colonna di N, cioè l'azione generata nella struttura isostatica ausiliare da $x_{j}$ presa pari a 1. Questo è equivalente a $Q^{(1)}$ del problema di prima.

La equazioni di congruenza allora saranno:

$$\sum_{j=1}^{s} n_{ij}X_{j}+\eta_{_{0i}}=0\,\,,\,\,\, i=1,2,\dots,s$$
In forma matriciale avremo:
$$\underline{\underline{\eta}} = (\eta_{ij})$$
$$\underline{\eta}_{0} = (\eta_{0i})$$
$$\boxed{ \implies \underline{\underline{\eta}}\underline{X}+\underline{\eta}_{0} }\to \text{s equazioni di congruenza}$$

Uno spostamento relativo $\eta_{0i}$ è il vettore delle azioni attive per il carico $x_{i}$ moltiplicato per lo spostamento generalizzato nella struttura ausiliaria "0".

$\eta_{ij}$, è le azioni attive dato il carico $x_{j}$, per la cinematica della struttura ausiliaria $i$.

####### Bisogna mettere a posto le idea che sono qui.