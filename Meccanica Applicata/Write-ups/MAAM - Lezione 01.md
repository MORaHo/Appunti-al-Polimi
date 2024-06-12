---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 1

Lunedì e Venerdì - Lezione
Martedì e Venerdì - Esercitazione

Esame composto da scritto eliminatorio e orale che può esser sostenuto a punti diversi.

Oratorio - Giovedì Mattina in B2.3.4 (Potrebbe cambiare) $\to$  apprendimento attivo

La meccanica è il vedere del moto e movimento e la loro evoluzione nel tempo.

## Moto nel Piano

### Posizione del punto nel piano

<!Diagramma posizione>

P è il punto nel piano rispetto ad un riferimento dello "assoluto".

Nella meccanica quando diciamo direzione intendiamo la inclinazione e il verso da che parte si viaggia.

Il vettore $\vec{P}$ è:

$$\vec{P} = \underbrace{ (P-O) }_{ \substack{\text{Differenza}\\ \text{tra punti}} } = x(t)\hat{i} + y(t)\hat{j}$$

La traiettoria in blue è l'insieme dei punti nel tempo, possiamo descriverla come:

$$\text{Traiettoria} \left\{\substack{x = x(t)\\ y = y(t)} =\; \substack{t = g(x)\\y = y(g(x))}\right\} \implies  y = f(x)$$

In questo caso $y = f(x)$ è il percorso di lavorazione o vincolo

### Velocità

#### Approccio Vettoriale
$$\vec{v} = \frac{d\vec{P}}{dt} = \lim_{ \Delta t \to 0 } \frac{\vec{P}(t+\Delta t)-\vec{P}(t)}{\Delta t}  = \lim_{ \Delta t \to 0 } \frac{\Delta \vec{P}}{\Delta t} = v \cdot \hat{t}$$

$\hat{t} \to$ versore tangente alla traiettoria nel punto, questo non è assoluto e cambia dipendendo da dove si è nella traiettoria.

La velocità data questa equazione è tangente alla traiettoria.
<!Diagramma velocità>

#### Approccio Differenza di Punti

$$\vec{v} = \frac{d(P-O)}{dt} = \dot{x}\hat{i} + \dot{y}\hat{j} = v_{x} \hat{i} + v_{y}\hat{j}$$
<!Diagramma velocità diff. punti>

Da questo possiamo trovare la direzione della velocità"

$$\tan \alpha = \frac{v_{y}}{v_{x}} = \frac{dy}{dt} \cdot \frac{dt}{dx} = \frac{dy}{dx} = f'(x)$$
Questo implica come prima che il vettore velocità è veramente tangente alla traiettoria.

$\hat{t} \to$ versore tangente $\implies \vec{v} = v\cdot \hat{t}$ 
$$\implies \hat{t} = \frac{\vec{v}}{v} = \frac{v_{x}}{v}\hat{i} + \frac{v_{y}}{v} \hat{j} = \cos\alpha \hat{i}+\sin\alpha \hat{j}$$

### Accelerazione

$$\vec{a} = \frac{d\vec{v}}{dt} = \frac{d}{dt}(\dot{x} \hat{i} + \dot{y}\hat{j}) = \ddot{x} \hat{i} + \ddot{y} \hat{j}$$
$$\vec{a} = \frac{d(v \hat{t})}{dt} = \frac{dv}{dt} \cdot \hat{t} + v \frac{d\hat{t}}{dt}$$

<!Diagramma t e n>

Dato che $\hat{t} = \cos\alpha \hat{i} + \sin\alpha \hat{j}$ , e $\hat{i}$ e $\hat{j}$ non hanno cambio nel tempo

$$\implies  \frac{d\hat{t}}{dt} = -\sin\alpha \hat{i} \cdot \dot{\alpha} + \cos \alpha \cdot \dot{\alpha} \hat{j} = \dot{\alpha} (-\sin(\alpha) \hat{i} + \cos\alpha \hat{j})$$
$$ = \dot{\alpha} \hat{ n } = \dot{\alpha}\hat{k} \times \hat{t}  = \det \begin{bmatrix}
	\hat{i} & \hat{j} & \hat{k} \\ 0 & 0 & \dot{\alpha}\\ \cos\alpha   & \sin\alpha  &  0
\end{bmatrix}$$
$$ = \hat{ i}(-\dot{\alpha}\sin\alpha)- \hat{j}(-\dot{\alpha}\cos\alpha) = -\dot{\alpha}\sin\alpha \hat{i} + \dot{\alpha}\cos\alpha \hat{j}$$
Questo riporta lo stesso risultato 

$$\implies  \frac{d\hat{t}}{dt} = \vec{w} \times \hat{t}\text{, con } \vec{w} = \dot{\alpha}\hat{k}$$
$\vec{w}$ = velocità angolare

