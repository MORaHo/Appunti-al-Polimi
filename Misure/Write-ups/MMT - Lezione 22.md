---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 22 - Misure di Pressione

La pressione è:
$$\text{Pressione} = \frac{\text{Forza}}{\text{Area}} [Pascal]\left[\frac{N}{m^{2}} \right]$$

È una grandezza di stato come la temperatura.

Esistono 3 categorie di misuratori:
- Vacuometri per il vuoto/pressione assoluta
- Manometri $\to$ pressioni alte
- Barometri $\to$ $P_{ATM}$

<!Diagramma pg.3>

Diagrammi di possibili trasduttori:
<!Diagrammi pg.4>

1. Il riferimento a vuoto
2. Pressione relativa a $P_{ATM}$ $\to$ utile
3. Pressione differenziale a P variazione $\to$ La pressione di riferimento non è $P_{ATM}$. Questo è usato per fluidi che non sono l'aria, sono utilizzati molto nei veicoli
4. Lap pressione di riferimento è fissa

La pressione atmosferica standard è: 101325 Pa
Per in generale cambia con l'altitudine (circa -12,5 Pa/m) e il meteo.

Ci sono molti unità per la conversione:
<!Diagrammi pg.6,7,8>

> [!note]- Torr e psi 
> I torr (che sono uguali ai mmHg) sono usati nella misure della pressione del sangue. Invece i psi di solito per i veicoli. Sono unità antiquate ma non c'è ragione valida per smettere di usarle quindi rimangono in uso
> 

I sistema anglosassone è comodo nel senso che possiamo sapere con l'unita di misura se la pressione è relativa o assoluta:
- psig $\to$ gauge $\to$ relativa
- psia $\to$ absolute $\to$ assoluta

## Manometri

Ci sono diversi tipi di manometri che usano due tipi di misura, la colonna di fluido o la deformazione.

### Colonna di Fluido

La colonna di fluido è il metodo antico ma lo stesso preciso di misurare la pressione:

<!Diagramma pg.11>

La pressione si misura misurando quanto cambia la altezza del fluido.

$$\begin{gather}
p_{1}=p_{2}+\rho gh \\
p_{1}-p_{2}=\rho gh=\gamma_{m}h \\
\end{gather}$$
Se $p_{2}=P_{ATM}$, allora $\gamma_{m}h$ è la pressione relativa.

Se $\gamma_{m}$ diminuisce, cioè se la densità diminuisce (perché $\gamma_{m} = \rho \cdot g$) allora la sensibilità aumenta.

#### Manometro a tubo inclinato

<!Diagramma pg.12>

Dato che abbiamo una vasca grande, la altezza del liquido a sinistra non cambia molto quindi cambia solo alla destra. Per ciò per aumentare la sensibilità della misura, più diminuisce $\alpha$ più aumenta la sensibilità.
$$p_{1}=p_{2}+\gamma_{m}(l\cdot \sin\alpha)$$

#### Liquidi per Manometrici

- Mercurio
- Acqua
- Olio
- Toluolo
- Miscele Alcool e Benzina

Questi sono usati molto per bassi $\Delta P$.

### Manometri a deformazione

Questi manometri misurano $\Delta P$ misurando la deformazione di un elemento dato questo $\Delta P$.

Ci sono tre tipi di manometri a deformazione:
- Tubo di Bourbon
- manometri a soffietto $\to$ Dato $\Delta P$ si allungano e lo rendiamo in un angolo
- A membrana $\to$ si deflette e si muova la lancetta usata per la misura.

### Tubo di Bourbon

<!Diagramma pg.20>

Con l'aumento della pressione il pezzo diventa più tondeggiante, l'avvolgimento per la deformazione. Possiamo misurare lo spostamento dato questo tondeggiamento per misurare la pressione.

Ci sono diversi modi per renderlo più sensibile, in generale si aggiungono più avvolgimenti visto che il tondeggiamento occorrerà per ogni avvolgimento, amplificando lo spostamento.

<!Diagramma pg.22>

Un sistema simile è la trave:
<!Diagramma sistema trave>

Quello che possiamo cambiare sono:
- E $\to$ materiale
- Forma $\to$ più schiacciato $\implies$ più sensibile
- Angolo di avvolgimento (giri)
- Spessore delle pareti

##### Valori Tipici

- Fondo scala Max: $>1000atm$
- Incertezza 0.1-0.5 % per manometri campione 0.5-2 % per manometri industriali

### Soffietti e Membrana

<!Diagramma pg.25>

Il soffietto a sinistra è relativo, le membrane invece possono esser assolute o relative dipendendo se c'è o no del fluido all'altro lato.

Ci sono 2 tipi di membrane:

Lisce: per deformazioni piccole, sono abbastanza lineari. Non si possono usare misuratori di spostamento perché hanno effetto sulla misura.
Corrugate: diametro maggiore, linearità maggiore.  Utilizzate sopratutto in applicazioni statiche senza dinamica elevata.

<!Diagramma pg.26>

### Problemi con le membrane

#### Isteresi
<!Diagramma pg.30>

Dopo un'pò le deformazioni rimangono nel pezzo. Dopo diversi cicli, non è ritorna allo stesso punto rispetto l'inizio dei cicli.

#### Non-linearità

<!Diagramma pg.31>

Si possono aggiungere appoggi sagomati ma questo rende la freccia non-lineare con la pressione, aumenta la sensibilità per piccoli $\Delta P$, ma in generale la sensibilità diminuisce con elevato fondo scala.

#### Resistenza Meccanica

Se si rompe può occorrere un'esplosione, per questo il fattore di sicurezza sarà molto alto. Per sicurezza possiamo mettere una lasta forata con dei tappi sulla membrana così è il tappo che deve reggere invece al posto della membrana.

