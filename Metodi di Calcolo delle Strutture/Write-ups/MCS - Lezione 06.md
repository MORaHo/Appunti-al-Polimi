---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 06 - Equazioni di Congruenza,  Proprietà di $\underline{\underline{\eta}}$ e Metodo degli Spostamenti

## Equazioni di Congruenza

Usiamo il corollario 2 per scrivere le equazioni di congruenza del metodo dell forze. Dobbiamo scrivere $\underline{X}$ che ci trova il sistema cinematico congruente.

### Esempio con s=2

<!Diagramma esempio>

Per questo sistema abbiamo 2 gradi di iperstaticità e 1 grado di libertà cinematica (togliendo tutte le molle). Possiamo usare una rotazione intorno ad A per descrivere la cinematica.

La struttura isostatica principale è:
<!Diagramma isostatica principale>

Per avere la congruenza bisogna che gli spostamenti relativi tra la trave e la sezione di molle:
$$\begin{gather}
\Delta v_{b}=0 \\
\Delta v_{c} = 0
\end{gather}$$

Visti i due gradi di iperstaticità dobbiamo definire s+1 strutture.

La struttura ausiliaria "0", dove agiscono solo i carichi esterni:
<!Diagramma ausiliare "0">

Le equazioni interne e spostamenti relativi sono:
$$\begin{gather}
Q_{1}^{(0)} = 0 \\
Q_{2}^{(0)}=0 \\
Q_{3}^{(0)}=\frac{8}{3}pd
\end{gather}$$
$$\begin{gather}
q_{1}^{(0)} =0 \\
q_{2}^{(0)}=0 \\
q_{3}^{(0)} = \frac{Q_{3}^{(0)}}{k_{3}} = \frac{8}{3} \frac{pd}{k_{3}}
\end{gather}$$

La struttura ausiliare "1" $\to$ spegnendo tutte eccetto $X_{1}$:
<!Diagramma ausiliare "1">

Le azioni interne e spostamenti generalizzati sono:
$$\begin{gather}
Q_{1}^{(1)}=1  \\
Q_{2}^{(1)} = 0 \\
Q_{3}^{(1)} = -\frac{1}{3}
\end{gather}$$
$$\begin{gather}
q_{1}^{(1)} = \frac{1}{k_{1}} \\
q_{2}^{(1)} = 0 \\
q_{3}^{(1)} = -\frac{1}{3k_{3}} 
\end{gather}$$

La struttura ausiliare "2" è:
<!Diagramma struttura ausiliare 2>

La azioni interne e spostamenti generalizzati sono:
$$\begin{gather}
Q_{1}^{(2)} = 0 \\
Q_{2}^{(2)} = 1 \\
Q_{3}^{(2)} = -\frac{2}{3} \\
q_{1}^{(2)} = 0 \\
q_{2}^{(2)} = \frac{1}{k_{2}} \\
q_{3}^{(2)} = -\frac{2}{3k_{3}}
\end{gather}$$

### Come calcoliamo il $\Delta v_{b}?$

Per la sovrapposizione lineare abbiamo:
$$\Delta v_{b}  = \Delta v_{b}^{(0)}+\Delta v_{b}^{(1)}X_{1}+\Delta v_{b}^{(2)}X_{2}$$
Per trovare $\Delta v_{b}^{(0)}$ facciamo:

Prendiamo la statica ammissibile dalla struttura ausiliare "1" e prendiamo la cinematica ammissibile dalla struttura ausiliare "0".

Da qui usiamo il PLV come:
$$L_{ext} = 1\cdot\Delta v_{b}^{(0)} = \sum_{j=1}^{3}Q_{j}^{(1)}\cdot q_{i}^{(0)} = L_{int}$$
$\to \Delta v_{b}^{(0)} = -\frac{8}{9}\frac{pd}{k_{3}}$


