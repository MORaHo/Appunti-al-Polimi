---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 3 - Stima di Incertezza

Come detto nell'ultime lezione, la stima dell'incertezza con metodi statistici è del tipo A, invece ogni metodo che non usa metodi statistici è detto di tipo B.

Ci sono molte distribuzioni oltre alle distribuzioni, normali, uniforme e t-student, ma quelle sono quelle che studieremo.

## Incertezza Combinata

Incertezza derivata dall'incertezza delle misure dirette

$Y = f(x_{1},x_{2},\dots,x_{n})$

### Esempio Intuitivo

Immagina una montagna, e usi un GPS che da coordinate x e y.

<!Diagramma montagna>

In questo caso la incertezza di y non importa perché se si sbaglia y di un'po' si rimane sulla stessa coordinata di z, invece se si sbaglia x di un'po' la coordinata z cambia cambia, e può cambiare di un bel po'.

Questo ci fa vedere che ogni misura diretta usata per trovare una variabile indiretta ha un effetto singolare sulla variabile indiretta che dobbiamo trovare. Vediamo che questo peso è la derivata parziale della variabile indiretta rispetto alla variabile parziale diretta.

Il contributo su $u_{z}$ di $u_{x}$ è:

$$u_{z} = \frac{ \partial z }{ \partial x } u_{x}$$

In forma generale la incertezza combinata è:

$$i = \sqrt{ \sum_{i=1}^{p} \underbrace{ \left( \frac{ \partial f }{ \partial x_{i} }  \right)^{2} }_{ \text{peso} }\underbrace{ i^{2}(x_{i})  }_{ \substack{{\text{Incertezza}}\\{\text{ingressi}}} }}$$

Questa equazione vale solo se posso fare l'ipotesi che NON ci sia correlazione tra le variabili che considero come ingressi

Ci sarebbe un'altra parte che tiene a conto ma per noi in molti casi non importa

Diamo per scontato che siano piccole le correllazioni.

<!Calcoli esempio potenza>

## Incertezza Estesa

L'incertezza esteso è l'intervallo che contiene con una voluta certezza il valore vero, che è ottenuta moltiplicando la incertezza tipo per un fattore di copertura.

Aumentando l'intervallo riusciamo a coprire più area:
<!Diagramma estensione gaussiana>

Scopo dell'incertezza estesa è di creare un intervallo con valore vero incluso con una voluta certezza.

Nel caso della gaussiana e t-student usiamo gli opportuni quantili che sappiamo già.

## Incertezza combinata estesa

Prima si trova la incertezza combinata, poi sulla combinata si fa il fattore di copertura.

Diamo per scontato che siano stimati con <u>non</u> pochi gdl.

## Riepilogo

<!Diagramma riepilogo con 2 non 3>

La incertezza va espressa con 1 o 2 cifre significative.

## Metodo di Monte Carlo

Nelle misure serve per l'incertezza combinata nel caso in cui le ipotesi per l'applicazione della propagazione dell'incertezza non siano verificate.

È un metodo utile:
- non si sono sufficienti dati sperimentali del fenomeno o è troppo complesso per poter esser risolto con la teoria di propagazione dell'incertezza.

Generalmente troviamo la incertezza con la incertezza della variabili misurate direttamente, con il Metodo di Monte Carlo, cambiamo la variabili, calcoliamo la misure indiretta e poi troviamo la incertezza di tutte le variabili indirette che abbiamo calcolato.

Data y, con $Y = f(x_{1},x_{2},\dots,x_{i})$

Simuliamo N volte la misura, con valore $x_{k}$ a caso, calcoliamo Y e mappiamo. Dopo N misure di Y derivate da $x_{k}$ random, possiamo trovare la distribuzione di $Y$.

Passi:

- Definizione Y
- Definizione X
- Definizione modello
- Assegnare alle grandezze

Propagazione:
-  Definire numero di interazioni sufficienti
- L’algoritmo di Monte Carlo ad ogni iterazione seleziona, per ognuna delle
grandezze d’ingresso, un valore random tra quelli definiti dalla corrispettiva
distribuzione.
- Ad ogni iterazione si determina un valore per la grandezza di uscita Y
- Alla fine delle iterazioni quello che si ottiene è la distribuzione di
probabilità della grandezza Y

Risultati:

- Stima media di Y
- Stima deviazione standard di Y
- Stima del fattore di copertura.
