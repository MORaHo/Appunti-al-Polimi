---
creation_date: 2023-11-11 16:57
tags:
  - PIE
share: true
---
# Lezione 14 - Aspetti Energetici di Reti Trifase

## Ripasso

È da un'pò che non c'è classe quindi facciamo un ripasso veloce.

Questo è un diagramma di una circuito a trifase con 3 nodi:

<!Diagramma trifase>

Possiamo trovare due tensioni tra il punto O, e A o B usando la formula di Millman

$$\begin{gather}
V_{OA}=\frac{\frac{\overline{E}_{1}}{\overline{Z}_{1}} + \frac{\overline{E}_{2}}{\overline{Z}_{2} }+\frac{\overline{E}_{3}}{\overline{Z}_{3} }}{\frac{1}{\overline{Z}_{1} }+\frac{1}{\overline{Z}_{2} }+\frac{1}{\overline{Z}_{3} }} \\
V_{OB}=\frac{\frac{\overline{E}_{1}}{\overline{Z}_{A}} + \frac{\overline{E}_{2}}{\overline{Z}_{B} }+\frac{\overline{E}_{3}}{\overline{Z}_{C} }}{\frac{1}{\overline{Z}_{A} }+\frac{1}{\overline{Z}_{B} }+\frac{1}{\overline{Z}_{C} }}
\end{gather}$$
Per il nodo A, $\overline{Z}_{A}$,$\overline{Z}_{B}$ e $\overline{Z}_{C}$ possono esser trascurati perché sono carichi trasversali.
Per il nodo B, $\overline{Z}_{1}$,$\overline{Z}_{2}$ e $\overline{Z}_{3}$ possono esser trascurati perché sono carichi trasversali

Tutti i carichi inseriti tra le fasi sono carichi trasversali.

### Esempio

<!Diagramma esempio trifase>
Vogliamo trovare $I_{1}$
$$\begin{gather}
\overline{V}_{Z_{1}}=\overline{E}_{1}-\overline{V}_{BA} \\
\overline{I}_{A} = \frac{\overline{V}_{Z_{1}}}{\overline{Z}_{1} }   \\
\overline{V}_{Z_{A}}=\overline{E}-\overline{V}_{CA}  \\
\overline{I}_{A}=\frac{\overline{V}_{Z_{A}}}{\overline{Z}_{A} } \\
\overline{I}_{Z}=\frac{\overline{E}_{1}-\overline{E}_{2}}{\overline{Z} }  \to \overline{E}_{1}-\overline{E}_{2} \text{ è tensione concatenata (lezione 13)}  
\end{gather}$$
Con LKC:
$$\overline{I}_{1}=\overline{I}_{A}+\overline{I}_{Z}+\overline{I}_{Z_{1}}    $$
## Wattmetro

<!Diagramma trifase con wattmetro>

In questo caso il wattmetro è usato per trovare $\overline{I}$ e $(\overline{E}_{1}-\overline{E}_{2}) \to$ tensione concatenata tra la fase 1 e 2.

$$W = \mathbb{R}e(\overline{V}\cdot  \underline{I} )=\mathbb{R}e(\overline{V}_{W} \cdot  \underline{I}_{1})=\mathbb{R}e((\overline{E}_{1} -\overline{E}_{2} )\underline{I}_{1})$$
Questa potenza è la potenza apparente nel punto, effettivamente non ha effetto fisico perché è solo il prodotto tra 2 dimensioni in un punto.

Il wattmetro misura la tensione ai morsetti verticali e la corrente nei morsetti orizzontali.

<!Diagramma V e I del wattmetro>

Quando mettiamo un wattmetro vogliamo esser sicuri che non cambi il circuito se no modifichiamo il sistema e perciò non è il valore del circuito di prima ma del circuito nuovo.

### Esempio:

<!Diagramma esempio wattmetro>

