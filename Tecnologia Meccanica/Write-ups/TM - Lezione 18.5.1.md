---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 18.5.1 - Piegatura

Abbiamo mancato troppe lezione quindi ce ha registrate 3 da guardare a casa. Questa è la prima.

## Piegatura

La piegatura è un processo che costituisce nell'imporre una piega ad un certo angolo.

Ci sono 2 tipi di piegatura, ad aria e in matrice.

<!Diagramma tipi di piegatura>

La macchina per piegatura è composta da una parte mobile, il punzone e una parte fissa, la matrice.

La piegatura in matrice ha basso ritorno elastico ma alte forze di piegatura, invece quello in aria ha elevato ritorno elastico e basse forze di piegatura.

Un'analisi della sezione piegata ci fa vedere che la parte esterna è in trazione, quella interna è in compressione, ed esiste una asse neutra dove la sforzo è nullo che di solito viene spinta verso la compressione.

La piegatura può occorrere molto volta una volta dopo l'altra.

### Flangiatura

Un terzo tipo di piegatura è la flangiatura, come indica il nome è usata per creare un flangia sul pezzo.

<!Diagramma flangiatura>

Questa operazione funziona senza matrice preformata, ed è possibile avere $\alpha >90^{o}$ fino a 180$^{o}$.

## Analisi Ingegneristica

<!Diagramma sezione>

Definiamo 2 angoli, $\alpha$ è l'angolo interno, invece $\alpha'$ è l'angolo di piegatura esterna rispetto all'asse iniziale.

$$\alpha+\alpha'=180$$


### Geometria della Piega

<!Diagramma geometria>

La linea neutra non subisce deformazione, invece la linea esterna è estesa, invece la linea interna è compressa.

Lo spessore rimane quasi uguale con una piccola deformazione.

La lunghezza sarà:
$$L = l_{1}+l_{2}+\alpha\left( R_{i}+\frac{t}{2} \right)$$

In realtà c'è un margine di allungamento, allora per tenere a conto facciamo:
$$A_{b} = \alpha(R_{i}+k_{ba}t)$$
$k_{ba} \to 0,33$ se $R_{i}<2t$ o $0,5$ se $R_{i}\geq 2t$

La lunghezza allora sarà:
$$L = l_{1}+l_{2}+A_{b}$$

### Ritorno Elastico

Se voglio imporre $\alpha = 30$, devo compensare per il ritorno elastico.

<!Diagramma ritorno elastico>

Visto che pieghiamo una lastra, il pezzo tenderà a riaprirsi di un certo coefficiente, questo coefficiente, lo Spring-Back (SB) ha equazione:

$$SB = \frac{\alpha'-\alpha'_{b}}{\alpha'_{b}}$$


SB di solito è tabulato e noto sotto certe condizioni.

### Forze per eseguire la piegatura

<!Diagramma geometria di piegatura>

$$F_{t} = k_{bf} \frac{bt^{2}}{D} R_{m}$$
$K_{bf}$ è un coefficiente empirico sperimentale per tenere a conto dell'attrito con la matrice.
Per la piegatura a V è 1,33, per la flangiatura a $90^{o}$ è 0,33 e per la piegatura a U è 2,5.

## Difetti della piegatura

### Cricche nella zone di Piega

<!Diagramma pg.52>

Di solito nella parte esterna, le cricche nascono con una forza dipendenza della direzione di laminazione della lamiera. Se la direzione di laminazione è parallela alla piega allora si formano le cricche perché il grani sono deboli perpendicolarmente, invece se la direzione di laminazione è perpendicolare alla piega allora non si formano le cricche perché ci sono i grani che possono deformarsi.

## Altre Operazioni di Piegatura

<!Diagramma pg.53>

## Attrezzatura per presse piegatrici:

<!Diagramma pg.54>

Le macchine per la piegatura si chiamano preso-piegatrici. Possono avere forme complesse per operare diverse piegatura sullo stesso pezzo usando lo stesso punzone.

I punzoni per la creazione di forma più complesse potrebbero avere dei problemi nella estrazione, quindi vanno progettate bene tale che possano completare le operazioni volute.

I punzoni possono venire in multiple parti e da parti diverse, per permettere la piegatura di forme che non possono esser create da punzoni che viaggiano verticalmente.

<!Diagramma pg.57>

## Esempio nella creazione di cerniere:

<!Diagramma pg.58>

Ci sono vari modi per creare la stessa parte, dipende dalla macchine e le forze che può esercitare, e nel tempo in cui le può esercitare.

## Ultimi Dettagli

Il processo può esser automatico o manuale. 

Le piegatura piccole possono esser creare dalla macchine CNC che abbiamo visto nella ultima lezione. Un esempio di ciò:

<!Diagramma mini-piegatura pg.61>

Pezzi complessi possono esser creati con molti processi opportuni di tranciatura e piegatura con punzoni appropriati.
 

$$\dot{ a}\dot{A}$$
