---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 04

## Ripasso

Nella cinematica cercavamo $\hat{C}$ descritto dal vettore di parametri di spostamenti, esistono $\exists \infty^{N}$ soluzioni congruenti se è un sistema sottodeterminato.

Nella statica invece cerchiamo $C^{*}$, chiamiamo i diversi tipi di sistemi come:
- Ipostatiche: In generale $\cancel{ \exists }C^{*}$
- Isostatiche: $\exists!C^{*}$
- Iperstatiche: $\exists \infty^{S}C^{*}$ $\to$ S = $n_{r}$-$3n_{c}$

Il caso iperstatico è quello che cerchiamo, che sarà definito dal vettore delle incognite iperstatiche $\underline{X}_{S\times1}$

Le forze reattive sono:
$$\underline{G} = (\underline{R}^{T},\underline{Q}^{T})^{T}$$
Questo è la reazione all'insieme delle forze attive $\underline{\widetilde{F}}$

Il sistema allora avrà soluzione in forma matriciale:
$$\underline{\underline{Y}}\underline{G} + \underline{\underline{\widetilde{W}}}\underline{\widetilde{F}} = \underline{0}$$

Quello che vogliamo trovare completamente è il vettore $\underline{G}$.

Possiamo definire $\underline{Y}_{0} = -\underline{\underline{\widetilde{W}}}\;\underline{\widetilde{F}}$, come il vettore delle forze attive.

Nel caso isostatico abbiamo:
$$\underline{G} = \underline{\underline{Y}}^{-1}\underline{Y}_{0}$$

Nelle strutture iperstatiche possiamo definire S parametri per definire $\infty^{S}$ soluzioni. L'insieme di questi s parametri è il vettore delle incognite iperstatiche $\underline{X}$.

## Metodi per la soluzione a sistemi iperstatici
### Esempio

<!Diagramma sistema e condizioni di equilibrio>

Le equazioni per descrivere questo sistema saranno:
$$\begin{align}
H_{A}  & = 0 \\
Q_{1}+Q_{2}+Q_{3}  &  = P_{A} + P_{E} \\
(Q_{3} - Q_{1})d + (P_{A}-P_E)2d  & = 0
\end{align}$$
Prendendo $\underline{X} = Q_{2}$, poteva esser $Q_{1}$ o $Q_{3}$ è stata una scelta arbitraria, ma ora che abbiamo preso questo vettore dobbiamo descrivere tutto in base a questo:
$$\begin{gather}
Q_{3} = P_{A} + P_{E}-X-Q_{1} \to \text{Sostituisco nella seconda} \\
-2Q_{1} -X + P_{A}+P_{E} + 2P_{A} - 2P_{E} = 0 \\
Q_{1} = \frac{3P_{A}-P_{E}}{2}-\frac{X}{2} \to \text{Resostituiamo nella prima} \\
Q_{3} =  -\frac{X}{2} + \frac{3P_{E}-P_{A}}{2}
\end{gather}$$
Abbiamo scritto le forze reattive come quelle esterne e le incognite.

La soluzione al sistema equilibrato è una equilibrata e congruente, abbiamo appena trovato una soluzione equilibrata dobbiamo sapere se è congruente analizzando la cinematica.

<!Diagramma cinematica>

Come abbiamo visto e come vediamo, gli spostamenti delle molle sono:
$$\begin{align}
q_{1}  &  = v_{B} = \frac{Q_{1}}{k_{1}} = -\frac{X}{2k_{1}} + \frac{3P_{E}-P_{A}}{2k_{1}} \\
q_{2}  &  = v_{c} = \frac{Q_{2}}{k_{2}} = \frac{X}{k_{2}} \\
q_{3}  & = v_{d} = \frac{Q_{3}}{k_{3}} = -\frac{X}{2k_{3}}+\frac{3P_{E}-P_{A}}{2k_{3}}
\end{align}$$
Per esser congruenti gli spostamenti devono stare sulla stessa retta ().

