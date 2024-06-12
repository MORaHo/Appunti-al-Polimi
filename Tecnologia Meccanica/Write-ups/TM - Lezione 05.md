---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 5 - 

## Ripasso di Raffreddamento di Metalli Puri

Un metallo puro ha una linea di raffreddamento come:

<!Diagramma linea di raffreddamento>

Questo raffreddamento alle pareti della forma crea una strutture disomogenea organizzata come:

<!Diagramma organizzazione a pareti di forma>

La forma di questa struttura è causata dal gradiente di calore presente ad ogni punto e la velocità di solidificazione ad ogni punto.

Guardando lo sviluppo nel tempo vediamo uno primo strato di grani estremamente fini, con orientamento casuale equiassiale.

<!Diagramma formazione grani fini>

Dopodiché si formano grani colonnari che seguono il gradiente del calore e riescono a crescere un'po'.

<!Diagramma formazione grani colonnari>

In fine le parti interne non hanno un gran gradiente di calore hanno molto tempo per raffreddarsi, questo significa che si formano grani grossolani anche loro disorganizzati equiassiali.

<!Diagramma formazione grani grossolani>

La struttura intera è disomogenea, non sono uniforme le proprietà quindi servono trattamenti termini per permettere che il pezzo abbi proprietà e microstruttura omogenea se tali sono richieste.

Ci sono due modi per aumentare la omogeneità:
1. Ridurre lo spessore in modo di creare una struttura omogenea
2. Aumentare la rugosità, aumenta lo scambio termico per aumento della superfice, però servirà asportazione per riportare al normale

## Principi di Raffreddamento di Leghe Metalliche

Le leghe metalliche, composte da due metalli hanno una temperature di inizio solidificazione e una linea di fine solidificazione separate, questa differenza cambia il modo in cui il metallo si solidifica e per ciò le strutture che forma.

<!Diagramma linea di raffreddamento lega>

Quando si arriva alla linea di liquidus, il metallo che ha $T_{fus}$ più alto, inizia a solidificare, questo significa che c'è un distacco tra la composizione dei grani che si stanno formando e la composizione della lega tutta insieme.

Nel caso delle leghe, questa separazione significa la formazione di dendriti. Le dendriti sono strutture aghiformi con rami ortogonali che vanno paralleli al flusso.

Le dendriti possono causare l'intrappolamento del liquido nella loro struttura, causando la creazione di un struttura ancora più disomogenea.

<!Diagramma dendrite con liquido>

La formazione delle dendriti avviene a posto delle formazione di grani colonnari, quindi anche loro si formano con il grano principale che è parallelo al flusso di calore.

La struttura finale è:
<!Diagramma struttura finale interna con dendriti>

La formazione delle dendriti è un difetto nel materiale causato dal raffreddamento troppo rapido del metallo (dendriti che raffreddamento istantaneamente formano grani fini, quindi il raffreddamento è rapido ma non istantaneo). 

Non vogliamo la dendrite perché:
- Creano microsegregazioni
- Anisotropia
- Porosità interdendritica

Si può controllare la dimensione delle dendriti velocitando la solidificazione. Possiamo velocizzarla in due modi:
- Cambiando materiale ad un materiale che conduce di più per aumentare il calore estratto
- Cambio lega, a lega e intervallo di solidificazione più veloce

Le leghe eutettiche hanno tempi di solidificazione piccoli o nulli, questa è la ragione per cui sono in grande uso.

## Dimensionamento di Sistema di Alimentazione

I sistemi di alimentazione sono sistemi come le materozze, che permettono il sistema a mantenere la forma voluta durante il raffreddamento attraverso lo spostamento del punto di ritiro.

Abbiamo già visto come dimensionare i sistemi di distribuzione, questo è il sistema di alimentazione.

Come il sistema di distribuzione, useremo modelli semi-empirici e analitici con condizioni molto stringenti per modellare il nostro sistema.

In pratica prima si fanno i calcoli e poi si verifica con software.

Le materozze sono le ultime cose che si solidificano perché sono l'ultimo posto dove arriva il metallo liquido, questo però ci va bene perché vogliamo spostare il punto dove l'ultimo raffreddamento occorre.

