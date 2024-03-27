---
creation_date: 2023-11-05 15:26
tags:
  - cosmac
share: true
---
# Esercitazione 8

## Esercizio 1

<!Diagramma esercizio 1>

Solo per vedere applichiamo l'approccio per sistemi iperstatici a sistemi isostatici:

<!Diagramma esercizio 1 approccio iperstatico>

## Esercizio 2

<!Diagramma esercizio 2>

> [!note] 
> Freccia massimo = punto di divergenza massima da v = 0
## Esercizio 3

<!Diagramma esercizio 3>

## Esercizio 4 - Dalla linea elastica alle azioni interne

In questo andiamo dalla linea elastica alle azioni interne perché nei casi iperstatici non sappiamo analizzare le azioni interne e perciò non possiamo andare, come negli isostatici, dalle azioni interne alla linea elastica.

<!Diagramma esercizio 4>


## Esercizio 5 - Caso iperstatico

<!Diagramma esercizio 5>

## Esercizio 6 - Caso di Carico Distribuito

<!Diagramma esercizio 6>

## Geometria delle Aree

Consideriamo un sistema di massa possiamo scrivere le coordinate del baricentro come:

La media pesata delle masse è:
$$\begin{gather}
x_{G} = \frac{\Sigma_{i} m_{i}x_{i}}{m} \\
y_{G}=\frac{\sum_{i} m_{i}y_{i}}{m} \\
z_{G}=\frac{\sum_{i} m_{i}z_{i}}{m}
\end{gather}$$

Si possono riscrivere come:

|                                                                        |                                                   |                                                   |
| ---------------------------------------------------------------------- | ------------------------------------------------- | ------------------------------------------------- |
| $x_{G} = \frac{\int\limits_{V} \rho x  \, dV}{m}$                      | $y_{G} = \frac{\int\limits_{V} \rho y  \, dV}{m}$ | $z_{G} = \frac{\int\limits_{V} \rho z  \, dV}{m}$ |
| $= \frac{\cancel{ \rho } \int\limits_{V} x  \, dV}{\cancel{ \rho } V}$ |    $= \frac{ \int\limits_{V} y  \, dV}{V}$    |     $= \frac{ \int\limits_{V} z  \, dV}{V}$   |

Se il materiale è omogeneo e la sezione è piccola:

$$\begin{gather}
x_{G} = \frac{\int\limits_{A} x  \, dA}{A} \\
y_{G} = \frac{\int\limits_{A} y  \, dA}{A} \\
z_{G} = \frac{\int\limits_{A} z  \, dA}{A}
\end{gather}$$
Dove $\int\limits_{A}^{} x \, dA$ è il momento statico detto anche momento del primo ordine

Nel caso del piano:
$$\begin{gather}
S_{y}=\int\limits_{A}x  \, dA \\
S_{x} = \int\limits_{A}y  \, dA
\end{gather} $$
#### Esempio

##### Caso dove sistema di riferimento non nel baricentro

<!Diagramma esempio non sul baricentro>

$$S_{y}=\int\limits_{A}x  \, dA =\int\limits_{0}^{h} \int\limits_{0}^{b} x \, dx  \, dy = \int\limits_{0}^{h} \left[ \frac{x^{2}}{2} \right]_{0}^{b} \, dy =\frac{hb^{2}}{2} $$
##### Caso dove sistema di riferimento è sul baricentro

<!Diagramma esempio sul baricentro>

$$S_{y}=\int\limits_{A}x  \, dA =\int\limits_{-\frac{h}{2}}^{\frac{h}{2}} \int\limits_{-\frac{b}{2}}^{\frac{b}{2}} x \, dx  \, dy = \int\limits_{-\frac{h}{2}}^{\frac{h}{2}} \cancelto{ 0 }{ \left[ \frac{x^{2}}{2} \right]_{{-\frac{b}{2}}}^{\frac{b}{2}} } \, dy = 0$$
### Sezione Composte

Usando l'esempio di 2 rettangoli attaccati:

