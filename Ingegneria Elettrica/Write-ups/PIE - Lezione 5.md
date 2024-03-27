---
creation_date: 2023-10-05 14:51
tags:
  - PIE
parent: 
child: 
share: true
---
# Lezione 5 - Teorema di Thevenin

Il teorema di Thevenin e' un teorema che useremo molto nella risoluzione dei circuiti elettrici.

## Teorema 
Data una rete elettrica <u>lineare</u> $\Pi$ qualsiasi. 

<!Diagramma rete>
![](Pasted%20image%2020231007223834.png)

Ai fini del calcoli ai poli di un dipolo b
Si puo' sostituire con un generatore di tensione e resistenza in serie.

<!Diagramma sostituzione>
![](Pasted%20image%2020231007223849.png)
Dove $V_{0}$ e' la tensione a vuoto del generatore, e $R_{eq}$ e' la resistenza ai morsetti di $\Pi$ quando V = 0 e I = 0, cioe' la resistenza del sistema quando tutti i generatori di tensione sono spenti. 

### Dimostrazione 
<!Diagramma vo e Req>
![](Pasted%20image%2020231007223905.png)
$\large{\text{Sostituzione}}$ 

Con la sostituzione aggiungiamo elementi che non hanno effetto sul sistema, e per lo stesso teorema cambiamo il bipolo in un generatore di corrente.

<!Diagramma sostituzione>
![](Pasted%20image%2020231007223920.png)
$\large{\text{Applichiamo il Principio di Sovrapposizione}}$

<!Diagramma sovrapposizione>
![](Pasted%20image%2020231007223935.png)
Spegnendo prima i generatore di corrente e uno dei generatore di tensione, calcolando e poi spegnendo gli altri. Facendo la somma troviamo che la equivalenza vale.

$V_{0}$ si calcola attraverso il circuito aperto quando si spengono il generatore di corrente ed un generatore di tensione, mentre $R_{eq}$ e' calcolato quando l'altro generatore di tensione e il resto del circuito sono spenti dato che $R_{eq}$ e' la resistenza interna al circuito spento.

Dimostrando che gli effetti del circuito alla sinistra dimostra la equivalenza e' vera.
E' immediato conferma che la corrente = 0 nel circuito a sinistra e' nullo e trovando che $v_{i} = -v_{0} + v_{x} = 0$, possiamo dire che $v_{x} = v_{o}$, ergo gli effetti sono nulli.
## Esempi

<!Diagramma esempio 1>
![](Pasted%20image%2020231007224022.png)
Scegliamo cosa e' dentro a $\Pi$ e fuori a $\Pi$ 
	
$R_{eq}$ si trova quando tutti i generatori sono spenti. Si vuoi trovare la resistenza dentro a $\Pi$ quindi si toglie anche tutto quello che non c'e' dentro.

<!Diagramma>
![](Pasted%20image%2020231007224045.png)

$V_{0}$ si trova, riaccendendo tutti i generatori dentro a $\Pi$.

Facendo i calcoli:

<!Diagramma>
![](Pasted%20image%2020231007224104.png)

E' importante ricordarsi che quando si sceglie la direzione di una tensione non si cambia, anche se complica i calcoli perche' appena si cambia, si rompono tutte le leggi di Ohm e bisogna rifare i calcoli, che potrebbe causare errori.

<!Diagramma finale>
![](Pasted%20image%2020231007224120.png)
 Nel nostro circuito la freccia di $V_{0}$ punta verso il morsetto B, dobbiamo mantenere questo verso nel circuito semplificato.