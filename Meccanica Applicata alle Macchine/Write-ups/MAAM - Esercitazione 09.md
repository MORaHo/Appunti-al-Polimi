---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Esercitazione 9 - 

Il primo esercizio lo facciamo prima con il CIR, e poi lo stesso esercizio con PLV.

## Approccio CIR

<!Diagramma problema e dati>

$$\begin{gather}
v_{A} = w_{1}\cdot L \\
AK_{2} = L \to \text{triangolo equilatero} \\
w_{2} = \frac{v_{A}}{L} = \frac{w_{1}L}{L} = w_{1} \\
K_{2}H = L\sin\alpha \\
K_{2}B = 2L\sin\underbrace{ \alpha }_{ \frac{\pi}{6} }= L
\end{gather}$$

Trovando la velocità del punto B abbiamo:
$$v_{B} = w_{2}\cdot K_{2}B = w_{2}2L\sin\alpha = 10\cdot2\cdot0,5\cdot0.5 = 5\frac{m}{s}$$

Cercando la velocità dei baricentri $G_{1}$ e $G_{2}$, $G_{1}$ è facile:
$$v_{G_{1}} = K_{1}G_{1}\cdot w_{1} = \frac{L}{2}\cdot w_{1} = 0,5\cdot 0,5 \cdot 10 = 2,5 \frac{m}{s}$$

La velocità di $G_{2}$ è un'po' più complicata da trovare:

$$\begin{gather}
K_{2}G_{2} \to K_{2}C,CG_{2} \to K_{2}G_{2} = \sqrt{ (K_{2}C)^{2}+(CG_{2})^{2} } \\
CG_{2} = \frac{L}{2}\cos\alpha , HG_{2} = \frac{L}{2}\sin\alpha \\
K_{2}C= \frac{L}{2}+\frac{L}{2}\sin\alpha = \frac{L}{2}+\frac{L}{4} = \frac{3}{4}L = 0,375m \\
G_{2}C = \frac{L}{2}\cos\alpha = \frac{L}{2}\cdot \frac{\sqrt{ 3 }}{2} = 0,217m \\
v_{G_{2},V} = CG_{2}\cdot w_{2} = 2,17 \frac{m}{s} \\
v_{G_{2},O} = K_{2}C\cdot w_{2} = 0,375 \cdot 10 = 3,75 \frac{m}{s}
\end{gather}$$

## Approccio PLV

<!Diagramma problema>

Per mantenere nello stesso stato, serve applicare delle forze e delle coppie, visto che non è isostatico. Potremmo scomporre e ricavare da equilibri statici o usare PLV.

Per iniziale l'approccio PLV, bisogna imporre uno spostamento virtuale, questo che abbiamo preso (già riportato nella immagine), è $\delta\alpha$, ma si poteva imporre anche $\delta\beta$ o $\delta B$.

Dato lo spostamento virtuale scelto, troviamo come tutte le altri parti del sistema si muovono.
<!Diagramma spostamenti>

Allora il lavoro di questo sistema degli gli spostamenti piccoli sarà:
$$\delta L_{1} \equiv m_{1}\vec{g} \cdot \delta \vec{s_{G_{1}}} + m_{2}\vec{g}\cdot\delta \vec{s_{G_{2}}}+\vec{F}\cdot\delta \vec{s_{B}} = 0\to \text{Troviamo F}$$
Mettiamo sempre più in questo caso perché lo scalare fa apparire il negativo.

Ci sono tre attori nel lavoro, $\delta s_{G_{1}},\delta s_{G_{2}},\delta s_{B}$ e tutti e tre sono funzione di $\delta\alpha$.

Ogni parte del lavoro sarà o assorbente o cedente:
<!Diagramma primo cedimento e assorbimento>

Se avessimo cambiato la direzione di $\delta\alpha$, allora il segno di ogni lavoro cambiare e il diagramma sarebbe:
<!Diagramma cedimento e assorbimento con il segno cambiato>

Se ci venisse con i calcoli che per un sistema statico servirebbe $F=100N$, e ora ci viene detto che F è aumentato a 110N, il sistema accelererebbe.

Proviamo tutto modulo di $\delta\alpha$:

<!Diagramma diagramma con delta-alfa$>

$$\begin{gather}
\delta s_{G_{1}} = \frac{L}{2}\delta\alpha_{1} \\
\delta s_{G_{2},V} = \delta\alpha_{2}\cdot \frac{L}{2} \cos\alpha \\
\delta s_{B} = K_{2}B \delta\alpha_{2} = 2L\sin\alpha \cdot\delta\alpha \\
\delta L = -m_{1}g \cdot \delta s_{G_{1}} \cos\alpha - m_{2}g\delta s_{G_{2}} + F\delta s_{B}= \\
= -m_{1}g \cdot \frac{L}{2} \delta\alpha \cos\alpha - m_{2}g \delta\alpha  \frac{L}{2}\cos\alpha+F\cdot2L\sin\alpha \delta\alpha =  \\
=\delta\alpha\left[ -m_{1}g \cdot \frac{L}{2} \cos\alpha - m_{2}g  \frac{L}{2}\cos\alpha+F\cdot2L\sin\alpha \right] = 0
\end{gather}$$
Supponendo $m_{1} = m_{2} = 5 kg$

## Esercizio 2

<!Diagramma esercizio e dati>

Il diagramma può esser semplificato per trovare il CIR dell'asta:
<!Diagramma CIR asta>

Il movimento della massa intorno al cerchio sarà una componente di trascinamento e una relativa:

<!Diagramma sistema ad A con trascinamento e relativo>

Prendendo $\delta s_{A} = \delta\alpha L\sin\alpha$, abbiamo:
$$\delta\alpha_{3} = \frac{\delta s_{A}}{R_{2}} = \frac{\delta\alpha L\sin\alpha}{R_{2}}$$
$$\delta s_{B} = \delta\alpha \cdot K_{1}B = \delta \alpha \cdot L\cdot \cos\alpha$$
$$\delta s_{D,V} = \delta\alpha_{3} \cdot R_{1}$$

Un diagramma degli spostamenti è:
<!Diagramma spostamenti>

Il lavoro totale del sistema sarà:

$$\begin{gather}
\delta L = \vec{c}\cdot\delta \vec{\alpha} + \vec{F} \cdot \delta \vec{s_{B}} + M\vec{g} \cdot \delta s_{D,V} = \\
= - c\cdot\delta\alpha + F\delta\alpha L\cos\alpha - Mg\cdot\delta\alpha L\sin\alpha \cdot \frac{R_{1}}{R_{2}} =  \\
= \delta\alpha\left[ -c+FL\cos\alpha - Mg \frac{R_{1}}{R_{2}}L\sin\alpha \right] = 0 \\
\end{gather}$$
L'unica incognita rimasta è c che possiamo isolare e trovare.

Il diagramma di cedenza e assorbimento sarà:
<!Diagramma cedimento e assorbimento esercizio 2.>






