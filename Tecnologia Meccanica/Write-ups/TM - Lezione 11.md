---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 11 - Deformazione Plastica e Nozioni di Base di Formazione di Metallo

Questo è basato su $[$ chap. 10 e parte di chap. 3 $]$

Questa parte coprirà 3 macroblocchi:
- Richiami e principi
- Lavorazione plastiche massica (cambio di volume)
- Lavorazione delle lamiera $\to$ lamiera bidimensionale in area con spessore sottile.

## Lavorazione per deformazione plastica

In confronto alla fonderia, nella deformazione plastica si lavorano pezzi solidi, spesso per compressione.

Si possono usare stampi aperti/liberi o stampi chiusi, il materiale deve lo stesso riempire la forma.

Anche la deformazione plastica crea un grezzo, cambia volume e proprietà meccaniche, ma in confronto alla fonderia non riesco a trasferire la precisione dimensionale e superficiale, perciò è di solito accompagnato da un trattamento termico.

La deformazione è permanente, per deformare il materiale serve superare le resistenza di snervamento del materiale ed entrare nel campo delle deformazioni grandi, applicando una deformazione plastica permanente.

## Massiva vs. Lamiera

Un esempio delle differenza tra massica e lamiera è:
<!Diagramma pg.3>

La trasformazione massiva è quando un pezzo viene trasformato in forma (pezzo ad L), nella stampa libera o aperta si crea anche una bava causata dalla pressione elevata creata dai due semi-stampi.

La lamiera è un foglio bidimensionale che è stato inbutito (nome di un processo) per creare un contenitore tridimensionale.

La lamiera è plasticamente adagiata ad una forma, c'è materiale in più per permettere lo scorrimento della forma senza problemi. La applicazione di sforzi cambia anche la forma e disposizione dei grani diventando più stirati e fini.

## Deformazione Massica 

Ci sono 4 tipi principali di deformazione massica:
<!Diagramma pg.5>

#### Forgiatura

La forgiatura è il processo di aggiungere una forze comprimente ad un pezzo per far scorre il componente nella cavità a forma desiderata, con bave dimensionate opportunamente.

#### Estrusione

Del materiale riscaldato è spinto da un pistone in camera di estrusione con una matrice alla fine. Può esser anche una semplice riduzione della sezione mantenendo la stessa forma.

#### Trafilatura

Questo è il processo inverso dell'estrusione, il componente è tirato a valle della matrice. Questo processo è come sono creati i fili perché aumenta la precisione dimensionale del diametro.

## Lavorazione della lamiera

Ci sono 3 tipi di processi di lamiera:
<!Diagramma pg.6>

#### Piegatura

Impartisco con un punzone una piega su una lamiera, di cui scegliamo l'angolo

#### Inbutitura

Trasforma la lamiera da un pezzo 2D in una forma 3D.

#### Tranciatura

Separazione usando punzoni con bordi taglienti.

Taglio per deformazione.

## Tensione e Deformazione Reale nelle deformazioni a freddo

La prova di trazione è la base di tutto quello che facciamo. Nella prova di trazione se misuriamo lo sforzo in confronto alla deformazione troviamo due curve diverse se usiamo lo sforzo reale o no.

<!Diagramma prova di trazione>

La sforzo reale è: $$\sigma = \frac{F}{S}$$
Invece lo sforzo ingegneristico è:
$$s = \frac{F}{S_{o}}$$
La deformazione ingegneristica è:
$$e= \frac{L}{L_{o}-L}$$
Invece la deformazione reale è:
$$\mathcal{E} = \ln \frac{L}{L_{o}}$$

La relazione tra il reale e ingegneristico per la deformazione è $\mathcal{E} = \ln(1+e)$, invece per lo sforzo è: $\sigma = s(1+e)$

Nel campo plastico possiamo trovare la relazione tra lo sforzo e deformazione reale con l'equazione:
$$\sigma = k\mathcal{E}^{n}$$

Quando applichiamo un sforzo che ci causa una deformazione plastica quando vogliamo aumentare la deformazione lo sforzo di snervamento non è più quello del iniziale ma quello a cui abbiamo smesso la deformazione maggiore:

<!Diagramma cambio sforzo di snervamento>

Trasformando la forma trasformiamo anche le proprietà meccaniche. Possiamo modellare questo comportamento usando equazione empiriche, come l'equazione do Hollomon:

$$Y_{f} = k\mathcal{E}_{f}^{n}$$

### Comportamento Elastico e Plastico

Nel campo elastico c'è un aumento in volume della forma, invece nel campo plastico c'è una conservazione di volume perché nel campo plastico i piano possono scorrere invece nel campo elastico la deformazione reale è uguale a quella ingegneristica.

Per questi processi studieremo le deformazione plastiche quindi considereremo la conservazione del volume.

Le deformazioni plastiche, che di solito sono una successione di operazioni, sono ricordato dal materiale che le subisce. Nel campo elastico non importa invece nel campo plastico importano perché vogliamo sapere dove siamo e dov'è il nuovo $\sigma_{sn}$

<!Diagramma pg.15>

Bisogna sapere anche k e n per la nostra equazione. k è il coefficiente che tiene a conto la storia del nostro pezzo per calcolare $Y_{f}$. Questi due coefficiente ci verranno dati.

