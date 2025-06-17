---
creation_date: 2023-11-25 20:24
tags:
  - PIE
share: true
---
# Esercitazione 8

## Esercizio 1 - Ultimo Trifase

## Teoria - Circuiti Dinamici

Il circuiti per l'analisi dinamica di primo ordine vengono in due forme generali:

<!Diagramma circuiti iniziali>

Come si ricavano le variabili:
#### Passo $t=0^{-}$
<!Diagramma passo t = 0- >
Questo passo restituisce $x(0^{-})$, dove x è la grandezza di intresse
#### Passa a $t=0^{+}$
<!Diagramma passo t= 0+>
Questo passo restituisce $x(0^{+})$

#### Passo a $t\to \infty$
<!Diagramma passo t = infty>
Questo passo restituisce $x(\infty)$

#### Passo $\tau$
<!Diagramma passo t = tau>
In questo passo si spengono i generatori e si impone l'interruttre nella posizione finale.

Si calcolare la $R_{eq}$ vista da C o L.

##### Caso Condensatore:
$$\tau = R_{eq}C$$
##### Caso Induttore
$$\tau = \frac{L}{R_{eq}}$$

### Funzione Generale
Questi passi ci permettono di riempire i posti nella equazione generale

$$x(t)\left\{\begin{align}
&x(0^{-}) &, \text{per t <0}\\
&(x(0^{+})-x(\infty))e^{ -\frac{t}{\tau} } + x(\infty) &, \text{per t >}\infty
\end{align}\right\}$$

Da questa funzione si ricava un diagramma di $x$ in funzione del tempo.
<!Diagramma x in funzione del tempo>

$x$ è una variabile qualsiasi, se $x$ è variabile si stato allora $x(0^{-})=x(0^{+})$
## Esercizio 1 - Transitori

## Esercizio 2

## Esercizio 3

