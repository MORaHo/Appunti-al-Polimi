---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 12 - 

I processi di formazione plastica hanno equazione generale per determinare la resistenza meccanica finale del pezzo che è:

$$Y_{f} = k\mathcal{E}^{n}\dot{\mathcal{E}}^{m}$$

A freddo, la velocità è trascurabile quindi la equazione è:
$$Y_{f} = k\mathcal{E}^{n}$$
<!Diagramma deformazione a freddo>
Dopo l'incrudimento $\sigma_{sn}$ non è più quello di prima ma quello dove abbiamo lasciato la deformazione.

Il materiale a caldo invece agisce come materiale perfettamente plastica e invece ora la deformazione è trascurabile, la resistenza finale sarà basata sulla temperatura e la velocità di deformazione quindi avremmo:

<!Diagramma grafici a caldo>

In generale ci interessa dimensionale il lavoro della pressa o maglio, per sapere la forza che dobbiamo esercitare ed il lavoro.

Il lavoro è l'area sottesa (ignorando il campo elastico). È più facile usare la media della resistenza meccanica, allora:

<!Diagramma calcolo energia con incrudimento>

Il lavoro che bisogna esercitare allora è:
$$L_{el} = \overline{Y}_{f} \cdot\mathcal{E}$$
A caldo come detto il comportamento è plastico quindi:

$$\sigma = C\cdot \dot{\mathcal{E}}^{m}$$
$$L_{el} = \sigma\mathcal{E}$$

## Attrito e Distorsione

La energia che calcoliamo è la energia di deformazione ideale, in realtà ci sono anche componenti di attrito e di distorsione reticolare a cui dobbiamo tenere a conto.

Nel caso ideale la deformazione causerebbe l'allungamento dei grani nel reticolo e basta. Invece con l'attrito e la distorsione abbiamo una deformazione nel reticolo che richiede energia per occorrere.

<!Diagramma distorsione>

Il lavoro ideale e di attrito sono calcolabili ma il lavoro di distorcimento non lo è.

Il lavoro totale è:
$$L_{tot} = L_{id}+L_{a}+L_{dist}$$

La efficienza del lavoro che mettiamo è:
$$\eta = \frac{L_{id}}{L_{tot}}$$

### Effetto di Attrito

<!Diagramma forza attrito pg.33>

La forza di attrito dipenda da:
- pressione di contatto
- velocità relativo
- statico o dinamico
- materiale
- rugosità
- lubrificante
- temperatura

Quelle che possiamo controllare più facilmente sono il lubrificante e la temperatura.

Se un pezzo è molto caldo non c'è più scorrimento relativo, ma invece c'è una adesione ed uno scorrimento. Un aumento in temperatura causa un aumento del coefficiente di attrito, se la forza contrastante supera l'attrito passa il limite di adesione e il pezzo si rompe.

Per questa ragione, per i lubrificanti si usano molto i lubrorefrigeranti, perché mantengono un coefficiente di attrito basso.

L'effetto dell'attrito:
- limita flusso nelle zone vicino a contatto
- ha effetto distorcente

L'attrito causa il barelling che è uno spanciamento laterale causato dalla presenza di attrito.

<!Diagramma pg.33 basso destra.>

## Processi di Deformazione Plastica Massiva

Una trasformazione primario è un processo di trasformazione in cui sono creati pezzi semi-lavorati, invece una trasformazione secondaria è un processo di trasformazione in i semi-lavorati sono resi pezzi finiti.

## Forgiatura

La forgiatura è un processo di deformazione dove il pezzo viene premuto tra due stampi. Questa deformazione più occorrere a qualsiasi temperatura.

La forgiatura è caratterizzata da grandi deformazioni con poca precisione.

Gli stampi aperti e chiusi sono creati in acciaio o altri materiali con alta resistenza. Un esempio di stampo è questo alla sinistra:

<!Diagramma stampo per biella pg.5>

Esistono 3 tipi di forgiatura:

#### Forgiatura Libera

<!Diagramma forgiatura libera>

Niente impedisce scorrimento laterale

#### Forgiatura Aperta

<!Diagramma con bava>
Il metallo riempie la forma ma è permessa la creazione della bava

#### Forgiatura Chiusa

<!Diagramma senza bava>
Questo non permette la creazione delle bava, il metallo non può fare altro che riempire la forma.

### Forgiatura Libera

La forgiatura libera è una forgiatura dove gli stampi o maglie non hanno una forma definita e invece sono lisci. Questo tipo di forgiatura non ha muri che costringono la forma, invece la forma è determinata da una serie di battiti che provano a creare la forma specifica richiesta.

<!Diagramma forgiatura libera>

La forgiatura libera è usata per creare pezzi a grandi dimensioni. I pezzi hanno ossidazione e si toglieranno per fragilità.

Questa forgiatura occorre a caldo tale che il metallo sia può malleabile. Si usurano sia i pezzi manuali usati che le superfici delle presse.

La forgiatura libera è molto utile per creare pezzi per cui le dimensioni e costi degli stampi sarebbe proibitivo, quindi generalmente per grandi pezzi.