In forma algebraica lo scriviamo come:
$$\frac{v_{c}-v_{b}}{d} = \frac{v_{d}-v_{c}}{d} \to \text{Equazione di congruenza}$$
Saltando alcuni passi, possiamo scrivere:
$$\underbrace{ \left( \frac{1}{2k_{1}}+\frac{2}{k_{2}}+\frac{1}{2k_{3}} \right) }_{ \eta\to \text{Flessibilità/Cedevolezza delle struttura} }X = \frac{3P_{A}-P_{E}}{2k_{1}} + \frac{3P_{E}-P_{A}}{2k_{3}}$$
Da questa equazione (specifica a questo sistema), possiamo determinare che il sistema è congruente se e solo se($\iff$):
$$X = \eta^{-1}\left[ \frac{3P_{A}-P_{E}}{2k_{1}} + \frac{3P_{E}-P_{A}}{2k_{3}} \right]$$
Esiste solo una $X$ che è soluzione X per il problema elastico.
Esiste una dalle infinite configurazioni staticamente ammissibili che rispetta la congruenza.
### Metodo delle Forze

In una strutture iperstatiche, cerco la soluzione del problema elastico come l'unica configurazione cinematicamente ammissibile fra le $\infty^{S}$ configurazione staticamente ammissibili.
#### Commenti
Il metodo delle forze è uno dei metodi usati per risolvere sistemi iperstatici.

Troveremo un mezzo per ricavare la condizione di congruenza velocemente.
Per risolvere dobbiamo trovare un modo intelligente e automatico per descrivere la condizione di congruenza.
#### Altro Esempio
Prendiamo di nuovo lo stesso problema:
<!Diagramma problema inziale>

In questo sistema, invece di prendere $Q_{2}$ come $\underline{X}$, la trattiamo come una forza esterna, cambiamo il sistema ad un sistema isostatico. Chiamiamo questo sistema struttura isostatica principale.

La soluzione in questo caso allora sarà la somma di due sistema isostatici, questi due sistema saranno:
<!Diagramma problemi isostatici>

Da qui troviamo che dati questi sistemi, qualsiasi variabile statiche del sistema sarà:
$$Q_{i} = Q_{i}^{(0)} + Q_{i}^{(1)}\cdot X$$
Nel caso generale risolviamo s+1 problemi isostatici invece di risolvere un singolo valore, semplificando i calcoli.

### Stesso esempio di prima ma in una luca diversa
<!Diagramma problema>

La configurazione $\hat{C}$ di questo sistema possiamo definirla in base a N = 2 gradi di libertà, e definiamo $\underline{U}$ come: $\underline{U} = (v_{c},\phi)^{T} = (U_{1},U_{2})^{T}$

Le equazioni degli spostamenti per questo sistema saranno:
$$\begin{align}
q_{1} &= v_{c} - \phi d = U_{1}-U_{2}d \\
q_{2} &= v_{c} = U_{1} \\
q_{3}  &= v_{c} + \phi d = U_{1}+U_{2}d
\end{align}$$

Il legame elastico di questo problema sarà:
$$\begin{align}
Q_{1}  & = k_{1}q_{1}  = k_{1}(U_{1}-U_{2}d) \\
Q_{2}  & = k_{2} q_{2} =  k_{2}(U_{1}) \\
Q_{3}  &= k_{3}q_{3} = k_{3}(U_{1}+U_{2}d)
\end{align}$$
Questo sistema è congruente.

Per controllare l'equilibrio il sistema sarà:
<!Diagramma esempio per equilibrio>

Le equazioni del sistema saranno:
$$\begin{gather}
Q_{1}+Q_{2}+Q_{3} = P_{A}+P_{E} \\
(Q_{3}-Q_{1})d+(P_{A}+P_{E})2d= 0
\end{gather}$$

Mettendo i legami elastici in queste equazioni abbiamo:
$$\begin{gather}
(k_{1}+k_{2}+k_{3})U_{1} + (k_{3}-k_{1})dU_{2} = P_{A}+P_{E} \\
(k_{3}-k_{1})dU_{1} +(k_{1}+k_{3})d^{2}U_{2} = 2(P_{E}-P_{A} )d
\end{gather}$$
Possiamo scrivere queste equazioni in forma matriciale come:
$$\underline{\underline{K}}\underline{U} = \underline{\widetilde{F}}$$
Questo è il sistema di equilibrio e ci dice che l'equilibrio soddisfatto se e solo se: 
$$\underline{U} = \underline{\underline{K}}^{-1}\underline{\widetilde{F}}$$
Dove $\underline{\underline{K}}$ è la matrice della rigidezza.
### Metodo degli Spostamenti
Cero la soluzione del problema elastico come l'unico configurazione staticamente ammissibile fra le $\infty^{N}$ configurazioni cinematicamente ammissibili.

