---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 15 - Introduzione alle Piastre e Sistemi Bidimensionali

La piastra è la rappresentazione generica di un sistema bidimensionale. Agisce come una trave ma in questo caso consideriamo tre dimensioni invece di due e i propri spostamenti.

Lo spessore della piastra è funzione di due dimensioni invece della una della trave.

<!Diagramma dimensioni piastra>

La piastra le studiamo quando vogliamo distribuire un carico lungo due dimensioni.

## Modello Cinematico della piastra

Per studiare il modello cinematico, per ipotesi, prendiamo un segmento rettilineo inizialmente ortogonale al piano medio, si conservi rettilineo (la stessa lunghezza) durante il processo deformativo.
Questa ipotesi è simile alla ipotesi della sezione rigida che abbiamo preso nello studio della cinematica della trave.

Guardando lo spostamento di un generico punto Q nel piano x,z:

<!Diagramma spostamento della spostamento>

Lo spostamento nella due direzioni sarà:
$$\begin{cases}
S_{x} = u(x,y)-z\cdot\phi_{x}(x,y) \\
S_{z} = w(x,y)
\end{cases}$$

Invece nel piano y,z gli spostamenti saranno:
$$\begin{cases}
S_{y} = u(x,y)-z\cdot \phi_{z}(x,y) \\
S_{z} = w(x,y) \to \text{Uguale a prima}
\end{cases}$$

Lo spostamento di Q nelle tre dimensione allora sarà:
$$\begin{cases}
S_{x} = u(x,y) - z\cdot \phi_{x}(x,y) \\
S_{y} = v(x,y) -z\cdot \phi_{y}(x,y) \\
S_{z} = w(x,y)
\end{cases}$$
### Deformazione del Sistema
Gli spostamenti sono funzione di $u,v,w,\phi_{x}$ e $\phi_{y}$

Le deformazioni unitarie sono:
$$\begin{cases}
\varepsilon_{x} = \partial_{x}S_{x} = \underbrace{ \partial_{x}u }_{ \eta_{x} }-z\underbrace{ \partial _{x}\phi_{x} }_{ \chi_{x} }  = \eta_{x}-z\chi_{x}\\
\varepsilon _{y} = \partial_{y}S_{y}  = \underbrace{ \partial_{y}v }_{ \eta_{y} } - z\underbrace{ \partial_{y}\phi_{y} }_{ \chi_{y} } = \eta_{y}-z\chi_{y}\\
\varepsilon_{z} = \partial _{z}S_{z} = 0
\end{cases}$$

Le deformazioni angolari sono:
$$\begin{cases}
\gamma_{xy} = \partial _{y}S_{x} +\partial_{x}S_{y} = \underbrace{ \partial_{y}u(x,y)+\partial_{x}v(x,y) }_{ \eta_{xy} } - \underbrace{ z(\partial_{y}\phi_{x}+\partial_{x}\phi_{y}) }_{ \chi_{xy} } = \eta_{xy}-\chi_{xy}\\
\gamma_{xz} = \partial_{x}S_{z} + \partial_{z}S_{x} = \partial_{x}w-\phi _{x}=t_{x} \\ \\

\gamma_{yz} = \partial_{y}S_{z}+\partial_{z}S_{y} = \partial_{y}w-\phi_{y} = t_{y}
\end{cases}$$

I diagrammi di derivazione delle definizioni  sono:
<!Diagramma spiegazione derivazione>

Nelle deformazioni molti dei termini finali li abbiamo già visti se non che hanno forse un termine diverso.
Il termine nuovo in tutto questa è $\chi_{xy}$. Questa è la curvatura torsional, questo è un termine di resistenza in più che la piastra ha rispetto alla trave.

$\eta_{x}, \eta_{y}$ e $\eta_{z}$ sono come $\eta$ nella trave e descrivono la risposta del piano medio. A noi importa la risposta a carichi flessionali, i termini che corrispondono a ciò sono $\phi_{x}$ e $\phi_{y}$.

### Mindlin-Reissner vs. Kirchhoff-Love

