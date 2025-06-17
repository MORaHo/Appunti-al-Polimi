---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 2 - Incertezza

Ci sono molte norme che affrontano la incertezza. Descriviamo la incertezza come un numero associato alla misura che descrive la dispersione dei valore che possono ragionevolmente esser attribuiti al misurando.

Una misura (risultato) è composto da 3 parti:
- Numero
	- Attenzione alle cifre significative, la incertezza inizia al primo numero dove che siamo sicuri
	- e.g. 27,3 $\to$  $\pm$ 0,1
	- useremo la definizione in formato scientifico per specificare la cifre significative
- Incertezza
- Unità di misura

## Incertezza

L'incertezza è un numero associato alla misura che descrive la dispersione dei valori che possono ragionevolmente esser attribuiti al misurando.

<!Diagramma incertezza con area>

La incertezza è importante nel capire quanto dobbiamo esser sicuri

Incertezza è un nuovo termine e si usava errore invece, ma la definizione era brutta quindi abbiamo cambiato.

### Componenti

L'errore e per ciò la competenza hanno due componenti

Il componente casuale è il componente di varianza causata a caso non per errori intrinsechi.

Il componente sistematico è il valore continuo di variazione causato dalla macchina, questo di solito è preso per scontato che verrà cancellato dai calcoli dal creatore delle macchine.

La incertezza di solito è rappresentata dal componente casuale.

Dati:

- solo le definizioni (costanti universali) hanno incertezza nulla
- l'incertezza non può esser ridotta a piacimento, esitono dei limiti, e esiste una incertezza intrinseca.
- Spesso le prestazioni degli strumenti e dei campioni sono esuberanti della neccessità

<!Diagramma sistematico vs. casuale diagrammi>

## Fonti di Incertezza

- non costanza dello stato del sistema tra misurazioni
- incompleta definizione del sistema i.e. non stiamo considerando tutto
- la presenza di effetti strumentali
## Compatibilità

Quando due misure hanno tolleranze che creano un intervallo di interseco, allora queste due misure si dicono compatibili.

<!Diagrammi>

La compatibilità viene determinata alle stesse condizioni, si può compensare per differenze in misure se sappiamo i coefficienti di cambio.

## Valutazione di Incertezza

Esistono due categorie di valutazione dell'incertezza:

- Categoria A - Ogni metodo che usa la analisi statistiche per trovare un valore di incertezza
- Categoria B - Ogni metodo che usa mezzi diversi dall'analisi statisica per trovare la incertezza.

#### Incertezza combinata
La incertezza combinata è la incertezza di misure indirette, il calcolo di questa misura deve tenere a conto tutte le incertezza delle misure dirette prese per trovare la incertezza della misura indiretta

Ne parleremo di più dopo
### Categoria A
Come detto, la categoria A è il metodo di calcolo della incertezza che usa l'analisi statistica, questo è il metodo che abbiamo considerato fin'ora.

Questo metodo occupa ripetute misura molte volte e trovare la deviazione standard. Per usare questo metodo servono almeno 30 misure, per avere una buona idea dell'incertezza e della distribuzione.

La deviazione standard è la stima dell'incertezza, se non abbiamo 30 misure o si cambia la distribuzione ad una t-student o si continua con la deviazione standard e si continua con un coefficiente di sicurezza più elevato.

Troviamo la deviazione standard (alla seconda) della popolazione con la equazione:
$$s_{p}^{2} = \frac{1}{n-1}\sum^{n}_{i=1}(x-\overline{x}_{} )^{2}$$
Con $\overline{x}_{}$ che è la media della popolazione.

Suddividendo la popolazione in gruppi più piccoli e trovando le medie, possiamo trovare la media delle medie, questa è uguale alla media della popolazione intera, ma troviamo che la media della popolazione può avere una incertezza se stessa, e questa incertezza è correlata alla incertezza della popolazione intera.

$$s_{m}^{2} = s^{2}(\overline{x}_{} ) = \frac{s^{2}_{p}}{n}\implies s_{m} = \frac{s_{p}}{\sqrt{ n }}$$

Questo implica che con più valori la curva della distribuzione della media diventa più e più alta e stretta.

#### Procedura

- Stimiamo $s_{p}$ $\to$ deviazione standard misurata $\implies$ incertezza
- Una misura, l'incertezza è $s_{p}$
- Se faccio k misure
- X è la media di queste misure
- L'incertezza di X è $u_{x} = \frac{s_{p}}{\sqrt{ n }}$

Se n è elevato (>30) usiamo al gaussiana, per calcolare la probabilità con cui l'intervallo $X+u_{x}$ contiene il valore vero del misurando. Altrimenti usiamo t-student. Visto che t-studente è una distribuzione gaussiana ma più bassa e espansiva, usiamo il valore di deviazione standard come incertezza ma questo copre meno della distribuzione, quindi come detto prima conviene usare un coefficiente di sicurezza più elevato per compensare di questa incertezza meno affidabile.
### Categoria B

Tutti gli altri metodi che non usano l'analisi statistica per trovare la incertezza viene messo nella categoria B. Questi metodi devono avere origine scientifico, ma non possono esser statistici

#### Tipi di Metodi:

- Dati di misurazione precedenti
	- Cioè letti da documentazione
- Esperienza o conoscenza generale del comportamento e proprietà di materiali
- Specifiche tecniche del costruttore
- Dati forniti in certificati di tarature ed altri
- Incertezza assegnata a valori di riferimento presi da manuali.

Le prendiamo come se fossero stati fate a $n=\infty$ (gaussiana)


Se prendiamo misure da strumenti che arrotondano i valori, allora ci verrà una distribuzione uniforme, perché esser $\pm$ la tolleranza e non lo sappiamo, per l'arrotondamento ce lo gira ad un valore comodo.

<!Diagramma distribuzione uniforme>

In questo caso la incertezza la prendiamo come:
$$\sigma = \frac{a}{\sqrt{ 3 }}$$
Dove a è la ampiezza della distribuzione (metta della larghezza).
