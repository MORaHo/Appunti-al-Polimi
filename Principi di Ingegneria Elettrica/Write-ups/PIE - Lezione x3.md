---
creation_date: 2023-11-01 14:45
tags:
  - PIE
share: true
---
# Lezione 13 - Circuiti Trifase

## Circuiti Trifase di Base
Le reti a trifase sono la ultima parte dei circuiti a regime stazionario che studieremo, dopo studieremo i circuiti in transizione.

Composto da 3 fili e un generatore su ogni filo, un circuito trifase è disegnato così:

<!Diagramma trefili>

La tensioni in trifase sono:
$$\overline{E}_{1} = \overline{E}_{2}=\overline{E}_{3}   $$
### Nomenclature dei Circuiti

#### Simmetria
<!Diagramma vettori di trifase>

Guardando ai numeri complessi, data i tre vettori sopra abbiamo la terna simmetrica di tensioni:

$$\begin{gather}
e_{1}=\sqrt{ 2 }E\cos(\omega t) \\
e_{2}=\sqrt{ 2 }E\cos\left( \omega t+\frac{2\pi}{3} \right) \\
e_{3}=\sqrt{ 2 }E\cos\left( \omega t-\frac{2\pi}{3} \right)
\end{gather}$$
I vettori sono simmetrici se la fase tra tutti e tre è $\frac{2\pi}{3}$, e i moduli $E_{1}=E_{2}=E_{3}=E$

#### Dissimmetrico

<!Diagramma dissimmetrico>

In un circuito dissimmetrico tutte le fasi non sono uguali o tutti i moduli delle tensione non sono uguali.

#### Diretto

<!Diagramma diretto>

Un diagramma è diretto se $E_{2}$ è in ritardo rispetto a $E_{1}$

#### Inverso

<!Diagramma inverso>

Un diagramma è inverso se $E_{2}$ è in anticipo rispetto a $E_{1}$

## Tensioni Concatenate

Le tensioni concatenate sono le tensioni complesse tra i fili, come viste nel primo grafico.

Le tensioni concatenate hanno equazione:

$$\begin{gather}
\overline{V}_{12}=\overline{E}_{1}-\overline{E}_{2} \\
\overline{V}_{23}=\overline{E}_{2}-\overline{E}_{3} \\
\overline{V}_{31}=\overline{E}_{3}-\overline{E}_{1}      
\end{gather}$$
Graficamente si trovano i vettori:
<!Diagramma tensione concatenate>

Il moduli sono se le tensione sono simmetriche:
$V_{12}=V_{23}=V_{31}=\sqrt{ 3 }E$

Nella unione europea questa tensione è uguale a 380V.

Si fa di tutto per tenere il sistema simmetrico ma molti dei nostri esercizi avranno circuiti dissimmetrici.

## Trasformazione Stella-Triangolo

I circuiti trifase possono esser collegati in due modi diversi a stella e a triangolo:

<!Diagramma stella-triangolo>

Le reti trifase possono esser risolte con esser risolti come multiple equazioni di Millman.

È possibile attraverso un trasformazione cambiare un circuito a stella in un circuito a triangolo e vice versa. Come molte cosi nella elettrotecnica questi due sono duali.

### Come fare questa equivalenza?

Con questa equivalenza troviamo un equivalenza ai morsetti e non interna.

Un requisito è che:
- $\overline{Z}_{1}=\overline{Z}_{2}=\overline{Z}_{3}$ carico equilibrato

Questo requisito richiede che i numeri complessi siano uguali e non i moduli, in pratica è molto difficile però ci sono metodi (che non guarderemo) per cui si può andare più vicino.

Sovrapponendo i diagrammi stella e triangolo si trova:
<!Diagramma stella-triangolo>

Y è usato per i carichi in stella e il triangolo per i carichi in triangolo.

Guardando al diagramma stella:
<!Diagramma stella>

