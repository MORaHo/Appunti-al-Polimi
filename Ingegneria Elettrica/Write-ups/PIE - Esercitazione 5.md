---
creation_date: 2023-10-27 21:36
tags:
  - PIE
share: true
---
# Esercitazione 5

## Esercizio 1

<!Diagramma esercizio 1>

## Esercizio 2

<!Diagramma esercizio 2>

## Regime Sinusoidale

$$
\begin{gather}
v(t) = \sqrt{ 2 }V \cos(wt+\phi_{v}) \to \overline{V}= Ve^{ j\phi_{v} } \\
i(t) = \sqrt{ 2 }I \cos(wt + \phi_{I}) \to \overline{I} = ve^{ j\phi I }   \\
\text{In questi casi V e I sono i valori efficaci di v e i} \\
e^{ j\phi }=\cos(\phi)+j\sin(\phi) \\
\end{gather}
$$
Partando indietro alla trigonometria:
$$v(t)=\mathbb{R}e[\sqrt{ 2 }Ve^{ j(wt+\phi_{v}) }]$$
$w = 2\pi f$

$$
\begin{gather}
\overline{V}= V_{\mathbb{R}}+jV_{\mathbb{I}}  \\
V_{\mathbb{R}}=V\cos(\phi_{v}) \\
V_{\mathbb{I}}=V\sin(\phi_{v}) \\
V = \sqrt{ V_{\mathbb{R}}^{2}+V_{\mathbb{I}}^{2} } \\
\text{In termini di quello che abbiamo fatto, la equazione può esser scritta:} \\
A=\sqrt{ P^{2}+Q^{2} }
\end{gather}
$$

$\phi_{v} = arg(V_{\mathbb{R}}+jV_{\mathbb{R}})$

- $\arctan\left( \frac{V_{\mathbb{I}}}{V_{\mathbb{R}}} \right): V_{\mathbb{R}}>0$
- $\arctan\left( \frac{V_{\mathbb{I}}}{V_{\mathbb{R}}}\right)+\pi: V_{\mathbb{R}}<0$
- $\frac{\pi}{2}: V_{\mathbb{R}} = 0\text{ e }V_{\mathbb{I}}>0$
- $-\frac{\pi}{2}: V_{\mathbb{R}}=0 \text{ e }V_{\mathbb{I}}<0$
- indefinito: $V_{\mathbb{R}}\text{ e }V_{\mathbb{I}}=0$

### Impedenze

<!Diagramma impedenze>

#### Elementi Multipli

<!Diagramma elementi multipli>

#### Impedenze in Parallelo

<!Diagramma impedenza in parallelo>

### Roba da Ricordarsi

<!Diagramma dal telefono 27/10/23>

Aggiungendo all'immagine:

$$
\begin{gather}
e^{ j\phi }=\cos(\phi)+j\sin(\phi) \\
X_{\mathbb{R}} = X\cos(\phi) \\
X_{\mathbb{I}} = X\sin(\phi)
\end{gather}
$$
## Esercizio 3

<!Diagramma esercizio 3>

## Esercizio 4

<!Diagramma esercizio 4, equivalente di Thevenin>


