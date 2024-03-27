---
creation_date: 2023-09-26 20:48
tags:
  - cosmac
parent: 
child: 
share: false
---
# Lezione 4 - Ripasso e Spiegazione Analitica

Tutta questa lezione e' un ripasso, analizzo e spiegazione delle cose coperte nella [ultima esercitazione](CdM%20-%20Esercitazione%202.md).

<!Diagramma sistemi labili e ipostatiche.>
![](2023-09-27%2015.54.excalidraw.png)

Esistono configurazioni che ci permettono di risolvere la maggior parte dei problemi. Quello che dobbiamo fare noi e' usufruire di questa strutture notevoli per semplificare sistemi.

## 1 Strutture Equivalenti

### 1.1 Strutture Notevoli

1. Asta Cerniera'-Carello
2. Arco a Tre Cerniere
3. Quadrilatero Articolo

### 1.2 Strumenti e Semplificazioni

1. Le bielle o aste di collegamento
2. Anelli chiusi isostaiche
3. Le appendici isostatiche
4. Decomposizione problema a terra e interno - solo se gdv a terra = 3
## 2 Aste Cerniera-Carello

<!Diagramma strutture e spezzato>
![](2023-09-27%2015.57.excalidraw.png)

La asta di puo' muovere intorno a punti diversi dipendendo da quale vincolo guardiamo. In realta' esistono tutti e due i vincoli quindi bisogna verificare la compatibilita'.

In questo caso non sono compatibili perche' non hanno CIR comune. I problemi arrivano se e quando hanno CIR comune, questo significa che il sistema e' labile.

Se invece il carello e' orientato in verso diverso.

<!Diagramma struttura e spezzato>
![](2023-09-27%2016.00.excalidraw.png)

Si trova un CIR comune alla cerniera, questo significa che sono compatibili e percio' sono compatibili.

## 3 Bielle e Aste di Collegamento

<!Diagramma struttura>
![](2023-09-27%2016.02.excalidraw.png)

Focalizzandosi su b in presenza di a, b si muove rispetto alla terra per virtu' di B, b si puo' muovere rispetto alla terra anche in virtu' di A. Facendo la combinazione lineare si trova che si puo' ruotare rispetto ad ogni punto lunga la stessa asse di a. 

Cinematicamente questa asse e' uguale alla asse dei CIR dei carelli, percio' si puo' sostituire con un carello.

<!Diagramma strutture con carello>
![](2023-09-27%2016.03.excalidraw.png)

La sostituzione e' valide sono per i piccoli movimenti, in grande non vale.


## 4 Archi a tre Cerniere (A3C)

Le due arte hanno 6 gdv.

<!Diagramma equivalenza>
![](2023-09-27%2016.06.excalidraw.png)

Le strutture notevoli portano a l'un l'altro.
Le cerniere possono esser sostituite per un carello.
In questo caso, dopo l'equivalenza trova che non e' labile.

Un modo molto piu' veloce e' riconoscere che il sistema e' labile se il carello generato punta verso la cerniera rimasta, questo succede solo se le cerniere sono in una linea retta. In ogni caso dove non sono allineate e' isostatico.

### 4.1 Varianti su temi:

<!Diagramma asta cerniera-carello>
![](2023-09-27%2016.07.excalidraw.png)

<!Diagrammi A3C>
![](2023-09-27%2016.10.excalidraw.png)
## 5 Quadrilatero Articolato

<!Diagramma quadrilatero>
![](2023-09-27%2016.14.excalidraw.png)

Le aste collegate a terra tra di loro collegate da 3 bielle che sono equivalenti a 2 carelli.

La sovrapposizione delle due parti crea una sistema equivalente.
Dopo dove i carelli hanno CIR comune si puo' rimpiazzare la struttura con una cerniera.

Questa nuova struttura e' una A3C, se il CIR comune e per cio' la cerniera e' in linea con le altre cerniera, significa che la struttura, se no e' isostatica.

Altro esempio:

<!Diagramma quadrilatero>
![](2023-09-27%2016.18.excalidraw.png)
## 6 Appendici Isostatici
Un aggiunta e' isostaticha che non cambia le proprieta'.
## 7 Anello Chiuso Isostatico

<!Diagramma triangolo isostatico>
![](2023-09-27%2016.24.excalidraw.png)

Un anello chiuso isostatico e' un insieme di 3 aste e 3 vincoli a 2 GdV in forma ciclica, che significa che la struttura interna e' isostatica. Se c'e' un elemento labile all'interno tutto e' labile. 




