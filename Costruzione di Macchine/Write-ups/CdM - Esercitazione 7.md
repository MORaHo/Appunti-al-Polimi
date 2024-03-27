---
creation_date: 2023-10-28 14:28
tags:
  - cosmac
share: true
---
# Esercitazione 7

## Sforzi

$\overline{\overline{\sigma}_{}}_{}\to$ tensore di sforzo

$$\overline{\overline{\sigma} } = \begin{bmatrix}
\sigma_{xx} & \tau_{xy} & \tau_{xz} \\
\tau_{yx} & \sigma_{yy} & \tau_{yz} \\
\tau_{zx} & \tau_{zy} & \sigma_{zz} 
\end{bmatrix} \text{matrice simmetrica}$$

<u>Convezione di Sforzi:</u>

$\tau_{xy} \to$ sforzo che giace sulla superfice norma a x e ha direzione come y.

### Tetraedro di Cauchy

<!Diagramma tetraedro di Cauchy>

S è uno sforzo qualsiasi e $\hat{n}$ è il versore normale alla superfice.

$$\hat{n}=\begin{bmatrix}
\cos\alpha \\
\cos\beta \\
\cos\gamma
\end{bmatrix}$$
Facendo l'equilibrio:

$S_xdA=\sigma_{x}\underbrace{ dA\cos\alpha }_{ \substack{\text{Proiezione}\\\text{di A lungo x}} }+\tau_{yx}dA\cos\beta+\tau_{zx}dA\cos\gamma$

Gli equilibrio lungo tutte le assi è:

$$
\left\{\begin{matrix}
S_{x}=\sigma_{x}\cos \alpha+\tau_{yx}\cos\beta+\tau_{zx}\cos\gamma \\
S_{y}=\tau_{yx}\cos\gamma+\sigma_{y}\cos\beta+\tau_{zy}\cos\gamma \\
S_{z}=\tau_{xz}\cos\alpha+\tau_{yz}\cos\beta+\sigma_{z}\cos\gamma
\end{matrix}\right\}
$$
Il vettore di S, $\overline{S}$ = $\overline{\overline{\sigma}}\cdot  \hat{n}$:
$$
\overline{S} = \left\{\begin{matrix}S_{x} \\ S_{y} \\ S_{z}\end{matrix}\right\} = \underbrace{ \begin{bmatrix}
\sigma_{xx} & \tau_{xy} & \tau_{xz} \\
\tau_{yx} & \sigma_{yy} & \tau_{yz} \\
\tau_{zx} & \tau_{zy} & \sigma_{zz} 
\end{bmatrix} }_{ \overline{\overline{\sigma}_{} }_{}  } \boldsymbol{\cdot} \underbrace{ \underbrace{ \begin{bmatrix} \cos\alpha\\cos\beta\\cos\gamma\end{bmatrix} }_{ \hat{n} } }_{ \substack{\neq 0\text{ per}\\\text{soluzioni}\\\text{non banali}} }
$$

Cercando lo sforzo normale al piano A, quindi parallelo a $\hat{n}$, troviamo:

$$\begin{align}
\sigma_{n}&=\overline{S}^{T}\cdot  \hat{n}=\overline{S}\cdot  \hat{n}^{T}   \\
&= S_{x}\cos\alpha +S_{y}\cos\beta + S_{z}\cos\gamma \\
&= (\overline{\overline{\sigma} } \cdot  \hat{n} )^{T}\cdot  \hat{n}= \hat{n}^{T}\cdot \overline{\overline{\sigma} } \cdot  \hat{n}  \\
\end{align}$$
<!Diagramma sigma tau S>

Lo sforzo tangenziale alla faccia di A è:
$$\tau_{n}=\sqrt{ |\overline{S} |^{2}-\sigma_{n}^{2} }$$

Il tensore è diagonalizzabile quindi:

$$\begin{bmatrix}
\sigma_{x}'  & 0 & 0 \\
0  & \sigma_{y}'  & 0 \\
0 & 0 & \sigma_{z}'
\end{bmatrix}$$

