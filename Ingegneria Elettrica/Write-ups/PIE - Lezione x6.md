---
creation_date: 2023-11-17 19:53
tags:
  - PIE
share: true
---
# Lezione 16

## Ripasso transitorio del Induttore

<!Diagramma con interruttore>

Questo circuito ha 2 variabili di stato:
- $i_{L}$ = corrente sugli induttori
- $v_{C}$ = tensione sui condensatori

Ci limiteremo ad usare 1 conduttore o 1 induttore questo significa che avremo solo una variabile di stato

La equazione di primo ordine generale è:
$$\frac{dx}{dt} = Ax + Bu$$
Dove x è la variabile di stato e u è l'ingresso a quella variabile..

Basato sul circuito la tensione è:

$$E=Ri+L \frac{ di }{ dt } $$

#### Per t tra -$\infty$ e $0^{-}$:

I circuito è in corrente continua, questo significa che l'induttore agisce come un corto circuito:

<!Diagramma -infty e 0->

#### T tra $0^{-}$ e $0^{+}$

Sappiamo che $i(t)=0$ a $0^{-}$ è uguale a 0

Sappiamo anche per ogni variabile di stato che $x(0^{-})=x(0^{+})$

Dato che $0^{-}$ e $0^{+}$ significa che non ci può esser un gradino a t=0, significa che possiamo fissare $i(0^{+})=0$

La variabile dall'equazione di primo ordine è composta da parte omogenea e parte particolare

$$i = i_{o}(t)+i_{p}(t)$$
La parte omogenea deve tendere a 0 per t che tende a infinito, invece la parte particolare la sappiamo calcolare ed e lo stato finale del circuito quando t = $\infty$.

#### T a $\infty$

Ad t = $\infty$ siamo a corrente continua ed come prima della apertura dell'interruttore, l'induttore agisce come un circuito a corrente continua.

<!Diagramma pezzo e circuito a t = infty>

Dal circuito troviamo che:

$$\implies  i = i_{o}(t)+i_{p}(t)=i_{o}(t)+\frac{E}{R}$$
$i_{o}$ si trova spegnendo ogni ingresso (generatore), in questo caso troviamo che:

$$\frac{dx}{dt}=x\to x=Ae^{ -\lambda t }$$
Mettiamo il meno perché sappiamo che deve tendere a 0 e così non ce lo dimentichiamo.

Calcolando $i_{o}(t)$:

$i_{o}(t)=Ae^{ -\frac{R}{L}t }=Ae^{ -\frac{t}{\tau} }$

$\tau$ è nota come la costante di tempo $=\frac{L}{R}$ ed è nel ordine dei millesimi

$\frac{t}{\tau}$ si ritiene abbasta piccolo quando $t>5\tau$

Dopo si ritiene di esser a $\infty$, cioè il sistema non evolve più, è finita la transizione.

Per trovare A:

$$\begin{gather}
i= Ae^{ -\frac{t}{\tau} }+\frac{E}{R} \\
\text{a }t=0 \to i =0 \\
\implies A+\frac{E}{R}=0\implies A=-\frac{E}{R} \\
\end{gather}$$
La formula generale per $i$ è:
$$i(t)=-\frac{E}{R}e^{ -\frac{t}{\tau} }+\frac{E}{R}$$
Questa equazione genera il grafico:

<!Diagramma di i_L>

### Esplicitando ad una formula generale:

$$\begin{gather}
i(t)=Ae^{ -\frac{t}{\tau} }+i(\infty) \\
i(0^{+})=A+i(\infty) \\
A = i(0^{+}) - i(\infty) \\
\boxed{ i(t)=(i(0^{+})-i(\infty))e^{ -\frac{t}{\tau} }+i(\infty) }
\end{gather}$$
Questa ultima equazione ci esplicita a che punti nel tempo dobbiamo calcolare questa variabile.

## Tutte le variabili

La equazione che abbiamo trovare è applicabile ad ogni variabile non solo quelle di stato, quelle di stato però hanno anche la condizione che al punto $t=0^{+}$ sono nulle, invece le variabili non di stato possono avere qualsiasi valore a $t=0^{+}$, e possono avere qualsiasi coefficiente A.

