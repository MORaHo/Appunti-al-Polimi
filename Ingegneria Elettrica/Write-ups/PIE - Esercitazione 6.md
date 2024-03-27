---
creation_date: 2023-11-10 21:43
tags:
  - PIE
share: true
---
# Esercitazione 6

## Esercizio 1

<!Diagramma esercizio 1 e calcoli>

## Teoria di Potenza a regime alternato

<!Diagrammi iniziali>
$$\begin{gather}
\text{potenza attiva}\to P=VI\cos(\phi) \\
\text{potenza reattiva}\to Q = VI\sin(\phi) \\
\text{potenza apparente}\to A= VI \\
\end{gather}$$
Equazioni per la potenza appparente:
$$\begin{align}
\overline{A}&=\overline{V}\cdot  \underline{I} \leftarrow \text{Convenzione che useremo}   \\
&=P+jQ \\
&= VI\cos(\phi)+jVI\sin(\phi) \\
\overline{A}&= \frac{V^{2}}{\underline{Z}}=\overline{Z}\cdot I^{2}  
\end{align}$$
Fasori:
$$\begin{gather}
\overline{V}=Ve^{ j\phi_{v} } \\
\overline{I}=Ie^{ j\phi_{\tiny{I}} }  \\
\phi=\phi_{v}=\phi_{I} \\
\underline{I}=Ie^{ -j\phi_{I} } \leftarrow \text{Cambia segno solo la parte immaginazia}
\end{gather}$$
### Equazione di Potenza Apparente
#### Resistenza
<!Diagramma solo resistenza>
$$\begin{gather}
\overline{A}=\overline{V}\underline{I}\to \overline{V}\cdot  \frac{\underline{V}}{R} = \frac{V^{2}}{R}=P \\
\to R\overline{I}\cdot  \underline{I}=RI^{2}=P \\
\text{Con solo R}\to \text{A,V e I sono reali} 
\end{gather}$$
Con solo resistenza, $P\geq 0$ e $Q=0$
#### Induttore
![](Pasted%20image%2020231110220110.png)
#### Condensatore
![](Pasted%20image%2020231110220131.png)
## Esercizio 2

<!Diagramma esercizio 2 e calcoli>
## Esercizio 3

<!Diagramma esercizio 3 e calcoli>
