---
creation_date: 2023-11-26 15:38
tags:
  - cosmac
share: true
---
# Esercitazione 11

## Teoria

In presenza di un intagli gli sforzi generati dagli stessi sforzi cambiano:

<!Diagramma con e senza intaglio>

Vicino all'intaglio aumenta lo sforzo da uno sforzo nominale ad uno sforzo massimo.

$$\sigma_{nom}= \frac{F}{A}=\frac{F}{(h-d)\cdot b}$$
Con lo sforzo nominale stiamo stipulando che siano tutti uguali.

Il coefficiente d'intaglio ci corregge questa stipulazione e ci da $\sigma_{max}$
$$k_{T}=\frac{\sigma_{max}}{\sigma_{nom}} = f(\text{geometria,azioni interne})$$
Quando facendo le verifiche statiche faremo:
$\sigma_{max}= k_{T}\sigma_{nom}$ non calcleremo $\sigma_{max}$ ma useremo $k_{T}$ direttamente.

### Consideriamo:

#### Prima Plasticizazione:

<!Diagramma prima plasticizzazione>
La prima plasticizzazione quando il primo punto di $\sigma_{max}$ arriva a $\sigma_{sn}$.In molti casi questa è la situazione più critica perché richiede meno forza per arrivare a questo punto.
A questo punto si usa:
$$\sigma_{max}=\sigma _{nom}\cdot k_{T}$$
#### Plasticizazione totale:
<!Diagramma plasticizzazione totale>

In questo punto $\sigma_{nom}=\sigma_{max} \implies k_t = \frac{\sigma_{max}}{\sigma_{nom}}=1$
A parità di geometria, si ha lo stesso $k_{T}$, azioni interne diverse hanno coefficiente di intaglio diversi.
## Esercizio 1

<!Diagramma esercizio 1>

## Esercizio 2

<!Diagramma esercizio 2>

## Esercizio 3

<!Diagramma esercizio 3>


