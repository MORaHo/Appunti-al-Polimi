---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 3 - Cinematica dei corpi rigidi

Il corpo rigido è una rappresentazione dei corpi nei nostri sistemi, dove la distanza tra punti nel corpo non varia, e per le nostre approssimazioni può variare minimamente.

Dato un corpo rigido:

<!Diagramma corpo rigido>

Dove A e B $\in$ corpo

Se $\mid B-A\mid$ è invariabile nel tempo allora è un corpo rigido.

Con $y_{a}$, $x_{a}$ e $\theta$ possiamo trovare dov'è il corpo e ogni suo punto.

## Posizione

$$\underbrace{ (B-O) }_{ \text{Diretto} } = \underbrace{ (A-O)+(B+A) }_{ \text{Indiretto} }$$
$$ = (A-O)+\overline{AB}_{} \hat{i}_{AB}$$

Preso $\hat{i}_{AB}$ come parallelo a x, allora il diagramma del corpo rigido è:
<!Diagramma corpo rigido>

## Velocità

$$\vec{v}_{b} = \frac{d}{dt}((A-O)+\overline{AB}_{} \hat{i}_{AB}) = \vec{v}_{a} + \cancel{ \frac{d}{dt}\overline{AB}_{}\hat{i}_{AB} } + \overline{AB}_{} \frac{d\hat{i}_{AB}}{dt}  $$
$$ = \vec{v}_{a} + \overline{AB}_{} \vec{w}\times \hat{i}_{AB} $$

con $\vec{w} = \dot{\theta}\hat{k}$ = velocità angolare <u>del corpo rigido</u> non cambia dipendendo da quale angolo prendo

$$\vec{v}_{b} = \vec{v}_{a} + \vec{w}\times(\overline{AB}_{} \hat{i}_{AB})$$
$$\boxed{ \vec{v}_{b} = \vec{v}_{a}+\vec{w}\times(B-A) }$$

### Casi d'Osservazione:

#### Caso 1: $\vec{w} = 0 \:\forall t$

$\implies \vec{v}_{b} = \vec{v}_{a}$

<!Diagramma con solo traslazione>

Dato che non è rotazione del punto B intorno al punto A, questo è moto traslatorio

$\vec{v}_{b} = \vec{v}_{a}$ hanno lo stesso modulo, direzione e verso

#### Caso 2: $\vec{v}_{a} = 0 \: \forall t$

$$\vec{v}_{b} = \cancel{ \vec{v}_{a} } + \vec{w}\times(B-A)$$

<!Diagramma senza traslazione>

Questo moto è puramente rotatorio intorno al punto A.

#### Caso $\vec{v}_{a} \neq 0 \: e \: \vec{w}\neq 0$

$\implies$ Espressione generale $\vec{v}_{b} = \vec{v}_{a} + \vec{w}\times(B-A)$

<!Diagramma roto-traslatorio>

Questo moto è detto roto-traslatorio

Con riferimento mobile $x_{1},y_{1}$ tale che $O \equiv A$ e si mantiene parallelo a se stesso $\implies$ il riferimento può muovere non girare

$\implies x_{1},y_{1}$ riferimento mobile $\implies$ moto traslante

$\vec{v}_{b} = \vec{v}_{a} + \vec{w}\times(B-A)$ CORPO RIGIDO

Mediante il punto di riferimento mobile:
$$\vec{v}_{b}^{AS} = \underbrace{ \vec{v}_{b}^{TR} }_{ \vec{v}_{a} }+\underbrace{ \underbrace{ \vec{v}_{b}^{REL} }_{ \vec{w}\times(B-A) } }_{ \text{Trai. Circ.} }$$

Il diagramma di questa nuova traiettoria per B diventa:

<!Diagramma traiettoria circolare>

La traiettoria di B rispetto al riferimento fisso è la combinazione di 2 moti, questo traslatorio del riferimento mobile e rotazione intorno al riferimento mobile di B.

## Accelerazione

Con $\vec{w} = \dot{\theta}\hat{k}$ e $\vec{\dot{w}} = \ddot{\theta}\hat{k}$