Le fibre non sono basate sul raffreddamento ma sulla forma del metallo. Non ci sono problemi di porosità nella forgiatura perché il pezzo è metallico per tutto il processo quindi i gas possono solo penetrare in superfice.

Questi stampaggi producono da 10 a 100 pezzi all'ora.


### Calcolo del lavoro ideale

<!Diagramma pg.9>

Non cambia il volume quindi:
$$\mathcal{E} = \ln \frac{h_{o}}{h} = 2\ln \frac{D}{D_{o}}$$
Siamo a caldo quindi non c'è incrudimento ed abbiamo scorrimento garantito a $Y_{f}$

$$\begin{gather}
F= Y_{f}\cdot A = \frac{\pi Y_{f}D^{2}}{4} \\
\text{Pressione}\to p_{z} = \frac{F}{A} = Y_{f} \\
F = k_{p}Y_{f}A
\end{gather}$$
In realtà la forza che applichiamo dovrà esser più maggiore da caso in caso, aggiungiamo allora $k_{p}$
che sarà provveduto dai produttori per compensare.

<!Diagramma pg.10>
Il calcolo della pressione è risolvibile solo per geometrie come cilindri a dimensioni grandi e prismo.

Per il calcolo della pressione usiamo:

$$p_{z} = Y_{f}e^{ \frac{2\mu}{h}(R-r) }$$
$\mu$ è il coefficiente d'attrito e ha equazione:
$$\mu = \frac{h\ln\left( \frac{p_{z}}{Y_{f}} \right)}{2(R-r)}$$

Troviamo allora che $p_{z}$ è massimo per $r=0$ e minimo per $r=R$.

h diminuisce nel tempo, questo significa che $p_{z}\to \infty$, quindi per creare oggetti piccoli servono macchine più e più forti per generare queste pressioni. 

La distribuzione della resistenza e pressione è:
<!Diagramma collina delle pressioni>

Influenza dell'attrito:
<!Diagramma p_z vs r>

Dalla pressione possiamo trovare la forza:

$$F = \int\limits_{0}^{2\pi} \int\limits_{0}^{R} rp_{z} \, dr  \, d\theta = \frac{\pi Y_{f}}{2\mu^{2}}h\left[ h\left( e^{ 2\mu \frac{R_{o}\sqrt{ h_{0} }}{h\sqrt{ h }} }-1 \right) \right]-\frac{2\mu R_{o}\sqrt{ h_{0} }}{\sqrt{ h }} = k_{p}Y_{f}A $$
$$\implies k_{p} = \frac{\frac{\pi Y_{f}}{2\mu^{2}}h[h\dots]}{Y_{f}\pi R^{2}}$$

Dato che questa formula sono molto complesse, usiamo formula approssimative in diversi casi.
Per esempio nel caso di una billetta cilindrica in forma semplice usiamo:
$k_{p} = 1+\frac{0,4\mu D}{h}$

Per la geometria prismatica invece:
$$k_{p} = \frac{2}{\sqrt{ 3 }}\left( 1+\frac{\mu a}{h} \right)$$


Possiamo trovare quando vicino questo approssimazioni sono alla realtà per aiutarci a scegliere quale equazione usare:
<!Diagramma pg.16>


## Barrelling

Come detto nella ultima lezione durante una trasformazione ideale le fibre vengono stirate durante la deformazione:
<!Diagramma stirare fibre>

In realtà con attrito, le parti vicino alle facce della pressa si muovo meno e invece le parti lontane si muovono di più, questo creare un forma curva e il processo di creazione di questa forma lo chiamiamo barrelling.

<!Diagramma barrelling>

Le parti vicino alle facce non scorrono non solo per attrito ma anche per il cambio di temperatura dato il contatto con lo stampo, questo causa anche incrudimento nelle zone vicino alla faccia.

## Forgiatura stampo chiuso con bava

Se voglio aumentare quanto posso deformare la forma, aggiungo dei muri per permettere la creazione di una forma più precisa.

<!Diagramma stampo chiuso con bava>

Lo stampaggio a caldo (per lamiere c'è sia a caldo che a freddo, per questo facciamo la distinzione) questo stampaggio succede a passi successi, che passo per passo deformano lentamente la forma fino alla forma finale che stavamo provando ad ottenere.

### Forza di Stampaggio

Il calcolo della forza nello stampaggio (aperto o chiuso) è complesso quindi usiamo metodi approssimativi.

<!Diagramma forza e spostamento>

Si può mettere dei muri per la bava tale che il metallo non ha altra opzione oltre che riempire la forma, questo è detta camera bava ed essa è progettata.

## Forgiatura a stampo chiuso senza bava

La bava aiuta a permette lo scorrimento. Il fatto che abbiamo uno stampo preciso aumenta la precisione dimensionale anche senza bava, e in questo caso non abbiamo barrelling.

Il volume esser esattamente quello della cavità se non non si riempie o si rompe la macchina.

<!Diagramma stampo chiuso senza bava>