Nella materozza si creano cavità di ritiro (macrocavità) che è quello che vogliamo, così non succede nel grezzo. Il ritiro si riempie di aria, e il materiale che si è ritirato sta andando ad alimentare il grezzo per mantenere la forma che vogliamo.

Dimensionare il sistema di alimentazione significa stabilire dove, quanti e che dimensioni dare al sistema.

### Come Dimensionare

Per stabilire dove mettere i sistemi dobbiamo capire dove si solidificherebbe per ultimo il sistema. Dobbiamo quindi sapere il tempo alla solidificazione totale di ogni parte del pezzo, per questo usiamo le Legge di Chvorinov:

$$T_{TS} = C_{m}\cdot M^{n}$$

Se usiamo i centimetri allora dobbiamo anche usare i minuti, come unità.

In questa equazione $C_{m} \left[ \frac{min}{cm^{2}} \right]$ è la costante sperimentale della forma, questa costante dipende da:
- Materiale della forma (calore specifico, conducibilità termica). 
- Proprietà termiche del metallo colato (calore latente di fusione, calore specifico, conducibilità termica)
- Temperatura a cui viene effettuata la colata

n è l'esponente sperimentale adimensionale (di solito pari a 2)

Invece M è il modulo termico, che è la parte che dobbiamo calcolare e ci aiuterà a determinare dove mettere i nostri sistemi.

M è funzione delle geometria del pezzo, la sua equazione è:

$$M = \frac{\text{Volume}}{\text{Superfice che scambia calore}}$$

#### Esempi

Per una sfera M è:
$$M_{\text{sfera}} = \frac{\frac{4}{3}\pi R^{3}}{4\pi R^{2}} = \frac{1}{3}R$$
Per un cilindro M è:
$$M_{\text{cilindro}} = \frac{\pi R^{2}H}{2\pi R^{2}+2\pi RH} =\frac{1}{2\left[ \frac{1}{R}+\frac{1}{H} \right]}$$

Data una forma come:

<!Diagramma forma esempio>

E disegnando le line di raffreddamento:

<!Diagramma linee di raffreddamento>

Vediamo che la bassa si raffredderà senza, problema, ma tutte e due le sfera avranno punti di ritiro interni se non interveniamo. Questo può esser rimediato con una materozza ad ogni punto.

Aggiungendo queste materozze, moviamo il punto di raffreddamento in alto:

<!Diagramma aggiungendo materozze>

#### Ritiro

Durante il raffreddamento il metallo che compone il pezzo ha due ritiri grandi, questa è la ragione per cui mettiamo le materozze.

<!Diagramma ritiro rispetto a T>

I due ritiri sono di tipo diverso, uno è volumetrico invece l'altro è per la lunghezza della forma.

##### Ritiro Volumetrica Percentuale

In questo caso il ritiro occorre per il volume della forma, si trova:

$$r_{v} = \frac{V_{TC}-V_{TS}}{V_{TC}}$$
$V_{TC}\to$ volume a colata
$V_{TS}\to$ volume a solidificazione completa

<!Diagramma ritiro volumetrico percentuale>

##### Ritiro Lineare Percentuale

$$r_{L} = \frac{L_{TS}-L_{TA}}{L_{TS}}$$


<!Diagramma ritiro lineare percentuale>

##### Distinzione nella risoluzione
Dobbiamo distinguere i due tipi di ritiro perché li risolviamo in modi diversi:

- Il ritiro volumetrico lo alimentiamo la materozza, perché il sistema è ancora liquido quindi è possibile alimentare il volume perso con altro materiale, che è quello che facciamo con un materozza.

- Ritiro lineare occorre per raffreddamento non può esser rimediato nel momento per il pezzo è già solido, per questo bisogna sovradimensionare per compensare per il ritiro.

Il produttore avrà un metro che sarà più lungo del vero metro per compensare per questo ritiro.

Considerando il ritiro lineare bisogna riaumentare i nostri calcoli per le materozze tale per considerarlo.

Teniamo la apertura piccola così non dobbiamo usare un mezzo di togliere che aderisce alla forma voluta in gran parte, se è piccolo si può togliere e lavorare facilmente.

###### Final Points to Remember

Aggiungendo la materozza muoviamo il punto di ritiro dentro alla materozza perché è l'ultimo punto dove il liquido caldo arriva, quindi è l'ultimo punto a raffreddarsi.




