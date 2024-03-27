---
creation_date: 2023-11-04 15:55
tags:
  - cosmac
share: true
---
# Lezione 13 - 

## Ultima Lezione

Equazione di Navier:

$$\sigma_{x}=\frac{N}{A}+\frac{M_{z}}{J_{zz}}y$$

### N

<!Diagramma N>
$\sigma_{x}$ per N è costante se N è costante sulla sezione

## $M_{f}$

Per ricavare il momento flettente, bisogna usare un sistema di riferimento al centro della sezione

<!Diagramma M_f>

La distribuzione a farfalla per sforzo da $M_{f}$

### Dimostrare che dove $M_{f}$=0 (l'asse neutro) è il baricentro per N = 0

<!Diagramma sigma > 0 e sigma < 0>

Per assurdo dobbiamo dimostare che il baricentro è l'asse di neutro

<!Diagramma overline y>

$$\sigma_{x}=\frac{M_{z}}{J_{zz}}\underbrace{ y' }_{ \substack{\text{Asse}\\\text{Neutro}} }$$
y è il baricentro della pezzo
$$y'=y-\underbrace{ \overline{y} }_{ \text{costante} } \implies dy' = dy $$
Integriamo per dimostrare $\overline{y} = 0$:

$$\begin{gather}
N = \int\limits_{A}^{} \underbrace{ \sigma_{x} }_{ \frac{M_{z}}{J_{zz}} \text{per solo flessione} }dA = 0 \leftarrow \text{per caso dove solo flessione}  \\
0 = \int\limits_{A} \frac{M_{z}}{J_{zz}} y'  \, \underbrace{ dA }_{ b\cdot y' } = b \int\limits_{-\frac{h}{2}-\overline{y}_{} }^{h/2-\overline{y}_{} } \frac{M_{z}}{Jzz}y' \, dy' = \frac{b\cdot M_{z}}{J_{zz}} \int\limits_{-\frac{h}{2}-\overline{y} }^{h/2-\overline{y} } (y-\overline{y} ) \, dy = \\
= \frac{b\cdot M_{z}}{J_{zz}} \left( \cancelto{ 0 }{ \left[ \frac{y^{2}}{2} \right]_{-\frac{h}{2}}^{h/2} }   \overline{y}[y]_{-\frac{h}{2}}^{\frac{h}{2}} \right) = \frac{b\cdot M_{z}}{J_{zz}}\overline{y} \left( \frac{h}{2}+\frac{h}{2} \right) = 0 \implies  \overline{y}=0 
\end{gather}$$
> [!note]
> Questa ultima dimostrazione è possibile che venga su all'orale

<!Diagramma farfalla>

L'asse neutro coincide con asse del momento se il momento è applicato sull'asse principale d'inerzia.

## Caso dove non è applicato sull'asse principale d'inerzia

<!Diagramma momento e asse neutro diversi>

$z^{*}\text{ e }y^{*}$ sono z e y dell'asse neutro

$$\begin{gather}
\frac{M_{z}}{J_{zz}}y^{*} -\frac{M_{y}}{J_{yy}}z^{*} =0 \\
\frac{y^{*}}{z^{*}} = \tan \beta = \underbrace{ \boxed{ \frac{M_{y}}{M_{z}} } }_{ \tan\theta } \cdot \frac{J_{zz}}{J_{yy}}
\end{gather}$$
$\beta$ è l'angolo tra l'asse neutro e il momento, invece $\theta$ è l'angolo tra l'asse neutro e z.

se $\theta=0$ coincide con z e se $\theta = \frac{\pi}{2}$ l'asse neutro coincide con y

## Problema Elastico per Flessione/ Linea Elastica Flessione

<!Diagramma rho con convenzioni>

K $\to$ è la curvatura e K = $\frac{1}{\rho}$ dove $\rho$ è il raggio del cerchio osculatore all'asse neutro. (Controlla ultimo teorema di analisi 1)

### Legame curvatura e spostamento

Prendendo un'asse in flessione all'infinitesimo abbiamo (usiamo v invece di y):

<!Diagramma flessione con arco ds con convenzioni>

$$\begin{gather}
ds = -\rho d\theta \simeq dx \\
\frac{dv}{dx} = \tan\theta \simeq \theta \text{ per angoli piccoli} \\
K = \frac{1}{\rho} \simeq - \frac{d\theta}{dx}=-\frac{d^{2}v}{dx^{2}}
\end{gather}$$
**<u>Troviamo il legame tra curvatura e spostamenti:</u>**
$$\underbrace{ \boxed{ K = \frac{ d^{2}v }{ dx^{2} } } }_{ (1) } $$

### Legame spostamenti e deformazione

<!Diagramma flessione>

Come visto nella distribuzione a farfalla lo sforzo e per cio la deformazione è funzione della distanza dall'asse neutro quindi troviamo la equazione:

