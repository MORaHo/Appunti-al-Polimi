---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 7 - Manovellismi, Quadrilateri e Grashof

Nella ultima lezione abbiamo studiamo i manovellismo e abbiamo trovato le equazioni:

$$\text{Posizione: } \left\{\begin{gather}c = a\cos\alpha+b\cos\beta\\0 = a\sin\alpha+b\sin\beta\end{gather}\right\}$$
$$\text{Velocità: } \left\{\begin{gather}\dot{c} = -\dot{\alpha}a\sin\alpha-\dot{\beta}b\sin\beta\\0 = \dot{\alpha}a\cos\alpha+\dot{\beta}b\cos\beta\end{gather}\right\}$$
$$\text{Accelerazione: } \left\{\begin{gather}\ddot{c} = -\ddot{\alpha}a\sin\alpha-\dot{\alpha}^{2}a\cos\alpha-\ddot{\beta}b\sin\beta-\dot{\beta}^{2}b\cos\beta\\0 = \ddot{\alpha}a\cos\alpha-\dot{\alpha}a\sin\alpha+\ddot{\beta}b\cos\beta-\dot{\beta}^{2}b\sin\beta\end{gather}\right\}$$

Troviamo allora che la accelerazione del corpo B sarà:

$$\dot{a}_{B} = \underbrace{ \vec{\dot{w}}\times(A-O) }_{ \vec{a}_{At} }-\underbrace{ w^{2}(A-O) }_{ \vec{a}_{An} } + \underbrace{ \vec{\dot{w}}_{2}\times(B-A)-w_{2}^{2}(B-A) }_{ \text{Accelerazione del corpo 2} }$$

<!Diagramma vettori>

## Grafici di Posizione, Velocità e Accelerazione

Abbiamo già trovato i grafici della posizione e velocità, e verranno riportati dopo, in questo momento studiamo i punti limiti della accelerazione per scoprire come cambia con l'angolo, dati: $\ddot{\alpha} = 0 \implies \dot{\alpha}=cost$

P.M.S $\to$ Punto Moto Superiore ($\alpha=0\implies\beta=0$)

$$\ddot{c} = -\dot{\alpha}^{2}a-\dot{\beta}^{2}b$$

Sappiamo che $\dot{\beta} = - \dot{\alpha} \frac{a\cos\alpha}{b\cos\beta}$, dati $\alpha=0$ e $\beta=0$ allora $\dot{\beta} = -\dot{\alpha} \frac{a}{b}$

$$\begin{align}
\ddot{c} &= - \dot{\alpha}^{2}a-\left( -\dot{\alpha} \frac{a}{b} \right)^{2}b= \\
&= -\dot{\alpha}^{2}a-\dot{\alpha}^{2} \frac{a}{b} \cdot a = -\dot{\alpha}^{2} a\left( 1+\frac{a}{b} \right)
\end{align}$$

$\alpha=0 \cancel{ \implies } \dot{\alpha} = 0$ perché A continua a girare intorno ad O, non stiamo guardando a $v_{b}$, stiamo guardando $\alpha$ non $v_{b}$.

P.M.I $\to$ Punto Moto Inferiore ($\alpha=\pi \implies \beta=0$)

In questo caso $\dot{\beta} = \dot{\alpha} \frac{a}{b}$ , allora: $\ddot{c} = -\dot{\alpha}^{2} a(-1) - \left( \dot{\alpha} \frac{a}{b} \right)^{2}b = \dot{\alpha}^{2} a - \dot{\alpha}^{2}a \frac{a}{b} = \dot{\alpha} a \left( 1-\frac{a}{b} \right)$

Mettendo tutto insieme troviamo i grafici per la posizione, velocità e accelerazione che sono:

<!Diagrammi posizione, velocità e accelerazione>

## Quadrilatero Articolato (manovella bilanciere)

Un quadrilatero è composto da 4 cerniere, il movimento di solito è dettato dalla manovella.

<!Diagramma quadrilatero>

In questo caso diciamo che la manovella è l'asta a, allora tracciando il movimento di A e B, troviamo:

<!Diagramma sistema manovellismo>

Troviamo che l'asta b è un bilanciere, cioè non riesce a completare un giro completo, durante il movimento completo di A intorno ad $O_{1}$. 

Muovendo $O_{2}$ più in basso, troviamo che il cambio dell'angolo nel suo movimento completo diminuisce e invece se $O_{2}$ si alta, l'angolo aumenta.
### Ricavando gl'angoli di massimo e minimo

#### PMS $\to$  Punto di Moto Superiore

<!Diagramma punto superiore>

Con il teorema di Carnot per i triangoli non rettangoli troviamo:

$$\begin{gather}
(a+b)^{2}+t^{2} - 2(a+b)t\cos\alpha_{1}  = c^{2} \\
(a+b)\cos\alpha_{1} = t+ c\cos\gamma_{1} \\
(a+b)\sin\alpha_{1}  = c\sin\gamma_{1}
\end{gather}$$

#### PMI $\to$ Punto di Moto Inferiore

<!Diagramma punto inferiore>

Abbiamo $\alpha_{2}' = \alpha_{2}-\pi$, prendiamo questo perché è l'angolo che ci interessa, anche se $\alpha_{2}$ è quello che abbiamo

$$\begin{gather}
(b-a)^{2} + t^{2}-2(b-a)t\cos\alpha_{2}' = c^{2} \\
(b-a)\cos\alpha_{2}'-c\cos\gamma_{2} = t \\
(b-a)\sin\alpha_{2}' = c\sin\gamma_{2}
\end{gather}$$

## Condizione di Grashof

Se prendiamo le aste per le loro lunghezze, li nominiamo:
$$l_{1}<l_{2}<l_{3}<l_{4}$$

Se $l_{1}+l_{4} <l_{2}+l_{3}$ allora il sistema è elemento dei sistemi di Grashof, quindi esiste almeno un asta che agisce come manovella (cioè può completare un giro interno nel suo muovimento)

Se $l_{1}+l_{4} >l_{2}+l_{3}$, allora il sistema non è di Grashof, sono tutti bilancieri.

Ci sono 3 tipi di sistemi di Grashof:

### Caso 1 - Manovella-Bilanciere

In questo sistema fisso un lato che è adiacente alla manovella, qualsiasi sia il lato opposto alla manovella diventa un bilanciere:

<!Diagramma manovella-bilanciere>

### Caso 2 - Doppia Manovella

In questo caso fisso la manovella, questo significa che i due lati adiacenti alla manovella diventeranno manovelle.
<!Diagramma doppia manovella>

### Caso 3 - Doppio Bilanciere

Fisso il lato opposto alla manovella, le due aste adiacenti alla manovella diventano bilancieri, la manovella può a non può completare un giro dipendendo dalla configurazione (ultima frase interpretata da wikipedia)

<!Diagramma doppio bilanciere>