Ci sono due modelli per le piastre, il modello di [Mindlin-Reissner](https://en.wikipedia.org/wiki/Reissner-Mindlin_plate_theory) è il caso generale e funziona per le piastra spesse, invece Kirchhoff-Love è il modello semplificato che funzione solo per le piastra poco spesse ed è equivalente dal modello di Eulero-Bernoulli per le piastre.

## [Modello Kirchhoff-Love](https://en.wikipedia.org/wiki/Kirchhoff%E2%80%93Love_plate_theory)

Il modello di Kirchhoff-Love semplifica il modello cinematico che abbiamo sviluppato, imponendo due ipotesi dove:
$$\begin{gather}
t_{x} = 0 \\
t_{y} = 0
\end{gather}$$
Questo significa che:
$$\implies \phi_{x} = \partial_{x}w \text{ e } \phi_{y} = \partial_{y}w$$

Significa che possiamo scrivere:
$$\begin{gather}
\chi_{x} = -\partial_{x}^{2}w  \\
\chi_{y}  = -\partial^{2}_{y}w \\
\chi_{xy} = -z\partial^{2}_{xy}w
\end{gather}$$

### Risposta flessione di una piastra sottile (Modello Kirchhoff-Love)

Lo spostamento generalizzato che prendiamo per solo la risposta flessionale è:
$$\underline{U} = (w(x,y))$$

La deformazioni generalizzate che prendiamo sono 3, tutte scrivibili in termini di $w$:
$$\underline{q}(x,y) = \begin{pmatrix}
\chi_{x},&\chi_{y},&\chi_{xy}
\end{pmatrix}^{T}$$

Come detto prima $w(x,y)$ è la deformata della piastra.

#### Definizione degli Sforzi Generalizzati

Prendiamo un cubetto e poniamo gli sforzi generalizzati:
<!Diagramma sforzi generalizzati>

Definiamo gli sforzi rispetto ad una base di equivalenza energetica, proviamo una configurazione cinematicametne ammissibile.

Mettendoci ad un generico punto:
$$\frac{dL_{int}}{dA} = \int\limits_{-\frac{h}{2}}^{h/2} (\sigma_{x}\hat{\varepsilon}_{x}+\sigma_{y}\hat{\varepsilon_{y}}+\tau_{xy}\hat{\gamma_{xy}}) \, dx $$
Per Kirchhoff love $\gamma_{xz}$ e $\gamma_{yz} = 0$, quindi sia $\tau_{xz}$ che $\tau_{yz}$ non contribuiscono alla energia interna.

Come abbiamo fatto nelle travi, la espressione del lavoro per la area dove esser uguale a:
$$\frac{dL_{int}}{dA} = \underline{Q}^{T}\cdot \hat{\underline{q}}$$
Sostituendo con le definizioni delle deformazioni:
$$\begin{align}
\frac{dL_{int}}{dA} &= \int\limits_{-h/2}^{h/2} (\sigma_{x}\cdot z\cdot\hat{\chi}_{x}+\sigma_{y}\cdot z\cdot \hat{\chi}_{y}+\tau_{xy}\cdot z\cdot \hat{\chi}_{xy})  \, dz=  \\
&= \underbrace{ \int\limits_{-h/2}^{h/2} \sigma_{x}\cdot z\cdot \hat{\chi}_{x} \, dz }_{ M_{x} } + \underbrace{ \int\limits_{-h/2}^{h/2} \sigma_{y}\cdot z\cdot \hat{\chi}_{y}  \, dz }_{ M_{y} } + \underbrace{ \int\limits_{-h/2}^{h/2} \tau_{xy}\cdot z \cdot \hat{\chi}_{xy}  \, dz }_{ M_{xy} }  
\end{align}$$

$M_{x}$ e $M_{y}$ sono il momento flettente lungo x e y, invece $M_{xy}$ è il momento torcente. Tutti questi sono momenti per unità di lunghezza non momenti.

Questo significa che il nostro vettore delle azioni interne è:
$$\underline{Q} = \begin{pmatrix}
M_{x}, & M_{y},&M_{xy}
\end{pmatrix}^{T}$$

Come per Eulero-Bernoulli l'azione di taglio esiste, ma si può calcolare solo per equilibrio come:
$$\begin{gather}
T_{x} = \int\limits_{-h/2}^{h/2} \tau_{xz}  \, dz  \\
T_{y} = \int\limits_{-h/2}^{h/2} \tau_{yz}  \, dz
\end{gather}$$

#### Condizioni di Equilibrio

Prendiamo una piastra a bordo regolare, senza spigoli e applichiamogli un carico distribuito.

<!Diagramma piastra>

Prendiamo $\Gamma = \partial A$ e $s\in[0,L_{\Gamma}]$, cioè l'ascisse curvilinea che circola il bordo.
Prendiamo infine il vettore $\underline{n} = (\alpha_{x},\alpha_{y}) = (\cos(\theta),\sin(\theta))^{T}$ normale al bordo.

$\Gamma = \Gamma_u \cup\Gamma_{f}$, dove $\Gamma_{u}$ che è la parte del bordo dove andiamo a definire gli spostamenti e $\Gamma_{f}$ è la parte dove andiamo ad applicare le forze.

Prendiamo un pezzetto bordo della piastra e definiamo le equazioni di equilibrio per tale pezzo indefinito:

<!Diagramma pezzetto al bordo>

Le uniche quantità che possiamo imporre sul bordo sono lo spostamento torsionali e la rotazione normale, vediamo dopo perché ci serve imporre solo 2 variabili.

Definiamo allora le rotazioni normali e torsionali sul bordo:
<!Diagramma rotazioni torsionali e normali>

$$\begin{cases}
\phi_{n} = \partial_{n}w &  \\
\phi_{s} = \partial s w 
\end{cases}\implies  \begin{cases}
\phi_{x}= \partial _{x} w = \phi_{n}\alpha_{x}-\phi_{s}\alpha _{y} \\
\phi_{y} = \partial_{y}w = \phi_{n}\alpha_{y} + \phi_{s}\alpha_{x}
\end{cases}$$

### Applicazione il PLV come condizione sufficiente di equilibrio

$$\begin{align}
L_{ext} &= \int\limits_{A}^{} p\hat{w} \, dA + \int\limits_{\Gamma_{f}}^{} (V  \hat{w}+W_{n}\hat{\phi}_{n}+ W_{ns}\hat{\phi}_{s})\, dA  = \\
& = \int\limits_{A}^{} p\hat{w} \, dA + \int\limits_{\Gamma _{f}}^{} (V\hat{w}+W_{n}\partial_{n}\hat{w}+W_{ns}\partial _{s}\hat{w}) \, dS  
\end{align}$$
$$\begin{align}
L_{int} &= \int\limits_{A}^{} M_{x}\hat{\chi}_{x}+M_{y}\hat{\chi}_{y}+M_{xy}\hat{\chi}_{xy} \, dA =  \\
& = -\int\limits_{A}^{} (M_{x}\partial^{2}_{x}\hat{w}+M_{y}\partial^{2}_{y}\hat{w} + 2M_{xy}\partial^{2}_{xy}\hat{w}) \, dA
\end{align}$$

Abbiamo ricavato sia il lavoro interno che esterno in termini di solo $\hat{w}$.
Per avere equilibrio dobbiamo trovare le condizioni per cui queste due si eguagliano $\forall \hat{w}$.
Prima di fare questa uguaglianza ci accorgiamo che $L_{int}$ contiene derivate del secondo ordine, allora proviamo a ridurre l'ordine delle derivate facendo uscire anche i termini di bordo che si possono bilanciare con i termini di bordo di $L_{ext}$, analogamente a come fatto nella trave con l'integrazione per parti.

Scriviamo allora che:
$$\begin{gather}
\partial_{x}(M_{x}\partial_{x}\hat{w}-\hat{w}\partial_{x}M_{x}) = \cancel{ \partial _{x}M_{x}\partial_{x}\hat{w} } + M_{x}\partial^{2}_{x}\hat{w}-\cancel{ \partial_{x}^{2}\hat{w}\partial _{x}M_{x} }-\hat{w}\partial^{2}_{x}M_{x} \\
\implies M_{x}\partial_{x}^{2}\hat{w} = \partial_{x}(M_{x}\partial_{x}\hat{w}-\hat{w}\partial_{x}M_{x}) + \underline{\hat{w}\partial^{2}_{x}M_{x}}
\end{gather}$$
Abbiamo allora siamo riusciti a ridurre l'ordine di derivazione imposto su $\hat{w}$, infatti abbiamo ricavato un termine senza derivata di $\hat{w}$ che sottolineamo per ricordarcelo dopo.

Analogamente abbiamo:
$$\begin{align}
M_{y}\partial_{y}^{2}\hat{w} &= \partial_{y}(M_{y}\partial_{y}\hat{w}-\hat{w}\partial_{y}M_{y}) + \underline{\hat{w}\partial^{2}_{y}M_{y}} \\
M_{xy} = \partial_{xy}\hat{w} &= -\partial_{y}(M_{xy}\partial _{x}\hat{w}) - \partial_{x}(\hat{w}\partial_{y}M_{xy}) + \hat{w}\partial_{xy}^{2}M_{xy} \\
&= \partial_{x}(M_{xy}\partial _{y}\hat{w}-\partial_{y}\hat{w}\partial_{y}M_{xy}) + \underline{\hat{w}\partial_{xy}^{2}M_{xy}}
\end{align}$$

Ci piacciono i termini sottolineati perché possiamo usare il teorema della divergenza (analogo dell'integrazione per parti in 2D) e le identità per riscrivere $L_{int}$.

Applicando le identità a tutti i termini abbiamo:
$$\begin{align}
L_{int} = &- \int\limits_{A}^{} (\partial^{2}_{x}M_{x}+2\partial_{xy}M_{xy}+\partial^{2}_{y}M_{y})\hat{w} \, dA \\
&- \int\limits_{A}^{} \partial_{x}[M_{x}\partial_{x}\hat{w}+M_{xy}\partial_{y}\hat{w}] +\partial_{y}[M_{xy}\partial_{y}\hat{w}+M_{y}\partial_{y}\hat{w}]\, dA \\
&+ \int\limits_{A}^{} \partial_{x}[\hat{w}(\partial_{x}M_{x}+\partial_{y}M_{xy})]+\partial_{y}[\hat{w}(\partial_{x}M_{xy}+\partial_{y}M_{y})] \, dA  
\end{align}$$
Applicando il teorema della divergenza agli ultimi due integrali imponendo l'uguaglianza abbiamo che:
$$L_{ext} = L_{int} \iff \begin{align}
&\int\limits_{A}^{} (\partial^{2}_{x}M_{x}+2\partial_{xy}^{2}M_{xy}+\partial^{2}_{y}M_{y}+p)\hat{w} \, dA + \\
+&\int\limits_{\Gamma}^{} (V-T_{n})\hat{w} \, dS + \underline{\int\limits_{\Gamma}^{} (W_{ns}+M_{sn})\partial_{s}\hat{w} \, dS}+ \\
+&  \int\limits_{\Gamma}^{} (W_{n}+M_{n})\partial_{n}\hat{w} \, dS    
\end{align}$$
Abbiamo aggiunto dei termini che sono le azioni interne al bordo:
$$\begin{cases}
T_{n} = (\partial_{x}M_{xy}+\partial_{y}M_{xy})\alpha_{x}+(\partial_{x}M_{xy}+\partial_{y}M_{xy})\alpha_{y} \\
M_{n} = \dots \\
M_{sn} = \dots
\end{cases}$$

Dal primo integrale ricaviamo l'equazione di equilibrio in forma indefinita:
$$\partial_{x}^{2}M_{x}+2\partial_{xy}M_{xy}+\partial_{y}^{2}M_{y}+p = 0$$

Guardando il termine sottolineato e integrandolo per parti ricaviamo che:
$$=[\cancelto{ 0 }{ (W_{ns}+M_{sn}) }\hat{w}]_{_{0}}^{L_{\Gamma}} - \int\limits_{\Gamma}^{} \partial_{s}(W_{ns}+M_{ns})\hat{w} \, dS$$
L'annullamento dei termini di bordo è solo possibile per il fatto che non abbiamo spigoli, se ne avessimo non sarebbe annullabile.

Sostituendo questo nelle ultime due equazioni ricaviamo che:
$$\int\limits_{\Gamma}^{}[\underbrace{ (V-\partial_{s}W_{ns}) }_{ V^{k} }-\underbrace{ (T_{n}+\partial_{s}M_{ns}) }_{ T_{n}^k }]\hat{w}  \, dS +\int\limits_{\Gamma}^{} (W_{n}+M_{n}) \partial_{n}\hat{w} \, dS $$

Da qui deriviamo che condizioni di equilibrio. Cioè:

- O $V^{k}-T_{n}^{ k} = 0$ oppure $\hat{w}$ noto.
- O $W_{n}+M_{n}=0$ oppure $\partial_{n}\hat{w}$ è noto.

Questo implica che abbiamo detto prima che ci serve imporre due quantità per l'equilibrio. Prima abbiamo detto che ci servivano la rotazione flessionale e la rotazione torcente, e infatti se torniamo indietro vediamo che questi due integrali ci impongono l'equilibrio della rotazione flessione e della rotazione torsionale.