$$\mathcal{E}_{x}(y) = \frac{\Delta L(y)}{l_{o}} = \frac{L_{1}(y)-l_{o}}{l_{o}}$$
Infinitesimamente $l_{o} = dx = -\rho d\theta$ allora:

$L_{1}(y)=-(\rho+y)d\theta$

C'è un meno perché andiamo in senso antiorario per dx > 0

$$\mathcal{E}_{x}(y) = \frac{-(\cancel{ \rho }+y)d\theta+\cancel{ \rho } d\theta}{dx} = -\frac{yd\theta}{dx}$$
$\sigma_{x}= E\cdot\mathcal{E}_{x}$
$$\begin{gather}
\underbrace{ \boxed{ \frac{d\theta}{dx}=\frac{d^{2}v}{dx^{2}} } }_{ (2) }\text{ e } \underbrace{ \boxed{ \mathcal{E}_{x}(y)=-\frac{d\theta}{dx} } }_{ (3) }
\end{gather}$$
## Equazione definitiva del momento flettente

<!Diagramma momento con asse neutro>

Dall'ultima lezione con Saint-Venant sappiamo che:

$$M = \int\limits_{-\frac{h}{2}}^{\frac{h}{2}} \sigma_{x}(y)\cdot b\cdot y \, dy  = \int\limits_{-\frac{h}{2}}^{\frac{h}{2}} \underbrace{ E\cdot \mathcal{E}_{x}(y) }_{ \sigma_{x} }\cdot b \cdot y \, dy $$

Tirando fuori i costanti:

$$M = Eb \int\limits_{-\frac{h}{2}}^{\frac{h}{2}} \underbrace{ \mathcal{E}_{x}(y) }_{ (3) } \cdot y\, dy = - Eb\int\limits_{-\frac{h}{2}}^{\frac{h}{2}} \underbrace{ \frac{d\theta}{dx} }_{ \substack{\text{non}\\\text{varia}\\\text{per y}} } y^{2}\, dy = - E\underbrace{ \frac{d\theta}{dx} }_{ (2) }\cdot \underbrace{ b\int\limits_{-\frac{h}{2}}^{\frac{h}{2}}  y^{2}\, dy }_{ J = \substack{\text{Momento}\\\text{d'inerzia di}\\\text{una sezione}} }$$
$$\implies \underbrace{ \boxed{ M = - EJ\frac{d^{2}v}{dx^{2}} } }_{ \substack{\text{Equazione della linea}\\\text{elastica flessionale}} } = -EJK$$

## Convenzioni della linea elastica

<!Diagramma convenzione>

|                  | <!Diagramma giu> |  <!Diagramma su>|
| ---------------- | --- | --- |
| v + $\downarrow$ |   -  |   +  |
| v + $\uparrow$ |   +  |   -  |

v + $\downarrow$ significa che v è positivo verso basso

Con le convenzioni:

<!Diagramma convenzioni>

Abbiamo le equazioni:

$$\begin{gather}
\frac{dM}{dx}=-T \text{ e } \frac{ dT }{ dx } = q \\
\implies \frac{ d^{2}M }{ dx^{2} } = -q
\end{gather}$$

Per le strutture iperstatiche invece di $M = EJ\frac{ d^{2}v }{ dx^{2} }$ usiamo:
$$q  = EJ\frac{ d^{2}v }{ dx^{2} } $$
Tale che:
$$M = EJ \frac{ d^{4}v }{ dx^{4} } $$

## Come cambia in base alla convenzione

Facendo i calcoli al punto O alla destra si hanno le equazioni:

<!Diagramma e convenzione>

$$\begin{gather}
\Sigma M_{o} = 0 = -Tdx-\cancel{ M }+\underbrace{ \cancel{ q\cdot dx\cdot \frac{dx}{2} } }_{ \substack{\text{Infinitesimale}\\\text{di secondo} \\\text{ordine}} }+\cancel{ M }+dM \\
\implies T = \frac{dM}{dx} \\ \\
\Sigma F_{y}=0=T-T-dT-q\cdot dx \implies q= -\frac{dT}{dx}
\end{gather}$$

Invece prendendo il punto di riferimento ad O alla sinistra:

<!Diagramma O alla sinistra>

$$\begin{gather}
\Sigma M_{o}=0=M-M-dM-T\cdot dx -q\cdot dx\cdot \frac{dx}{2} \\
\implies T= - \frac{dM}{dx} \\
\Sigma F=0=-T+T+dT-q\cdot dx \\
\implies q = \frac{dT}{dx}
\end{gather}$$
## Contestualizzazione

<!Diagramma carico distribuito>

Imponendo diversi sistemi di riferimento cambiano i risultati. In casi isostatici con carichi concentrati dobbiamo imporre due sistemi di riferimento perchè le nostre equazione non funzione con le discontinuità nel momento causate dai carichi concentrati.

<!Diagramma due punti di riferimento>