Con $\sigma_{x}'$, $\sigma_{y}'$ e $\sigma_{z}'$ sono gli autovalori per cui dobbiamo trovare gli autovettori, che sono i vettori di base che possono descrivere un sistema completamente.

$\det(\overline{\overline{\sigma}}-\sigma_{p}\overline{\overline{I}})\cdot  \hat{n}=\underline{O}$

$\forall\sigma_{p}$ $\underbrace{ (\overline{\overline{\sigma}}-\sigma_{p}\overline{\overline{I}})\cdot  \hat{n} }_{ \substack{\text{Voglaimo trovare}\\\text{le nostre direzioni}\\\text{principali dagli}\\\text{sforzi principali}} }=\underline{O}$
Dove $\sigma_{p}$ sono gli sforzi principali

Troviamo $\alpha,\beta$ e $\gamma$ tale che: $\cos ^{2}\alpha+\cos ^{2}\beta+\cos ^{2}\gamma=1$

Ricaviamo 3 sforzi principali è gli diamo i nomi $\sigma_{1},\sigma_{2}$ e $\sigma_{3}$ tale che: $\sigma_{1}>\sigma_{2}>\sigma_{3}$
## Esercizio 1

<!Diagramma esercizio 1>

## Esercizio 2

<!Diagramma esercizio 2>

## Metodo dei Cerchi di Mohr (con Esempio)

Come visto questo esercizio ci mette un bell'pò di tempo a completare, i cerchi di Mohr ci danno un metodo più valore per trovare $\sigma_{1},\sigma_{2},\sigma_{3},\alpha,\beta,\gamma$ e $\tau_{max}$

<!Diagramma pezzo>

Prendo i punti A e B, per trovare $\sigma$ e $\tau$ al punto, e mappiamo questi valori sul piano di Mohr.
Se non sappiamo uno sforzo principale non possiamo disegnare i cerchi di Mohr.

Connettendo i due punti mappati, disegniamo il diametro e il cerchio con questo diametro. Mappiamo il terzo sforzo principale e disegniamo altri due cerchi.

<!Diagramma cerchi di Mohr>

Con i cerchi di Mohr, $\sigma_{1}$ è il punto nelle circonferenze che tocca l'asse delle $\sigma$ nel punto più a destra, invece $\sigma_{3}$ è il punto nelle circonferenze più a destra.

Troviamo il centro del cerchio facendo:
$$C = \frac{\sigma_{A}-\sigma_{B}}{2}$$
E il raggio:
$$R = \sqrt{ (C-\sigma_{B})^{2}+\tau_{B}^{2} }$$

Gli sforzi principali dipendono dagli sforzi nel sistema, si sa però che due punti sono sicuramento $C+R$
e $C-R$.

Per trovare $\alpha$ usiamo la equazione:
$$\underbrace{ \alpha_{M} }_{ \substack{\alpha \:di\\\text{Mohr}} } = \arcsin\left( \frac{\tau}{R} \right)=2\underbrace{ \alpha_{R} }_{ \alpha \text{ reale} } \implies  \alpha_{R}=\frac{1}{2}\arcsin\left( \frac{\tau}{R} \right)$$
Gli angoli nel piano di Mohr sono due volte di angoli reale, quindi dividiamo l'angolo che troviamo.

La convenzione per l'angolo e gli sforzi tangenziali è:

<!Diagramma convenzione>

Il segno di $\alpha_{R}$ dipende da se A è sopra ($\alpha$>) o se A è sotto ($\alpha_{R}$<0) è la convenzione è la convenzione normale prendiamo l'angolo come trovato, invece se la convezione è antioraria prendiamo il negativo di quell'angolo.

In fine la nostra rappresentazione diventa:

<!Diagramma angoli principali>

Per trovare $\tau_{max}$ usiamo le equazione:

$$\tau_{max}=\frac{\sigma_{1}-\sigma_{3}}{2}$$
## Esercizio 3

<!Diagramma esercizio 3>

## Esercizio 4

<!Diagramma esercizio 4>