Stiamo calcolando lo spostamento per ogni isostatica per poi mettere tutto insieme e trovare la congruenza.

Per trovare $\Delta v_{b}^{(1)}$:

Prendiamo la statica ammissibile alla struttura ausiliaria "1" e la cinematica ammissibile dalla struttura ammissibile "1"

$$\Delta v_{b}^{(1)} = \frac{1}{k_{1}}+\frac{1}{9k_{3}}$$

Per trovare $\Delta v_{b}^{(2)}$:

Prendiamo la statica ammissibile dalla struttura struttura ausiliaria "1" e la cinematica ammissibile dalla struttura ausiliaria "2".

$$\Delta v_{b}^{(2)} = \frac{2}{9k_{3}}$$

Per generalizzare, troviamo la statica ammissibile dalla struttura in cui agisce la forza nel punto dove stiamo cercando lo spostamento, e troviamo la cinematica in ogni struttura (indicato dalla struttura nelle parentesi).

Per trovare $\Delta v_{c}^{(0)}$:

La statica dal sistema "2" e la cinematica dal sistema "0", avremmo:
$$\Delta v_{c}^{(0)} = -\frac{16}{9} \frac{pd}{k_{3}}$$

Per trovare $\Delta v_{c}^{(1)}$:

La statica del sistema "2" e la cinematica del sistema "1", avremmo:
$$\Delta v_{c}^{(1)} = \frac{2}{9k_{3}} (=\Delta v_{b}^{(2)})$$
Per trovare $\Delta v_{c}^{(2)}$:

La statica del sistema "2" e la cinematica del sistema "2", avremmo:
$$\Delta v_{c}^{(2)} = \frac{1}{k_{2}} + \frac{4}{9k_{3}}$$

Il PLV ci da tutti gli spostamenti relativi che stiamo cercando, cambiando solo i pedici:

$$\begin{gather}
\Delta v_{b} = \Delta v_{b}^{(1)}X_{1}+\Delta v_{b}^{(2)}X_{2} +\Delta v_{b}^{(0)} = \eta_{_{11}}X_{1}+\eta_{_{12}}X_{2}+\eta _{_{01}} = 0 \\
\Delta v_{c} = \Delta v_{c}^{(1)}X_{1}+\Delta v_{c}^{(2)}X_{2} +\Delta v_{c}^{(0)} = \eta_{_{21}}X_{1}+\eta_{_{22}}X_{2} +\eta_{_{02}}=0
\end{gather}$$

Possiamo scrivere, convertendo ogni spostamento in componenti di matrici e vettori, come:
$$\underline{\underline{\eta}}\underline{\underline{X}}+\underline{\eta}_{0} = \underline{0}$$

La soluzione del sistema allora sarà:
$$\underline{X} = -\underline{\underline{\eta}}^{-1}\underline{\eta}_{0}$$
Diciamo che $\underline{\underline{\eta}}$ come la matrice di flessibilità del sistema o anche delle cedevolezze.

### Proprietà di $\underline{\underline{\eta}}$

La matrice $\underline{\underline{\eta}}$ ha 4 proprietà generali:
1. $\underline{\underline{\eta}}$ è simmetrica
2. $\eta_{ii}>0$
3. $\det(\underline{\underline{\eta}}) = \eta_{_{11}}\eta_{_{22}}-\eta_{_{12}}\eta_{_{21}} = \eta_{_{11}}\eta_{_{22}}-\eta_{_{12}}^{2}>0$
4. $\underline{\underline{\eta}}$ è [sdp](sdp.md)

#### Generalizzazione di $\underline{\underline{\eta}}$ e $\underline{\eta}_{0}$