<!Diagramma possibili grafici per varibili non di stato>

### Esempio

Dato questo circuito:

<!Diagramma circuito esempio>


$i_{2}(0^{-})\neq i_{2}(0^{+})$ e analogamente $v_{L}(0^{-})\neq v_{L}(0^{+})$ dato che non hanno la condizione data da esser variabile di stato.

Invece: $i_{L}(0^{-})=i_{L}(0^{+})$

$$i_{2}(t)=(i_{2}(0^{+})-i_{2}(\infty))e^{ -\frac{t}{\tau} }+i_{2}(\infty)$$
$$v_{L}(t)=(v_{L}(0^{+})-v_{L}(\infty))e^{ -\frac{t}{\tau} }+v_{L}(\infty)$$

Dato che abbiamo un induttore:
$$\boxed{ \tau  = \frac{L}{R_{eq}} }$$
Per trovare $R_{eq}$ facciamo Thevenin a $t= 0^{+}$:

<!Diagramma thevenin di r_eq>

In questo caso troviamo che $R_{eq}=R_{1}$, questo è perché vogliamo vedere la resistenza secondo l'induttore, $R_{eq}$ non vede $R_{2}$ perché c'è il corto circuito che "lo rende invisibile".

#### $t=0^{-}$

<!Diagramma t= 0->

#### $t=0^{+}$

<!Diagramma t = 0+>

Abbiamo fissato $i_{L}(0^{-})=i_{L}(0^{+})$ quindi data la invarianza abbiamo messo un generatore perché a $0^{+}$, i non può cambiare e l'induttore è percorso per la stessa corrente. In generale abbiamo messo il generatore li perché la corrente sta passando ma il circuto agisce come circuito aperto quindi mettiamo il generatore anche se a 0 per fare vedere che passa.

Sono equivalenti perchè:

<!Diagramma equivalenza>

$v_{L}$:

$$v_{L}(t)=(v_{L}(0^{+})-v_{L}(\infty))e^{ -\frac{t}{\tau} }+v_{L}(\infty)$$

Per calcolare $v_{L}(0^{+})$ congeliamo il circuito con l'induttore rimosso:

<!Diagramma circuito congelato>

Troviamo che:$E-R_{1}\cdot i_{L}(0^{-})=v_{L}(0^{+})\implies v_{L}(0^{+})=E$

Cercando a $t=\infty$:

<!Diagramma v a infinito>

Troviamo che $v_{L}=0$

Perciò troviamo il grafico:

<!Diagramma grafico v_L>

Lo scalino nel grafico va bene perché non è variabile di stato, questo significa che non deve avere lo stesso valore a $0^{+}$ e $0^-$ quindi possiamo avere lo scalino.

## Riassunto di transitorio con 1 sola L

### Passi per risolvere problema

1. Trovare $\tau$
	1. $R_{eq}$ $\to$  Thevenin ai capi di L a $0^{+}$
2. Trovare $i_{L}(0^{-})$
	1. Rete DC $\implies$ induttore = corto circuito
3. Variabile a $0^{+} \implies$ Risolvere rete a $0^{-}$ $\implies$ induttore = generatore di corrente a $i_{L}(0^{-})$
4. Variabile a $\infty \implies$ rete in DC $\implies$ induttore = corto circuito

I transitori richiedono la soluzione di 3 reti e un Thevenin

## Transitori con 1 conduttore

Questo sarebbe il duale ma ci mettemmo più tempo quindi lo ha spiegato direttamente.

Dato questo circuito con 1 condensatore:

<!Diagramma circuit con condensatore>

La equazione generale è la stessa ma la equazione di primo grado è:

$$E = Ri + \frac{1}{C}\int\limits_{0}^{t} i \, dt $$
Troviamo che $\tau$ è cambiato di calore a:

$$\boxed{ \tau = R_{eq}C }$$
Che diverso da $\tau=\frac{L}{R_{eq}}$ per l'induttore

I passi per solvere un transitorio sono uguali eccetto il fatto che il condensatore a $0^{-}$ diventa un corto circuito e a $0^{+}$ diventa un generatore di tensione.

> [!note] 
> Con il condensatore la tensione al condensatore è la variabile di stato.
> 