I trattamenti termici aiutano a ricreare la struttura reticolare, eliminando i difetti e il loro bloccaggio, creano nuovamente dislocazioni che permettono di nuovo lo scorrimento e perciò il cambio delle curva $\sigma-\mathcal{E}$.

Dopo una deformazione facciamo il trattamento termico per ricreare la geometria che possiamo deformare nuovamente senza problema, continuiamo fino ad avere la forma finale voluta.

### Sforzo di Flusso Medio 

Per facilità nei calcoli usiamo lo sforzo di flusso medio delle deformazione plastica. Trascuriamo il campo elastico dato che riusciamo a calcolarlo facilmente.

Questo calcolo è usato per le deformazione a freddo dove il materiale esibisce incrudimento durante la deformazione.

Il valore medio ha equazione:
$$\overline{Y}_{} = \frac{k\mathcal{E}_{fin}^{n}}{1+n} $$

## Tipi di Lavorazione

Fino ad ora non abbiamo considerato la temperatura a cui stiamo lavorando. (Anche se tutto fosse per la lavorazione a freddo.)

La temperatura e velocità di lavorazione influenzano il tipo di lavorazione.

I tipi di lavoro sono:
- lavorazione a freddo ($<0,3\:T_{f}$)
- lavorazioni a tiepido (sotto T di ricristallizzazione)
- lavorazioni/formature a caldo (superiore a T di ricristallizzazione e bassa velocità di deformazione) ($>0,6\:T_{f}$)

Tutto quello che abbiamo detto fino ad ora vale per processi a freddo, cioè processi dove il materiale esibisce incrudimento.
$$Y_{f} = k\mathcal{E}^{n}$$

## Lavorazione a caldo

A caldo si può prendere il materiale come se fosse perfettamente plastico, questo è un vantaggio.

### Effetto della T

L'aumento nella temperatura causa un cambio nella curva $\sigma-\mathcal{E}$
<!Diagramma effetto della temperatura sulla curva sigma-epsilon>

L'aumento nella temperatura di lavorazione significa:
- aumento in duttilità (deformazione massima a rottura)
- aumento in tenacità (area sottesa, energia specifica)
- calo nel carico di snervamento e durezza (costa meno per deformare)
- calo nel modulo elastico (diminuisce rigidità)

L'aumento nella temperatura causa uno spianamento nella curva di deformazione e un aumento nella area sottesa:

<!Diagramma cambio area>

Non c'è più incrudimento. Questo aumento in area significa che possiamo mettere più energia nel pezzo per cambiare la forma del pezzo.

### Velocità di Deformazione e Effetti di T

La velocità con cambiano le dimensione ha equazione:
$$v= \frac{dL}{dt}$$
La velocità di deformazione è presa come:
$$\frac{v}{L}= \frac{dL}{Ldt} = \frac{d\mathcal{E}}{dt}= \dot{\mathcal{E}}$$

Da sperimentazione abbiamo trovato che un materiale cambia comportamento anche in base alla velocità di deformazione.

Per tenere la velocità di deformazione costante, dobbiamo far crescere v per mantenere il lato della equazione costante.

L'effetto sulla resistenza del materiale in base alla velocità di deformazione cambia in base alla temperatura di lavorazione:

<!Diagramma velocita in base a temperatura>

Vediamo che con il cresce della velocità di deformazione aumenta anche la resistenza, e questo effetto aumenta di più all'aumento della temperatura.
Questo implica anche che a freddo la velocità di deformazione non ha effetto sulla resistenza meccanica.

Mettendo tutto insieme troviamo la forma generale delle legge di Hollomon:

$$Y_{f} = k\mathcal{E}^{n}\dot{\mathcal{E}}^{m}$$

A freddo m$\approx$ 0 $\to$ ritorniamo alla sola dipendenza dalla deformazione con incrudimento che abbiamo visto prima.

A caldo $n \approx 0$ $\to$ non c'è incrudimento quindi non ci importa la deformazione ma l'effetto della velocità ci importa quindi $\mathcal{E}$ se ne va.

Quindi, a freddo usiamo la equazione:
$$Y_{f} = k\mathcal{E}_{f}^{n}$$
Invece a caldo usiamo:
$$\sigma_{f} = C \dot{\mathcal{E}}^{m}\to C=K(T)$$

## Costi Energetici

Quello che ci importerà molto sarà l'energia o lavoro necessario per deformare.

### A freddo

<!Diagramma energia a freddo>

Se trascuriamo il contenuto elastico, l'area sottesa ci dice quanta energia serve per deformare il pezzo fino a $Y_{f}$.

Per facilitare i calcoli usiamo il valore medio che abbiamo trovato prima è quindi:
$$L = \overline{Y}_{}\cdot\mathcal{E} $$
Allora per calcolare l'energia per unità di volume o lavoro elementale di deformazione:

<!Diagramma lavoro elementale>

### Energia a Caldo

Per la lavorazione a caldo invece abbiamo:

$$\sigma=C\cdot \dot{\mathcal{E}}^{m}$$

Il lavoro elementale sarà:
$$L_{el} = \int\limits_{0}^{\mathcal{E}_{f}} \sigma \cdot d\mathcal{E} \, = \overline{\sigma}_{} \int\limits_{0}^{\mathcal{E}_{f}}  \, d\mathcal{E}  = \sigma \cdot\mathcal{E}  $$

Anche qui scontando il lavoro nel campo elastico.



