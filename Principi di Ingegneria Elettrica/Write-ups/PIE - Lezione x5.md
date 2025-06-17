---
creation_date: 2023-11-14 17:24
tags:
  - PIE
share: true
---
# Lezione 15 - Regime Dinamico

## Fine Rifasamento in Trifase

Dato un caso generale di circuito trifase:

<!Diagramma trifase>

Un sistema simmetrico ha $E_{1}=E_{2}=E_{3}=E$

<!Diagramma simmetrico>

I carichi squilibrati hanno parti reali e parti vere che si sommano per trovare $Q_{TOT}$ e $P_{TOT}$, con cui si può calcolare $A_{TOT}$ e $\varphi$.

<!Diagramma triangolo A-tot>

$\varphi$ è detto angolo convenzionale ed è l'angolo che vogliamo uguale o maggiore di 0,9.

### Rifasamento

Prendendo un diagramma di trifase e attaccando un sistema di condensatori arbitrario abbiamo il circuito:

<!Diagramma di circuito>

Come abbiamo visto nelle ultime lezioni i condensatori hanno un contributo completamento immaginario e negativo (in anticipo) se V è posto sull'asse reale.
Riguardando la nostra somma di triangoli, i condensatori hanno l'effetto di ridurre la potenza reattiva che i nostri generatori devono erogare:

<!Diagramma triangoli con Q_c>

Troviamo che:

$$Q_{new}= P_{TOT}\tan(\arccos(0,9))\to \text{vogliamo che }\cos(\varphi) > 0,9$$
$$Q_{c}=Q_{TOT}-Q_{new}$$

I condensatori possono esser disposti in due modi:

<!Diagramma condensatori in stella e triangolo>

Le reattanze di queste due disposizioni sono:

$$\begin{gather}
X_{C\triangle} = = \frac{1}{\omega\triangle} \\
X_{CY}=\frac{1}{\omega C_{Y}}
\end{gather}$$

La potenza reattiva invece è:
$$\begin{align}
Q_{C}=\frac{3\overbrace{V^{2}}^{V^{2}=\sqrt{ 3 }E^{2}\to\stackrel{\text{Perchè}}{\text{\small{simmetrico}}}}}{X_{C\triangle}} &= \frac{3(\sqrt{ 3 }E^{2})}{X_{C\triangle}} \\
&= 3 \frac{E^{2}}{X_{CY}} = 3 \frac{\left( \frac{V}{\sqrt{ 3 }} \right)^{2}}{X_{CY}}
\end{align} $$
$$\begin{gather}
\implies Q_{C}=3 \frac{V^{2}}{\frac{1}{\omega C\triangle}} = \frac{V^{2}}{\frac{1}{\omega C_{Y}}} \\
\implies 3 \cdot V^{2}\omega C_{\triangle} = V^{2}\omega C_{Y} \\
\implies \boxed{ C_{Y}=3C_{\triangle} }
\end{gather}$$

$C_{\triangle}$ sono condensatori più piccoli che i $C_{Y}$, questo significa che costano meno. All'opposto però si ha che $E_{\triangle}=\sqrt{ 3 }E_{Y}$, questo però non è significativo se le tensioni medie sono basse.

<u>Fine reti in regime dinamico</u>
## Reti in Regime Dinamico

Le reti elettriche in regime dinamico sono reti che stanno transitando da regime stazionario nullo a regime stazionario a tensione e corrente massima.

Per lo scopo di questo corso i metodo di innesco di questa transizione sarà un interruttore.

Un interruttore in un circuito può avere simboli diversi e stati diversi (chiuso e aperto):

<!Diagramma interruttori>

Andremo a studiare le reti con interruttori che cambiano i nostri circuiti

### Variabili di Stato

Ogni sistema fisico che varia nel tempo a variabili indipendenti dette variabili di stato che godono di due proprietà:

1. Sapendo la variabile a t = 0 e il cambio nel tempo di quella variabile possiamo determine quella variabile ad ogni istante.
2. Sapendo un variabile di stato e come cambia nel tempo possiamo trovare altre variabili dipendenti.

Per i circuiti a regime dinamico le variabili di stato sono:

- la corrente, $i_{L}$ degli induttori
- la tensione, $v_{c}$ dei condensatori

In realtà le due variabili di stato sono $\psi$ (induttanza magnetica) e q (carica), ma sono proporzionali a i e v quindi usiamo i e v perché sono quelli che abbiamo usato fino a questo punto.

### Risoluzione di un problema (e ricaviamo equazioni)

Dato questo sistema di interruttore, resistenza e induttore:

<!Diagramma sistema iniziale>

Vogliamo trovare la variazione di i nel tempo.
Sappiamo già che prima venga chiuso l'interruttore la corrente è 0

<!Diagramma -infty a 0->

Sappiamo anche che a $t = \infty$ la corrente uguale a $\frac{E}{R} (1)$ dato che non varia più la tensione nell'induttore quindi ci lascia solo la resistenza del resistore per determinare la corrente.

<!Diagramma a infty con grafico>

<u>Vogliamo studiare in mezzo</u>

#### Studiamo in Mezzo

Sappiamo che le nostre equazioni di stato sono equazioni di primo ordine.

Nel caso del circuito che abbiamo preso abbiamo che:

$$\frac{di_{L}}{dt}=\frac{E}{L}-\frac{R_{i}}{L}\cdot i_{L}$$
Le equazione di primo ordine hanno parte omogenea e parte particolare.
$$x(t)=i_{L}(t) = i_{L_{0}}(t)+\underbrace{ i_{L_{P}}(t) }_{ \frac{E}{R} (1)}$$
La parte omogenea è lo stato del sistema quando il sistema è spento, perché ritornino i calcoli la parte omogenea deve sparire (=0 a t = 0, se no abbiamo potenza infinita). Il componente particolare nel nostro caso è il valore delle corrente a t = $\infty$, in questo caso lo abbiamo nel grafico prima

In questo caso la parte omogenea è $\frac{di_{L}}{dt}=-\frac{R}{L}\cdot i_{L}$

Il grafico che troviamo per le corrente è:

<!Diagramma i - t>

> [!note] 
> Questo grafico non può esser un grafico perché il cambio da i = 0 quando t = $0^{-}$ a $i \neq 0$ quando $t= 0^{+}$ richiederebbe una potenza istantanea infinita che non abbiamo. Questo ci dice anche che $x(0^{-}) = x(0^{+})$, detta continuità di stato.

Sappiamo che una soluzione all'equazione è:

$$x(t)=e^{\lambda t}$$

Nel caso di $\frac{di_{L}}{dt}$:
$$\frac{di_{L}}{dt}=-\frac{R}{L}i_{L}\implies \lambda=-\frac{R}{L}$$

Questo allora ci da:

$$i_{L}(t)=Ae^{ -\frac{R}{L}t} + \underbrace{ \frac{E}{R} }_{ i_{p}(t) }$$
Dato che $i_{L}(t)$ deve = 0 a t = 0, significa che dobbiamo trovare un valore di A opportuno:
$$i(0)=0\implies A=\frac{E}{R}$$
$$\implies i(t)=-\frac{E}{R}e^{ -\frac{R}{L}t }+\frac{E}{R}$$

Prendendo $\tau=\frac{L}{R}$ come costante, allora useremo t = 5$\tau$ come il punto dove consideriamo $i_{L_{0}}=0$, cioè il circuito è a corrente massima.


