---
creation_date: 2023-11-25 21:05
tags:
  - cosmac
share: true
---
# Lezione 17 - Effetto dell'Intaglio


In molti casi dove ci sono buchi o cambi di forma non è possibile utilizzare i metodi di de Saint-Venant.

<!Diagramma sforzi su intaglio iniziale>

L'intaglio circonferenziale cambia gli sforzi, si che $\sigma_{max}$ è più grande dello sforzo nominale.

Analizzando la curva nuova degli intagli vediamo che;
$$\sigma_{max}=k_{t}\sigma_{nom}$$
<!Diagramma sforzi con max>

$\sigma_{nom}$ è lo sforzo che viene calcolato con le equazioni di sforzo normali, troviamo il valore massimo con il coefficiente perché non c'è equazione che simula questo valore

### Linee di Sforzi

<!Diagramma sforzi su provino>

Guardando il provino vediamo che il lo sforzo aumenta con la diminuzione delle sezione. L'aumento degli sforzi alla frontiera occorre durante la transizione tra queste due sezioni stabili, e questo è l'intaglio.

Questo aumento degli sforzi occorre perché gli sforzi sono compressi in una sezione minore durante le transizione la densità di queste linee di sforzo è maggiore ai lati.

<!Diagramma compressione delle linee di sforzo>

Più brusco l'intaglio più aumentano le forze massime rispetto agli sforzi nominali.

### Metodi per Misurare $k_{T}$:

- sperimentalmente $\to$  sensimetro
- analitico $\to$  non lo useremo
- metodi numerici $\to$ Finite Element Method $\to$ quello che usato più comunemente d'oggi giorno.

$k_{t,assiale}>k_{t,flettente}>k_{t,flessionale}$

$k_{t}$ dipende dalla forma del materiale se consideriamo un andamento lineare elastico.

<!Diagramma materiali diversi>

Gli sforzi sui due pezzi sono uguali, se lo sforzo massimo è sotto allo sforzo di limite $\implies$ $k_{t}$ è uguale.

Anche se gli sforzi che causano le deformazioni sono uguali, dati diversi coefficienti di Young si ha che le deformazioni sono diverse.

$$\mathcal{E}_{nom}=\frac{\sigma_{nom}}{E}\text{ e }\mathcal{E}_{max} = \frac{\sigma_{max}}{E}$$

## Intaglio - Buco

Dato un pezzo con un buco nel mezzo:

<!Diagramma pezzo con buco intaglio>

Per questo pezzo si ha che lo sforzo nominale è:

$$\sigma_{nom}=\frac{P}{(h-d)\cdot b}$$
Intorno al buco si ha $\sigma_{max}$:
$$\sigma_{max} = k_{t}\sigma_{nom}$$

## Passi di Plasticizzazione - Materiale Duttile con Foro

### Aumento degli sforzi

Prendendo lo stesso diagramma del pezzo con il foro:
<!Diagramma pezzo con foro, curva e valore>
Diciamo che $k_{t}$ = 3, e la forza applicata è di 100000N, questo significa che lo sforzo nominale è:
$$\sigma_{nom} = \frac{100000}{100\cdot10} = 100 MPa$$
E lo sforzo massimo è:
$$\sigma_{max} = 300 MPa$$

A questo punto non c'è plasticizzazione perché $\sigma_{max}\leq\sigma_{sn}$
### Prima Plasticizzazione

Aumentando la forza applicata a 150000N, la sforzo nominale è: 
$$\sigma_{nom} = 150MPa$$
E lo sforzo massimo è:
$$\sigma_{max} = 300 MPa$$
Dato che il nostro sforzo limite è 300 MPa lo sforzo massimo deve aver valore uguale a quello, questo però significa che il nostro $k_{t}$ non è più uguale a 3 ma invece 2.
$$\frac{\sigma_{max}}{\sigma_{nom}}=2$$
Dato questo notiamo che nella struttura si è sviluppata una zona plasticizzata:
<!Diagramma zona plasticizzata>

Solo una parte delle sezione è plasticizzata perché $\sigma_{nom}\leq \sigma_{sn}$, questo significa che le parti dove lo sforzo è maggiore dello sforzo limite, inizia a plasticizzare e deformare.

Alla destra vediamo che gli sforzi iniziano a fermarsi, invece le deformazioni continuano a creare. Questo è perché noi studiamo materiali perfettamente plastici dove lo sforzo è uguale ma la deformazione aumenta:

<!Diagramma sforzo deformazione materiale perfettamente plastico>

### Plasticizzazione Totale

Aumentando di nuovo lo sforzo a 300000N, tutta la sezione diventa plasticizzata, questa è la condizione di collasso per i materiali perfettamente plastici, ma non per i materiali plastici normali.

<!Diagramma sezione completamente plasticizzata>

Per trovare la forza che causa la plasticizzazione totale usiamo la formula:
$$P_{PT}=\sigma_{sn}(h-d)\cdot b$$

## Fattore d'intaglio($k_{s}$) per Materiali Duttili

Guardando su pezzi in materiale duttile con la stessa superfice resistiva, uno con un buco e una senza.

<!Diagramma confronto duttile>

La forza richiesta per il cedimento totale con l'intaglio è:
$$P'_{lim}= \sigma_{sn}(h-d)\cdot b$$
Invece la forza richiesta per il cedimento totale senza intaglio è:
$$P_{lim}=\sigma_{sn}(h-d)\cdot b$$
Non c'è differenza perché i materiali duttili si plasticizzano e non si rompono appena l'elemento infinitesimale arriva allo sforzo limite. Questo significa che possiamo aumentare la forza fino a che $\sigma_{nom} = \sigma_{max}$, e per questa ragione sono uguali.

Il fattore l'intaglio $k_{s}$ per i materiali duttili è:
$$k_{s} = \frac{P_{lim}}{P'_{lim}}= 1$$
La ragione sopra è perché è uguale ad 1. Il valore se stesso ci dice quanto dobbiamo diminuire la forza a cui un pezzo viene sottoposto per arrivare al cedimento se c'è in presenza di una intaglio. Per i materiali duttili perfetti $k_{s}=1$

## Fattore d'intaglio($k_{s}$) per Materiali Fragili

<!Diagramma interno fragili e linea elastica>

Nei materiali fragili, in confronto ai materiali duttili, il materiali non si plasticizza quando lo sforzo è maggiore dello sforzo limite, invece si rompe.
Questa rottura riduce la sezione, aumentando lo sforzo su altri elementi vicino causando una rottura anche li e si continua fino ad un cedimento totale. Questo significa che per i materiali fragili, se c'è un intaglio appena un elementi infinitesimale arriva allo sforzo limite tutto il pezzo si rompe. 

Facendo il confronto tra due pezzi fragili con e senza intaglio:
<!Diagramma fragile con e senza intaglio>

La forza che porta l'elemento con l'intaglio al cedimento è:
$$P'_{lim}=\frac{\sigma_{m}(h-d)\cdot b}{k_{T}}$$
La forza che porta l'elemento senza intaglio al cedimento invece è:
$$P_{lim}=\sigma_{m}(h-d)\cdot b$$

C'é una differenza perché con l'intaglio un elemento infinitesimale vicino all'intaglio può avere sforzi molto più elevati, e basta solo un elemento infinitesimale che arrivi allo sforzo limite tale che il sistema ceda totalmente.

Il coefficiente d'intaglio è:
$$k_{s}=\frac{P_{lim}}{P'_{lim}} = k_{T}$$


Quali approcci dobbiamo usare con materiali diversi: 
<!Diagramma albero approcci>

