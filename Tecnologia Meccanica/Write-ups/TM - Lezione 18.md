---
creation_date: 2024-02-11 14:02
tags:
  - TM
---
# Lezione 18 - Lavorazioni di Lamiera

I processi di lavorazione della lamiera è un insieme di processi che lavorano una lamiera, il prodotto della laminazione. I processi possono esser discreti e continui.

Tantissimi pezzi metallici sono ottenuti con questi processi. I processi sono in lotti elevati per spiegare i prezzi.

I semi-lavorati alla base dei processi sono noti come lamiere se sono rettangolari e a spessore meno di 3mm, e piatti se sono lastre rettangolari a spessore superiore a 3mm. In più possono esser noti come nastro o coil se sono rettangolari con lunghezza estesa rispetto alla larghezza.

Le lavorazione della lamiera generalmente sono a freddo, con la microstruttura iniziale può esser diversa se la laminazione è stata fatta a caldo o freddo.

<!Diagramma processi di laminazione>

### Materiali

Tutti i metalli e le loro leghe possono esser lavorati più o meno facilmente con energia e lubrificante.

I metalli sono prodotti a freddo o caldo, generalmente seguiamo questa determinazione:

<!Tabella pg.4>

> [!note]- 
> Leghe 7xxx di alluminio sono usate nell'aerospazio, invece quelle di nichel sono usate estensivamente negli aerei.

## Esempi di Pezzi

#### Esempi Tranciatura

Gl'ingranaggi di orologi sono prodotti usando la tranciatura fine.
<!Diagramma pg.5>

#### Esempi di Tranciatura e piegati

Dal colore si può determinare la coperatura (coating o vernice), il materiale o se sono zincati (molto comune nella lamiera).
<!Diagramma pg.6>

#### Esempi di Prodotti Casalinghi

Dopo la lavorazione della lamiera, c'è l'assemblaggio e poi lucidatura tutto dopo che ogni pezzo sia stato deformato.
<!Diagramma pg.7>

##### Impianti e arredi da cucina in acciai inox

<!Diagramma pg.8>

#### Esterni di Elettrodomestici

<!Diagramma pg.9>

Di solito questi pezzi sono verniciati per aspetto e vengono nervate leggermente per aggiungere resistenza rispetto alle lastra piatte.

#### Carrozzerie barche, moto e auto

Questi sono prodotti in pezzi singoli o assemblati.

Per l'asssemblaggio, pannelli della forma giusta sono tagliati, saldati e poi imbutiti, piegati e tranciati fino alla forma finale. Come visto nella slide 13.

## Principali Lavorazione di Lamiera

- Taglio (Tranciatura, Punzonatura, Cesioatura)
- Piegatura
- Curvatura
- Imbutitura / Stampaggio

Tutti questi sono generalmente a freddo. Possono esser effettuati trattamenti termici ma non sono processi che distorciono quindi di solito non sono fatti. Di solito i processi sono processi di allungamento a spessore costante e servono progettare degli stampi.

## Tranciatura

La tranciatura è una operazione di taglio che va oltre $R_{m}$. 
C'è una parte fissa, la matrice e una parte mobile, il punzone.

Il punzone è il bordo della matrice sono affilati. Nella tranciatura il punzone a le dimensioni della forma volute e la matrice ha dimensioni un'pò più grandi per permettere del gioco tra il punzone e la matrice.

<!Diagramma tranciatura>

Quando scende il punzone si crea uno sforzo di trazione, questo sforzo supera la resistenza plastica del pezzo e inizia a formarsi una cricca vicino al punzone e la matrice. Quando questa due cricche sono crescute e si incontrano il pezzo si rompe.

Il bordo può esser un indicatore chiaro della tranciatura:

<!Diagramma sezione del bordo della tranciatura>

Nella prima parte c'è un arrotondamento dato dal tiro in giù del materiale, poi c'è un brunitura che lascia il profilo liscio e poi la zona di frattura che è la linea di formazione delle cricche.

Il profilo si vede a tutti e due i lati della frattura.

### Tipi di Tranciatura

 Ci sono 3 tipi di tranciatura

<!Diagramma tipi di tranciatura>

- Cesoiatura $\to$  Il punzone è inclinato $\to$ approccio più lento e a forza minori
- Tranciatura $\to$ Il pezzo cade e quello che rimane sulla matrice è lo sfrido
- Punzonatura $\to$ Il pezzo è quello che rimane sulla matrice e lo sfrido è tolto e cade. Usato tipicamente per creare fori.


### Analisi Analitica del Taglio/Tranciatura

Il gioco che abbiamo tra il punzone e la matrice è:
$$g = A_{g}t \to A_{g}\in[0,045; 0,075]$$

Per la tranciatura abbiamo:
$D_{b}=D \to \text{Punzone}$ e $D_{h} = D-2g \to \text{Matrice}$

Invece per la punzonatura prendiamo:
$D_{h}=D$ e $D_{b} = D+2g$

La forza usata sarà:
$$F_{max} = R_{t}tl \to R_{t} = (0,7-0,8)R_{_{m}}$$

La curva della forza nella corsa è:
<!Diagramma forza nella tranciatura>

Come sempre prendiamo la forza media, e in questo caso sarà:
$$F_{med}=\lambda F_{max}$$

#### Perché inclinare il punzone?

Inclinando la faccia del punzone si riduce la forza massima richiesta, anche se la superfice da coprire aumenta e si aumenta la corsa.

Data la geometria la forza massima cambia:
$$E = \lambda F_{max}t = \lambda F(max)(t+H)$$
$$\implies F_{max}' = \frac{F_{max}t}{t+H}$$

Il profilo della forza cambia con l'inclinazione:

<!Diagrammi pg.28>

I punzoni spesso sono inclinati.

### Macchine Utensili

La macchine utensili possono esser semplici come la cesoia o più complesse. Quelle complesse possono esser poco flessibili in termini della forma del punzone ma possono fare operazioni contemporanee, invece la macchine CNC sono flessibili e possono fare operazioni contemporanee.

<!Diagramma pg.30>

Per risparmiare soldi come visto nella parte sopra si può fare ripassare il pezzo per tagliarlo in direzione diversa. Posizionare la forma in modo tale per massimizzare l'uso del materiale è un parte essenziale della tranciatura.

Con n punzoni e matrici posso fare n operazioni contemporanee su a passi diversa nella stessa macchine, come visto nella parte sotto.

#### CNC

<!Diagramma pg.31>

Un macchina con n punzoni di diversa forme a cui corrisponde una matrice. Questa macchina può muoversi su tutta la lamiera e tagliare velocemente. È una macchina usata per molti pezzi comuni.

Contorni più complessi non richiedono una punzone speciale invece con questa macchina si possono fare tantissime piccole incisioni per creare la forma finale voluta.

### Tranciatura Fine

<!Diagramma pg.38 e 39>

La tranciatura è applicata su spessori fini ed è molto più precisa in qualità di bordo e precisione superficiale.

Con il primo punzone si ha un contro-punzone che contrasta il punzone, applicando una forza minore per ridurre la deformazione del metallo. Si ha un premi lamiera, che preme la lamiera contro la matrice, e poi a volte si aggiungono cunei di fissaggio.

Facciamo tutto questo per contenere la fase di strappo il più possibile aumentando la qualità della operazione.

#### Tranciatura Convenzionale vs. Fine

<!Diagramma pg.41 e 42 >

Il bordo è molto più fine, ma la tranciatura fine è più lenta, complessa e costosa, per ciò bisogna giustificare il costo, come nel caso dell'orologio, o altre operazioni dove la precisione importa.


