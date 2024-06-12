---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 17 - Equazione di Lagrange

L'equazione di Lagrange è funzione di tipo energetico usata tipicamente per lo studio di sistema a più gradi di libertà.

La equazione è:
$$\frac{d}{dt} \frac{ \partial E_{c} }{ \partial \dot{q}_{i} } - \frac{ \partial E_{c} }{ \partial q_{i} } + \underbrace{ \frac{ \partial D }{ \partial \dot{q}_{i} } }_{ \substack{\text{Azioni dissipative}\\\text{di tipo viscoso}} } + \underbrace{ \frac{ \partial V }{ \partial q_{i} } = \frac{\delta L_{i}}{\delta q_{i}} }_{ \substack{\text{Abbiamo visto}\\\text{per sistemi a solo}\\\text{un grado di libertà}} }  $$
 Dove:
 $q_{i}$ $\to$  generica coordinata libera
 $D \to$ funzione dissipativa
 $E_{c}$ $\to$ energia cinematica
 $V\to$ energia potenziale

$$\frac{\delta L_{i}}{\delta q_{i}} = Q \to \text{Componente Lagrangiana}$$

## Sistema Esemplare

Prendiamo un sistema come:
<!Diagramma sistema esemplare>

Questo può esser disegnato come:
<!Diagramma sistema alternativo>

In questo caso: $$\underline{q} = \left\{\begin{gather}x\\\theta\end{gather}\right\}$$
Dobbiamo esprimere le variabili per utilizzare Lagrange.

$$E_{c} =\frac{1}{2}m\dot{x}^{2}+\frac{1}{2}MV_{b}^{2}$$

Se non sappiamo una variabile cinematica la possiamo trovare facendo un analisi cinematica:


| $\vec{V}_{B}$ | $\vec{V}_{A}$      | $\vec{w}\times(B-A)$          |
| ------------- | ------------------ | ----------------------------- |
| ?             | $\dot{x}$          | $\dot{\theta}L$               |
| ?             | $\parallel\hat{i}$ |  $\perp AB$                   |
Il triangolo delle velocità sara:
<!Diagramma triangolo delle velocità>

La velocità di B allora sarà:
$$V_{b}^{2} = \dot{x}^{2}+L^{2}\dot{\theta}^{2}+2\dot{x}L\dot{\theta}\cos\theta$$
Possiamo allora riscrivere la energia cinetica come:
$$E_{c} = \frac{1}{2}(m+M)\dot{x}^{2} + \frac{1}{2}ML^{2}\dot{\theta}^{2}+\frac{1}{2}M\dot{x}L\dot{\theta}\cos\theta$$

Prendiamo D $\equiv$ 0 perché non c'è sistema di smorzamento.

Invece la energia potenziale sarà:

$V = Mg\Delta h = Mg(L-L\cos\theta)$

<!Diagramma energia potenziale>
Non c'è cambia di energia potenziale nel punto A perché non cambia posizione verticalmente.

Il lavoro virtuale invece sarà quello della possiamo sulla ruota anteriore:
<!Diagramma coppia su ruota>

Questo allora sarà:
$$\delta W = C\delta \varphi = \frac{C}{R}\delta x$$
Per ognuno di questi elementi dobbiamo elaborare rispetto alle variabili libere.

### Variabile Libera i =1 $\to$ x

$$\frac{ \partial E_{c} }{ \partial \dot{x} } = (m+M)\dot{x}+ML\dot{\theta}\cos\theta $$
$$\to \frac{d}{dt}\frac{ \partial E_{c} }{ \partial \dot{x} } = (m+M)\ddot{x} + ML\ddot{\theta}\cos\theta - ML\dot{\theta}^{2}\sin\theta$$

$$\frac{ \partial E_{c} }{ \partial x }  = 0$$
Questo è diverso perché nel secondo termine si differenzia per $q_{i}$ non $\dot{q}_{i}$

$$\frac{ \partial V }{ \partial x } =0$$
Questa è funzione solo di $\dot{\theta}$ quindi non ci importa per ora.

$$\delta L_{x} = \frac{C}{R}\delta x \to\frac{\delta L_{x}}{\delta x} =\frac{C}{R}$$

La Lagrangiana su x allora sarà:
$$(m+M)\ddot{x} + ML\ddot{\theta}\cos\theta-ML\dot{\theta}^{2}\sin\theta = \frac{C}{R}$$

### Variabile Libera i = 2 $\to$ $\theta$

$$\begin{gather}
\frac{ \partial E_{c} }{ \partial \dot{\theta} } = ML^{2}\dot{\theta} + M\dot{x}L\cos\theta \\
\frac{d}{dt}\frac{ \partial E_{c} }{ \partial \dot{\theta} } = ML^{2}\ddot{\theta} + M\ddot{x}L\cos\theta -M\dot{x}\dot{\theta}L\sin\theta \\
\frac{ \partial E_{c} }{ \partial \theta } =-M\dot{x}L\dot{\theta}^{2}\sin\theta \\
\frac{ \partial V }{ \partial \theta } = MgL\sin\theta \\
\frac{\delta L_{\theta}}{\delta\theta} =0
\end{gather} $$
La ultima parte della seconda equazione e la terza equazione si cancellano.