Solo $V_{OB}$ è calcolabile con Millman e $V_{OB}$ è uguale a $\overline{E}_{2}$ perché non c'è carico sulla fase quindi definisce $V_{OB}$.

Se avessimo provato a calcolare $V_{OA}$:

$$V_{OA} = \frac{\frac{\overline{E}_{1}}{\overline{Z}_{1}}+\frac{\overline{E}_{2}}{0}+\dots}{\frac{1}{\overline{Z}_{1} }+\frac{1}{0}+\dots} = \frac{\infty}{\infty}$$
Di solito questo risultato indica che ho il valore di $V_{OA}$ è ovvio o che bisogna trovare il valore in un altro modo. Indica che stai facendo un errore teorico.

Un carico tra A e B non è calcolabile con Millman solo con Thevenin.

<u>La prima cosa da fare con un circuito trifase è verificare la configurazione</u>

> [!warning] 
> Non cambiare mai Millman, se viene $\infty$ viene $\infty$, il punto non è un centro stella quindi bisogna controllare la configurazione

## Sistema Equilibrato

Un sistema è equilibrato se aderisce a queste ipotesi:

$$\overline{Z}_{1}=\overline{Z}_{2}=\overline{Z}_{3}$$
Nel caso di prima doveva valere anche:
$$\overline{Z}_{A}=\overline{Z}_{B}=\overline{Z}_{C}$$

La tensione $V_{OA}$:

$$\overline{V}_{OA} = \frac{\frac{\overline{E}_{1}}{\overline{Z}_{1} }+\frac{\overline{E}_{2}}{\overline{Z}_{2} }+\frac{\overline{E}_{3}}{\overline{Z}_{3} }}{\frac{1}{\overline{Z}_{1} }+\frac{1}{\overline{Z}_{2} }+\frac{1}{\overline{Z}_{3} }} = \frac{\frac{\overline{E}_{1}}{\overline{Z} }+\frac{\overline{E}_{2}}{\overline{Z}_{} }+\frac{\overline{E}_{3}}{\overline{Z} }}{\frac{1}{\overline{Z}_{} }+\frac{1}{\overline{Z}_{} }+\frac{1}{\overline{Z} }} = \frac{\overline{E}_{1}+\overline{E}_{2}+\overline{E}_{3}}{3}     $$

## Sistema Simmetrico

Un sistema è simmetrico se $\phi_{1}=\phi_{2}=\phi_{3}$ e $E_{1}=E_{2}=E_{3}$ e $\overline{E}_{1}=\overline{E}_{2}=\overline{E}_{3}=0$

Un sistema può essere simmetrico ma non equilibrato e vice versa.

## Sistema Simmetrico Equilibrato

Se prendiamo un sistema simmetrico ed equilibrato:
$$V_{OA}=0$$
Se non fosse simmetrico allora:
$$\overline{E}_{1}+\overline{E}_{2}+\overline{E}_{3}$$
E1 il baricentro delle tensioni applicate

<!Diagramma baricentro di trifase>

La tensione $\overline{V}_{OG}$ è detto spostamento del centro stella, per noi non importa.

In pratica si prova ad usare il più possibile sistemi simmetrici e equilibrati.

$\implies \overline{E}_{1}+\overline{E}_{2}+\overline{E}_{3}=0$ è come se tutti i nodi fossero connessi perché $V_{OA}=V_{OB}=0$

<!Diagramma nodi uniti>

Significa che ogni fase può esser isolata e può esser disegnata come un <u>monofase equivalente</u>:

<!Diagramma monofase equivalente>

In pratica si usano i monofasi equivalenti ma nel nostro caso no.

## Aspetti Energetici di Reti Trifase

Guardando al wattmetro nel esempio prima, la potenza che ricava non ha senso fisico è solo un numero che è calcolato dai valori al punto.

