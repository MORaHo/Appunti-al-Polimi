---
creation_date: 2023-10-11 16:15
tags:
  - PIE
parent: 
child: 
share: true
---
# Lezione 7 - Formula di Millman

## Ripasso

Equivalenze tra Thevenin e Norton
![](Pasted%20image%2020231020235130.png)

## Formula di Millman

![](Pasted%20image%2020231020235154.png)

Se ci fosse un generatore di tensione non isolato, la tensione sarebbe uguale a quella tensione.

$$V_{AB} = \frac{\frac{V_{1}}{R_{1}} - \frac{V_{2}}{R_{2}}+A_{3}-A_{4}}{\frac{1}{R_{1}}+\frac{1}{R_{2}}+\frac{1}{R_{3}}+\frac{1}{R_{4}}+\frac{1}{R_{5}}}$$
Le correnti sopra sono positive che hanno lo stesso verso di $V_{AB}$

### Dimostrazione

Cambiando i generatori di tensione isolati per generatori di corrente e resistenza in parallelo.

![](Pasted%20image%2020231020235210.png)

$A_{TOT} = \sum_{i}A_{i} = \underbrace{ A_{1} }_{ \frac{V_{1}}{R_{1}} }-\underbrace{ A_{2} }_{ \frac{V_{2}}{R_{2}} }+A_{3}-A_{4}$

$\frac{1}{R_{eq}} = \frac{1}{R_{1}}+\frac{1}{R_{2}}+\frac{1}{R_{3}}+\frac{1}{R_{4}}+\frac{1}{R_{5}}$

Il circuito puo' esser ridisegnato come:
![](Pasted%20image%2020231020235228.png)

Troviamo che $V = \frac{A_{TOT}}{\frac{1}{R_{eq}}}= \frac{\frac{V_{1}}{R_{1}}-\frac{V_{2}}{R_{2}}+A_{3}+A_{4}}{\frac{1}{R_{1}}+\frac{1}{R_{2}}+\frac{1}{R_{3}}+\frac{1}{R_{4}}+\frac{1}{R_{5}}}$

## Casi Particolari

![](Pasted%20image%2020231020235257.png)

Quello che e' evident si semplicifca.

![](Pasted%20image%2020231020235314.png)

$R_{12}=R_{1}+R_{2}$
$R_{45}=\frac{R_{4}R_{5}}{R_{4}+R_{5}}$

Si puo' togliere $R_{3}$ per il teorema di Norton

Cioe':
![](Pasted%20image%2020231020235341.png)

Si trova allora che la tensione non cambia ma solo la potenza erogata cambia. Questo e' importante solo internamente invece ai morsetti importano la tensione e la corrente.

Solo perche' si puo' togliere $R_{3}$ non significa che $V_{R_{3}} = 0$, significa che ai morsetti la esistenza di una resistenza non cambia niente. Questo e' perche' $V_{AB}$ e' uguale e $V_{R_{3}} = V_{AB}-V_{A}$

Nel caso di questo circuito si trova che:

$$V_{AB}= \frac{\left( \frac{V_{1}}{R_{1}}+A_{1}-A_{3}-\frac{V_{2}}{R_{45}} \right)}{\frac{1}{R_{12}}+\frac{1}{R_{45}}}$$
$V_{R_{12}} = V_{AB}-V_{1}$

$I_{1}=\frac{V_{R_{12}}}{R_{12}}$

In generale $R_{3}$ poteva esser scambiata per una rete:

![](Pasted%20image%2020231020235415.png)
Un generatore di corrente non esiste per utilizzi domestici.

Significa che:

![](Pasted%20image%2020231020235429.png)

Questo e' un caso particolare che e' il duale dell'altro caso particolare.

Norton: Cosa e' in serie con un generatore di corrente non importa, non cambia la corrente.

Thevenin: Cosa e' in parallelo con un generatore di tensione non importa, perche' la tensione non cambia.

## Esempio

Andremo sempre a semplificare le reti e non calcoleremo sistematicamente.

![](Pasted%20image%2020231020235446.png)

## Sinosoidale

Le macchine elettriche voglio frequenza basse, 50Hz era un compromesso fra i bisogni delle luci e delle macchine elettriche.

![](Pasted%20image%2020231020235504.png)

La corrente alternata e' piu' pericolosa, non ti cucina la carne, ma invece il corpo di adegua alla frequenza piu' elevata e dato che per esempio il cuore batta a 1Hz e la corrente e' a 50Hz si muove, i muscoli vanno in tensione e si muore.

Useremo la una variazione della trasfromata di Fourier per studiare in forma algebrica equazioni differenziali.



