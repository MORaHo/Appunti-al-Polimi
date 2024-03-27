---
tags:
  - PIE
parent: 
child: 
share: false
---
# Lezione 3

Gli esercizi e esercitazioni sono importanti. Gli esercizi sono studiati piu' autonomamente perche' bisogna sapere dove iniziare, quella e' la parte piu' difficile, e dopo che si sa dove iniziare si puo' fare il resto del problema semplicemente.

## Ripasso

V = Tensione - $[V] = \frac{dw}{dq}$
i = corrente - $[A] = \frac{dq}{dt}$
P = Vi = $[W]$

### Legge di Kirchhoff della Tensione

$$\sum_k v_k = 0$$
Lungo un percorso chiuso

### Legge di Kirchhoff delle Correnti

$$\sum_k i_k = 0$$
Entrante in una superfice chiusa

## Circuiti

Un circuito e' la connessione di piu' sistemi, cioe' di piu' bipoli.
### Convenzioni

Le convenzioni sono utilizzate per fare in modo che la Legge di Ohm sia vera.

La convenzione degli utilizzatori e' tale che il senso della corrente e della tensione siano opposte, questo e' perche' l'utilizzatore "genera una tensione dissipativa" cioe' le tensione nello stesso verso della corrente e' negative attraverso l'utilizzatore, percio' per mantenere il segno per la legge di ohm si cambia la direzione della freccia della tensione. Dato che gli utilizzatori usano energia la loro potenza p>0. I resistori e lampadine sono esempi di utilizzatori.

<!Diagrammi convenzioni>
![](2023-09-25%2013.15.excalidraw.png)

La convenzione degli utilizzatori e' diversa. Nella convenzione degli utilizzatori la direzione della corrente e della tensione attraverso il generatore non sono sempre uguali ma dipendono dal circuito e la topologia dei generatori nel sistema. La direzione della corrente e della tensione sono sempre uguali, cosa cambia e' se questa direzione e' normale o opposta. Se la direzione e' normale, cioe' il generatore sta generando, allora il generatore ha p<0, cioe' sta perdendo energia. Invece se la direzione e' opposta, cioe' il generatore sta ricaricando, p>0, cioe' sta guadagnando energia. La tensione generata dal generatore che sta ricaricando e' anche lei dissipativa ma ha effetto sul circuito intero. I generatori ideali di tensione e corrente sono esempi di generatori. Le pile sono generatori di corrente. In realta' non esiste un generatori di tensione, ma si possono usare generatori di corrente e resistenze per creare generatori di tensione, per creare elementi che agiscono cosi.

---

### Nuovi elementi di circuiti

<!Diagramma condensatore>
![](2023-09-25%2013.17.excalidraw.png)

Un generatore connesso ad un condensatore non fa passare corrente perche' non c'e' posto per farlo girare.

<!Diagramma Induttore>
![](2023-09-25%2013.19.excalidraw.png)

Con questi 5 bipoli ideali si possono rappresentare tutto, a parametri concentrati.

### Comportamenti al Limite

<!Diagramma corto e circuito>
![](2023-09-25%2013.20.excalidraw.png)

Questo spiega molto come agisce un circuito a diversi punti, per esempio cosa succede quando si spegne un generatore, o se un pezzo di un circuito si rompe.

==Un modo per ricordarsi come agiscono e' di togliere il cerchio dal simbolo del generatore rispettivo - > il generatore di corrente per il circuito aperto e il generatore di tensione per il corto circuito. E' anche importante ricordarsi cosa succede alla tensione quando questi occorrono nel circuito.==

I generatori fissano solo la tensione e corrente, se ci ricaricano o scaricano dipende da che circuito e dove nel circuito vengono attaccati.

## Legami Costitutivi - > legami v e i

Come V = L$\frac{di}{dt}$ e i = C$\frac{dv}{dt}$

## Corrente Diretta (DC)

In un circuito con le pile la corrente e' sempre diretta, cioe' la direzione della corrente non cambia mai.

La resistenza dei cavi si puo' trascurare, nei modelli.

<!Diagramma circuito>
![](2023-09-25%2013.25.excalidraw.png)

Per risolvere un circuito bisogna prima trovare tutti i flussi di corrente linearmente indipendenti, poi usare la Legge di Kirchhoff delle tensioni, poi si usa la Legge di Kirchhoff delle correnti. Questo e' una parte del teorema fondamentale della elettrotecnica che verra' scritto dopo

## Parallelo vs. Serie

Di solito non serve risolvere ogni parte per trovare la risposta al sistema, in molti casi si puo' semplificare il sistema e percio' i calcoli finali.

In tutti e due i sistema la resistenza viene semplificata ad una resistenza equivalente alla resistenza del sistema non semplificato.
### Circuito in Serie