<!Diagramma sezione composta>

$$\begin{gather}
S_{y}=S_{y}^{1}+S^{2}_{y} \\
x_{G_{1}} = \frac{1}{A_{1}}Sy' = \frac{\int\limits_{A_{1}} x \, dy}{A_{1}} = \frac{1}{ab}\int\limits_{0}^{b} \int\limits_{0}^{a} x \, dx  \, dy = \frac{1}{ab} \cdot \frac{a^{2}b}{2} = \frac{a}{2} \\
x_{G_{2}} = \frac{1}{A_{2}}Sy' = \frac{\int\limits_{A_{2}} x \, dy}{A_{2}} = \frac{1}{ab}\int\limits_{0}^{a+b} \int\limits_{0}^{a} x \, dx  \, dy = \frac{b}{2}\\
x_{G}=\frac{x_{G_{2}}\cdot A_{2} + x_{G_{1}}\cdot A_{1}}{A_{1}+A_{2}} = \frac{a+b}{2}
\end{gather}$$
Le formula generale:
$$x_{G}=\frac{x_{G_{1}}A_{1}+\dots}{\sum A}$$
### Momento d'Inerzia

Le resistenza di una sezione alla rotazione

$$J_{x}=\int\limits_{A} y^{2}  \, dA \leftarrow \text{ il momento del secondo ordine rispettoa a }x$$
$$J_{y}=\int\limits_{A} x^{2}  \, dA \leftarrow \text{ il momento del secondo ordine rispettoa a }y$$
$$J_{xy} = \int\limits_{A} xy  \, dA \leftarrow \text{ Momento centrifugo}$$
I due momenti lungo x e y sono i momenti flettenti che agiscono normali alla asse neutra.

Il momento polare è il momento attribuito alla torsione ed è uscente dal piano. Per calcolare il momento polare usiamo le coordinate polari. Si calcola:

$$J_{p} = J_{⊕} = \int\limits_{ A} R^{2}  \, dA = \int\limits_{A} (x^{2}+y^{2})  \, dA = \underbrace{ \int\limits_{A}^{} x^{2} \, dA }_{ J_{x} }+\underbrace{ \int\limits_{A}^{} y^{2} \, dA }_{ J_{y} } \implies  J_{p}=J_{x}+J_{y}    $$

### Momento d'inerzia per una sezione rettangolare

#### Sistema di Riferimento a baricentro
<!Diagramma rettangolo con baricentro in mezzo>

$$\begin{gather}
J_{x}= \int\limits_{A} y^{2}  \, dA = \int\limits_{-\frac{b}{2}}^{\frac{b}{2}} \int\limits_{-\frac{h}{2}}^{\frac{h}{2}} y^{2}  \, dy  \, dx \implies \boxed{ J_{x}=\frac{bh^{3}}{12} } \\
J_{y} = \int\limits_{A} x^{2}  \, dA = \int\limits_{-\frac{h}{2}}^{\frac{h}{2}} \int\limits_{-\frac{b}{2}}^{\frac{b}{2}} x^{2} \, dx  \, dy = \frac{hb^{2}}{12} \implies \boxed{ J_{y} =  \frac{bh^{3}}{12} }
\end{gather}$$
Queste due equazioni devono esser memorizzate:
$$\sigma_{x}=\frac{N}{A}+\frac{M}{J_{y}}y$$
#### Sistema di Riferimento non a baricentro

<!Diagramma rettangolo con baricentro non in mezzo>