La lagrangiana su $\theta$ allora sarà:
$$ML^{2}\ddot{\theta} +M\ddot{x}L\cos\theta + MgL\sin\theta=0$$

Vediamo che la equazione secondo x genera le forze nel sistema, invece la equazione rispetto a $\theta$ genera le coppie nel sistema.

### Verifica

Verifichiamo quello appena detto delle forze e coppie generate

#### Equilibrio Dinamico

<!Diagramma equilibrio Dinamico>


| $\vec{a}_{b}$ | $\vec{a}_{a}$      | $\vec{w}\times(B-A)$ | $w^{2}(B-A)$        |
| ------------- | ------------------ | -------------------- | ------------------- |
| ?             | $\ddot{x}$         | $\ddot{\theta}L$     | $L\dot{\theta}^{2}$ |
| ?             | $\parallel\hat{i}$ | $\perp AB$           | $B\to A$            |

#### Schema delle forze

<!Diagramma delle forze>
Abbiamo detto di ignorare la massa delle ruota, $T_{1}$ è li solo per contrastare C, questo è perché non c'è un $T_{2}$

$$\begin{gather}
1) R_{x} \to (tutto): T_{1} - m\ddot{x}-M\ddot{x}-ML\ddot{\theta}\cos\theta +ML^{2}\dot{\theta}^{2}\sin\theta=0 \\ 
2) +\hat{)}(\text{ruota 1}) : T_{1}R = C\\
3) + \hat{)} M_{A}(AB) : M\ddot{x}L\cos\theta+ML^{2}\ddot{\theta}+MgL\sin \theta=0
\end{gather}$$

Combinando 1 e 2 troviamo:
$$(m+M)\ddot{x} + ML\ddot{\theta} - ML^{2}\dot{\theta}^{2}\sin\theta=\frac{C}{R}$$
Questa era la equazione che abbiamo trovato per le forze. Invece la equazione 3 è quella che abbiamo trovato per i momenti.

Inserendo le equazione di energia co le variabili libere riusciamo ad avere gli equilibri dinamici delle forze e delle copie.

## Esempio (solo scrittura equazione)

<!Diagramma esempio>

Il simbolo alla destra è il simbolo dello smorzatore, questo genera una forza:
$$F_{v} = r \dot{\Delta l}$$
Questa forza è una forza di smorzamento viscosa. Lo smorzatore è sensibile alla velocità di allungamento, la molla invece è sensibile all'allungamento stesso.

La energia dissipata dallo smorzatore è:
$$D = \frac{1}{2}r \dot{\Delta l}^{2}$$

In questi casi $r$ è il coefficiente di smorzamento.

Per la Lagrangiana:
$$\begin{gather}
E_{c} = \frac{1}{2} M \dot{x}^{2}+\frac{1}{2}J_{c}\dot{\theta}^{2} \underbrace{ = }_{ \dot{x}=R\dot{\theta} } \frac{1}{2}M\dot{x}^{2}+\frac{1}{2}J_{c} \frac{\dot{x}^{2}}{R^{2}} = \frac{1}{2}\left( M+\frac{J_{c}}{R^{2}} \right)\dot{x}^{2} \\
\frac{ \partial E_{c} }{ \partial x } =0 \\
V = \frac{1}{2}k\Delta l^{2} =\frac{1}{2}k(2x)^{2} = 2kx^{2} \\
D = \frac{1}{2}r\Delta l^{2} = \frac{1}{2}r \dot{x}^{2} \\
\delta L = C\delta\theta = \frac{C\delta x}{R} \\
\end{gather}$$

Elaborando:
$$\begin{gather}
\frac{ \partial E_{c}  }{ \partial \dot{x} } =\left( M+\frac{J_{c}}{R^{2}} \right)\dot{x} \to \frac{d}{dt}\frac{ \partial E_{c} }{ \partial \dot{x} } = \left( M+\frac{J_{c}}{R^{2}} \right)\ddot{x}  \\
\frac{ \partial E_{c} }{ \partial x } = 0 \\
\frac{ \partial D }{ \partial \dot{x} } = r \dot{x} \\
\frac{ \partial V }{ \partial x } =4kx \\
\delta L_{x} = C \frac{\delta x}{R} \to \frac{\delta L_{x}}{\delta x} = \frac{C}{R}  \\ \\
\boxed{ \left( M+\frac{J_{c}}{R^{2}} \right)\ddot{x} + r \dot{x} +4kx = \frac{C}{R} }
\end{gather}$$
