---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 2 - Sistemi di Rifermento Mobili

I sistemi di riferimento mobili saranno usati estensivamente durante questo corso, perché ci permette di fare combinazioni di moti per semplificare diversi tipi di moti.


## Dati

Dato un sistema con due sistemi di riferimento ($x,y$) e ($x_{1},y_{1}$):

<!Diagramma sistema di riferimento>

Focalizzandoci sul sistema mobile:

<!Diagramma sistema mobile>

Definiamo:
$$\begin{gather}
\vec{w} = \dot{\theta}\hat{k} \\
\vec{\dot{w}} = \ddot{\theta}\hat{k}
\end{gather}$$
## Posizione

Iniziando dalla definizione in notazione della meccanica razionale:

$$(P-O) = (O_{1}-O)+(P-O_{1}) = (O_{1}-O)+x_{1}\hat{i_{1}}+y_{1}\hat{j_{1}}$$

## Velocemente

$$\begin{gather}
\underbrace{ \vec{v}_{p} }_{ (\dot{x}\hat{i}+\dot{y}\hat{j}) } = \vec{v}_{O1} +\dot{x}_{1}\hat{i}_{1} + \dot{y}_{1}\hat{j}_{1} + x_{1}\vec{w}\times \vec{i_{1}} + y_{1}\vec{w}\times \hat{j}_{1} \\
\boxed{ \vec{v}_{p} = \vec{v}_{O1} + \vec{w}\times(x_{1}\hat{i}_{1}+y_{1}\hat{j_{1}})+\underbrace{ \dot{x}_{1}\hat{i}_{1} + \dot{y}_{1}\hat{j}_{1} }_{ \vec{v}_{rel} } } \\
\vec{v}_{p} = \underbrace{ \vec{v}_{O1} + \vec{w}\times(P-O_{1}) }_{ \vec{v}_{tras} } + \vec{v}_{rel} \\
\boxed{ \vec{v}_{p} = \vec{v}_{tras}+\vec{v}_{rel} }
\end{gather}$$

$\vec{v}_{rel}$ è la velocità relativa di P a $O_{1}$, osservata da $O_{1}$, cioè la velocità relativo a se stesso

$\vec{v}_{tras}$ è la velocità di trascinamento, cioè la velocità del movimento dell'osservatore, cioè la velocità che P avrebbe rispetto a $O$ se non ci fosse movimento rispetto a $O_{1}$. È composto dal moto lineare $\vec{v}_{O1}$, e il moto rotatorio rispetto all origine $\vec{w}\times(P-O_{1})$.

## Accelerazione

Iniziando da $\vec{v}_{p} = \vec{v}_{O1} + \vec{w}\times(x_{1}\hat{i}_{1}+y_{1}\hat{j_{1}})+ \dot{x}_{1}\hat{i}_{1} + \dot{y}_{1}\hat{j}_{1}$ :

$$\begin{align}
&\vec{a}_{p} = \vec{a}_{O1} + \vec{\dot{w}}\times(P-O_{1}) + \vec{w}\times(\dot{x}_{1}\hat{i}_{1} + \dot{y}_{1}\hat{j}_{1} + x_{1}\vec{w}\times \hat{i}_{1} + y_{1}\vec{w}\times \hat{j}_{1}) + \ddot{x}_{1} \hat{i}_{1} + \ddot{y}\hat{j}_{1} + \dot{x}_{1}\vec{w}\times \hat{i}_{1} + \dot{y}_{1}\vec{w}\times \hat{j}_{1} \\
&\vec{a}_{p} = \vec{a}_{O1} + \vec{\dot{w}}\times(P-O_{1}) + \vec{w}\times\underbrace{ (\dot{x}_{1}\hat{i}_{1} + \dot{y}_{1}\hat{j}_{1}) }_{ \vec{v}_{rel} }+ \vec{w}\times(\vec{w}\times(x_{1}\hat{i}_{1} + y_{1}\hat{j}_{1})) + \ddot{x}_{1} \hat{i}_{1} + \ddot{y}\hat{j}_{1} + \vec{w}\times\underbrace{ (\dot{x}_{1}\hat{i}_{1} + \dot{y}_{1}\hat{j}_{1}) }_{ \vec{v}_{rel} } \\
&\vec{a}_{p} = \vec{a}_{O1} + \vec{\dot{w}}\times(P-O_{1}) + \vec{w}\times\vec{v}_{rel} + \vec{w}\times(\vec{w}\times(x_{1}\hat{i}_{1} + y_{1}\hat{j}_{1})) + \underbrace{ \ddot{x}_{1} \hat{i}_{1} + \ddot{y}\hat{j}_{1} }_{ \vec{a}_{rel} } + \vec{w}\times\vec{v}_{rel} \\
&\boxed{ \vec{a}_{p} = \vec{a}_{O1} + \underbrace{ \underbrace{ \vec{\dot{w}}\times(P-O_{1}) }_{ \vec{a_{t}} } + \underbrace{ \vec{w}\times(\vec{w}\times(x_{1}\hat{i}_{1} + y_{1}\hat{j}_{1})) }_{ \vec{a}_{n} } }_{ \vec{a_{tras}} } + \vec{a}_{rel} + \underbrace{ 2\cdot\vec{w}\times\vec{v}_{rel} }_{ \vec{a}_{CO} } }\\
&\boxed{\vec{a_{p}} = \vec{a}_{tras} + \vec{a}_{rel} +\vec{a}_{CO}}
\end{align}$$

## Esempio di $\vec{a}_{CO}$

Un parte della velocità di Coriolis viene dalla rotazione del sistema mobile

<!Diagramma rotazione>

$\Delta = \frac{v_{rel}wdt}{dt} = v_{rel}w$, sono perpendicolari.

L'altra parte è derivata dal trascinamento

<!Diagramma>

$\Delta = \frac{wv_{rel}dt}{dt}$

## Osservazioni sulle leggi del moto

<!Diagramma leggi di moto>

$$\begin{gather}
\Delta t = \frac{T}{3} \\
s = s(t) \\
s(t) = s_{0} + \int\limits_{t_{0}}^{t} v(t) \, dt  \\
s_{1} = \frac{v_{max}\Delta t}{2} \\
s_{12} = v_{max}\Delta t \\
s_{23} = \frac{v_{max}\Delta t}{2} \\
v = \frac{ds}{dt} \\
v(t) = v_{0} + \int\limits_{t_{0}}^{t} a_{t}(t) \, dt \\
 \\
s_{tot} = \sum s_{1} = 2v_{max}\Delta t = \frac{2}{3}v_{max}T \\
v_{max} = a_{1} \cdot dt = a_{1} \cdot \frac{T}{3} \\
v(t) = v_{0} + \int\limits_{t_{0}}^{t} a_{t}(t) \, dt  \\
a_{1}\Delta t + a_{3}dt = 0 \implies  a_{3}= -a_{1} \to \text{se }v_{t}=0\text{ e stesso durata} \\
s_{tot} = \frac{2}{3}v_{max}T \implies  s_{tot} = \frac{2}{9}a_{1}T^{2} \\
\end{gather}$$
La legge del moto che abbiamo trovato alla fine cambia per ogni tipo di moto non è una equazione definitiva

$$\begin{align}
&\text{Se: } \vec{v}\text{ e }\vec{a}\text{ hanno stesso verso allora è accelerazione} \\
&\text{Se: } \vec{a}\text{ nullo allora è sta accelerando} \\
&\text{Se: } \vec{v}\text{ e }\vec{a}\text{ hanno direzioni discordi allora decellera}
\end{align}$$





