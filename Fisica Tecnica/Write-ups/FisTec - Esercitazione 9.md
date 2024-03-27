---
creation_date: 2023-11-25 17:54
tags:
  - fistec 
share: true
---
# Esercitazione 9

## Trasferimento di Calore

### Analogia Elettrica

Dati due punti a temperatura diverse il calore trasferito può esser calcolato trovando la resistenza termica tra i due punti, esiste una analogia elettrica:

<!Diagramma analogia termica>

La portata di calore ha equazione:
$$\dot{ q}= \frac{T_{1}-T_{2}}{R}$$
La resistenza dipende dal tipo di struttura e il materiale attraverso cui passa:
$$\begin{gather}
R_{CD\text{,piana}} = \frac{S}{kA} \\
R_{CD\text{,cilindro}} = \frac{\ln \frac{r_{2}}{r_{1}}}{2\pi Lk} \\
R_{CD\text{,sfera}} = \frac{r_{e}-r_{i}}{4\pi r_{e}r_{i}k} \\
R_{CONV} = \frac{1}{h\cdot Area}
\end{gather}$$
h è il coefficiente di scambio termico convettivo invece k è la conducibilità del materiale

La portata di calore per unita di area è: $$\dot{q}'' = \frac{\dot{q}}{A}$$
Le equazione di resistenza in serie e in parallelo sono le stesse:
<!Diagramma in serie a parallelo>

### Equazioni per la geometria piana allo stato stazionario


$$\begin{gather}
\frac{ d^{2}T }{ dx^{2} } = -\frac{\dot{q}'''}{k} \\
\frac{dT}{dx} = -\frac{\dot{q}'''}{k} x +c_{1} \to \boxed{ q(x) } = -k \frac{ dT }{ dx } = \boxed{ \dot{q}'''x - kc_{1} } \\ \\
\boxed{ T(x)= -\frac{\dot{q}'''}{k} \frac{x^{2}}{2} + c_{1}x+c_{2} } \\
\text{Senza generazione si ha:} \\
\frac{ d^{2}T }{ dx^{2} } = 0 \to \frac{ dT }{ dx } =c_{1} \\
\boxed{ q(x) } = -k \frac{ dT }{ dx } = \boxed{ -kc_{1} }  \\
\boxed{ T(x)=c_{1}x+c_{2} }

\end{gather}$$

$c_{1}$ e $c_{2}$ ricavati con le condizioni di contorno dal sistema.

### Geometria Cilindrica (con generazione)

$$\begin{gather}
\frac{1}{r} \frac{d}{dr} \left( r \frac{dT}{dr} \right) + \frac{\dot{q}'''}{k} = 0 \\
\frac{d}{dr} \left( r \frac{ dT }{ dr }  \right) = -r \frac{\dot{q}'''}{k} \\
r \frac{ dT }{ dr } = -\dot{q}''' \frac{r^{2}}{2}+ c_{1} \\
\frac{ dT }{ dr } = -\frac{\dot{q}'''}{k}\cdot \frac{r}{ 2} \cdot \frac{c_{1}}{r}\to \boxed{ q(r) } = -k \frac{ dT }{ dr } = \boxed{ \frac{\dot{q}'''r}{2}-\frac{kc_{1}}{r} } \\
\boxed{ T(r)= -\frac{\dot{q}'''}{4k}r^{2} + c_{1}\ln r +c_{2} }
\end{gather}$$

## Esericizio 1 - Teorico

## Esercizio 2 - Teorico

## Esercizio 1 - Non Teorico

## Esercizio 2 - Non Teorico

## Esercizio 3 - Non Teorico

## Esercizio 4 - Non Teorico (Esercizio 7 di Esercitazione 9)






