---
creation_date: 2023-10-28 14:28
tags:
  - cosmac
share: true
---
# Lezione 10 - Cerchi di Mohr

## Cerchi di Mohr

![](Pasted%20image%2020231029213522.png)

Tutti i punti di $\sigma_{n}$ e $\tau_{n}$ sono tutti i punti nella area a tratti, include le circonferenze.

Gli sforzi principali sono i punti che giacciono sulla asse $\sigma$, questo ha senso perché sono i punti dove $\tau$ è cancellato.

Per convezione abbiamo: $\sigma_{1}=\sigma_{max}$ e $\sigma_{3}=\sigma_{min}$

Invece: $\tau_{max} = \frac{\sigma_{1}-\sigma_{3}}{2}$. Questo è lo stesso valore del raggio perché è il valore di $\tau$ massimo tra tutte le circonferenze che per un cerchio è la distanza un raggio in su dal centro della circonferenza.

Esistono $\tau$ positive e negative, nei cerchi di Mohr questo significa che $\tau_{xy}\neq \tau_{yx}$ perciò l'equilibrio di rotazione non vale, però il cerchio funziona quindi lo usiamo lo stesso.

![](Pasted%20image%2020231029213537.png)

![](Pasted%20image%2020231029213824.png)

Alcune equazioni importanti sono:

$$\begin{gather}
C = \frac{\sigma_{x}+\sigma_{y}}{2} \\
R = \sqrt{ \frac{(\sigma_{x}-\sigma_{y})^{2}}{2}+ \tau_{xy}^{2}} \\
\tan(2\alpha)=\frac{2\tau_{xy}}{\sigma_{x}-\sigma_{y}}
\end{gather}$$



Due punti a 90 gradi su in realtà sono 180 gradi sul piano di Mohr.

![](Pasted%20image%2020231029213849.png)


## Esempi

### Esempio 1

![](Pasted%20image%2020231029213917.png)

### Esempio 2

![](Pasted%20image%2020231029213941.png)

Sforzi e Mohr spiegati meglio in: [CdM - Esercitazione 7](CdM%20-%20Esercitazione%207.md)