#### Commenti
In questo caso l'incognita principale non è $\underline{X}$, ma è $\underline{U}$.
Se vogliamo trovare le azioni interne possiamo usare $\underline{U}$ nelle equazioni di convergenza per trovare i valori.

I due metodi sono i duali di l'un l'altro.

Il metodo degli spostamenti è sempre applicabile se ha almeno una soluzione, cioè se è isostatico o iperstatico, invece il metodo delle forze sono solo iperstatiche.

Questo è più facile da programmare ed è anche il padre del metodo degli elementi finiti.
## Principio dei Lavori Virtuali

Calcolo degli spostamenti senza condizione di congruenza.
Il PLV è il metodo da cui derivano il metodo delle forze e degli spostamenti.

### Definizioni

Possiamo descrivere una configurazione cinematica ammissibile come:
$$\hat{C} : \{\underline{\hat{U}}, \underline{\hat{\widetilde{U}}}=\underline{\underline{T}}\underline{\hat{U}}, \underline{\hat{q}} = \underline{\underline{B}}\underline{\hat{U}}\}$$
Queste variabili descrivono la configurazione del sistema cinematicamente ammissibile.

Invece per descrivere una configurazione staticamente ammissibile, possiamo usare:
$$C^{*} :\left\{ \underline{\widetilde{F}}^{*} ,\underline{X}^{*} ,\underline{R}^{*} = \underline{\underline{M}}^{(0)}\underline{\widetilde{F}}^{*} +\underline{\underline{M}}^{(x)}\underline{X}^{*} ,\underline{Q}^{*} =\underline{Q}^{(0)}+\sum_{j=1}^{s}\underline{Q}^{(j)}\underline{X}_{j}^{*}  = \underline{\underline{N}}^{(0)}\underline{\widetilde{F}}^{*} + \underline{\underline{N}}^{(x)}\underline{X}^{*}  \right\}$$


$\underline{\underline{N}}$ sono le matrici dei vettori sistema per sistema che guardiamo.

Se è iperstatico per avere equilibrio serve aggiungere $\underline{X}^{*}$

#### Commenti

1. La famiglia di configurazioni cinematicamente ammissibili $\hat{C}$ e quelle staticamente ammissibili $C^{*}$ non sono dipendenti da l'un l'latro, sono stati del sistema che possiamo definire, ma sono diverse dalla soluzione del problema elastico.
2. $L_{ext} = \underline{\widetilde{F}}^{*T} \underline{\hat{\widetilde{U}}}$
Questo è detto il lavoro virtuale perché $\underline{\widetilde{F}}^{*T}$ è una forza scelta arbitrariamente, e $\underline{\hat{\widetilde{U}}}$ anche lui scelto arbitrariamente, lo spostamento non è effetto delle forze che abbiamo scelto.

3. $L_{int} = \underline{Q}^{*T}\underline{\hat{q}}$

Il legame in queste due equazioni non è tra le forze e gli spostamenti, come abbiamo detto queste sono scelte arbitrariamente e non hanno relazione tra l'un l'altro, invece la relazione è tra le forze stesse e gli spostamenti stessi, queste relazioni le abbiamo già definite.

### Principio dei lavori virutali

Il principio dei lavori virtuali è:
$$L_{ext} = \underline{\widetilde{F}}^{*T} \underline{\hat{\widetilde{U}}} = \underline{Q}^{*T}\underline{\hat{q}} = L_{int}\;\;\text{è vera }\forall \hat{C,C^{*} }$$
### Corollario 1
Se $L_{ext} = \underline{\widetilde{F}}^{T}\underline{\hat{\widetilde{U}}} = \underline{Q}^{T} \underline{\hat{q}} = L_{int}$ è vero $\forall\{\underline{\hat{\widetilde{U}}},\underline{\hat{q}}\} \in C^{*} \iff \underbrace{ \{\underline{{\widetilde{F}}},\underline{Q}\}  }_{ \tiny{\text{Equilibrat}} }\in C^{*}$

### Corollario 2 

Se $L_{ext} = \underline{\widetilde{F}}^{*T}\underline{\widetilde{U}} = \underline{Q}^{*T} \underline{q} = L_{int}$ è vero $\forall\{\underline{\widetilde{F}}^{*},\underline{Q}^{*}\} \in C^{*} \iff \underbrace{ \{\underline{\widetilde{U}},\underline{q}\}  }_{ \tiny{\text{Congruenti}} }\in \hat{C}$











