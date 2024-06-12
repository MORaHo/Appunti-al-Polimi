---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 20 - 

## Taglio Ortogonale $\to$ Modello Semplificato

Questo modello serve solo per il calcolo bidimensionale, il calcolo tridimensionale è più complicato quindi non viene considerato.

La velocità di avanzamento del pezzo è orizzontale, parallela rispetto al piano.

<!Diagramma pg.14>

Prendiamo le variabili:
$$\begin{gather}
h_{b} \to \text{spessore predeformazione} \\
b\to \text{larghezza} \\
h_{ch} \to \text{spessore deformato}
\end{gather}$$
Facciamo le ipotesi che:
$h_{b} \approx h_{ch}$ e che $h_{d}\ll b$

$\alpha_{o}$ ci permette di non avere attrito.

### Analisi per trovare $\phi$

$\phi$ è l'angolo del piano di scorrimento.

<!Diagramma pg.16>

Il fattore di ricalcamento è:
$$r_{c} = \frac{h_{d}}{h_{ch}}$$

Questo è minore di 1 dato che $h_{ch}>h_{d}$

Si può trovare con la costanza del volume (possiamo considerare questo perché arriviamo fino alla deformazione plastica a rottura):

$$h_{d}b_{d}l_{d}=h_{ch}b_{ch}l_{ch} \to r_{c} = \frac{h_{d}}{h_{ch}} = \frac{\cancel{ b_{ch} }l_{ch}}{\cancel{ b_{d} }l_{d}} = \frac{l_{ch}}{l_{d}}$$

$l_{ch}$ è molto semplice da trovare perché possiamo misurare un qualsiasi truciolo. 

$l_{d}$ invece è più difficile, dobbiamo fare una stime:
$$l_{d} = \frac{M}{\rho h_{d}b_{d}}$$

Questi parametri sono calcolabili ma sono molto variabili per possibili rottura e frammentazioni.

Da $r_{c}$ possiamo calcolare $\phi$ perché i sui parametri formano un triangolo per cui possiamo trovare $\phi$ come angolo:

<!Diagramma pg.21>

$$r_{c} = \frac{h_{d}}{h_{ch}} = \frac{l_{sh}\sin\phi}{l_{sh}\cos(\phi-\gamma_{o})} = \frac{\sin\phi}{\cos(\phi-\gamma_{o})}$$
$\gamma_{o}$ è un dato di progetto che abbiamo visto l'ultima volta.

$$\implies \tan\phi = \frac{r_{c}\cos\gamma_{o}}{1-r_{c}\sin\gamma_{o}}$$

Noto $\phi$ possiamo trovare la deformazione di taglio. cioè la translazione rispetto alla deformazione di spessore.

<!Diagramma alto-destra e basso pg.25>

$$\gamma = \frac{AC}{BC} = \frac{AD+DC}{BC}$$
NB: $\gamma_{o} \neq\gamma$, $\gamma$ è la deformazione di taglio invece $\gamma_{o}$ è l'angolo del tagliente.

<!Diagramma pg.28>

Guardando la geometria del triangolo ed estrapolando gl'angoli possiamo riscrivere l'equazione come:

$$\gamma = \cot \phi+\tan(\phi-\gamma_{o})$$

Questo fa vedere che con $\phi$ $\to$ 0, la pressione richiesta tende a $\phi$. Questo è quasi una legge nella lavorazione dei materiali, più piccolo il cambio che vuoi fare, più energia richiede.

### Zone di Deformazione

<!Diagramma pg.31>


Ci sono zone diverse di deformazione. La linea di deformazione in realtà è un zona di deformazione, ma in questo caso non fa molta differenza. La lineare di deformazione è detta zona di deformazione primaria dato che la maggior parte della deformazione del truciolo occorre li.

La zona secondaria di deformazione occorre per dove il truciolo striscia contro il pezzo del tagliente. Crea un'azione di flessione dato lo scorrimento e l'attrito causa incrudimento e aumenta la temperatura.

La terza zone appare se $\alpha_{o}$ non è progettata bene per non creare attrito, facciamo ipotesi tale che lo possiamo trascurare.

L'unico a cui teniamo a conto è la zona di deformazione primaria/ linea di deformazione perché l'attore primario.

## Tipi di Truciolo

La tipologia di truciolo dipende dal materiale dell'utensile, il materiale lavorato e i parametri di processo (temperatura e velocità di taglio)

<!Diagramma pg.32>


