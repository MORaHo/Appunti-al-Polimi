---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 2 - Continuazione di Lezione 1

<!Diagramma entrate e uscite>

Le trasformazioni aggiungono valore, entrano informazioni, energia, massa e risorse, e escono un prodotto finito, dei residui e scarti.

Ci concentreremo sui prodotti discreti e non quelli continui.

3 tipi processi tradizionali che vedremo:

- Fusione/ Fonderia
	- Riempitura di cavità con materiale liquido
- Deformazione plastica
	- Sollecitazioni grandi, cambiando la forma del materiale tale che non cambi.
- Processi di Finitura/Asportazione di truciolo
	- Cambio nella forma e superfice, occorrono per ultimo

La scelta di processo è basata sulla fattibilità tecnica e economica.

### Cambio di Massa
Non è una classificazione definitiva, ma i processi si possono basare sul cambio di massa che occorre durante il processo.

- $\Delta M<0$ Asporto di truciolo
- $\Delta M = 0$ Deformazione plastica, fonderia
- $\Delta M > 0$ Assemblaggio

I materiali che usiamo cambiano anche loro basato su quello che vogliamo fare, alcuni materiali non possono esser sottoposti a certi processi quindi non riusciamo a portarli a certe forme, quindi o cambiamo i processi o cambiamo il materiale, questa scelta dipende da molti fattori.

Più pezzi sono prodotti, più automazione, non si riuscirebbe a mantenere passo con solo umani.

## Variazione, Specifiche di Progettazione e Tolleranze

Tutti i processi hanno la loro variazione naturale, in realtà nulla è deterministico, ci saranno sempre variazioni minuscole date da molti fattori.

In un mondo i processi che occupiamo avranno cambi specifici che possiamo determinare:

<!Diagramma mondo ideale>

In realtà data un punto iniziale uguale, ci sono variazioni nei processi dati dall'usura a diverse parti, dall'umani e dalle macchine che cambiano il risultato finale.

<!Diagramma mondo reale fine>

Dato questo, per mantenere una certa certezza del risultato, dovrà occorrere manutenzione degli oggetti.

Anche le condizioni iniziali possono cambiare, non tutti i materiali iniziali primi sono uguale, fisicamente o chimicamente, quindi questo risulta in altre variazioni nel risultato finale.

<!Diagramma mondo reale inizio>

### Costo di Produzione e Costo di Scarto
La tolleranza naturale del processo è l'insieme di valori che potrebbe uscire dal processo data una certa ricorrenza di manutenzione.

Ci sono disturbi ad ogni parte delle trasformazioni, per ciò bisogna gestire i disturbi tale che non abbi effetto grave sul prodotto finale.

I disturbi si possono accettare non si potrebbe fare manutenzione dopo ogni fabbricazione perché non farebbe senso economico.

I disturbi possono esser causati da umani che hanno informazioni erronee sul processo che sta occorrendo.

<!Diagramma gaussiana>

Come molte cose i processi hanno una distribuzione gaussiana in come occorrono i disturbi. Un processo meno preciso avrà code più ampie e una curva più bassa.

Ogni progetto a le sue specifiche, condizioni di produzione dentro cui ogni pezzo dovrebbe rientrare.

Un processo a la sua variazione naturale, lo scopo nostro è di scegliere un processo che rientra abbastanza nelle specifiche tale che non scartiamo troppi pezzi ma anche scegliere i processo che rientra il meglio tale che il costo di produzione viene minimizzato, in generale più preciso è un processo più e costoso.

<!Diagramma 3 gaussiane>

Un esempio sarebbe la fusione, un processo poco preciso come la fusione in terra ha molti pezzi che devono esser scartati. Invece un processo molto preciso come la microfusione ha un numero di scarti quasi nullo ma il suo costo è molto superiore per varie ragioni.

Bisogna tenere a conto sia il costo di produzione <u>e</u> il costo degli scarti data dalla variazione naturale. Il processo che minimizza questi due è il processo che vogliamo.

<!Diagramma somma di costi>

La tolleranze naturale del processo deve rientrare nella specifiche del prodotto.
<!Diagramma ok e no>

### Scelta il processo non soddisfa le nostre condizioni

Ordine di scelta se il processo che abbiamo scelto non è giusto:

1. Cambiare il progetto del prodotto
2. o - migliorare il processo (se troppi scarti)
3. o - cambiare il processo (se lo stesso troppi scarti)
4. o - selezione del prodotto (se non è possibile ridurre gli scarti, il cliente può scegliere quelli che vuole, questo di solito è per progetti di alta gamma)

## Grafici di Tolleranze

Ci sono grafici di tolleranze per ogni processo che possiamo scegliere:

<!Diagramma grafico aree>

Se si vuole una finitura può in molti casi occorrerà seguire una serie di processi per portare il prodotto alla rugosità voluta.

##### Ashby Charts

I grafici di Ashby mettono insieme molte caratteristiche di ogni processo che possono aiutare nella scelta.

<!Diagramma Ashby Chart>

### Costo vs. Tolleranza

Come detto prima i processi che hanno una finitura migliore di solito costano di più e questo costo aumenta esponenzialmente.

<!Diagramma costo-tolleranza>

### Tempo di Processo

Ogni processo ha un suo tempo di processo, anche questo aumenta esponenzialmente con la diminuzione della rugosità, il costo per ciò aumenta perché ci vuole più tempo e più energia e quindi bisogna pagare per macchine o umani.

<!Diagramma tempo di processo vs. rugosità>