Prendendo uno spostamento relativo a caso:
$$\Delta v_{b}^{(0)} = \eta_{_{01}} = \sum_{j=1}^{3}Q_{j}^{(1)}q_{j}^{(0)} = \underline{Q}^{(1)T}\cdot \underline{q}^{(0)}$$
Sapendo la equazioni di legami costitutivi:
$$q_{i} = \frac{Q_{i}}{k_{i}}$$
Per una forma matriciale di questa equazione possiamo descrivere una matrice delle cedevolezze:
$$\underline{\underline{C}} = \begin{pmatrix}
\frac{1}{k_{1}}  &  &  \\
 & \ddots &   \\
 &  &  \frac{1}{k_n}
\end{pmatrix}$$

Possiamo scrivere allora che dalla equazione del $\Delta v_{b}$:
$$ = \underline{Q}^{(1)T}\underline{\underline{C}}\underline{Q}^{(0)}$$

Un'altra variabile sarà:
$$\Delta v_{c}^{(0)} = \eta_{_{02}} = \dots = \underline{Q}^{(2)T}\underline{\underline{C}}\underline{Q}^{(0)}$$
Scrivendo l'equazione delle azioni interne abbiamo che:
$$\underline{Q} = Q^{(0)}+\sum_{j=1}^{s}\underline{Q}^{(j)}X_{j} = \underline{\underline{N}}^{(0)}\underline{\widetilde{F}}+\underline{\underline{N}}^{(x)}\underline{X}$$
Vediamo allora che:
$$\underline{Q}^{(0)} = \underline{\underline{N}}^{(0)}\underline{\widetilde{F}}$$
Invece:
$$\underline{Q}^{(j)} \text{ è la j-esima colonna di } \underline{\underline{N}}^{(x)}$$
Riscrivendo la equazione del $\Delta v_{b}^{(0)}$ di nuovo con questa nuova definizione, possiamo scrivere:
$$= \underline{Q}^{(1)T}\underline{\underline{C}}\underline{\underline{N}}^{(0)}\underline{\widetilde{F}}$$

Il vettore dell'ausiliare 0 allora è:
$$\underline{\eta}_{0} = \underbrace{ \underline{\underline{N}}^{(x)T} }_{ \underline{Q}^{(j)} }\underline{\underline{C}}\underbrace{ \underline{\underline{N}}^{(0)}\underline{\widetilde{F}} }_{ \underline{Q}^{(0)} }$$
Per lo stesso ragionamento riga per riga, avremmo:
$$\underline{\underline{\eta}} = \underline{\underline{N}}^{(x)T}\underline{\underline{C}}\underline{\underline{N}}^{(x)}$$

In questa forma vediamo che:
$$\eta_{_{ij}} = \eta_{_{ji}}$$
Che è una delle proprietà che abbiamo visto.

#### Teorema di Klapeyron

Il teorema di Klapeyron è una dimostrazione che $\underline{\underline{\eta}}$ è [sdp](sdp.md).

Iniziando dalla equazione:
$$\underline{\underline{\eta}}\underline{X}+\underline{\eta}_{0} = \underline{0}$$
Definiamo $\theta$ come:
$$\underline{\theta} = \underline{\underline{\eta}}\underline{X}$$
Cioè il vettore degli spostamenti nel sistema principale dato dalle incognite iperstatiche.

Vogliamo calcolare il lavoro compiuto da $\underline{X}$ nel tempo.

Prendiamo il carico come funzione del tempo:
$$\underline{X}(t) = \alpha(t)\cdot \underline{\overline{X}}$$
$\underline{\overline{X}}$ è $\underline{X}$ generico.

Prendiamo $\alpha$ tale che al tempo 0 è 0 e al tempo 1 è 1.

Gli spostamenti allora anche loro saranno funzione del tempo è saranno:
$$\underline{\theta}(t) = \underline{\underline{\eta}}\underline{X}(t) = \alpha(t)\underline{\underline{\eta}}\underline{\overline{X}}$$
Per calcolare il lavoro compiuto da $\underline{X}$ per $\underline{\theta}$ è:
$$W = \int\limits_{t=0}^{t=1} \underline{X}(t)^{T} \, d\theta(t) = \underline{X}^{T}\underline{\underline{\eta}}\underline{\overline{X} } \cdot \int\limits_{0}^{1} \alpha \, d\alpha $$
Questo sarà:
$$W = \frac{1}{2}\underline{\overline{X}}^{T}\underline{\underline{\eta}}\cdot\underline{\overline{X}_{} }$$

