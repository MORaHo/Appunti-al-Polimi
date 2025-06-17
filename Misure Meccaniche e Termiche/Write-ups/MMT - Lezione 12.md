---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 12 - Caratterstiche Dinamiche degli Strumenti di Misura

La risposta ideale di un sistema dinamico è:
<!Diagramma rispsta ideale>

Il trasduttore ideale invece cambia sia la ampiezza che la fase nella trascrizione:
<!Diagramma trasduttore ideale>

Può avere ampiezza diversa (va bene) e può avere una fase diverse (dipende)

Come negl'auricolari Active Noise Cancellation, il suono viene registrato e generano un segnale uguale e opposto tale che si cancelli

<!Diagramma ANC>

In realtà ci sarà uno sfasamento minuscolo dato il tempo che vuole a processare il suono ma si può minimizzare tale che non si senta.

In realtà lo strumento fa il meglio che può per approssimare il segnale, in generale però il segnale viene amplificato e sfasato.

## Funzione di Trasferimento

La funzione di trasferimento ha equazione:
$$\text{TF} = \frac{\text{Spettro Out}}{\text{Spettro In}}$$

<!Diagramma pg.7>

Prendiamo degli spettri di amplitudine e fase di un segnale rispetto alla frequenza, analizzando anche il segnale in uscita:

<!Diagramma segnali cambiati pg.3 di appunti a mano>

Facendo il rapporto di cambio tra gli spettri a tutte le frequenze troviamo lo spettro e legge di funzionamento delle funzione di trasferimento:

<!Diagramma legge di funzionamento>

### Esempio Sperimentale

Prendiamo un peso e lo mettiamo alla fine di una fune elastica, sollecitando all'altro estremo a diverse frequenze troviamo come il sistema risponde (come si muove l'astuccio), facendo il rapporto con la sollecitazione imposta, troviamo la legge di funzionamento dinamica di questa fune elsastica:

<!Diagramma esempio sperimentale>

Come detto nella ultima lezione, possiamo analizzare a diverse frequenze vedere come risponde il sistema per poi poter metter tutto insieme per trovare un risultato complesso.

In questo caso la fune risponde con la sua frequenza propria, questo è lo stesso anche per i trasduttori, questo però non si può accettare perché se non è errato, perciò tariamo i trasduttori per compensare.

<!Diagramma pg.9>
È possibile studiare sistemi semplici lineari per capire sistemi lineare più complessi. Questo ci permette di studiare i modo più semplice e meno complesso.

Questo è quello che abbiamo fatto, possiamo vedere a diverse sinusoidi e poi possiamo cancellare questo cambio nei cambio nel calcolo dato dal trasduttore per trovare il risultato lineare.

#### Diagramma della risposta dinamica a segnali semplici

<!Diagramma risposta lineare a segnali semplici>

Se il segnale non è lineare allora la sovrapposizione non è applicabile.

Ogni strumento ha la sua funzione di trasferimento complessa che cambia sia l'ampiezza che la fase. Il segnale di uscita non deve esser necessariamente in fase con il segnale in entrata basta che sia tutto sfasato della stessa quantità.

La modifica della funzione di trasferimento può esser visto come una modulazione dei vettori:

<!Diagramma cambio di vettori>

### Casi di Modifica per Trasferimento

#### Caso di Semplice Amplificazione

<!Diagramma semplice amplificazione>

Tutte le frequenze devono esser amplificate nello stesso modo tale che non modifiche il volume.

#### Caso Segnale Semplicemente Ritardato

<!Diagramma semplicemente ritardato>

<!Diagramma funzione di trasferimento pg.15>

La funzione di trasferimento può avere modulo (amplificazione) e fase (sfasamento)

L'obbiettivo ideale sarebbe:

<!Diagramma obbiettivo ideale>

Lo sfasamento non è vincolane quanto sembra, si basa sul caso, nel caso tutto il segnale è sfasato della stessa quantità allora non ci importa.

## Prontezza di Strumenti

Uno strumento è detto pronto quando riesce a misurare un segnale senza distorcerlo.

Uno strumento non è mai completamente pronto, è solo pronto per certe frequenze. A noi vengono vengono fornite una frequenza massima e minima per cui non c'è distorcimento.

<!Diagramma pg.20>

Un segnale non viene distorto se tutte le armoniche vengono moltiplicate per un fattore costante, o se lo sfasamento delle armoniche in uscita è pari a:
- 0 gradi
- 180 gradi
- proporzionale all'ordine delle armoniche cioè lineare rispetto alla frequenza

#### Esempio

<!Diagramma esempio pg.21>

Il sistema è pronto tra $f_{1}$ e $f_{2}$ in questo caso lo sfasamento è l'ultimo caso di prontezza dove la fase è lineare rispetto alla frequenza, questo è facile da compensare.

## Caratteristiche Dinamiche 2

Ci sono 2 modi per studiare la funzione di trasferimento:
- Analitico - E nota l'equazione di trasferimento dello strumento
- Sperimentale - Tramite taratura dinamica, quello che si fa realmente.

Per studiare il comportamento dinamico, per i sistemi lineari possiamo sommare le risposte a ciascuna armonica o possiamo studiare la risposta ad ingressi semplici questa di solito è più rappresentativa.

I segnali semplici più comuni sono:
- Sinusoidale
- Gradino
- Impulso
- Rampa

### Modello Analitico

Lo studio analitico presuppone la creazione di una modello. Se lo strumento è lineare, l'equazione che lo descrive è un'equazione differenziale a coefficienti costanti.

Ricordiamo che le derivata sono multipli di jw della dunzione iniziale, questo significa:

<!Roba in pg.5 e 6>

Ci interessa la funzione di trasferimento mettendo la nuova equazione:

<!Roba pg.8>

### Strumento di Ordine 0

$$\implies q_{0} = \frac{b_{0}}{a_{0}}q_{i} = kq_{i}$$

Questo è il sistema ideale, non esistono ma prendiamo il potenziometro come un sistema di questo tipo perché c'è vicino.

### Strumenti di Primo Ordine

Hanno equazione:

$$q_{o} + \frac{\tau dq_{o}}{dt} = kq_{i}$$

Il risultato alla destra è lo stesso dello strumento ideale ma non è più ideale. Questi strumenti danno un comportamento dinamico non banale e no ideale.

$\tau$ e k sono i due parametri che definiscono l'equazione, questo può  esser scritto.

$$(\tau D+1)q_{o} = kq_{i}$$
Dove $\tau\to$ costante del tempo
k $\to$ sensibilità statica

Esempio sistema di primo ordine: 

<!Diagramma pg.16>

A è la superfice di scambio del calore tra liquido di temperatura $\theta$

k è il coefficiente di scambio termico
Q è il calore scambiato
$\theta(t)$ è la temperature del liquido nel tempo.
s è la temperature iniziale termometro

Il calore entrante al termometro è:
$$dQ = kA(\theta-s)dt$$
c è il calore specifico
m è la massa del liquido

Sappiamo anche che $dQ = mcds$:
$$\implies kA(\theta-s)dt = mcds\to \frac{ds}{dt} \frac{mc}{kA} +s = \theta$$
Questo è come $\frac{a_{1}}{a_{0}} \frac{dq_{0}}{dt}+q_{0} =\frac{b_{0}}{a_{0}}q_{i}$

In questo caso $\tau = \frac{mc}{kA}$ con ($\tau D+1$)$q_{0}$ = k$q_{i}$

Possiamo allora trovare il fattore di amplificazione come:
$$\frac{q_{0}}{q)i} = \frac{k}{\tau D+1}$$