$$\implies \vec{a} = \frac{dv}{dt} \hat{t} + v\vec{w}\times \hat{t} = \frac{dv}{dt}\hat{t} + v\dot{\alpha}\hat{n}$$

<!Diagramma con t e n e alfa>

Ogni punti lungo una traiettoria ha una cerchio osculatore:

<!Diagramma cerchio osculatore>

$\rho_{c}$ = raggio cerchio osculatore $\implies \frac{1}{ \kappa}$
$\kappa = \frac{\ddot{y}}{(1+(\dot{y})^{2})^{3/2}}$

$$ds = \rho_{c}d\alpha = vdt \implies  \frac{d\alpha}{dt} = \vec{w} = \frac{v}{\rho_{c}}\to \text{velocità angolare}$$

La espressione completa del vettore accelerazione è allora:

$$\vec{a} = \frac{dv}{dt}\hat{t} + \frac{v^{2}}{\rho_{c}}\hat{n} = \vec{a_{t}}+\vec{a_{n}}$$

#### Calcolo di $\vec{a}_{t}$

<!Diagramma vettori accelerazione>

$$a_{t} = \vec{a} \cdot \hat{t} = \vec{a} \cdot \frac{\vec{v}}{v} = \frac{a_{x}v_{x}+ a_{y}v_{y}}{\sqrt{ v_{x}^{2} + v_{y}^{2}}}$$
 se $a_{t}$ > 0, sta aumentando la velocità, se invece $a_{t}$ < 0 sta diminuendo la velocità.
#### Calcolo di $a_{n}$

##### Riferimento Relativo

$$\vec{v}\times \vec{a} = v\hat{t} \times (a_{t}\hat{t} + a_{n} \hat{n}) = va_{n}\hat{t}\times \hat{n} = va_{n}\hat{b}$$

<!Diagramma vettori intrinsechi>

##### Riferimento Assoluto

$$\vec{v} \times \vec{a} = \begin{bmatrix}
\hat{i} & \hat{ j} & \hat{k} \\ v_{x} & v_{y} & 0 \\a_{x} & a_{y} & 0
\end{bmatrix} = \hat{k}(v_{x}a_{y}-v_{y}a_{x}) = va_{n}\hat{b}\implies v_{x}a_{y}-v_{y}a_{x} = va_{n}$$

$$\implies a_{n} = \frac{v_{x}a_{y}-v_{y}a_{x}}{\sqrt{ v_x^{2}+v_{y}^{2} }}$$
Questo è >0 se $\hat{b} = \hat{k}$, e invece è < 0 se $\hat{b} = -\hat{k}$

Un'altro metodo di calcolo sarebbe:
$a_{n} = \sqrt{ a^{2}-a_{t}^{2} }$

## Moto su traiettoria rettilinea

<!Diagramma rettilinea>

$$\substack{\vec{P} = x(t)\hat{i}\\\vec{v}=\dot{x}\hat{i}\\\vec{a} = \ddot{x}\hat{i}}$$

$a_{n} = 0 \forall t \iff \rho_{c} \to \infty$

## Moto su traiettoria circolare

<!Diagramma triaettoria circolare>

$$\begin{gather}
\vec{P} = (P-O) = R \hat{i_{1}} \\
\hat{i}_{1} \to \text{indica inclinazione } \theta \text{ e è } = \cos\theta \hat{i} + \sin\theta \hat{j} \\
\vec{v} = R \frac{d\hat{i_{1}}}{dt} = R\underbrace{ \vec{w} }_{ \dot{\theta}\hat{k} }\times \hat{i_{1}} = \\
= \vec{w} \times R \hat{i_{1}} = \vec{w} \times (P-O) \\
 \\
\vec{a} = \frac{d}{dt}(\vec{w}\times (P-O)) = \underbrace{ \vec{\dot{w}} }_{ \text{acc. ang} } \times (P-O) + \vec{w} \times \frac{d}{dt}(P-O)= \\
= \vec{\dot{w}} \times (P-O) + \underbrace{ \vec{w} \times (\vec{w}\times(P-O)) }_{ = -w^{2}(P-O) }  \\
\implies  \vec{a} = \vec{\dot{w}} \times (P-O) - w^{2}(P-O)
\end{gather}$$

<!Diagramma vettori per accelerazione e calcolo di accelerazione centripeta e tangenziale in moto circolare>

## Terna Fissa e Terna Intrinseca

Terna fissa è la terna che non cambia mai ed è sempre basata su un punto di riferimento. I versori sono $\hat{i},\hat{j}$ e $\hat{k}$.

Terna Intrinseca è la terna che cambia rispetto al punto nella traiettoria che stiamo osservando. I versori sono $\hat{t}, \hat{n}$ e $\hat{b}$.

