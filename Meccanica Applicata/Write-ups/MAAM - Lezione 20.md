---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 20 - Trasmissibilità

Per la trasmissibilità studiamo 2 tipi di sistemi, il primo è un sistema con un forzante dove misuriamo la forza trasmessa a terra.

<!Diagramma caso 1>

Il secondo caso invece è un sistema che si muove su una superfice ruvida, questo movimento genera una forzante equivalente che poi viene trasmessa alla massa.
<!Diagramma caso 2>

## Studio 1$^{o}$ caso

<!Diagramma primo caso>

L'equazione per questo sistema sarà:

$$m\ddot{x}+r\dot{x}+kx = F_{o}\cos\Omega t$$

In questo caso la forza trasmessa è:
$$\begin{gather}
F_{T}(t) = kx(t)+r\dot{x}(t) \\
=k\mathbb{R}e(e^{ i\Omega t }\overline{x}_{o} ) + r\mathbb{R}e(\overline{x}_{o} j\Omega e^{ i\Omega t })= \\
= \mathbb{R}e((k+j\Omega r)\overline{x}_{o} e^{ i\Omega t }) \\
|\overline{x}_{o} | = x_{o} \\
|\overline{F}_{T}| = F_{T}=\sqrt{ |k\overline{x}_{o} |^{2}+|r\Omega \overline{x}_{o} |^{2} } = \\
= \overline{x}_{o} \sqrt{ k^{2}+(r\Omega)^{2} } = \sqrt{ k^{2}+(r\Omega)^{2} } \frac{F_{o}}{k} H(a)
\end{gather}$$

Il coefficiente di trasmsissione è:
$$\frac{F_{T}}{F_{o}} = TR = \sqrt{ 1+\left( \frac{r\Omega}{k} \right)^{2} }\cdot H(a)=\frac{\sqrt{ 1+(2ha)^{2} }}{\sqrt{ (1-a^{2})^{2}+(2ha)^{2} }}$$

Possiamo tracciare il coefficiente di trasmissione rispetto ad a come:
<!Diagramma caso 1 trasmissibilità rispetto ad a>

Vogliamo lavorare oltre $\sqrt{ 2 }$ perché la $F_{T}$ è ridotta, lo smorzamento in aumento diminuisce $F_{T}$ prima di $\sqrt{ 2 }$ e lo aumenta dopo $\sqrt{ 2 }$

<!Diagramma H(a)>

Con un aumenta in a si ha una diminuzione della amplificazione delle vibrazioni ma un'aumento nella forza trasmessa quindi nei casi reali bisogna dosare i due in base a cos'è più utile.

## Studio del 2$^{o}$ caso

<!Diagramma caso 2>

Tecnicamente una forzante non è applicata ma il moto della la creazione di una forzante equivalente quindi troviamo questa a poi facciamo i calcoli.

Per questo usiamo l'equazione di Lagrange:

$$\begin{gather}
E_{c}=  \frac{1}{2}m\dot{x}^{2} \to \frac{ \partial E_{c} }{ \partial x } =0 \\
\frac{d}{dt} \frac{ \partial E_{c} }{ \partial x } =m \ddot{x} \\
V = \frac{1}{2} k\Delta l^{2} = \frac{1}{2}k(x-y)^{2}\to \frac{ dV }{ dx }  = k(x-y) \\ \\
D = \text{funzione dissipativa} = \frac{1}{2}r \dot{\Delta l}^{2} = \frac{1}{2} r(\dot{x}-\dot{y})^{2} \to \frac{ \partial D }{ \partial \dot{x} } = r(\dot{x}-\dot{y})  \\
\delta L = R\delta y \to \text{Non è la solita perché il punto fisso non è mobile} \\
\delta L_{x} = 0 \to \text{Non esiste lavoro sulla variabile x, non implica che non esiste lavoro}
\end{gather}$$

Possiamo riscirvere come:
$$m\ddot{x} +r(\dot{x}-\dot{y})+k(x-y)=0$$
$$m\ddot{x} + r \dot{x}+kx = r \dot{y}+ky$$
La parte alla sinistra è la equazione del nostro sistema normale e quella alla destra è l'equazione della nostra forzante.

Abbiamo allora:
$$F_{e}(t) = r \dot{y}(t)+ky(t) = \mathbb{R}e((k+j\Omega r)Y_{o}e^{ i\Omega t })$$

Diciamo che:
$$|\overline{F}_{o}|=  F_{e} = \sqrt{ (kY_{o})^{2}+(r\Omega Y_{o})^{2} } $$
La amplitudine della vibrazione della massa allora sarà:
$$X_{o} = \frac{F_{o}}{k}\cdot H(a) = \frac{\sqrt{ k^{2}+(r\Omega)^{2} }Y_{o}}{k}\cdot H(a)$$

La trasmissibilità allora sarà:
$$TR = \frac{X_{o}}{Y_{o}} = \frac{\sqrt{ 1+(2ha)^{2} }}{\sqrt{ (1-a^{2})^{2}+(2ha)^{2} }}$$


## Esempio

<!Diagramma esempio>

Prendiamo y in base di $\xi$, quindi nel caso della singola armonica avremo:

$$\begin{gather}
y(\xi) = y_{o}\cos\left( \frac{2\pi}{\lambda_{o}}\xi+\psi_{o} \right) \\
y(t) = y_{o}\cos\left( \underbrace{ \frac{2\pi}{\lambda_{o}}v }_{ \Omega }t+\psi_{o} \right)
\end{gather}$$


Nel caso vero si fa un analisi di un strada per trovare l'armonica generale e poi si scompone per ogni armonica.

$$y(\xi) = \sum_{k=1}^{N}y_{_{k}}\cos\left( \frac{2\pi k}{\lambda_{k}}+\psi_{_{k}} \right) \to y(t) = \sum_{k=1}^{N}y_{_{k}}\cos\left( \frac{2\pi kv}{\lambda_{k}}t+\psi_{_{k}} \right)$$

$\lambda_{k} = \frac{\lambda_{0}}{k}$

Per ogni armonica abbiamo:
$$\begin{align}
y_{1}(t) &= y_{1}\cos(\Omega_{1}t+\psi_{1}) \to TR\to x_{1}(t) = TR(a)\cos(\Omega_{1}t+\psi_{1}+\phi_{1}) \\
y_{2}(t) &= y_{2}\cos(\Omega_{2}t+\psi_{2}) \to TR\to x_{2}(t) = TR(a)\cos(\Omega_{2}t+\psi_{2}+\phi_{2}) \\
\vdots
\end{align}$$

In vase la risposta della massa sarà la somma della risposta ad ogni armonica attraverso la trasmissibilità ed uno sfasamento.

Dopo avere preso tutti li sommiamo, ottenendo la risposta composta, x(t)

<!Diagramma trasmissibilità e risposte ad a_k>

Per $\Omega_{k}$ in aumento aumenta anche $a$, vediamo allora certe frequenze che stiamo guardando, quelle ad $a$ basse rimarranno quasi uguali, quelle vicino alla pulsazione propria verranno amplificate e quelle sopra la pulsazione propria soppresse.

Dato che a cambia con $\Omega$ cambia anche con v:
$$a_{k}= \frac{\Omega_{k}}{w_{o}} = \frac{2\pi kv}{w_{o}}$$

Vediamo allora vediamo che le $y_{k}$ saranno spostate di qualsiasi è $\Omega_{0}$

Per aumentare la comodità si vuole aumenta $w_{o}$ diminuendo allora $a$, facendo ciò smorziamo più $y_{k}$ ma il sistema diventa meno guidabile, quindi serve un bilancio.