$$\begin{align}
\vec{a}_{b} &= \frac{d}{dt}(\vec{v}_{a}+\vec{w}\times(B-A)) = \vec{a}_{a} + \vec{\dot{w}}\times(B-A) + \vec{w}\times\left( \frac{d}{dt}(B-A) \right) \\
& = \vec{a}_{a} + \vec{\dot{w}}\times(B-A) + \vec{w}\times(\vec{w}\times(B-A)) \\
\vec{a}_{b} &= \underbrace{ \vec{a}_{a} }_{ \vec{a}_{TR} } + \underbrace{ \vec{w}\times(B-A) - w^{2}(B-A) }_{ \vec{a}_{REL} }
\end{align}$$

<!Diagramma accelerazione>

In questo caso non c'è $\vec{a}_{CO}$ perché il riferimento non ruota è solamente traslante.

Tutto per punti del medesimo corpo

$CIR\to$ prima (costruzione) non lo volevamo ora invece è utile

## Centro di Istantanea Rotazione


$$\vec{v}_{b} = \vec{v}_{a} + \vec{w}\times(B-A)$$
Prendiamo punto K e espandiamo:

$$\begin{gather}
\vec{v}_{a}  = \vec{v}_{k} + \vec{w}\times(A-K) \\
\vec{v}_{b} = \vec{v}_{k} + \vec{w}\times(B-K)
\end{gather}$$

Scelgo K tale che $\vec{v}_{k} = 0$ all'istante considerato

$$\begin{gather}
\vec{v}_{a}  = \vec{w}\times(A-K) \\
\vec{v}_{b} = \vec{w}\times(B-K) \\
\vec{v}_{b} - \vec{v}_{a} = \vec{w}\times((B-K)-(A-K)) \\
\vec{v}_{b} - \vec{v}_{a} = \vec{w}\times(B-A)
\end{gather}$$
<!Diagramma K>

Le proiezioni nella congiungente di A e B devono esser uguali, se no non è rigido.

Il CIR si trova sulla intersezione delle perpendicolari calcolate da A e B rispetto alle loro velocità.

## Atto di Moto

Ci sono 2 atti di moto, rotazione e traslatorio.

Se esiste CIR al finito allora il moto può esser semplificato ad un solo moto rotatorio

<!Diagramma atto rotatorio>

Se esiste CIR solo all'infinito allora il moto può esser detto puramente traslatorio

<!Diagramma atto traslatorio>

La combinazione di questi due permette il moto nello spazio.

Il CIR lo usiamo solo per la velocità.

## Esempio

Data un asta connessa a due carelli su guide rettilinee ortogonali.

<!Diagramma asta su due carelli>

gdl = 3-2 = 1 gdl

Dato $v_{a}$ = costante = $3\frac{m}{s}$ e $\theta=\frac{\pi}{6}$, dobbiamo trovare la velocità e accelerazione di B.

Ci sono due approcci, quello analitico e quello grafico.

### Approccio Analitico

$$\begin{gather}
\vec{v}_{b} = \vec{v}_{a}+\vec{w}\times(B-A) \\ \\
(B-A) = L\cos\theta \hat{i} + L\sin\theta \hat{j} \\
v_{b}\hat{j} = v_{a}\hat{i} + \begin{bmatrix}
\hat{i} & \hat{j} &\hat{k} \\
0 & 0& \dot{\theta} \\
L\cos\theta & L\sin\theta & 0
\end{bmatrix} \\
\vec{v}_{b} =\vec{v}_{a}\hat{i} + \hat{i}(-\dot{\theta}L\sin\theta) -\hat{j}(-\dot{\theta}L\cos\theta) \\
\end{gather}$$
Separando per versore:

$$\begin{gather}
0 = v_{a}-L\dot{\theta}\sin\theta \implies  \dot{\theta} = \frac{v_{a}}{L\sin\theta} = 10 \frac{rad}{s} \\
v_{b} = L\dot{\theta}\cos\theta \implies \vec{v}_{b} = L \frac{v_{a}}{L\sin\theta}\cos\theta = \frac{v_{a}}{\tan\theta} = 5,19 \frac{m}{s}
\end{gather}$$
### Approccio Grafico


|     | $\vec{v}_{b}=$ | $\vec{v}_{a}$ | $\vec{w}\times(B-A)$ |
| --- | -------------- | ------------- | -------------------- |
| M   | ?              | $v_{a}$       | $\dot{\theta}L$      |
| D   | //y            | //x           | $\perp AB$           |

Creando il diagramma di questi vettori troviamo:

<!Diagramma approccio grafico>

Da questo diagramma troviamo:

$$v_{a} = v_{b}\tan\theta \implies v_{b} = \frac{v_{a}}{\tan\theta}$$

















