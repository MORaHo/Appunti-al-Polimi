---
creation_date: 2023-10-14 15:10
tags:
  - PIE
parent: 
child: 
share: true
---
# Esercitazione 3 - Thevenin e Norton

**Queste equivalnze sono importanti da ricordare**
## Equivalenze di Thevenin

<!Diagrammi di Thevenin>

### Regole

1. Calcolare la tensione a vuoto ai morsetti
   PQ $\to E_{th}$
2. Spiegare i generatori
3. Calcolare la resistenza equivalente $R_{th}$

## Equivalenze di Norton

<!Diagrammi equivalenze>

### Regole

1. Calcolare la corrente di circuito ai morsetti
   PQ $\to I_{\small{N}}$
2. Spegnere i generatori
3. Calcolare la resistenze equivalente $R_{\small{N}}$


## Esercizio 1

<!Diagramma esercizio 1>

Per trovare BC si potrebbe usare anche Norton:

<!Diagramma soluzione con Norton>

## Esercizio 2

<!Diagramma esercizio 2>

## Esercizio 3

<!Diagramma esercizio 3>

Alternativamente si semplificando si potrebbe usare Millman:

<!Diagramma alternativa Millman>

Se invece chiedesse P$_{V1}$, avremmo dovuto ritornare al circuito iniziale per trovare la soluzione perché è una differenza interna che non può esser semplificata usando Norton o Thevenin.

<!Diagramma P_v1>

<u>Ricordiamo le convenzioni per la potenza:</u>

Gli utilizzatori assorbono potenza e basta, hanno P>0. Se un generatore ha P<0 assorbe potenza invece se ha P>0 eroga potenza.

Con questo troviamo che $V_{1}$ non assorbiva potenza e $A_{1}$ era il vero erogatore di potenza. Questo fa vedere perché Norton e Thevenin possono esser presi solo per casi esterni perché in casi interni hanno risultati diversi prima e dopo la semplificazione.

## Esercizio 4

<!Diagramma setting esercizio 4>

Rendiamo il circuito binodale riconoscendo i morsetti A e B, perché tutti i richiesti sono su $V_{1}$. Isolando $V_{1}$ ci rendiamo più facili i calcoli che faremo dopo. Si poteva vedere che era binodale se avessi spostato in alto a sinistra e il generatore di tensione in alto a destra.

<!Diagramma calcoli esercizio 4>

Facendo $P= VI$ ci viene un risultato negative perché anche se hanno la stessa direzione il magnitudo di I è negativo e non possiamo cambiarlo, quindi ci viene un risultato negativo.

## Esercizio 5

<!Diagramma esercizio 5>

