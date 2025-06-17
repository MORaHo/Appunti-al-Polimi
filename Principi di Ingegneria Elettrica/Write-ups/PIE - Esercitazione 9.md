---
creation_date: 2023-12-02 22:48
tags:
  - PIE
share: true
---
# Esercitazione 9 - Circuiti Magnetici

## Teoria

Dato un qualsiasi circuito magnetico connesso ad un qualsiasi circuito elettrico come per esempio:

<!Diagramma circuito magnetico e elettrico>

Ci verranno chiesti due tipi di problemi:
1. Calcolo di L visto da A nel circuito
2. Calcolo delle forze

Condizioni di base per i nostri problemi:
$$\begin{gather}
\mu_{Fe}\to \infty \\
\mu_{o}=4\pi \cdot10^{-7} \frac{H}{m}
\end{gather}$$
### Problema Induttanza

Spegniamo ogni bovina oltre quella per cui stiamo calcolando la induttanza, preso il circuito di prima sarebbe:

<!Diagramma circuiti rappresentativi>

$$\theta_{\delta} = \frac{\delta}{\mu_{o}A_{s}}$$
$$\boxed{ L = \frac{\Psi}{I} = \frac{N\varphi}{\frac{NI}{N}} = \frac{N^{2}}{\theta_{eq}} }$$

Trovando la energia accumulata del induttore abbiamo il circuito:
<!Diagramma circuito per L>
$$W_{L} = \frac{1}{2}LI^{2}$$
### Problema Forze
Per trovare le forze abbiamo:

<!Diagramma circuito magnetico forze>

La formula generale per il calcolo delle forze è:
$$\boxed{ F= \frac{\varphi^{2}}{2\mu_{o}A_{Fe}} }$$

In questo caso abbiamo:
$$\begin{gather}
F_{1}=\frac{\varphi_{1}^{2}}{2\mu_{o}A_{Fe}} \\
F_{2}=\frac{\varphi_{2}^{2}}{2\mu_{o}A_{Fe}}
\end{gather}$$
### Problemi con più bovine

<!Diagramma circuito magnetico a più bovine>

#### Calcolo di L:
Per calcolare $L_{1}$ spegniamo la bovina alla destra e calcoliamo come prima, invece per calcolare $L_{2}$ spegniamo la bovina alla destra e calcoliamo usando i numeri di avvolgimenti nella seconda bovina.

<!Diagramma calcolo L con più bovine>

#### Mutue Induttanze

Per calcolare la mutua induttanza spegniamo tutte tranne una bovina e calcoliamo la induzzione indotta:

<!Diagramma mutue induttanze>

$$L_{m}=\frac{N_{2}\varphi_{2}}{I_{1}}\Bigg|_{I_{2}=0} = \frac{N_{1}\varphi_{1}}{I_{2}}\Bigg|_{I_{1}=0}$$

È possibile trovare questo valore senza sapere la corrente, guardare esercizio 2 per cosi fa.

La energia accumulata in un sistema con più bovine è:
$$W_{L}=\frac{1}{2}L_{1}I_{1}^{2}+\frac{1}{2}L_{2}I_{2}^{2}+L_{m}I_{1}I_{2}$$


## Esercizio 1

## Esercizio 2

### Nota Bene
> [!note] Nota Bene
> Invece di usare la corrente possiamo cambiare il flusso per il suo equivalente e questo cancella la corrente, troviamo che $L_{m} = \frac{N_{1}N_{2}}{2\theta_{eq}}$
## Esercizio 3