<!Diagramma pg.32>

#### Valori Tipici
- Fondo Scala Max: > 1000 atm
- INCERTEZZA: 0.1-0.5 % per manometri campione, 0.5-2 % per manometri industriali


### Estensimetri su membrane

Questo è molto più comune rispetto all'uso dei trasduttori di spostamento.

Gli estensimetri sono disposti come:
<!Diagramma pg.36>

Questo a disposizione tiene a conto delle forze radiali e circonferenziali.

<!Diagramma pg.37>

La compressione a bordo è perché si inflette in alto comprimendo sopra.


<!Diagramma deflessione e diagramma degli sforzi radiali e circonferenziali>

La equazione per questo sistema sarà:
$$\frac{\Delta V}{V} = \frac{820(P-P_{o})R^{2}(1-v)^{2}}{Et^{2}}$$

#### Valori Tipici

- Campo di misure: 5-300 bar
- Sensibilità tipica: 2-3 mV/V 

### Membrane e sensore capacitativo

Per questo tipo di misure serve una membrana in materiale conduttore. Una piastra e si aggiunge un'altra piastra creando un circuito, con la deformazione della membrana cambia la capacità tra i due elementi.

<!Diagramma membrane tra capacitativo>

Al cambio di $C_{1}$ e $C_{2}$ abbiamo uno sbilancio del ponte e perciò una uscita in tensione.

### Sensore Ottico

<!Diagramma pg.42>

La deformazione cambia la posizione di un blocco per la luce, cambiando quanta luce arriva ad un diodo si può misurare la deformazione è per ciò la pressione.


### Piezoelettrici e Piezoresistivi

#### Piezoelettrico

Mettiamo la pressione su una area nota di quarzo, come sono fatti i misuratori di forza.

<!Diagramma pg.44>

Questi sono molto pronti, usati nelle macchine e motori perché hanno dinamica molto alta.

La inerzia può confondersi per pressione quindi si può aggiungere un accelerometro per compensare. Quindi aggiungiamo un'altro quarzo che compensa per la vibrazione e per ciò misuriamo solo la pressione.

<!Diagramma pg.48>

##### Valori Tipici

- frequenza propria: fino a 100 kHz
- sensibilità: 10-100 pC/bar
- portata: fino a ca 1000 bar
- linearità: < 1%
- sensibilità all’accelerazione: < 0.005 bar/g

#### Piezoresistivo

<!Diagramma pg.51>

La pressione agisce sulla superfice che genera una forza per deformare il quarzo e cambia resistenza.

Non hanno problemi di misurare a forza costante ma hanno effetto della temperatura, se non è compensato la sensibilità cambia.

<!Diagramma pg.53>

## Misure delle pressioni dinamiche

Il sistema da considerare è composto da due parti:
- sistema di collegamento
- strumento di misura

<!Diagramma pg.57>


Il gas entrerà e uscirà, comprimendosi e dilatandosi nel processo dipendendo dalla pressione e tempo. Questo comportamento sarà di secondo ordine, ci per ciò risonanza e un filtro.

Lo smorzamento è dall'attrito con il tubo, quindi le proprietà del tubo avranno effetto sul comportamento.

Una stima della frequenza propria del sistema a fluido gassoso è:
$$f = \frac{C}{2\pi}\sqrt{ \frac{a}{V\left( L+\frac{1}{2}\sqrt{ \pi a } \right)} }$$

Più è grande il volume dello strumento più abbassa la frequenza, idem per la lunghezza del tubo. Vogliamo per ciò V e L più piccole.

Nel caso dei liquidi invece la frequenza propria sarà:
$$f = \frac{d}{8A}\sqrt{ \frac{3k}{\pi\rho L} }$$

Anche qui vogliamo A e L più piccoli e più il più grande possibile.

k è la rigidità del tubo, più è rigido più è alta la frequenza.

### Taratura

#### A confronto:

Uno strumento da tarare e uno già tarato messi sullo stesso serbatoio (di solito di olio). Con un pistone aumentiamo la pressione, e poi tariamo usando l'uscita di quello da tarare a quello di riferimento già tarato.

<!Diagramma pg.64>

Tre cicli completi di taratura permettono di ricavare:
- l’incertezza (in percentuale del fondo scala)
- la ripetibilità
- la linearità
- l’isteresi

#### Taratura a pesi

Non mettiamo trasduttori di riferimento, invece abbiamo un pistone su cui poniamo una massa nota, usiamo un'altro pistone per genera una pressione, possiamo poi misurare la pressione con il cambio della altezza della massa e usiamo questo in corrispondenza con la uscita del trasduttore per tararlo.

1. Stantuffo a fine corsa
2. Montaggio manometro da tarare:
3. p interna = pambiente
4. Carico con peso campione
5. Azione sul volantino fino al sollevamento del carico
6. Rotazione del disco (attrito dinamico)
7. Lettura del manometro di prova
8. Nuovo carico (ritorna al step 4)

## Misura del campo di misura

Per questo servono molti punti di misure per definirlo.

Principi:
- un solo trasduttore + “commutatore meccanico” che consente la misura di un canale alla volta
<!Diagramma pg.73>

- un trasduttore per ciascun canale + un multiplexer per il convertitore analogico-digitale
<!Diagramma pg.74>

Ci sono due tipi di scannler di pressione:
- multiplexer + voltmetro, compone tanti traduttori individuali.
- Calibrazione automatica, ci sono tanti trasduttori che misurano pressioni diverse allo stesso momento. Hanno sistema di azzeramento meccanico per dare una pressione nota che diamo ad un tubo, così abbiamo uno zero relativo

<!Diagramma pg.75 e 76>
