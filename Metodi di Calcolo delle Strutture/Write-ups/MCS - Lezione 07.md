---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 07 - Metodo degli Spostamenti e Teoria della Trave

## Metodo degli Spostamenti

Prendiamo il PLV come condizione sufficiente per l'equilibrio, per ciò permettendoci di usare il metodo degli spostamenti.

$$\text{Se }\underline{\widetilde{F}}^{T}\hat{\underline{\widetilde{U}}}= \underline{Q}^{T}\underline{q} \text{ vale }\forall\{\underline{\widetilde{U}} = \underline{\underline{T}}\underline{\hat{U}},\hat{q} = \underline{\underline{B}}\underline{\widetilde{U}}\} \implies  \{\underline{\widetilde{F}},\underline{Q}\}\in C^{*} $$

Allora possiamo riscrivere questo come:
$$\underline{\widetilde{F}}\underline{\underline{T}}\underline{\hat{U}} = \underline{Q}^{T}\underline{\underline{B}}\underline{\hat{U}} \iff (\underline{\underline{T}}^{T}\underline{\widetilde{F}})^{T} \underline{\hat{U}} = (\underline{\underline{B}}^{T}\underline{Q})^{T}\underline{\hat{U}}$$
Per il legame elastico, $\underline{Q} = \underline{\underline{D}}\underline{q} = \underline{\underline{D}}\underline{\underline{B}}\underline{U}$, possiamo riscrivere come:
$$\iff(\underline{\underline{T}}^{T}\underline{\widetilde{F}})\underline{\hat{U}} = (\underline{\underline{B}}^{T}\underline{\underline{D}}\underline{\underline{B}}\underline{U})\underline{\hat{U}}$$

Definiamo:
$\underline{F}= \underline{\underline{T}}^{T}\underline{\widetilde{F}}$ è vettore delle componenti lagrangiane delle forze attive.
$\underline{F}_{R} = \underline{\underline{B}}^{T}\underline{\underline{D}}\underline{\underline{B}}\underline{U} = \underline{\underline{K}}\underline{U}$ è il vettore delle componenti lagrangiane delle forze di richiamo elastico.

Imponendo $\underline{F} = \underline{F}_{R}$:
$$\implies (\underline{F}-\underline{F}_{R})\underline{\hat{U}} = 0\,\,\,\,\,\forall \underline{\hat{U}} \iff \underline{F}_{R}= \underline{F} \implies  \underline{\underline{K}}\underline{U} = \underline{F}$$
Che la formulazione del metodo degli spostamenti.

Troviamo l'unica configurazione di equilibrio che ci permette di trovare l'unica configurazione congruente del sistema.

Questo ricavo è molto semplice rispetto al ricavo del metodo delle forze, e infine troviamo che è un caratterizzazione della legge di Hooke.

Impostando $\underline{F}$ troviamo la cinematica consentita, invece impostando $\underline{U}$ troviamo la statica consentita.

### Esempio

Studiamo il cambio dalla configurazione iniziale a quella della statica ammissibile:

<!Diagramma problema esempio>

Il vettore delle coordinata lagrangiane è:
$$\underline{U} = (v_{c},\phi)^{T}$$
Il vettore degli spostamenti e rotazioni dei baricentri delle aste sono:
$$\underline{\widetilde{U}} = (v_{c},\phi)^{T}$$
Non è detto che questi due siamo uguali e infatti di solito non lo saranno, ma visto che lo sono la matrice di trasformazione è:
$$\underline{\underline{T}} = \begin{pmatrix}
1 & 0 \\
0 & 1
\end{pmatrix}$$
Le deformazioni generalizzate sono:
$$\begin{gather}
q_{1} = v_{c}-d\phi \\
q_{2} = v_{c} \\
q_{3} = v_{c}+d\phi
\end{gather}$$
La matrice $\underline{\underline{B}}$ sarà:
$$\underline{\underline{B}} = \begin{pmatrix}
1 & -d \\
1 & 0 \\
1 & d
\end{pmatrix}$$
Invece la matrice delle rigidezze sarà:
$$\underline{\underline{D}} = \begin{pmatrix}
k_{1} & 0 & 0 \\
0 & k_{2} & 0 \\
0 & 0 & k_{3}
\end{pmatrix}$$
Studiamo la cinematica dobbiamo definire $\underline{\widetilde{F}}$:
$$\underline{\widetilde{F}} = (F_{v},M)^{T}$$
Dove $F_{v}$ è la forza verticale agente sull'asta e M è il momento agente sull'asta.

Prendendo l'asta stessa:
<!Diagramma asta>

Troviamo allora:
$$F_{v} = P_{a}+P_{e}$$
$$M = (P_{e}-P_{a})2d$$
Questo significa allora che:
$$\underline{F} = \underline{\underline{T}}^{T}\underline{\widetilde{F}} = \begin{pmatrix}
P_{a}+P_{e} \\
(P_{e}-P_{a})\cdot2d
\end{pmatrix}$$
Invece troviamo la matrice $\underline{\underline{K}}$ facendo:
$$\underline{\underline{B}}^{T}\underline{\underline{D}}\underline{\underline{B}} = \begin{pmatrix}
k_{1}+k_{2}+k_{3} & (k_{3}-k_{1})d \\
(k_{3}-k_{1})d & (k_{1}+k_{3})d^{2}
\end{pmatrix}$$

