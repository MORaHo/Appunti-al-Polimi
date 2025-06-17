---
creation_date: 2023-10-05 14:52
tags:
  - PIE
parent: 
child: 
share: true
---
# Lezione 6 - Teorema di Norton

## Thevenin

<!Diagramma Ripasso>
![](Pasted%20image%2020231007234057.png)
## Teorema di Norton
Il teorema di Norton e' noto come il teorema duale di Thevenin perche' con il principio di dualita' nella elettrotecnica, si puo' ricavare il teorema di Norton dal teorema di Thevenin e vice versa.

Secondo Thevenin: Un circuito e' uguale ad un generatore di tensione in serie con una resistenza $R_{eq}$
Second Norton: Un circuito e' uguale ad un generatore di corrente in parallelo con un conduttanza $G_{eq}$.

Le ipotesi e partenza in questo teorema sono uguali al teorema di Thevenin.

Data una rete elettrica <u>lineare</u> $\Pi$ qualsiasi, allora:

<!Diagramma>
![](Pasted%20image%2020231007234132.png)

Attraverso il teorema di sostituzione cambiamo il bipolo per un generatore di tensione, e aggiungiamo due generatori di corrente in parallelo che anche in questo non cambiano il circuito.

<!Diagramma>
![](Pasted%20image%2020231007234151.png)

Per risolvere questo "nuovo" circuito usiamo il principio di sovrapposizione.
In un caso spegniamo la rete $\Pi$ e uno dei due generatori di corrente invece nell'altro spegniamo il generatore di tensione e l'altro generatore di corrente. 

<!Diagramma>
![](Pasted%20image%2020231007234212.png)

A sinistra troviamo $R_{eq}$ perche' e' la resistenza in vuoto, invece alla sinistra troviamo $I_{CC}$. Troviamo $I_{CC}$ perche' anche se c'e' un corto circuito se facciamo la legge di Kirchhoff al nodo sopra e sotto il generatore di corrente, si trova che $I_{\Pi}-I_{CC}-i = 0$, dato che $I_{\Pi}=I_{CC}$ , $i$ deve esser uguale a 0. Dato che $v = 0$ e $i=0$ dimostrano che il circuito a destra ha effetti nulli, significa che il teorema di Norton e' dimostrato.

## Uguaglianza

<!Diagramma>
![](Pasted%20image%2020231007234226.png)

Il teorema di Thevenin e Norton sono opposti e complementari, se il teorema di Norton e' applicato ad un circuito, applicando il teorema di Thevenin porta il circuito alla configurazione originale

### Applicazione di Thevenin ad un circuito in parallelo

<!Diagramma>
![](Pasted%20image%2020231007234245.png)
### Applicazione di Norton ad un circuito in serie

<!Diagramma>
![](Pasted%20image%2020231007234312.png)

## Casi dove i teoremi non si possono applicare

<!Diagramma>
![](Pasted%20image%2020231007234330.png)

Se il contorno di $\Pi$ e' disegnato tra $R_{3}$ e $R_{4}$, il teorema funziona. Invece se il contorno e' posto prima di $R_{3}$, e se si fa la legge di Kirchhoff al nodo dopo A, si trova che la legge e' impossibile. Tutto questo significa che il circuito puo' esser risolto ma dove e come si applicano i teoremi di Norton e Thevenin cambia la possibile di calcolare il risultato anche se esiste.
## Formula di Millman

Data una rete binodale, cioe' a soli due nodi come:

<!Diagramma>
![](Pasted%20image%2020231007234349.png)

Dove non ci sono generatori di tensione isolati ma invece accoppiati ad un utilizzatore, cioe':

<!Diagramma>
![](Pasted%20image%2020231007234411.png)
Quindi si puo' calcolare $V_{AB}$ facendo:
$$V_{AB} = \frac{\text{Correnti in corto circuito}}{\text{Resistenza equivalente}}$$
Che in questo caso viene fuori come:
$$V_{AB} = \frac{\frac{V_{1}}{R_{1}}+A_{2}-\frac{V_{3}}{R_{3}}-A_{4}}{\frac{1}{R_{1}}+\frac{1}{R_{2}}+\frac{1}{R_{3}}+\frac{1}{R_{4}}+\frac{1}{R_{5}}}$$
Le correnti in corto circuito sono tutte le correnti che sono generate da generatore di tensione o da rami in cui ci sono un generatore di tensione ed una resistenza e queste sono separate.
<!Diagramma>
![](Pasted%20image%2020231007234433.png)

Il verso delle corrente si puo' determinare dipendendo da se seguono la il senso di $V_{AB}$ quindi saranno positivi o se non seguono il senso di $V_{AB}$ quindi sono negativi. 