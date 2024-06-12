---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 9 - 

## Problemi di Montaggio

Questi sono problemi di montaggio per misuratori di spostamento, data una testa sonda semplicemente appoggiato sul misurando.

<!Diagramma sonda semplicemente appoggiata>

L'effetto di reazione basso. L'effetto di urti è il saltellamento del tasto sonda se l'accelerazione dell'elemento vibrante è maggiore di quella di gravità.

Un soluzione è l'applicazione di una molla:
<!Diagramma con molla>

Il saltello è in funzione della rigidezza della molla e del precarico.

Un'altra soluzione è il collegamento diretto, questo impedisce direttamente i saltellini

<!Diagramma collegamento diretto>

## Trasduttori di Spostamento a Trasformatore Differenziale/ Linear Variable Differential Transfomer (LVDT)

Un sistema semplice del trasduttore è:

<!Diagramma LVDT semplice>

In questo trasduttore di alimenta in alternato il trasformatore in alto, e per effetto della posizione del pezzo i due trasformatori hanno tensioni diverse, misurando questo riusciamo a ricavare la posizione.

Se mettiamo i due trasformatori in contro-serie, e se la posizione del pezzo è perfettamente nel centro dei due trasformatori la tensione misurata dal ponte di Wheatstone sarà nulla.
<!Diagramma pg.46>

Se spostiamo il pezzo, allora inizieremo a misurare una tensione alternata al ponte, che possiamo usare per tarare.

<!Diagramma tensione positiva>

Se invece lo spostiamo della stessa quota nella direzione opposta, ricaviamo un tensione negativa, perché la sottrazione sarà la stessa e quindi il valore che sottraiamo sarà più grande dell'altro valore.

Esiste un campo di posizioni dove la tensione è lineare alla posizione.

Data la corrente alimentata in alternata, servirà un demodulatore e un filtro per portare ad un valore continuo, come usato negli estensimetri:

<!Diagramma demodulatore e filtro>

### Valori Tipici

-  Portata (sonda a molla): ± 2,5 ÷ 7,5 mm (sonda libera): ± 1,25 ÷ 250 mm
-  Sensibilità (tipo ac - ac): 3 ÷ 250 mV/V/mm (tipo dc - dc): 0,04 ÷ 8 V/mm
-  Linearità (f.s.): < ± 0,25%

La sensibilità diminuisce con la dimensione del campo.

Le tensioni in uscita sono molto più alte dell'induttivo, quindi disturbi elettromagnetici sono minori.

I disturbi elettromagnetici sono campi elettromagnetici creati da pezzi magnetici che potrebbero disturbare il risultato, i cavi sono protetti per diminuire gli effetti.

## Rotary Variable Differential Trasformer (RVDT)

Simile a quelli lineare la è un forma non circolare che gire tra i trasduttori e la differenze della forma permette il calcolo della posizione.

<!Diagrammi RVDT>
Anche qui c'è un campo di linearità dentro cui stiamo:

<!Diagramma linea con campo di linearità>

### Valori Tipici:

- Portata: ± 30° ÷ 40°
- Sensibilità (tipo ac - ac): 2 ÷ 3 mV/V/° (tipo dc - dc): 125 mV/°
- Linearità (f.s.): < ± 0,3%

## Spostamento Senza Contatto

Tutto quello fin ad ora era la misurazione dello spostamento senza contatto.

## Trasduttori a Correnti Parassite

Questi sono quelli che ci hanno detto non confondere con i trasduttori a induzzione.

<!Diagramma trasduttore a correnti parassite>

L'oscillatore in questo caso è l'alimentatore in alternata.

Generiamo flusso in un nucleo metallico con delle bobine. Dalla la forma del nucleo, il flusso deve passare per il metallo di cui stiamo misurando lo spostamento. Questo flusso passante per il misurando genera delle correnti parassite circolanti nella superfice del pezzo. Più vicino è il pezzo più sono forti le correnti

Le correnti son molto superficiali. La creazione di questo correnti interferisce con l'induttanza della bovina, possiamo allora misurare il cambio e per ciò la distanza.

<!Diagramma circuito completo>

Misuriamo la impedenza con il ponte di Wheatstone alimentato in alternata.

<!Diagramma pg.8>

Il ponte è connesso a due lati a due parti della bovina, una delle impedenza è quella che misuriamo, l'altre è quella di bilanciamento che è messa un'po' più lontana per compensare per il cambio data dalla temperatura.

Il campo di misura è molti piccolo, di qualche millimetro al massimo e per ciò è molto sensibile.

Questi strumenti non sono lineari con la distanza, quindi dentro ai condizionatori c'è un linearizzatore.

### Valori Tipici

- Portata: 
	- 2 mm (a partire da 0,25 mm) 
	- 4 mm ( a partire da 1 mm)
- Diametro sonda: 5 ÷ 14 mm
- Sensibilità: 8 ÷ 4 V/mm
- Linearità: < 0,05 ÷ 0.2 mm

Data la alta sensibilità e risoluzione sono adatti per la misurazione di spostamenti piccoli.

Sono condizionati e tarati per il materiale che deve esser usato per misurare, non è consigliato usarli su altri materiali.

Si può mettere uno strato (anche scotch alluminio) per misurare lo spostamento basta che sia conduttivo.

### Applicazioni

- Trasduttori di prossimità on-off
- Trasduttori di spostamento
- Ricerca difetti superficiali (difetti o cricche sul misurando limitano/modificano le correnti parassite e quindi modifichiamo la misura.

Si possono metter radialmente ad un'asse per misurare la vibrazione radiale di un sistema.

<!Diagramma misurazione radiale>

Il centro dell'asse è dipendente dalla velocità angolare intorno alla medesima asse.

