---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 03 - Statica

## Ripasso e spiegazione migliore

Prendiamo la configurazione iniziale $C_{0}$ che avrà $n_{c}$ corpi rigidi, $m_{v}$ equazione di vincolo e $n_{e}$ corpi elastici.

La cinematica studia il cambio dalla configurazione $C_{0} \to \hat{C}$, dove $\hat{C}$ è la configurazione cinematicamente ammissibile o congruente.

Presa un vettore di tutte le coordinate di spostamento lagrangiane $\widetilde{U}$. Il problema cinematico ha $m_{v}$ equazioni omogenee che lo possono descrivere.

Per descrivere il sistema allora possiamo scrivere:
$$\sum_{j=1}^{3n_{c}}z_{ij}\widetilde{U}_{j} = 0\;;\;i = 1,\dots,m_{v}$$
Dove $z_{ij}$ sono coefficienti moltiplicativi che descrivono i vincoli e forma del sistema, e $\widetilde{U}_{j}$ è il generico spostamento del j-esimo corpo rigido.

In forma matriciale abbiamo:
$$\underline{\underline{Z}}\underline{\widetilde{U}} = \underline{0}$$

Ci sono tre casi per la forma di questo sistema. 

I casi 1 e 2 sono quelli dove il sistema non ammette soluzione oltre a quella iniziale, e quindi non ci interessano.

Nel terzo caso, che è quello che ci interessa, abbiamo $m_{v}<3n_{c}$.

Questo significa che $\exists \infty^{N}\hat{C}$, dove $N=3n_{c}-m_{v}$

<!Forse bisogna aggiungere qualcosa qui>

Visto che $3n_{c} > m_{v}$ significa che abbiamo più variabili che descrivono il sistema che equazioni che possiamo usare per descriverle.

Per risolver questo problema facciamo una partizione del nostro sistema, scrivendo:

$$(\underline{\underline{Z}}_{A} \;\;\;\underline{\underline{Z}}_{B})\begin{pmatrix}
\underline{U}_{A} \\\underline{U}_{B}
\end{pmatrix}= \underline{0}$$

Visto che sappiamo risolvere sistema quadrati, abbiamo tirato fuori i pezzi che non sono quadrati.

Possiamo riscrivere come:
$$\begin{gather}
\underline{\underline{Z}}_{A}\underline{\widetilde{U}}_{A} + \underline{\underline{Z}}_{B}\underline{\widetilde{U}}_{B} = \underline{0} \\
\underline{\underline{Z}}_{A}\underline{\widetilde{U}}_{A} = - \underline{\underline{Z}}_{B}\underline{\widetilde{U}}_{B} \\
\underline{\widetilde{U}}_{A} = -\underline{\underline{Z}}_{A}^{-1}\underline{\underline{Z}}_{B}\underline{\widetilde{U}} _{B}
\end{gather}$$

Se fissiamo arbitrariamente il vettore delle variabili che non riusciamo a determinare $\underline{\widetilde{U}}_{B}$ allora consegue la soluzione di $\underline{\widetilde{U}}_{A}$

Scrivendo $\underline{\widetilde{U}}_{B}$ come $\underline{U}$, possiamo scrivere:
$$\underline{\widetilde{U}} = \underline{\underline{T}}\;\underline{U} = \begin{pmatrix}
-\underline{\underline{Z}}_{A}^{-1}\underline{\underline{Z}}_{B} \\
\underline{\underline{I}}
\end{pmatrix}\underline{U} =\begin{pmatrix}
-\underline{\underline{Z}}_{A}^{-1}\underline{\underline{Z}}_{B}\underline{U} \\
\underline{U}
\end{pmatrix}=\begin{pmatrix}
\underline{\widetilde{U}}_{A} \\
\underline{\widetilde{U}}_{B}
\end{pmatrix}$$
#### Connessione ad elementi elastici

Se una molla viene tirata dal nostro sistema di corpi:
<!Diagramma molla tirata>
Avremmo che lo spostamento generale è: $\Delta v = v_{1}+v_{2}$

Possiamo definire $v_{1}$ e $v_{2}$ come elementi di $\underline{U}$, perché saranno uguali a degli spostamenti dei corpi nel sistema. Cioè gli spostamento di corpi causa la compressione e lo stiramento delle molle quindi quanto si comprime/stira la molla sarà uguale a quanto si è spostato un certo corpo, e questo spostamento lo troviamo $\underline{\widetilde{U}}$, quindi lo spostamento sarà anche lui elemento del vettore.

Possiamo risolvere un sistema elastico mettendo ogni corpo elastico in $\underline{q}:$
$$\underline{q} = (q_{1},q_{2},\dots,q_{nc})^{T}$$