Tra 1 e 2:
$$\overline{Z}_{1Y}+\overline{Z}_{2Y}= \frac{\overline{Z}_{3△}(\overline{Z}_{1△} +\overline{Z}_{2△} )}{\overline{Z}_{1△} +\overline{Z}_{2△} +\overline{Z}_{3△} }  $$
Tra 2 e 3:
$$\overline{Z}_{2Y}+\overline{Z}_{3Y}=\frac{\overline{Z}_{1△}(\overline{Z}_{2△} +\overline{Z}_{3△} )}{\overline{Z}_{1△} +\overline{Z}_{2△} +\overline{Z}_{3△} }   $$
Tra 3 e 1:
$$\overline{Z}_{1Y}+\overline{Z}_{3Y}=\frac{\overline{Z}_{2△}(\overline{Z}_{1△} +\overline{Z}_{3△} )}{\overline{Z}_{1△} +\overline{Z}_{2△} +\overline{Z}_{3△} }   $$
Per isolare il carico 1 facciamo (12)+(31)-(23):
$$=2\overline{Z}_{1Y} = \frac{\cancel{ \overline{Z}_{1△} \overline{Z}_{2△} }+\overline{Z}_{2△}\overline{Z}_{3△}+\cancel{ \overline{Z}_{1△}\overline{Z}_{3△} }+\overline{Z}_{2△}\overline{Z}_{3△}-\cancel{ \overline{Z}_{1△}\overline{Z}_{3△} }-\cancel{ \overline{Z}_{1△}\overline{Z}_{2△} } }{\overline{Z}_{1△}+\overline{Z}_{2△}+\overline{Z}_{3△}   }          $$
$$\implies \overline{Z}_{1Y}=\frac{\overline{Z}_{2△}\overline{Z}_{3△}}{\overline{Z}_{1△}+\overline{Z}_{2△}+\overline{Z}_{3△}   } $$
Analogamente per 2 e 3:
$$\begin{gather}
\overline{Z}_{2Y}=\frac{\overline{Z}_{1△}\overline{Z}_{3△}}{\overline{Z}_{1△} +\overline{Z}_{2△} +\overline{Z}_{3△} } \\
\overline{Z}_{3Y} = \frac{\overline{Z}_{1△}\overline{Z}_{2△}}{\overline{Z}_{1△} +\overline{Z}_{2△} +\overline{Z}_{3△} }  
\end{gather}$$
Dato che: $\overline{Z}_{1△}=\overline{Z}_{2△}=\overline{Z}_{3△}\to \overline{Z}_{1Y}=\overline{Z}_{2Y}=\overline{Z}_{3Y}$
$$\implies \overline{Z}_{Y}=\frac{\overline{Z}_{△}}{3}  $$
Come detto prima stella e triangolo sono duali:

$$\overline{Y}_{1△}=\frac{\overline{Y}_{2Y}\overline{Y}_{3Y}}{\overline{Y}_{1Y} +\overline{Y}_{2Y} +\overline{Y}_{3Y} }   $$
dove: $$\overline{Y}_{1△}=\frac{1}{\overline{Z}_{1△} } $$
## Più insiemi di carichi

La rete trifase comincia sempre da una unica terna di generatori

<!Diagramma>

In questo caso la terna di generatori porta corrente a due nodi invece di uno. Questi due nodi presentano serie o parallelo e nessuna struttura binodale. Dato che i due nodi diversi partono dallo stesso nodo quindi li possiamo trattare come 2 sistemi binodali separati.

La spiegazione per li trattiamo come sistemi binodali, è perché un proprietà dei circuiti è che i generatori di tensione può esser spinto su ogni ramo connesso al ramo con il generatore di tensione iniziale.

<!Diagramma spingere generatore>

Riguardando il diagramma di prima abbiamo ora:

<!Diagramma originale con generatori spinti>

Questo diagramma se stesso può esser ridisegnato come:

<!Diagramma separazione dei binodali>

Tra il nodo O e A si ha la tensione:
$$\overline{V}_{AO}=\frac{\frac{\overline{E}_{1}}{\overline{Z}_{1} }+\frac{\overline{E}_{2}}{\overline{Z}_{2} }+\frac{\overline{E}_{3}}{\overline{Z}_{3} }}{\frac{1}{\overline{Z}_{1} }+\frac{1}{\overline{Z}_{2} }+\frac{1}{\overline{Z_{3}}_{} }}$$
Un carico ha tensione:
$$\overline{V}_{\overline{Z}_{1} }=\overline{E}_{1}-\overline{V}_{AO}   $$
E la tensione nello stesso carico è:
$$\overline{I}_{1}=\frac{\overline{V}_{\overline{Z}_{1} }}{\overline{Z}_{1} }$$
Sulla 3a e 2a fase la corrente può avere parte reale negativa quindi bisogna stare attenti:

<!Diagramma corrente negativa>

Per $V_{AO}$ i carichi che vanno verso al nodo B non hanno effetto sono detti carichi trasversali.
Per $V_{BO}$ i carichi che vanno verso al nodo A non hanno effetto sono detti carichi trasversali.

Ci sono variazioni di come i carichi sono posti e se ci sono carichi o no su diversi cavi, dobbiamo modificare la equazione di Millman per ogni occassione:

<!Diagramma caso>

## Potenza in Trifase

<!Diagramma Boucherot>

Possiamo calcolare la tensione con Boucherot usando la equazione:

$$\overline{A}_{}=\overline{V}_{}\underline{I}=P+jQ$$

### Wattmetri

I wattmetri misurano la potenza attiva su due cavi, questo è un problema in questo caso perché non si può fare con uno.

<!Diagramma wattmetri e posto su circuito>

Un wattmetro non indice la pulsazione, perché la pulsazione è in tutti e 3 i fili. Non indica la potenza vera in tutti e 3 i fili. Bisogna usare più di uno in posizioni opportune per trovare la potenza vera.

Se un wattmetro non è posto in una posizione giusta il wattmetro può modificare il circuito perciò non ci darebbe la potenza vera

<!Diagramma wattmetro messo male>


