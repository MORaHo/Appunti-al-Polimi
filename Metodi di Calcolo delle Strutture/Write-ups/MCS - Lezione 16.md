---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 16 - [Conclusione Piastre e Sistemi Bidimensionali](https://en.wikipedia.org/wiki/Bending_of_plates)

Definiamo come l'ultima volta il modello della piastra:
<!Diagramma della piastra>

### Cinematica

Cinematicamente è semplicemente una derivazione in due dimensioni della cinematica della trave.
Gli sforzi erano un po' più difficile.

u,v e w sono gli spostamenti generalizzati, mentre h è lo spessore della piastra.

Gli spostamenti locali sono:
$$\begin{cases}
S_{x} = -z\cdot \phi_{x} \\
S_{y} = -z \cdot \phi_{y} \\
S_{z} = w
\end{cases}$$
Da questi spostamenti ricaviamo le deformazioni locali come:
$$\begin{cases}
\varepsilon_{x} = z\cdot \chi_{x} \\
\varepsilon_{y} = z\cdot \chi_{y} \\
\varepsilon_{z} = 0 \\
\gamma_{xy} = z\cdot \chi_{xy} \\
\gamma_{xz} = \partial_{x}w - \phi_{x} = t_{x} \\
\gamma_{yz} = \partial_{y}w - \phi_{y} = t_{y}
\end{cases}$$
In questo caso:
$$\begin{gather}
\chi_{i} \to \text{curvature flessionali} \\
\chi_{ij} \to \text{curvature torsionale} \\
t_{x},t_{y} \to \text{defroamzione tagliente media}
\end{gather}$$

Secondo il modello di Kirchhoff abbiamo:
$$\begin{cases}
t_{x} = 0 \iff \phi_{x} = \partial_{x}w \\
t_{y} = 0 \iff \phi_{y} = \partial_{y}w
\end{cases}$$
$\implies$ possiamo scrivere la cinematica con una sola variabile, $w(x,y)$.

Definiamo la rotazione flessionale e torsionale al bordo:
<!Diagramma rotazioni al bordo>

$$\begin{bmatrix}
\phi_{x}\\ \phi_{y}
\end{bmatrix} = \begin{bmatrix}
\alpha_{x} & -\alpha_{y}\\\alpha_{y} & \alpha_{x}
\end{bmatrix}\cdot \begin{bmatrix}
\phi_{n}\\ \phi_{s}
\end{bmatrix}$$

La deformazione generalizzata è:
$$\underline{q} = (\chi_{x},\chi_{y,}\chi_{xy})^{T}$$

### Azioni Interne

Per le nostra ipotesi prendiamo $\sigma_{z} = 0$, e invece $\sigma_{x},\sigma_{y},\tau_{xy},\tau_{xz},\tau_{yz} \neq 0$.

<!Diagramma azioni interne>

La azioni interne le troviamo come:
$$\begin{gather}
M_{x} = \int\limits_{-h/2}^{h/2} z\cdot\sigma_{x} \, dz \\
M_{y} = \int\limits_{-h/2}^{h/2} z\cdot\sigma_{y} \, dz  \\
M_{xy} = \int\limits_{-h/2}^{h/2} z\cdot \tau_{xy} \, dz \\
T_{x} = \int\limits_{-h/2}^{h/2} \tau_{xz} \, dz \\
T_{y} = \int\limits_{-h/2}^{h/2} \tau_{yz} \, dx   
\end{gather}$$
Tutte queste sono azioni per unità di lunghezza, non direttamente le azioni che vogliamo.

Il vettore delle azioni interne allora sarà:
$$\underline{Q} = (M_{x},M_{y},M_{xy})^{T}$$
Come già detto, i tagli esistono, però nel modello Kirchhoff-Love sono ricavabili solo per equilibrio.

### Azioni al Bordo

Le azioni al bordo sono perpendicolari a $\underline{n}$ il vettore ortogonale al piano.

<!Diagramma azioni al bordo>

Le azioni sono:
$$\begin{gather}
T_{n} = T_{x}\cdot\alpha_{x}+T_{y}\cdot\alpha_{y} \\
M_{n} = M_{x}\cdot\alpha_{x}^{2} +2M_{xy}\cdot\alpha_{x}\cdot\alpha_{y} + M_{y}\cdot\alpha_{y}^{2} \\
M_{sn} = (M_{n}-M_{x})\cdot\alpha_{x}\alpha_{y} + M_{xy}(\alpha_{x}^{2}-\alpha_{y}^{2})
\end{gather}$$

### Condizioni di Equilibrio

Prendiamo un carico esterno distribuito su una piastra senza spigoli e ricaviamo le condizioni di equilibrio.

<!Diagramma piastra con carico distribuito>

Il calcolo nella ultima lezione ci ha portato a trovare 3 termini che si devono annullare:

$$\begin{align}
&\int\limits_{A}^{} [\partial_{x}^{2}M_{x}+\partial_{xy}^{2}M_{xy}+\partial_{y}^{2}M_{y}+p]\hat{w} \, dA+ \\
&+\underbrace{ \int\limits_{\Gamma}^{} (W_{n}+M_{n})\partial_{n}\hat{w} \, ds }_{ \text{Rotazione Flessionale} } +  \\
& + \underbrace{ \int\limits_{\Gamma}^{} [(V_{n}-T_{n})\hat{w}+(W_{sn}+M_{sn})\partial _{s}\hat{w}] \, ds }_{ \text{Rotazione Torsionale} } = 0  
\end{align}$$

Dalla prima equazione troviamo l'equazione dell'equilibrio indefinito:
$$\partial_{x}^{2}M_{x}+\partial_{xy}^{2}M_{xy}+\partial_{y}^{2}M_{y}+p=0\;\;\;\;\;\forall \hat{w}$$

Questa equazione ci permette di ottenere p in ogni punto della piastra.

#### Ricavo fisico dell'equilibrio indefinito

Iniziamo prendendo l'equilibrio della traslazione verticale:
<!Diagramma equilibrio traslazione verticale>

La equazione di equilibrio ricavata è:
$$\partial_{x}T_{x}+\partial_{y}T_{y} + p = 0$$

Facendo poi l'equilibrio alle rotazioni flessionali e torcenti:
<!Diagramma equilibrio rotazioni>

Ricaviamo nella direzione x che:
$$\partial_{x}M_{x}+\partial_{y}M_{xy}-T_{x} = 0$$

Invece nella direzione y è:
$$\partial_{x}M_{xy} + \partial_{y}M_{y} -T_{y} = 0$$
Mettendo questi 3 equilibri ricaviamo l'equilibrio indefinito.

#### Le altre 2 equazioni

Dalla seconda parte dell'equilibrio ricaviamo che $W_{n} + M_{n} = 0$ oppure $\partial_{n}\hat{w} = 0\implies \partial_{n}\hat{w } = \phi_{n}\implies \hat{w}\text{ è nota}$.

La 3$^{\text{a}}$ parte è un po' più interessante.
$W_{s}-W_{n}\partial_{s}\hat{w}$ può esser integrato per parti e ricaviamo:
$$=[(W_{sn}+M_{sn})\hat{w}]_{_{0}}^{L_{\Gamma}}-\int\limits_{\Gamma}^{} \partial_{s}(W_{sn}+M_{sn})\hat{w} \, ds $$
La prima parte di questo si annulla nel caso in cui abbiamo un bordo regolare, lasciandoci il bisogno di imporre:
$$T_{n}^{k}=V_{n}^{k}\text{ oppure }\hat{w} = 0 \implies w= \overline{w}_{} $$
dove:
$$\begin{gather}
T_{n}^{k} = T_{n}+\partial_{s}M_{sn} \\
V_{n}^{k} = V_{n}-\partial_{s}W_{sn}
\end{gather}$$
Per avere equilibrio.

### Bordo non regolare/Bordo con spigolo

Prendiamo uno spigolo:
<!Diagramma spigolo>

Sappiamo che $\underline{n}^{+}\neq \underline{n}^{-}$.

Ritornando alla integrazione per parti, non riusciamo più ad eliminare tutto quella che è fuori dall'integrale perché i valori ora sono diversi:
$$[\underbrace{ (W_{sn}+M_{sn}) }_{ G }\hat{w}]_{_{0}}^{s^{*-} }+[(W_{sn}+M_{sn})\hat{w}]_{s^{*+}}^{^{0\,(=L_{\gamma})}}-\int\limits_{\Gamma}^{} \dots $$

Ignorando l'integrale per cui sappiamo già la soluzione, abbiamo:
$$= G^{-}-G^{0}+G^{0}-G^{+}$$
$$ = [(W_{sn}+M_{sn})^{-}-(W_{sn}+M_{sn})^{+}]w(s^{*} )$$

w è lo stesso, l'unica cosa che cambia è la sua derivata, questo è perché w varia tra $s^{-}$ e $s^{+}$.

Per aver equilibrio, o blocchiamo $w$ allo spigolo, o si fa la discontinuità dei momenti.

Il salto del momento torcente $M_{sn}$ deve esser uguale allo salto $W_{sn}$, questo salto è un momento per equilibrio.

Quindi o blocchiamo $w$ allo spigolo, generando una reazione che è un carico concentrato, o $w$ è libero e si ha condizione di equilibrio su un oggetto con senso di carico concentrato.

Nel caso di uno spigolo rettangolare dovremmo bilanciare la forza generata di $F^{*} = 2M^{*}_{xy}$ in uno dei due modi.

Una piastra non vincolata agli spigoli si solleva per annullare il momento torcente. Ovunque al bordo abbiamo compressioni, ma se non si mettono vincoli agli spigoli si ha trazione a loro. C'è un cambio di segno molto concentrato quindi quando progettando bisogna tenerci conto.

## Legame Costitutivo (Equazione della Superficie Elastica)

Definiamo:
$$\begin{gather}
M_{x} = D(\chi_{x}+\nu \chi_{y}) \\
M_{y} = D(\nu \chi_{x}+\chi_{y}) \\
M_{xy} = D \frac{1+\nu}{2}\chi_{xy}
\end{gather}$$
dove $D = \frac{Eh^{3}}{12(1-v^{2})}$.

Ricordiamoci che:
$$\begin{gather}
\chi_{x} = -\partial_{x}^{2}w \\
\chi_{y} = -\partial_{y}^{2}w \\
\chi_{xy} = -2\partial^{2}_{xy}w
\end{gather}$$

Riprendendo il equazione dell'equilibrio indefinito:
$$\partial^{2}M_{x} + 2\partial_{xy}^{2}M_{xy}+\partial^{2}_{y}M_{y} + p =0$$
Sostituendo le M, ricaviamo la equazione della superficie elastica:
$$\boxed{ \frac{ \partial ^{4}w }{ \partial x^{4} } + \frac{ \partial^{4} w }{ \partial x^{2} \partial y^{2} } +\frac{ \partial^{4} w }{ \partial y^{4} } = \frac{p}{D} }  $$
Questa equazione è nota anche come la Equazione di Germain-Lagrange e ci da il legame tra $w$ e $p$.

### Applicazioni

Prendiamo un piastra semplicemente appoggiata.

<!Diagramma piastra semplicemente appoggiata>

Imponiamo i vincoli sui lati 1 e 3:
$$w= 0 \;\;\;\text{ e }\;\;\;\;\partial^{2}_{y} w = 0$$
Invece su 2 e 4 imponiamo i vincoli:
$$w = 0\;\;\;\;\text{ e }\;\;\;\;\partial^{2}_{x} w = 0$$
Abbiamo posto questi due vincoli visto che è semplicemente appoggiata quindi la posizione deve esser 0 perché deve rimanere in appoggio e il momento flettente deve esser 0 perché l'appoggio non genera un momento per contrastare le azioni interne.

Le reazioni agli spigoli saranno in A e C $F = -2M_{xy}^{A,C}$ e in B e D $F = 2M_{xy}^{B,D}$.

Prendiamo una rappresentazione di p che usa una sere doppia di Fourier:
$$\begin{gather}
p(x,y) = \sum_{n,m}P_{nm}\sin\left( \frac{n\pi x}{a}\right)\sin\left( \frac{m\pi y}{a} \right)\to m,n \in\mathbb{N}^{+} \\
\sin\left( \frac{h\pi x}{a} \right)\sin\left( \frac{k\pi y}{a} \right) \cdot p(x,y) = \sum_{n,m}P_{nm}\sin\left( \frac{n\pi x}{a} \right)\sin\left( \frac{h\pi x}{a} \right)\sin\left( \frac{m\pi y}{a} \right)\sin\left( \frac{k\pi y}{a} \right) \to h,k \in \mathbb{N} \\
\end{gather}$$

Integrando:
$$\int\limits_{0}^{a} \int\limits_{0}^{a} \sin\left( \frac{h\pi x}{a} \right)\sin\left( \frac{k\pi y}{a} \right) \cdot p(x,y) \, dx  \, dy  = \int\limits_{0}^{a} \int\limits_{0}^{a} \sum_{n,m}P_{nm}\sin\left( \frac{n\pi x}{a} \right)\sin\left( \frac{h\pi x}{a} \right)\sin\left( \frac{m\pi y}{a} \right)\sin\left( \frac{k\pi y}{a} \right) \, dx  \, dy $$

Sappiamo che:
$$\int\limits_{0}^{a} \sin\left( \frac{m\pi y}{a} \right)\cdot \sin\left( \frac{k\pi y}{a} \right) \, dy = \begin{cases}
0 & \text{se }k \neq m \\
\frac{a}{2} & \text{se }k=m
\end{cases} $$

In generale:
$$= \begin{cases}
0 & \text{se }h,k \neq m,n \\
\frac{a^{2}}{4} & \text{se }k=m,h=n
\end{cases}$$

Allora, grazie all'integrazione:
$$\frac{a^{2}}{4}P_{nm} = \int\limits_{0}^{a} \int\limits_{0}^{a} p(x,y)\sin\left( \frac{n\pi x}{a} \right)\sin\left( \frac{m\pi y}{a} \right) \, dx  \, dy $$

Si può trovare $P_{nm}$ al variare di n e m.

Se $p(x,y) = P_{0}$, cioè se il carico è costante nella struttura, allora:
$$P_{nm} = \frac{16P_{0}}{\pi^{2}nm}\to n,m \text{ dispari}$$

Prendendo questo oggetto e mettendolo nella legge costitutiva (in una qualsiasi configurazione di p(x,y)):
$$\frac{ \partial^{4} w }{ \partial x^{4} } +2 \frac{ \partial^{4} w }{ \partial x^{2} \partial y^{2} } +\frac{ \partial^{4} w }{ \partial y^{4} } = \sum_{n,m} \frac{P_{nm}}{D}\sin\left( \frac{n\pi x}{a} \right)\sin\left( \frac{m\pi y}{a} \right)$$

Facendo finta che la soluzione prendi la forma:
$$w(x,y) = \sum_{n,m}W_{n,m}\sin\left( \frac{n\pi x}{a} \right)\sin\left( \frac{m\pi y}{a} \right)$$

Questa soluzione deve soddisfare sia la equazione di Germain-Lagrange che le condizioni al contorno.

Sui bordi, la forma che abbiamo preso per $w(x,y)$ usando Fourier, si annulla ai lati, e anche derivata seconda si annullerà, questo allora significa che rispetto le condizioni al contorno poste. Questa aderenza alle condizioni al contorno è utile perché significa che non dobbiamo controllare le condizioni in altri casi perché sappiamo che sono già soddisfatte.

Sviluppando il $w(x,y)$ preso, e calcolando le derivate quarte, troviamo una relazione lineare tra $W_{n,m}$ e $P_{n,m}$.

Se la piastra è rettangolare e in semplice appoggio si può sviluppare in serie il carico e possiamo assumere che $w$ prendi la stessa forma.