Il lavoro per fare gli spostamenti nel tempo è un mezzo rispetto a se fossero occorsi istantaneamente. Questo è effetto del fatto che $\theta(t)$ è effetto di $X(t)$ se il legame non fosse lineare, sarebbe diverso.

Sappiamo che:
$$W(\underline{X}) = \frac{1}{2}\underline{X}^{T}\underline{\underline{\eta}}\underline{X}>0\,\,\,\,\forall \underline{X}\neq 0$$
Questo lo sappiamo perché per fare una deformazione dobbiamo immagazzinare del lavoro.

IL fatto che questo è positivo per ogni $\underline{X}$ è la stessa definizione di una matrice positiva. Questo significa che la matrice è [sdp](sdp.md), che allora il determinante è positivo e che allora è invertibile.

## Metodo delle Forze

Iniziando dal corollario 1:

$$\underline{\widetilde{F}}^{T}\hat{\underline{\widetilde{U}}} = \underline{Q}^{T}\underline{\hat{q}}\text{ se vale }\forall\{\hat{\underline{\widetilde{U}}}=\underline{\underline{T}}\underline{\hat{U}}, \hat{q} = \underline{\underline{B}}\underline{\hat{U}}\} \implies  \{\underline{\widetilde{F}},\underline{Q}\}\in C^{*} $$
Possiamo riscrivere il corollario come:
$$\begin{gather}
\underline{\widetilde{F}}^{T}\underline{\underline{T}}\underline{\hat{U}} = \underline{Q}^{T}\underline{\underline{B}}\underline{\hat{U}} \\
(\underline{\underline{T}}^{T}\underline{\widetilde{F}})\underline{\hat{U}} = (\underline{\underline{B}}^{T}\underline{Q}^{T}) \underline{\hat{U}}
\end{gather}$$
Possiamo definire $$\underline{\underline{D}} = \begin{pmatrix}
k_{1} &  &  \\
 & \ddots  &  \\
 &  & k_{n}
\end{pmatrix}$$
E con questo possiamo scrivere il legame costitutivo come:
$$\underline{Q} = \underline{\underline{D}}\underline{q} = \underline{\underline{D}}\underline{\underline{B}}\underline{U}$$
Possiamo riscrivere come:
$$=(\underline{\underline{B}}^{T}\underline{\underline{D}}\underline{\underline{B}}\underline{U})^{T}\underline{\hat{U}}$$

Se vale $\forall \underline{\hat{U}} \iff (\underline{F}-\underline{F}_{R})\underline{\hat{U}}=0 \,\,\,\forall \underline{\hat{U}}$

Dove $\underline{F} = \underline{\underline{T}}^{T}\underline{\widetilde{F}}$
E $\underline{F}_{R} = \underline{\underline{B}}^{T}\underline{\underline{D}}\underline{\underline{B}}\underline{U} = \underline{\underline{K}}\underline{U}$

Dove $\underline{\underline{K}}$ è la matrice di rigidezza elastica del sistema.

Se imponiamo $$\underline{F} = \underline{F}_{R}$$
$$\implies \underline{\underline{K}}\underline{U} = \underline{F}$$
Se $\exists \underline{\underline{K}}^{-1}\implies \underline{U} = \underline{\underline{K}}^{-1}\underline{F}$

Questo è il metodo degli spostamenti, e la stessa conclusione a cui siamo arrivati qualche lezione fa quando lo abbiamo introdotto, ma questa volta ci siamo arrivati con metodi analitici.