La potenza attiva totale è:
$$\begin{align}
P_{TOT}&=P_{E_{1}}+P_{E_{2}}+P_{E_{3}} \\
&= \mathbb{R}e(\overline{E}_{1}\cdot  \underline{I}_{1} )+\mathbb{R}e(\overline{E}_{2} \cdot  \underline{I}_{2})+\mathbb{R}e(\overline{E}_{3} \cdot  \underline{I}_{3})
\end{align}$$

Ponendo due wattmetri in un circuito:

<!Diagramma equivalenza con due wattmetri>

Questo due circuiti sono uguali se è simmetrico, per connettere i carichi ai generatori in realtà sarebbe difficile perché ci sono grandi distanze tra i generatori e i carichi quindi mandare ulteriori cavi tra i due non è molto fattibile.

### Inserzione Aaron

<!Diagramma due possibili intersezioni Aaron>

$$P_{TOT}=W_{1}+W_{2}$$
Tutte e due individualmente non hanno significato fisico, ma insieme indicano la potenza totale del circuito.

$$\boxed{ \begin{align}
&=\mathbb{R}e((\overline{E}_{1} -\overline{E}_{3} )\cdot  \underline{I}_{1})+\mathbb{R}e((\overline{E}_{2} -\overline{E}_{3} )\cdot  \underline{I}_{2}) \\
&= \mathbb{R}e(\overline{E}_{1}\cdot  \underline{I}_{1} +\overline{E}_{2}\cdot  \underline{I}_{2}+ \overline{E}_{3}(-\underline{I}_{1}-\underline{I}_{2})  ) \\
\text{Per}&\text{ LKC sempre} \implies  \overline{I}_{1}+\overline{I}_{2}+\overline{I}_{3}=0\implies \overline{I}_{3}=-\overline{I}_{1}-\overline{I}_{2} \\
&\implies P_{TOT}=\mathbb{R}e(\overline{E}_{1} \cdot  \underline{I}_{1}+\overline{E}_{2} \cdot  \underline{I}_{2}+\overline{E}_{3}\cdot  \underline{I}_{3} )      
\end{align} }$$

<!Diagramma fasi>

Anche se le tensioni che guardiamo sono immediate, prendendo istante per istante si cancellano.

Servono al minimo 2 wattmetri per calcolare la potenza totale, perché uo singolo non ha significato fisico.

Il principio di somma vale per ognuno dei tipi di potenza.


## Rifasamento in Trifase

<!Diagramma somma vettori di potenze>

Con la somma di tutti i vettori troviamo $\cos (\phi)$ convenzionale. Anche se $\phi$ lo troviamo dalla somma di tutti i vettori non altra correllazzione ai vettori oltre esser l'angolo del vettore somma.

$\phi=\arctan \frac{Q_{TOT}}{P_{TOT}}$ e vogliamo $\cos(\phi)>0,9$

Si può rifasare un circuito trifase mettendo i condensatori in stella o in triangolo.

<!Diagramma condensatori stella e triangolo>

Queste due soluzioni sono uguali, perché il V a cui sono sottoposti i condensatori sono diversi: $V_{3}$ è una tensione concatenata quindi $V_{3}=\sqrt{ 3 }V_{12}$ se il circuito è simmetrico ed equilibrato. Questo significa che in triangolo il condensatore deve resistire di più.

Un'altra relazione era che:
$$\overline{Z}_{Y}=\frac{\overline{Z}_{△}}{3}$$
Quindi:
$$\begin{gather}
\overline{Z}_{Y}=-j \frac{1}{\omega C_{Y}} \\
\overline{Z}_{△} = 3\overline{Z}_{Y}=-3j \frac{1}{\omega C_{Y}}=-j \frac{1}{\omega C_{△}} \\
\implies \boxed{ C_{△}=\frac{C_{Y}}{3} }
\end{gather}$$
| Stella | Triangolo |
| ------ | --------- |
| Meno V | Più V     |
| più C  | meno C    |

 