Troviamo $\underline{U}$ come abbiamo trovare con l'approccio diretto qualche lezione fa, ma in modo molto più veloce.

### Proprietà di $\underline{\underline{K}}$ (come per $\underline{\underline{\eta}}$)

$\underline{\underline{K}}$ è [sdp](sdp.md). Per trovare questo possiamo usare la legge di Hooke per misurare la energia assorbita quando le molle vengono spostate dall'indeformata.

Per una molla la energia di deformazione elastica è $\Omega = \frac{1}{2}ku^{2}$. Possiamo scrivere questo per il sistema interno in funzione di $\underline{\underline{K}}$ e $\underline{U}$:

Descriviamo una deformazione dalla configurazione iniziale ad una generica deformazione.

Gli spostamenti generalizzati saranno dipendenti dal tempo tale che: $\underline{q}(t) = \alpha(t)\underline{\overline{q}_{}}$, la funzione $\alpha$ la prendiamo con le condizioni che a 0 sarà 0 e ad 1 sarà 1.

Le azioni interne corrispondenti saranno:
$$\underline{Q}(t) = \underline{\underline{D}}\underline{q}(t) = \underline{\underline{D}}\underline{\overline{q}_{} }\alpha(t)$$

La energia della molle in funzione dello spostamento sarà:
$$\Omega(\underline{q}) = \int\limits_{C_{0}}^{C}  \underline{Q}^{T}\, d\underline{q} = (\underline{\underline{D}}\underline{\overline{q}_{} })^{T}\int\limits_{0}^{1} \alpha(t) \, d\alpha = \frac{1}{2}\underline{\overline{q}_{} }\underline{\underline{D}}\underline{q} $$

In modo generale la energia sarà:
$$\Omega(\underline{q}) = \frac{1}{2}\underline{q}^{T}\underline{\underline{D}}\underline{q}>0 \,\,\,\,\forall \underline{q}\neq 0 \implies \text{Definita positiva}$$

Sappiamo che $\underline{q}= \underline{\underline{B}}\underline{U}$, quindi possiamo riscrivere come:
$$\Omega(\underline{U}) = \frac{1}{2}\underline{U}^{T}\underbrace{ \underline{\underline{B}}^{T}\underline{\underline{D}}\underline{\underline{B}} }_{ \underline{\underline{K}} }\underline{U} = \frac{1}{2}\underline{U}^{T}\underline{\underline{K}}\underline{U} >0$$
Se quest'ultimo disequilibrio vale per ogni $\underline{U}$ allora $\underline{\underline{K}}$ è definita positiva.

La matrice $\underline{\underline{B}}$ è rettangolare, quindi è possibile che il numero di deformazione e le coordinate lagrangiane non siano le stesse, se non lo sono allora $\underline{\underline{B}}$ non è invertibile e non possiamo fare tutti i passi all'indietro.

### Potenziale e Energia Potenziale Totale (EPT)

Se i carichi sono non conservativi allora definiamo la equazione di potenziale dei carichi come:
$$V_{p}(\underline{U}) = -\underline{\widetilde{F}}^{T}\underline{\widetilde{U}} = -\underline{\widetilde{F}}^{T}\underline{\underline{T}}\underline{U} = -(\underline{\underline{T}}^{T}\underline{\widetilde{F}})\underline{U} = -\underline{F}^{T}\underline{U}$$

La energia potenziale totale immagazzinata nel sistema ha equazione:
$$\Pi(\underline{U}) = \Omega(\underline{U})+V_{p}(\underline{U}) = \frac{1}{2}\underline{U}^{T}\underline{\underline{K}}\underline{U}-\underline{F}^{T}\underline{U}$$

### Teorema: Stazionarietà dell'EPT

$\Pi$ è stazionaria in corrispondenza della configurazione equilibrata del sistema.

Ad un punto di stazionarietà dell'EPT, corrisponde una configurazione non solo cinematicamente ammissibile ma anche equilibrata.

Lo proviamo trovando la condizione di stazionarietà di $\Pi$. La condizione di stazionarietà è quando $\Pi$ non varia, cioè la sua derivata è nulla.

Derivando per tutte le variabili:
$$\begin{align}
\delta \Pi = \frac{\partial \Pi}{\partial \underline{U}} \cdot \delta \underline{U} &= \frac{1}{2}[\delta \underline{U}^{T}\underline{\underline{K}}\underline{U}+\underline{U}^{T}\underline{\underline{K}}\delta \underline{U}-2\underline{F}^{T}\delta \underline{U}]= \\
\underline{\underline{K}}\text{ simmetrica}\implies &= \delta \underline{U}^{T} (\underline{\underline{K}}\underline{U}-\underline{F}) = 0 \iff \underline{\underline{K}}\underline{U} = \underline{F}
\end{align}$$