Esistono 4 tipi di truciolo:
- Discontinuo $\to$ tipico di materiali fragili o se è stata fatta una scelta sbagliata nella velocità di taglio, causa un finitura povera.
- Continuo $\to$ il materiale tagliato è duttile o velocità di lavorazione adatto. La superfice è perfettamente piatta che è quello che vogliamo. L'unica difficoltà è controllare il materiale tolto.
- Continuo con tagliente di riporto $\to$ se la velocità è troppo alta del materiale può attaccarsi all'utensile fondendosi (alta velocità alta temperatura) e poi si rompe depositandosi sul pezzo, questo processo è continuo e ripetitivo, causando danni alla superfice lavorata.
- Truciolo segmentato $\to$ Tipico dei materiali resistenti anche ad alte temperature come titanio e incandel, questo è continuo ma ad andamento seghettato. È causato da disomogeneità locali create dai materiali dati con cambi di temperatura.

## Forze di taglio

I vettori delle forze di taglio includono:
<!Diagramma vettori di taglio>

Scomponendo R nelle direzioni caratteristiche troviamo:
$$\begin{gather}
F_{\gamma} = R\sin\beta \\
F_{\gamma,n} = R\cos\beta \\
\mu = \tan\beta = \frac{F_{\gamma}}{F_{\gamma,n}} = \text{coeff. di attrito} \\
\end{gather}$$
NB: come prima $\beta \neq\beta_{o}$


Al materiale: $A_{sh} = l_{sh}b$

La tensione tangenziale creata è:
$$\tau_{sh} = \frac{F_{sh}}{A_{sh}}\text{ con }A_{sh} = \frac{h_{d}b}{\sin \phi}$$

$\tau$ e $\sigma$ sul pezzo sono diverse a causa della temperatura e deformazione a taglio diverse.

Prendendo un sistema di riferimento esterno, abbiamo:
$F_{c}$ $\to$ forza di taglio
$F_{f}$ $\to$ forza di avviamento

Facciamo molti calcoli usando vettori:
<!Diagramma pg.43>
Non lo scritto a mano perché stava spiegando troppo velocemente, e seguire e disegnare tutto allo stesso momento è diventato difficile quindi ho deciso di seguire la matematica non è difficile è lei che ci ha messo 20 mila minuti per trovare ogni angolo.

### Equazione di Merchant

Vogliamo definire $F_{sh}$ in termini di $F_{c}$ e $F_{f}$ cosi possiamo calcolare il lavoro. Conosciamo $\phi,\gamma_{o},F_{c}$ e $F_{f}$

La incognita in questo caso è $\beta$

Sappiamo che $F_{sh} = F_{c}\cos \phi - F_{f}\sin \phi$, è la tensione tangenziale è:
$$\tau_{sh} = \frac{F_{sh}}{A_{d}\sin \phi} = \frac{F_{c}\sin\phi\cos(\phi+\beta-\gamma_{o})}{h_{d}b\cos(\beta-\gamma_{o})}$$

Sono Merchant $\phi$ è determinato naturalmente dalla minimizzazione dell'energia richiesta per il taglio, questo significa che minimizzando $\tau_{sh}$ si può minimizzare la energia spesa.

Si ottiene allora che per minimizzare la energia richiede un angolo:
$$\boxed{ \phi =\frac{\pi}{4}+\frac{\gamma_{o}}{2}-\frac{\beta}{2} }$$
Questo può esser derivato dalla equazione di $F_{c}$ che troviamo esser come:
<!Diagramma pg.46>


Se conosco $\phi$ allora conosco $\beta$ si possono determinare per ciò tutte le forze interne.

La ipotesi che usiamo sono:

- modello di formazione del truciolo a piano di scorrimento, taglio ortogonale, assenza attrito sul dorso, attrito a coefficiente costante sul petto
- $\tau_{sh}$ costante e tipica del materiale (effetti trascurati: temperatura, def. angolare, velocità di def. angolare ( $\tau_{sh}$ ottenibile da esperimenti specifici)
- giacitura del piano di scorrimento (luogo dove si raggiunge il valore massimo della $\tau_{sh}$) disposta in modo tale che l’energia assorbita nel taglio sia minima

#### Equazione di Pijspanen

Questo è un modello ancora più semplificato, in cui abbiamo una ipotesi aggiunta di assenza d'attrito cioè $\beta=0$

La deformazione è:
$$\gamma = \cot \phi + \tan(\phi-\gamma_{o})\text{ con }\frac{ \partial \gamma }{ \partial \phi } =0\implies \phi = \frac{\pi}{4}+\frac{\gamma_{o}}{4}$$

L'equazione finale dell'angolo ottimale è uguale ma senza la presenza di $\beta$. In assenza di attrito, la minimizzazione significa minimizzare $\gamma_{o}$. 
