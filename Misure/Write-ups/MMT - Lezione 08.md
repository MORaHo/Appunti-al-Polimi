---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 8 - 

## Taratura di Estensimetri

Ci sono 3 tipi di taratura di estensimetri:
- Taratura diretta dell'estensimetro $\to$ $k = \frac{\frac{\Delta R}{R}}{\mathcal{E}}$
- Taratura del ponte di Wheatstone
	- Resistenza in parallelo
	- Calibratori interni
	- Calibratori Esterni
	- $k_{b}\cdot G_{AMP}$ $\to$ $G_{AMP}$ = guadagno amplificatore
- Taratura diretta $\to$ Out/In Globale

Si fanno o le prima due tarature insieme o la 3$^{a}$ taratura.

### Prima

<!Diagramma taratura estensimetro>

In questa taratura abbiamo $\mathcal{E}$ note, e ricaviamo $\frac{\Delta R}{R}$ dagl'estensimetri, usiamo questi per trovare $k$.

Questa è un indagine statistica su ~2-3% del lotto, perché un estensimetro non è riutilizzabile.

### Secondo

In questa taratura misuriamo le tensioni in uscita quando mettiamo deformazioni simulate al nostro estensimetro. Le deformazione simulate sono resistenze aggiunte alla resistenza già presente come accadrebbe se ci fosse una deformazione ma senza l'uso di forza.

<!Diagramma pg.27>

$\Delta V_{L} = \frac{E}{4}\left( \frac{\Delta R_{2}}{R_{2}} \right)$

Abbiamo un deformazione simulata di circa $\mathcal{E}_{EL} = \frac{\left( \frac{\Delta R}{R} \right)}{K}$

In base si mette una resistenza in parallelo con un pulsante (calibratore interno) o calibratore interno.

### Terzo

<!Diagramma sistema con carico e grafico>

## Alimentazione

1. Problemi di derivata termica $\to$ Ci sono modi da ignorare
2. L'amplificazione è più costosa

<!Diagramma ponte>

Avendo un deformazione, la tensione con alimentazione sarebbe così:
<!Diagramma deformazione e tensione continuo>

Sono correlate, dato che la tensione in alternata cambia segno, i grafici di tensione di alimentazione e tensione ricavata saranno:

<!Diagramma alimentazione e deformazione ma cambia a tensione>

Quindi la equazione sarà la stessa, ma tensione sarà in alternata è non continuo:
$$\Delta V = \frac{E}{4}G \frac{\Delta R}{R}$$

Non consideriamo più poi le resistenze ma invece consideriamo le impedenze.

Moltiplichiamo il segnale di alimentazione e il segnale misurato della deformazione per trovare il segnale di modulato di V. Ricaviamo allora due possibili segnali, che moltiplicando per il segnale di alimentazione di nuovo troviamo il segnale di demodulazione che è quello che volgiamo trovare:

<!Diagramma demodulazione>

Mettendo un ultimo filtro su questo ultimo segnale demodulato per estrarre frequenze basse, troviamo il segnale di misurato che vogliamo.

Questo sistema può esser modellato come:

<!Diagramma passi di centralina.>

Fine estensimetri.

## Misure di Spostamento

Possiamo misurare lo spostamento lineare e lo spostamento angolare. Questi spostamenti possono esser anche lineari e variabili.

I trasduttori per misurare lo spostamento possono esser analogici o digitali, a contatto o senza contatto e seguono diversi principi fisica per misurare lo spostamento.

I misuratori di spostamento misurano uno spostamento relativo, non lo spostamento di se stessi.

### Trasduttori di Spostamento Resistivi / Potenziometri

<!Diagramma potenziometro>

Il modo che questo trasduttore misura lo spostamento è attraverso la tensione al punto x rispetto allo 0 dal voltmetro. La bovina su cui il tastatore scorre è avvolta intorno ad un pezzo non conduttore.

La tensioni che troviamo allora ci aiutano a sapere lo spostamento:

$$\begin{gather}
V = R_{x}i \\
R_{x} = R_{tot}\cdot \frac{x}{l_{o}} \\
i = \frac{E}{R_{tot}} \\
V = \frac{R_{tot}}{R_{tot}} \cdot \frac{x}{l_{o}}E_{o} \implies V = \frac{x}{l_{o}}E_{o} \implies x = \frac{V}{E_{o}}l_{o}
\end{gather}$$

C'è una correlazione lineare tra lo spostamento a le tensione al voltmetro:
<!Diagramma correlazione>


<!Diagrammi trasduttore lineare e angolare>