Data che gli spostamenti saranno elementi di U, possiamo scrivere il sistema elastico come:

$$\underline{q} = \underline{\underline{B}}\underline{U}$$
Dove $\underline{\underline{B}}$ è una matrice generica di conversione tra lo spostamento del sistema di corpi rigidi e lo spostamento dei corpi elastici.

Questa ultima equazione è nota come l'equazione di congruenza interna, perché rappresenta la congruenza del sistema elastico al sistema esterno di vincoli perfetti e i loro spostamenti.

### Esempio

<!Diagramma esempio>

In questo esempio vediamo che possiamo una singola coordinata lagrangiana per descrivere il sistema di corpi rigidi e i sui vincoli e anche la deformazione della molla.

Possiamo trovare lo spostamento del punto B rispetto ad A come, preso $\phi_{1}\ll 1$:
$$\begin{gather}
a = l\sin \phi_{1}   =l\phi_{1}+o(\phi_{1}) \\
b = l(1-\cos \phi_{1}) = 0+o(\phi_{1})
\end{gather}$$

Esiste il CIR di BC. B ha CIR come $r_{B}$ perché il suo spostamento per angoli piccoli e puramente verticale e quindi quello è il tipo di CIR che crea.

La cerniera posta in B significa che ci sarà un legame tra lo spostamento di B rispetto ad A e di B rispetto a C.

Troviamo allora che:
$$v_{B} = l\phi_{1}=l\phi_{2}\implies \phi_{1} = \phi_{2} = \phi$$

Possiamo allora definire $\phi$ come la nostra coordinata lagrangiana.
Le coordinate lagrangiane non sono uniche, avremmo potuto prendere $v_{B}$ come coordinata lagrangiana ma avrebbe reso la risposta meno sintetica.

Però appena abbiamo definito le nostre coordinate lagrangiane allora bisogna definire tutto in base a solo quelle.

Rimettendo la molla nel sistema troviamo che il suo spostamento generale sarà:
$$q = \Delta \phi = \phi_{1}+\phi_{2} = 2\phi$$

### Esempio 2

Questo è un esempio a più variabili

## Statica

Prendo $\underline{f}$ come il vettore risultate delle forze attive agenti sul corpo i:
$$\underline{f}_{i} = (F_{vi},F_{ui},M_{i}) \;;\;i=1,2,\dots,n_{c}$$

La vettore delle forza attive ai corpi rigidi sarà:
$$\underline{\widetilde{F}} = (\underline{f_{1}}^{T},\underline{f}_{2}^{T},\dots,\underline{f}_{n_{c}}^{T})_{3n_{c}\times1}$$
Questo vettore ha lo stesso senso di $\underline{\widetilde{U}}$ ma per le forze invece degli spostamenti.

I vincoli sono composti in due parti:

Le reazioni vincolari:
$$\underline{R}  = (R_{1},\dots,R_{mv})$$
E le reazioni interne (elastiche):
$$\underline{Q} = (Q_{1},\dots,Q_{ne})^{T}$$

La statiche descrive il movimento da $C_{0}$ a $C^{*}$, dove $C^{*}$ è la configurazione in cui nascon $\underline{R}$ e $\underline{Q}$ che contrastano globalmente $\underline{\widetilde{F}}$.

L'insieme delle azioni reattiva del sistema è:

$$\underline{G} = (\underline{R}^{T},\underline{Q}^{T})$$
Prendiamo allora il numero delle azioni reattive come:
$$n_{r} = m_{v}+n_{e}$$

Per la statica possiamo scrivere il legame tra le forze attive e reattive per piccoli spostamenti (richiesto dalla statica) come:
$$\sum_{i=1}^{n_{r}}y_{ij}G_{j} + \sum_{j=1}^{3n_{c}}\widetilde{w}_{ij}F_{j}=0\;;\;i=1,2,\dots,3n_{c}$$
Dove $y_{ij}$ sono i coefficienti delle equazioni attive, $F_{j}$ è il contributo delle forze attive e $G_{j}$ è il contributo delle forze reattive post sul sistema e in suoi vincoli. 

In forma matriciale:
$$\underline{\underline{Y}}\,\underline{G} + \underline{\underline{\widetilde{W}}}\,\underline{\widetilde{F}} = \underline{0}$$
Ipotizziamo che i vincoli siamo posti bene, che significa che $rango(\underline{\underline{Y}}) = 3n_{c}$

Ci sono 3 casi per l'esistenza delle soluzioni al sistema:

### Caso 1

Se $3n_{c}>n_{r}$ il sistema è sovradeterminato, definiamo questo tipo di sistema ipostatico, questo è perché non abbiamo vincoli che riescono a restringere i corpi è perciò non esiste una configurazione tale che le reazioni e azioni si contrastino globalmente.