<!Diagramma circuito e calcoli in serie>
![](2023-09-25%2013.29.excalidraw.png)

In serie si ha:

$$R_{eq} = \sum_k R_k$$
#### Casi Particolari:

<!Diagramma dei casi speciali>
![](2023-09-25%2013.33.excalidraw.png)

Se c'e' un circuito aperto, al resistenza fa all'infinito e la corrente non passa piu' per quella serie.

### Circuito in Parallelo

<!Diagramma in parallelo>
![](2023-09-25%2013.36.excalidraw.png)

$$\frac{1}{R_{eq}} = \sum_k \frac{1}{R_k}$$
#### Casi Particolari:

<!Diagramma casi particolari parallelo>
![](2023-09-25%2013.39.excalidraw.png)

In caso di un corto circuito tutta la corrente nel sistema passa per il corto circuito e non importano piu' le altre resistenze. Durante un corto circuito la resistenza del cavo non e' piu' trascurabile, questo causa un riscaldamento e in seguito le fiamme che sono problematiche.

### Nodi

<!Diagramma nodi>
![](2023-09-25%2013.42.excalidraw.png)

I nodi sono punti dove la corrente diverge. A tutti i nodi connessi per circuiti aperti viene dato lo stesso nome.

## Esempio

<!Diagramma esempio>
![](2023-09-25%2013.43.excalidraw.png)

In questo caso il punto C sopra e sotto sono lo stesso punto, portandoli ad un punto si trova la resistenza equivalente, di piu' i punti A e B sono spostati che ci semplifica i calcoli

#### Conduttanza

La conduttanza a l'inverso della resistenza. Esistono grandezze paragonabili per la capacita e la induttanza ma non importano quanto la conduttanza.

## Proprieta' della Dualita'
$$\begin{align*}\text{Serie} &\longleftrightarrow \text{Parallelo} \\\text{Tensione} &\longleftrightarrow \text{Corrente}\\\text{R} &\longleftrightarrow \text{G}\end{align*}$$
Queste proprieta' sono analoghe all'inverso nel sistema. Esiste una dualita' tale che se si ha una proprieta' per una circuito in serie o in parallelo se si scambia tutto per l'inverso la proprieta' e' lo stesso giusta.

Per esempio: In serie la somme delle resistenze si trova con la legge di Kirchhoff delle Tensione e invece in parallelo la somma delle conduttanze si trova cona la legge della corrente di Kirchhoff.

Si ha: V = RI che e' il duale di I = GV

## Teorema Fondamentale dell'Elettrotecnica

Se si ha un circuito con $l$ bipoli (lati) esistono 2$l$ incognite (v,i) da individuare.

Queste incognite sono individuabili attraverso i legami costitutivi e le equazione indipendenti delle leggi di Kirchhoff della tensione e corrente. Cioe' le equazioni indipendenti ricevata dalle leggi di Kirchhoff e Ohm sono abbastanza per risolvere il sistema intero.
### Dimostrazione

<!Diagramma circuito>
![](2023-09-25%2013.48.excalidraw.png)

In una qualsiasi rete ci sono n nodi. Per ogni modo si puo' scrivere una legge di Kirchhoff delle correnti e.g. : $i_1 - i_2 = 0$

Se sommando tutte viene un'identita', sono indipendenti se invece viene 0 = 0 sono dipendenti. Le equazione indipendenti sono n-1, cioe' bisogna togliere un nodo per avere equazioni indipendenti. Questo si puo' vedere nel diagramma perche' il lato nel centro e' cancellato nei due cicli per cio' servono solo n-1 lati per equazioni indipendenti.

Allora si trova che esistono $l-(n-1) = l-n+1$ equazioni indipendenti della legge di Kirchhoff della tensione. Ci sono infinite leggi di Kirchhoff delle Tensione ma si esistono solo $l-n+1$ equazioni indipendenti che vengono rappresentate dagli anelli su cui vengono calcoli.

Bisogna dimostrare che $l-n+1$ coincide con il numero di anelli nei circuiti.
Alcuni esempi verificabili.

<!Diagramma 2 lati, 2 nodi>
![](2023-09-25%2013.57.excalidraw.png)

Se lo stesso numero che gli anello allora e' giusto, perche' c'e' solo una legge di Kirchhoff.

Aggiungendo una altro lato si ha:

<!Diagramma 3 lati, 2 nodi>
![](2023-09-25%2014.01.excalidraw.png)

Di nuovo sono indipendenti. Questa formula vale per ogni numero di lati che aggiungi attraverso qualsiasi modalita' di aggiunta. Ha un numero do soluzioni indipendenti per dimostrare che il sistema ha una soluzioni unica.




