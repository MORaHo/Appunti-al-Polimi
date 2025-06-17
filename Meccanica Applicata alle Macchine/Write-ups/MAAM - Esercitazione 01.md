---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Esercitazione 1 - 

## Panoramica del Corso

Analisi di traiettorie nello spazio di parti di meccanismi con 1 grado di libertà.

<!Diagramma>

Trovare grandezze ignote da grandezze note - Principio dei lavori virtuali

<!Diagramma>

Analizzare la velocità di rotazionale e la accelerazione rotazionale.

<!Diagrammi>

Analizzare meccanismi di trasmissione semplici per analizzare trasferimento di potenza

<!Diagramma macchina>

Analisi di Sistemi Spring-Mass-Damper

<!Diagramma>

## Moto Circolare

<!Diagramma cerchio e analogo>

$$\begin{gather}
\theta = [rad] \:or\: [grad] \\
\dot{\theta} = w = \left[ \frac{rad}{s} \right] \:or\:\left[ \frac{giri}{min} \right]  \\
\end{gather}$$

### Velocità Tangenziale

<!Diagramma>

$$\begin{gather}
\boxed{ v_{p} } = \lim_{ \Delta t \to 0 } \frac{\vec{P'}-\vec{P}}{\Delta t}= \\
= \lim_{ \Delta t \to 0 } \frac{\vec{P'} + (-\vec{P})}{\Delta t} = \lim_{ \Delta t \to 0 } \frac{\Delta P}{\Delta t} = \\
\lim_{ \Delta t \to 0 } \frac{2R\sin\frac{\Delta\theta}{2}}{\Delta t} = \frac{2R \frac{\Delta\theta}{2}}{\Delta t} = R \frac{\Delta\theta}{\Delta t} = \boxed{ Rw }
\end{gather}$$
<!Diagramma>

### Accelerazione

<!Diagramma iniziale>

In questo caso i componenti che sono proiettabili su r si cancellano e quelli non proiettabili (quelli verso il centro) si sommano.

$$\begin{gather}
\vec{a_{n}} = \lim_{ \Delta t \to 0 } \frac{\vec{v_{p}'} - \vec{v_{p}}}{\Delta t} = \lim_{ \Delta t \to 0 } \frac{\vec{v_{p}'}+ (-\vec{v}_{p})}{\Delta t} = \\
= \lim_{ \Delta t \to 0 } \frac{2Rw\sin\frac{\Delta\theta}{2}}{\Delta t} = Rw \frac{\Delta \theta}{\Delta t} = Rw^{2} \\
\implies \boxed{ a_{n} = Rw^{2} = \frac{v_{p}^{2}}{R} }
\end{gather}$$

Cambiando alle coordinate complesse abbiamo che:
$$\begin{gather}
s_{p}  = Re^{ i\theta } \\
v_{p} = \frac{ds_{p}}{dt} = Ri\theta e^{ i\theta } = Rwe^{ i(\theta+\pi/2) } \\
\text{Con }(P-O) = x_{p}\hat{i} + y_{p}\hat{j} \\
\text{Allora: } \vec{a_{p}} = \frac{dv_{p}}{dt} = R\dot{w}e^{ i(\theta+\pi/2) } + Rwi\theta e^{ i(\theta+\pi/2) } = \underbrace{ R\dot{w}e^{ i(\theta+\pi/2) } }_{ a_{t} } + \underbrace{ Rw^{2}e^{ i(\theta+\pi) } }_{ a_{n} }
\end{gather}$$

### Altro Modo di Ricavare la Velocità

Nel metodo che abbiamo appena usato, abbiamo fatto tutti i calcoli rispetto ad un punto fisso, perciò per semplificare siamo andati a numeri complessi, con questo moto usiamo una terna che cambia dipendendo dal punto, questa terna ha lo stesso origine ma un'asse passa per il punto che stiamo analizzando.

<!Diagramma riferimento nuovo>

Rispetto ai due sistemi di riferimento:
$$\begin{gather}
(P-O) = R\cos\theta i_{0} + R \sin\theta j_{0} \\
(P-O_{1}) = R\hat{i}_{1}
\end{gather}$$
Allora per trovare la velocità:

$$\vec{v_{p}} = \frac{d(P-O_{1})}{dt} = \frac{dR}{dt}\hat{i}_{1} + \frac{Rdi_{1}}{dt}$$
Per semplificare la derivazione del versore, ritorniamo al sistema di riferimento originale:

<!Diagramma cambio>

$$\begin{gather}
\hat{i}_{1} = \mid \hat{i_{1}}\mid \cos\theta \hat{i_{0}} + \mid \hat{i}_{1} \mid \sin\theta \hat{j_{0}} = \cos\theta \hat{i_{0}} + \sin\theta \hat{j}_{0} \\
\hat{j}_{1} = \mid \hat{j}_{1}\mid \sin\theta \hat{i}_{0} + \mid \hat{j_{1}} \cos\theta \hat{j}_{0} = -\sin\theta \hat{i_{0}} + \cos\theta \hat{j}_{0}
\end{gather}$$

Ritornando alla derivata:

$$\begin{gather}
\frac{d\hat{i}_{1}}{dt} = \frac{d}{dt}(\cos\theta \hat{i}_{0}+\sin\theta \hat{j}_{0}) = -\dot{\theta}\sin\theta \hat{i}_{0} + \dot{\theta}\cos\theta \hat{j_{0}} + \cancelto{ 0 }{ \cos\theta \frac{ di_{0}}{dt} } + \cancelto{ 0 }{ \sin\theta \frac{ dj_{0}}{dt}C } =\\
 = (\underbrace{ -\sin\theta \hat{i_{0}}+ \cos\theta \hat{j_{0}} }_{ \text{Appena derivato} }) \dot{\theta} = w\hat{j_{1}} = \vec{w} \times \hat{i_{1}}
\end{gather}$$

<!Diagramma terna>

$$\implies \vec{v_{p}} = R  \frac{d\hat{i_{1}}}{dt} = Rw \hat{j_{1}} = R(\vec{w}\times \hat{i_{1}})$$






