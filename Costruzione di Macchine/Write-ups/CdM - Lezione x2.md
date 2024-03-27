---
creation_date: 2023-10-31 21:34
tags:
  - cosmac
share: true
---
# Lezione 12 - Problema Elastico

Base di questa classe: [Saint-Venant's Principle](https://en.wikipedia.org/wiki/Saint-Venant%27s_principle)
## Ripasso Ultima Classe e continuazione

La relazione tra gli sforzi e lo scostamento
$$\left\{\begin{gather}
 \left( \frac{ \partial \sigma_{x} }{ \partial x } + \frac{ \partial \tau_{xy} }{ \partial y }  \right) = \gamma_{x}  \\
-\left( \frac{ \partial \sigma_{y} }{ \partial y } + \frac{ \partial \tau_{xy} }{ \partial x }  \right) = \gamma_{y}
\end{gather}\right\}$$
Le leggi di Hooke sono:
$$\begin{bmatrix}\mathcal{E}_{x} \\ \mathcal{E}_{y} \\ \gamma_{xy}\end{bmatrix} = 
\begin{bmatrix} \frac{1}{E} & -\frac{\nu}{E}  & 0 \\ -\frac{\nu}{E}  & \frac{1}{E} & 0 \\ 0 & 0 & G\end{bmatrix} \cdot
\begin{bmatrix}\sigma_{x} \\ \sigma_{y} \\\sigma_{z}\end{bmatrix}
$$

In forma infinitesima sappiamo che:

$\mathcal{E}_{x}=\frac{ \partial u }{ \partial x }$
$\mathcal{E}_{y}=\frac{ \partial v }{ \partial y }$
$\gamma_{xy}=\frac{ \partial u }{ \partial y }+\frac{ \partial v }{ \partial x }$

Differenziando troviamo che:

$$\frac{ \partial^{2} \mathcal{E}_{x} }{ \partial^{2}y } +\frac{ \partial^{2} \mathcal{E}_{y} }{ \partial^{2} x }  = \frac{ \partial^{2} \gamma_{xy} }{ \partial x \partial y } $$

Troviamo allora che:

$$\frac{ \partial^{2} \mathcal{E}_{x} }{ \partial y \partial z } = \frac{1}{2} \frac{ \partial  }{ \partial x }\left( \frac{ \partial \gamma_{xy} }{ \partial z }+\frac{ \partial \gamma_{xz} }{ \partial y } +\frac{ \partial \gamma_{zy} }{ \partial x }   \right)$$
## Come risolvere il problema elastico

> [!note] Ipotesi
> 1. Trave snella: l>>b e l >>h
> 2. Materiale Omogeneo, Isotropo e Elastico Lineare       ($\sigma = E\cdot \mathcal{E}$)
> 3. Forze di Volume nulle
> 4. Forze di Superfice sulle basi
> 5. Analizziamo sufficientemente lontano dai carichi
> 6. Corpo non vincolato, ma in equilibrio
> 7. Sistema di riferimento principale di inerzia

Consideriamo una trave caricata solo su x e y:

<!Diagramma trave>

Le forme infinitesimali delle forze interne sono:

$$\begin{gather}
N = b\int\limits^{h/2}_{-\frac{h}{2}} \sigma_{x}\, dy \\
T = b \int\limits_{-\frac{h}{2}}^{h/2} \tau_{xy} \, dy \\
M = b \int\limits_{-\frac{h}{2}}^{h/2} y\sigma_{x} \, dy   
\end{gather}$$

Guardando la asse dal lato:

<!Diagramma asse con convenzioni>

$$(1)\left\{ \begin{gather}
N = N_{o} \\
T = T_{o} \\
M = M_{o}-T_{o}x
\end{gather}\right\}$$
Saltando alcuni passi per Saint-Venant troviamo:

$$(2)\left\{\begin{gather}
\sigma_{x}=a+a_{2}y-xb_{2}y \\
N = aA \\
M = (a_{2}-xb_{2})J_{zz}
\end{gather}\right\}$$
$J_{zz}$ è il momento di inerzia che è come la inerzia per la rotazione.

Mettendo (1) in (2) troviamo:

$$\begin{gather}
a = \frac{N}{A} = \frac{N_{o}}{A} \\
a_{2}=\frac{M_{o}}{J_{zz}} \\
b_{2}=\frac{T_{o}}{J_{zz}}
\end{gather}$$

Ritornando alla equazioni di prima troviamo:
$$\begin{gather}
\sigma_{x}=\frac{N}{A}+\underbrace{ \frac{M_{o}y}{J_{zz}} }_{ M_{o}=M+T_{o}x }-x \frac{T_{o}}{J_{zz}} y \\
\sigma_{x}=\frac{N}{A}+\frac{M}{J_{zz}} y + \cancel{ x \frac{T_{o}}{J_{zz}} y } - \cancel{ x \frac{T_{o}}{J_{zz}} y } \\
\sigma_{x} = \frac{N}{A}+\frac{M}{J_{zz}} y
\end{gather}$$

## Linea elastica assiale

Prendiamo una trave e la sottoponiamo allo sforzo N:

<!Diagramma trave N>

$\sigma_{x}=\frac{N}{A}$
$\sigma_{y}=\tau_{xy}=0$

$$\left\{\begin{gather}
\mathcal{E}_{x} = \frac{\sigma_{x}}{E} \\
\mathcal{E}_{y}=-\frac{\nu \sigma_{x}}{E} \\
\gamma_{xy}=0
\end{gather}\right\}$$

$\mathcal{E}_{x}=\frac{ \partial u }{ \partial x }\implies u(x,y)=\frac{N}{EA}x+c_{1}$
$\frac{ \partial u }{ \partial x }=\frac{N}{EA}$
$\mathcal{E}_{y}=\frac{ \partial v }{ \partial y }\implies v(x,y) = - \frac{\nu N}{EA}y+c_{2}$

In questo caso:
$u(x,0) = \frac{N}{EA}+c_{1}$
$v(x,0)=c_{2}$

$\sigma_{x}$ e $\mathcal{E}_{x}$ sono uniformi sulla sezione.

## Esempio - Caso Carico Distribuito

<!Diagramma asse e calcoli>

## Altro Esempio - Carico Concentrato

<!Diagramma asse e calcoli>

## Da Ricordare

- Ipotesi di Saint-Venant

- $-EA\frac{ \partial^{2} u }{ \partial^{2} x } = f(x)$ e procedura per i due esempi (sono gli unici due, quindi sia furbo e memorizzali) questo per esame orale.