$\delta \Pi$ è stazionario se e solo s siamo in equilibrio.

##### Mini Esempio

<!Diagramma e matematica del mini esempio>

## Teoria della Trave

La teoria della trave descrive in modo matematico una trave e la sua deformazione. Vogliamo definire lo spostamento ad un qualsiasi punto nella trave rispetto alla sua indeformata.

A CM abbiamo visto la trave attraveso i casi di De San Venant(DSV). Volevamo risolvere il sistema risolvendo la equazioni dell continuo solido 3-dimensionale, per cui abbiamo posto molte ipotesi visto che è difficile. 
Per altre forme come la piastra e il guscio non è lo stesso.

Definiamo una trave non come lo ha fatto DSV ma con l'approccio degli spostamenti. La soluzione dovrebbe esser la stessa.

Guardiamo il problema della flessione come la soluzione di una generico problema elastico.

Consideriamo una trave:

<!Diagramma trave laterale e trasversale>

Prendiamo un punto generico $P(x,y)$.

La generica x individua una sezione trasversale della trave. Vogliamo risolvere un problema nel sistema 0,x,y quindi per ora ignoriamo problemi che ci portano la linea fuori dalla pagine, cioè guardiamo sistemi 2d.

### Cinematica della trave

Vogliamo descrive il movimento dalla configurazione iniziale ad una configurazione congruente.

Una configurazione congruente senza vincoli significa che la deformazione continua senza strappi o conpenetrazione di materiali.

Il punto P si trasformerà nel punto $\hat{P}$.

Lo spostamento tra questi due punti lo possiamo descrivere come:
$$\underline{S}(x,y) = \begin{pmatrix}
S_{x}(x,y) \\
S_{y}(x,y)
\end{pmatrix}$$
Per descrivere lo spostamento dobbiamo descrivere 2 funzioni scalari dipendenti da x e y. Definirle è difficile, quindi proviamo a ridurre il numero di variabili.

### Approssimazione semplificante

La approssimazione che facciamo è che la sezione trasversale della trave sia rigida. Questo significa che durante la deformazione, la sezione trasversale è piana, non è corretto e non segue DSV, ma ci dovrebbe dare un risultato giusto da un punto di vista tecnico.

#### Come Funziona

Prendiamo la stessa asta, definiamo una sezione nella indeformata e la stessa sezione nella deformata.

<!Diagramma come funziona>

In questo momento ci importa solo il cambio da $C_{0}$ a $\hat{C}$, e di definire $\hat{G}$ e $\hat{P}$ e lo spostamento da P e G in $C_{0}$.

Per descrivere lo spostamento di G, ci servono v,u e $\phi$. Per descrivere la configurazione dell'intera trave, servirà una trave per ogni sezione.

Ci servono 3 funzioni per descrivere u,v e $\phi$ in funzione di x:
$$\begin{gather}
u = u(x) \\
v =v(x) \\
\phi= \phi(x)
\end{gather}$$
Possiamo raccogliere questo in $\underline{U}(x) = (u,v,\phi)^{T}$
In vece di descrivere $S_{x}$ e $S_{y}$ servono solo descriver il vettore degli spostamenti generalizzati che saranno funzione di x.

Con la trave rigida avevamo un $\underline{U}$ che descriveva la trave intera, con la trave qui essendo una famiglia di segmenti $\underline{U}$, è funzione di x, ma rispetto al modello continuo dove lo spostamento era dipendente da x e y, abbiamo ridotto di una variabile indipendente il nostro problema.

L'irrigidimento della sezione ci semplifica il modello togliendone una coordinata.

Dobbiamo lo stesso esser capaci di descrivere lo spostamento di ogni punto che non è G, quindi come facciamo?

Per descrivere lo spostamento di P, dobbiamo descrivere lo spostamento di G e poi da li derivare la nuova posizione di G.

Gli spostamenti di P in x e y saranno:
$$\begin{align}
S_{x} &= u-y\sin \phi = u-y\phi + o(\phi^{2}) \\
S_{y} &= v-y(1-\cos \phi) = v+o(\phi^{2})
\end{align}$$
Geometricamente ci siamo arrivati facendo:
<!Diagramma derivazione geometrica>

In forma matriciale allora possiamo descrivere lo spostamento di ogni punto come:
$$\underline{s} = \begin{pmatrix}
1 & 0 & -y \\
0 & 1 & 0
\end{pmatrix}\begin{pmatrix}
u(x) \\
v(x) \\
\phi(x)
\end{pmatrix}= \underline{\underline{A}}(y)\cdot \underline{U}(x)$$

La matrice A è nota è dipende da y, ci permette in base alla sezione x e la posizione del punto nella sezione di trovare uno spostamento $\underline{s}$.

Ci permette di esprimere come funzione lineare degli spostamenti generalizzati di una sezione (u,v e $\phi$), lo spostamento di qualsiasi punto del sistema.