$$\begin{gather}
J_{x}=\int\limits_{A} y^{2}  \, dA = \int\limits_{A} (y_{G}+y')^{2}  \, dA = \int\limits_{-\frac{b}{2}}^{\frac{b}{2}} \int\limits_{-\frac{h}{2}}^{\frac{h}{2}}  (y_{G}+y')\, dy'  \, dx' =\\
\int\limits_{-\frac{b}{2}}^{\frac{b}{2}} \int\limits_{-\frac{h}{2}}^{\frac{h}{2}}  (y_{G}^{2}+y_{G}y'+y'^{2})\, dy'  \, dx'  \\
= y_{G}^{2} \underbrace{ \int\limits_{-\frac{b}{2}}^{\frac{b}{2}} \int\limits_{-\frac{h}{2}}^{\frac{h}{2}}  \, dy'  \, dx' }_{ A } + 2y_{G} \cancelto{ 0 \text{visto prima} }{ \int\limits_{-\frac{b}{2}}^{\frac{b}{2}} \int\limits_{-\frac{h}{2}}^{\frac{h}{2}} y' \, dy'  \, dx' } + \underbrace{ \int\limits_{-\frac{b}{2}}^{\frac{b}{2}} \int\limits_{-\frac{h}{2}}^{\frac{h}{2}} y'^{2} \, dy'  \, dx' }_{ J_{x'} } \\
\end{gather}$$
Momento d'inerzia per asse non passante per il baricentro:
$$\implies \boxed{ J_{x} = J_{x'}+y_{G}^{2}\cdot A }$$
Questo implica che più si allontana il materiale dal punto di rotazione più aumenta il momento d'inerzia (la resistenza alla rotazione).

Questo è utile per le travi a doppia T (I beam)

### Momento d'Inerzia per I beam

<!Diagramma I beam>

$$\begin{gather}
J_{x_{1}}=\frac{B\left( \frac{H-h}{2} \right)^{3}}{12} \\
J_{x_{2}} = \frac{(B-b)(h)^{3}}{12} \\
J_{x_{3}}=J_{x_{1}}
\end{gather}$$
Momento d'inerzia totale vs. Momento d'inerzia sezione 2

$$\underbrace{ J_{x} }_{ \substack{\text{Momento}\\\text{d'inerzia}\\\text{totale}} }=J_{x_{2}}+(J_{x_{1}}+A_{1}y_{G}^{2})+(J_{x_{3}}+A_{3}y_{G_{3}}^{2})$$
È importante che le travi a doppia T siano verticali e non orizzontali.
Con la equazione:
$$\sigma=\frac{N}{A}+\frac{M}{J}y$$
Il momento più grande significa che il pezzo viene sottoposto a meno sforzo.

### Momento d'inerzia della sezione circolare

<!Diagramma sezione circolare e circonferenza>

$$\begin{gather}
J_{x}=\int\limits_{A}y^{2}  \, dA = \int\limits_{A} R^{2} \sin ^{2}\theta\, dA \\
J_{x}=\int\limits_{0}^{\frac{D}{2}}\int\limits_{0}^{2\pi} R^{2}\sin ^{2}\theta \,r\cdot d\theta   \, dr = \int\limits_{0}^{\frac{D}{2}}r^{3}  \int\limits_{0}^{2\pi} \underbrace{ \left( \frac{1-\cos2\theta}{2} \right) }_{ \substack{\text{Combinazione}\\\text{di identità}} } \, d\theta \, dr \\
\left| \frac{\theta}{2} - \cancelto{ 0 }{ \frac{\sin2\theta}{4} }\right|_{0}^{2\pi}   = \pi \\
J_{x} = \pi \int\limits_{0}^{\frac{D}{2}} r^{3} \, dr = \pi\left[ \frac{r^{4}}{4} \right]_{0}^{\frac{D}{2}} \\
\implies  \underbrace{ \boxed{ J_{x}=\frac{\pi D^{4}}{64}U } }_{ \text{Memorizza} } \underbrace{ = J_{y} }_{ \substack{\text{Perché}\\\text{simmetrico}} } \to \text{Momento d'inerzia per sezione circolare}
\end{gather}$$
<!Diagramma sezione circolare>

Tutto questo implica che il momento d'inerzia polare di una sezione circolare è:
$$J_{p}=J_{x}+J_{y}=\frac{\pi D^{4}}{32}$$

Per il momento flettente si usa $J_{x}$ e $J_{y}$, invece per il momento torcente $J_{p}$