<!Diagramma esempio>

### Caso 2

Se $3n_{c} = n_{r}$, definiamo il sistema come determinato, lo possiamo chiamare anche isostatico/staticamente determinato.
$$\text{Rango}(\underline{\underline{Y}})=3n_{c}\implies \exists \underline{\underline{Y}}^{-1} = \implies \exists!\underline{G}, \exists C^{*} $$
Questo è perché se prendiamo la equazione in forma matriciale:
$$\underline{\underline{Y}}\underline{G} = -\underline{\widetilde{W}}\,\underline{\widetilde{F}}$$

Ponendo le forza attive, con lo stesso senso del vettore di termini noti b, come:
$$\underline{\underline{y}}_{0} = -\underline{\underline{\widetilde{W}}}\;\underline{\underline{\widetilde{F}}}$$

Possiamo allora trovare forze reattive facendo:
$$\underline{G} = \underline{\underline{Y}}^{-1}\underline{\underline{y}}_{0}$$
Questo effettivamente è un modo molto astratto per descrivere come risolvevamo i sistemi isostatici a costruzione di macchine.

### Caso 3 $\to$ Quello che ci importa

Nel caso 3, $3n_{c} < n_{r}$. Definiamo questo tipo di sistema come sottodeterminato, cioè iperstatico.

Ci sono meno condizioni che ci servono per risolvere le equazioni, cioè più incognite di quanto ne posso calcolare.
Questo significa allora che ci sono:
$$\exists \infty^{S} \;C^{*} $$
Definendo s come il grado di iperstaticità del sistema, con equazione:
$$s = n_{r}-3n_{c}$$
Se vogliamo risolvere:
$$\underline{\underline{Y}}\underline{G} = \underline{\underline{y}}_{0}$$
Dobbiamo fare partizione del sistema per permetterci di trovare la equazione definitiva delle equazioni.

$$(\underline{\underline{Y}}_{A}\,\underline{\underline{Y}}_{B}) \begin{pmatrix}
\underline{G}_{A} \\
\underline{G}_{B}
\end{pmatrix}=\underline{\underline{y}}_{0}$$
Avendo $rango(\underline{\underline{Y}}_{A}) = 3n_{c} \implies \underline{\underline{Y}}_{A}$ invertibile $\implies \exists \underline{\underline{Y}}_{A}^{-1}$

Risolvendo la partizione abbiamo:
$$\underline{\underline{Y}}_{A}\underline{G}_{A}+\underline{\underline{Y}}_{B}\underline{G}_{B}= \underline{y}_{0}$$
$$\begin{gather}
\underline{\underline{Y}}_{A}\underline{G}_{A} = \underline{\underline{y}}_{0} - \underline{\underline{Y}}_{B}\underline{G}_{B} \\
\underline{G}_{A} = \underline{\underline{Y}}_{A}^{-1}\underline{\underline{y}}_{0} - \underline{\underline{Y}}_{A}^{-1}\underline{\underline{Y}}_{B}\underline{G}_{B}
\end{gather}$$
Fissata le forza attive ($\underline{\underline{y}}_{0}$) possiamo calcolare parte delle forze reattive, troviamo che $\underline{G}_{B}$ è il vettore di parametri che dobbiamo fissare arbitrariamente per risolvere il sistema, fissando s valori nel vettore possiamo calcolare lo stato di equilibrio del sistema.

$\underline{G}_{B}$ non posso determinarlo per l'equilibrio, devo fissarlo, e ci sono s gradi di libertà nel sistema. Ci nuovo per la sua arbitrarietà fissiamo $\underline{G}_{B} = \underline{X}$. $\underline{X}$ allora è il vettore dei parametri che descrivono le possibili configurazioni equilibrate, detto anche il vettore delle incognite iperstatiche.

Definiamo $\underline{X}$ come il vettore delle incognite iperstatiche che dobbiamo definire per definire completamente il nostro sistema. (Penso queste siano le nostre condizioni di contorno del sistema).

## Commenti sul Problema Elastico

Il problema elastico di chiede di trovare una soluzione al sistema che è sia congruente che equilibrata, cioè che rispetta tutti i vincoli e che le forze attive bilanciano le forze reattive.

Nella cinematica guardiamo solo sistemi che sono solo congruenti, e invece nella statica ci è chiesto di guardare sistemi che sono equilibrati.

Questo allora significa che $C^{*}$, che è la configurazione staticamente ammissibile, esiste solo sotto certe condizioni. Non è detto che sia la soluzione del problema elastico, perché non consideriamo il sistema in una forma deformata perché abbiamo fatto l'ipotesi che l'equilibrio sarà in una forma leggermente deformata non macroscopicamente deformata.


