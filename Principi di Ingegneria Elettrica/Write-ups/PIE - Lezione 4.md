---
creation_date: 2023-09-26 21:31
tags:
  - PIE
parent: 
child: 
share: false
---
# Lezione 4 - Ripasso e Teoremi Inutilmente Utili

## Ripasso

Per il teorema fondamentale della elettrotecnica, la soluzione esiste ed e' una.

Formula Fondamentali:

- Serie - $R_{eq} = \sum_{k=1}^n = \frac{1}{R_k}$ 
- Parallelo - $\frac{1}{R_{eq}} = \sum_{k=1}^n \frac{1}{R_k}$

<!Diagrammi e casi speciali>
![](2023-09-26%2023.18.excalidraw.png)
## Partitori

I partitori sono forme alternate di LKC e LKT che riducono i calcoli.

### Partitori di Tensione

<!Diagramma>
![](2023-09-26%2023.22.excalidraw.png)

Solo in serie la Legge di Kirchhoff delle Correnti puo' esser usata, per trovare resistenze, correnti e tensioni.

Sapendo R$_1$, R$_2$, R$_3$, ... si puo' trovare la tensione attraverso uno dei resistori usando l'equazione:

$$V_k = \frac{R_k}{\sum_n R_n} \cdot V_{IN}$$
Se una delle resistenze non e' in serie non puo' esser usata per in questa equazione.

<!Diagramma caso no>
![](2023-09-26%2023.24.excalidraw.png)

### Partitori di Corrente

<!Diagramma Partitore>
![](2023-09-26%2023.29.excalidraw.png)

<u>Solo</u> in parallelo la equazione generale seguente puo' esser usata per trovare la corrente che sta attraversando un dei rami:

$$I_k = \frac{G_k}{\sum_nG_n}\cdot I_{IN}$$

Questa e' simile all'altra equazione, in un'altro esempio della dualita' delle grandezze nei circuiti.

## Teorema di Sostituzione

Questo teorema non da dimostrare, e' solo una base di altri teoremi che useremo.

Per il teoremi fondamentale delle elettrotecnica il circuito non cambia se si sostituisce il bipolo con un generatore di corrente o tensione'

<!Diagramma teorema>
![](2023-09-26%2023.31.excalidraw.png)

Non si usa perche' di solito non si sa la corrente o la tensione, quindi in effetti e' inutile.

## Principio di Sovrapposizione, delle cause e degli effetti

Quando il sistema e' lineare, la soluzioni di una sistema e' la somma di ogni soluzione ad un sistema dove si spegne un generatore.

Esempio:
In questo esempio, vogliamo calcolare $I_1$ , quindi per creiamo due circuiti dove e' spento uno o l'altro generatore, poi calcoliamo $I_1'$ e $I_1''$, facendo la somma si trova $I_1$. Bisogna ricordarsi che i circuiti aperti hanno lo stesso tensione ai morsetti ma non passa corrente, e tedere a conto il verso delle correnti e tensioni, come nella seconda parte dove prendiamo la corrente nel verso sbagliato quindi dobbiamo determinare la relazione tra V e V$_1$ per mantenere il segno per la Legge di Ohm.

<!Diagramma>
![](2023-09-26%2023.34.excalidraw.png)