In realtà la bovina non sarà perfettamente avvolta quindi avrà una sua risoluzione:

<!Diagramma bovina e step di tensione>

La risoluzione sarà: $\frac{l_{o}}{n}$, dove n è il numero di spire passate

Questo tipo di estensimetro si può creare anche con uno strato di metallo su un piano di plastica, in teoria la risoluzione sarebbe $\infty$ , ma è minore date imperfezzioni

<!Diagramma trasduttore piano>

#### Esempi di Trasduttori Lineari

<!Esempi su pg.12>

#### Valori Tipici

- Portata: 2 ÷ 2000 mm
- Risoluzione: teoricam. infinita (se a strato) 0,1% ÷ 1% f.s. (se a filo)
- Linearità: ± 0,1% ÷ 0,3% del F.S.
- Resistenza: 0,5 ÷ 10 k
- Vita a fatica: 10 8 cicli
- Velocità max: 1 m/s

La velocità in questo caso indica che ci potrebbe esser uno spostamento modestamente dinamico ma non troppo veloce.

### Trasduttori di spostamento Angolare

Ci sono 2 tipi di trasduttori per misurare lo spostamento angolare, quelli a giri infiniti, come quelli già diagrammati:
<!Diagramma giri infiniti>
L'altro tipo è a fini finiti che funziona come una vite nel fatto che trasla e ruota:

<!Diagramma giri finiti>

#### Valori Tipici

- Portata: 10° ÷ 60giri
- Risoluzione: teoricam. infinita (se a strato) 0,1% ÷ 1% f.s. (se a filo)
- Linearità: ± 0,1% ÷ 0,5%
- Resistenza: 0,5 ÷ 20 k
- Vita a fatica: 10 8 cicli
- Coppia di spunto: 10 -4 Nm
- Velocità max: 3000°/s

Nella connessione di sistemi di misura e il pezzo che stiamo misurando per lo spostamento angolare, ci sono problemi al giunto di contatto.
<!Diagramma problemi di giunta>

Nel caso ideale è sono disposte perfettamente, ma ci sono casi di disassamento parallelo o anche angolare che dobbiamo considerare.

Per risolvere questo problema usiamo un manicotto che è rigido nella sua resistenza in una direzione ed è flessibile nella altre due permettere che il sistema possa trasferire la potenza bene.

### Rotazione per misure lineari

Per misurare grandi distanze per cui servirebbe un meccanismo ingombrante se fosse lineare, usiamo un tipo di puleggia con un trasduttore attaccato per misurare lo spostamento.

<!Diagramma rotazione per misure lineari pg19>

Sappiamo la rotazione, sappiamo il diametro della puleggia, quindi possiamo sapere quanto abbiamo spostato linearmente.

È molto utile per campi lunghi dove serve uno strumento compatto

<!Diagramma pg.20>

#### Valori Tipici

- Portata: 50 ÷ 2500 mm
- Sensibilità: 0,1 ÷ 20 mV/V/mm
- Resistenza: 0,5 ÷ 1 kΩ
- Accuratezza: ± 0,1% ÷ 0,25% f.s.

#### Limiti

- Tensione cavo: 2 ÷ 10 N
- Velocità max: <10 m/s
- Accelerazione max
	- Estrazione: <35 g
	- Avvolgimento: <25 g
#### Vantaggi

Il filo disaccoppia l’oggetto dal trasduttore nella
direzione perpendicolare al filo

I limiti sono per la molla che ci porta il filo indietro, quindi non può esser troppo debole ma non deve esser troppo forte tale che si rompa il sistema.

### Trasduttore di Spostamento Induttivo

Questo è un trasduttore a contatto, dove induciamo un induttanza in alcuni induttori e le misuriamo per calcolare lo spostamento.

<!Diagramma semplficato>

<!Diagramma tabella>

In base questa struttura è un Ponte di Wheatstone con due induttanze invece di due resistenze ed è alimentato in alternata.

Dobbiamo misurare le induttanze, e per questo usiamo la logica del ponte di Wheatstone per trovare lo spostamento.

Il ponte di Wheatstone funzione con L,C e R

Progettiamo il ponte così:
<!Diagramma pg.29>

I passi che facciamo per la demodulazione è:
<!Diagramma pg.30>

Questo è costruito in due modi, a tasto sonda libero cioè senza molla o a tasto sonda a molla.

#### Valori Tipici

- Portata: 4 ÷ 100 mm (sonda a molla) 20 ÷ 500 mm (sonda libera)
- Sensibilità (al f.s.): 10 ÷ 80 mV/V/mm
- Scostamento dalla linearità: < ± 0,4%




