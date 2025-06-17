---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 15 - 

Il rendimento è noto dalla combinazione di moto cinematico e sistema dissipativo.

## Calcolo del Rendimento per sistema vite-madrevite

<!Diagramma vite-madrevite>

La madrevite è inibite dalla rotazione quindi deve traslare, questo implica un rapporto di trasmissione non adimensionale.

La somma della velocità relativa e assoluta ci trova la velocità di trascinamento orizzontale.

La velocità di trascinamento allora è:
$$v^{\text{tra}} = \frac{wD_{m}}{2}\cdot \tan\alpha$$

Possiamo creare il triangolo:
<!Diagramma dimensioni>

Per trovare la equazione di $\tan\alpha$ = $\frac{P}{\pi D_{m}}$

Ritornando alla velocità di trascinamento:

$$\implies v^{tra} = \frac{wD_{m}}{2}\cdot \frac{P}{\pi D_{m}} = \frac{wP}{2\pi}=v_{mv} \to \text{velocità di movimento}$$

## Rendimento del moto Diretto e Retrogrado

Prendiamo per esempio un sistema cinematico:

<!Diagramma cinematico diretto>

Le velocità saranno:

| $\vec{v}_{2}^{ASS}$ | $\vec{v}_{2}^{REL}$   | $\vec{v}^{TRA}$     |
| ------------------- | --------------------- | ------------------- |
| $v_{2}$             | $v_{2}^{REL}$         | $v_{1}$             |
| $\parallel \hat{j}$ | $\parallel\alpha$<br> | $\parallel \hat{i}$ |
Il triangolo sarà:

<!Diagramma velocità>

Troviamo:
$$v_{2}=v_{1}\tan\alpha$$

Studiamo ora la trasmissione di potenza con la dissipazione dall' attrito.

<!Diagramma cineto-statico>

Se non ci fosse $f_{D}$ allora:
$$|\Pi_{p}| = |\Pi_{f}|$$

Il rendimento con l'attrito sarà:

$$\eta_{D} = \frac{|\Pi_{u}|}{\Pi_{e}} = \frac{|\vec{P}\cdot \vec{v}_{2}|}{\vec{F}\cdot \vec{v}_{1}} = \frac{Pv_{2}}{Fv_{1}}$$

Le forze nei due corpi saranno disposte come:

<!Diagramma disposizione delle forze>

L'equilbrio vertical del secondo corpo è:
$$-P+N\cos\alpha-f_{d}N\sin\alpha=0$$
L'equilbrio orizzontale nel secondo corpo è:
$$F-N\sin\alpha-f_{d}N\cos\alpha=0$$

Sostituendo P e F nella equazione del rendimento troviamo:
$$=\frac{\cancel{ N }(\cos\alpha-f_{d}\sin\alpha)v_{2}}{\cancel{ N }(\sin\alpha+f_{d}\cos\alpha)v_{1}}$$

Troviamo allora che il rendimento non dipende dalle forze agenti ma dalla forma del sistema di trasmissione.

Consideriamo $f_d$ costante rispetto alla velocità (non è vero in realtà).

Sostituendo le velocità allora avremo:
$$\eta_d = \frac{1-f_{d}\tan\alpha}{(\tan\alpha+f_{d}) \frac{1}{\tan\alpha}}\implies \eta_{d} = \frac{1-f_{d}\tan\alpha}{1+\frac{f_{d}}{\tan\alpha}}$$

Cambiando la direzione delle forze agenti (cioè andando in retrogrado, supponendo che l'altro sia diretto):

<!Diagramma retrogrado>

Il rendimento in questo caso sarà:
$$\eta _{r} = \frac{|\Pi_{u}|}{\Pi_{e}} = \frac{|\vec{F}\cdot \vec{v}_{1}|}{\vec{P}\cdot \vec{v}_{2}} = \frac{Fv_{1}}{Pv_{2}}$$

Le forze nei due corpi sono disposte cosi:
<!Diagramma disposizione delle forze in retrogrado>

T non cambia verso perché dipende solo dalla velocità relative che non abbiamo cambiato.

L'equilibrio orizzontale nel corpo 1 è:
$$-F+N\sin\alpha-f_{d}N\cos\alpha=0$$
L'equilibrio verticale nel corpo 2 sarà invece:
$$P-N\cos\alpha-f_{d}N\sin\alpha=0$$

Il rendimento allora sarà:

$$\eta_{r} = \frac{N(\sin\alpha - f_{d}N\cos\alpha)}{N(\cos\alpha+f_{d}\sin\alpha)}\cdot \underbrace{ \frac{1}{\tan\alpha}}_{ \frac{v_{1}}{v_{2}} }$$

$$\eta_{r} = \frac{1-\frac{f_{d}}{\tan\alpha}}{\left( \frac{1}{\tan\alpha}+f_{d} \right)\tan\alpha} = \frac{1-\frac{f_{d}}{\tan\alpha}}{1+f_{d}\tan\alpha}$$

Il rendimento è simile ma non uguale, perché cambiato tutti i versi eccetto l'attrito.

Di solito se $\tan\alpha<1$ allora $\eta_{d}>\eta_{r}$

Verifica di $\eta_{d} > \eta_{r}$:

$$\begin{gather}
\frac{1-f_{d}\tan\alpha}{1+\frac{f_{d}}{\tan\alpha}} > \frac{1-\frac{f_{d}}{\tan\alpha}}{1+f_{d}\tan\alpha}\\
1-f_{d}^{2}\tan ^{2}\alpha > 1-\frac{f_{d}^{2}}{\tan ^{2}\alpha} \\
\cancel{ f_{d}^{2} }\tan ^{2}\alpha < \frac{\cancel{ f_{d}^{2} }}{\tan ^{2}\alpha} \\
\tan^{4}\alpha<1 \to \text{Condizione tale che }\eta_{d}>\eta_{r}
\end{gather}$$

In generale quando un riduttore agisce, il suo rendimento è migliore nella direzione della riduzione dell velocità.

> [!note] Diretto vs. Retrogrado
> Di dice che un moto è diretto se la potenza fluisce dal motore all'utilizzatore, invece è detto retrogrado se la potenza fluisce dall'utilizzatore al motore.

## Moto Diretto e Retrogrado su Sistemi MTU

Prendiamo un sistema MTU, con una trasmissione che ora ha rendimento diretto e retrogrado:

<!Diagramma MTU con i due rendimenti>

$$\Pi_{e}^{(M)} = (C_{m}w_{m}-J_{m}\dot{w}_{m}w_{m})$$
$$\Pi_{e}^{(u)} =  (C_{u}w_{u}-J_{u}\dot{w}_{u}w_{u})$$

Per definire il flusso della potenza dobbiamo definire se la potenza è positiva o negativo almeno in uno dei due lati, perché se una è positiva allora l'altra è negativa e riusciamo a determinare la direzione di flusso.

A regime ci sono due sistemi possibili:

| Caso | $C_{m}$ | $C_{u}$ | D/R |
| ---- | ------- | ------- | --- |
| 1)   | (+)     | (-)     | D   |
| 2)   | (-)     | (+)     | R   |

Nel transitorio invece ci sono 4 casi di possibili contributi di potenza:

| Caso | $C_{m}$ | $C_{u}$ | $\dot{w}$     | D/R                 |
| ---- | ------- | ------- | ------------- | ------------------- |
| 1)   | (+)     | (-)     | ?             | D $\to$ Sicuramente |
| 2)   | (-)     | (+)     | ?             | R $\to$ Sicuramente |
| 3)   | (+)     | (+)     | $\implies$(+) | ?                   |
| 4)   | (-)     | (-)     | $\implies$(-) | ?                   |

In tutti questi casi $w_{m}>0$

#### Caso 1 $\to$ Ipotesi di Diretto (idem ma opposto per 2)

$$\dot{w}_{m} = \frac{\eta C_{m}-\tau C_{u}}{\eta J_{m}+\tau^{2}J_{u}}$$
Se $\dot{w}_{m}>0$:
$$\Pi_{e}^{(u)} = \underbrace{ -C_{u}w_{u} }_{ <\:0 }\underbrace{ -J_{u}\dot{w}_{u}w_{u} }_{ <\:0 }\to se <0 \implies \Pi_{e}^{(M)}>0\implies D$$

Se $\dot{w}_{m}<0$:
$$\Pi_{e}^{(u)} = \underbrace{ -C_{u}w_{u} }_{ >\:0 }\underbrace{ -J_{u}\dot{w}_{u}w_{u} }_{ >\:0 }\to se >0 \implies \Pi_{e}^{(u)}<0\implies D$$

#### Caso 3 e 4

Prendiamo la accelerazione con l'ipotesi di retrogrado e mettiamo il rendimento alla destra perché non fa molta differenza, perché sono rendimenti diversi.

$$\dot{w}_{m} = \frac{-C_{m}-\tau C_{u}\eta_{r}}{J_{m}+\tau^{2}\eta_{r}J_{u}}$$

In questo caso nel denominatore mettiamo tutti e due negativi perché come detto nella tabella prendiamo tutti e due i loro contributi come negativi.

La accelerazione è negativa, quindi la potenza in entrata al motore e utilizzatore sono:

$$\begin{gather}
\Pi_{e}^{(u)} = \underbrace{ -C_{u}w_{u} }_{ <\:0 } \underbrace{ - J_{u}\dot{w}_{u}w_{u} }_{ >\:0 } = ? \\ 
\Pi_{e}^{(M)} = \underbrace{ -C_{m}w_{m} }_{ <\:0 } \underbrace{ - J_{m}\dot{w}_{m}w_{m} }_{ >\:0 } = ?
\end{gather}$$

La determinazione della potenza dipende dai valori individuali.

Se facciamo la ipotesi di nuovo che sia retrogrado, prendiamo una delle due accelerazioni e la calcoliamo usando la equazione sopra (o facendo un bilancio delle potenze per trovare l'equazione della accelerazione).
Avendo sostituito troviamo la potenza del sistema:

$$\dot{w}_{m}(R) \to(-C_{u}-J_{u}\dot{w}_{u})w_{u}$$

Ci chiediamo allora se $(-C_{u}-J_{u}\dot{w}_{u})$ è positivo allora ipotesti che abbiamo fatto è vera, invece se è negativa la ipotesi opposta è vera.

Tecnicamente si dovrebbe fare un'altro bilancio delle potenze e fare lo stesso processo, ma accettano il fatto che ci si mette del tempo quindi possiamo verificare uno vero o falso e gli va bene se prendiamo l'opposto se falso.

## Esempio (Caso 4) - Arresto del sistema, freno a lato motore

Diagramma del problema:
<!Diagramma diagramma esempio caso 4>

In questo caso la coppia generata dal motore è nulla e nel suo posto c'è una coppia frenante.

Facendo il bilancio delle potenze ipotizzando un moto retrogrado:

$$-C_{f}w_{m} - (1-\eta_{r})(-C_{u}\dot{w}_{u}w_{u}) - C_{u}w_{u} = J_{m}\dot{w}_{m}w_{m} + J_{u}\dot{w}_{u}w_{u}$$
$$\to-C_{f}w_{m} - \eta_{r}C_{u}\tau w_{m} = J_{m}\dot{w}_{m}w_{m} + \eta_{r}J_{u}\dot{w}_{u}w_{u}$$
$$\implies \dot{w}_{m} = - \frac{C_{f}+\eta_{r}\tau C_{u}}{J_{m}+\eta_{r}\tau^{2}J_{u}}$$
Da qui possiamo determinare se è retrogrado o no.

Rappresentazione del flusso delle potenze (dalla prima riga)

$$-C_{f}w_{m}-J_{m}\dot{w}_{m}w_{m}-(1-\eta_{r})\Pi_{e}^{(u)} - C_{u}w_{u}-J_{u}\dot{w_{u}}w_{u}=0$$

<!Diagramma rappresentazione>

## Corollario

Un metodo veloce per stabilire a priori la direzione nei casi 3 e 4

Se prendiamo per ipotesi il moto diretto, la accelerazione è:
$$\dot{w}_{m} = \frac{\eta_{d}C_{m}+\tau C_{u}}{\eta_{d}J_{m}+\tau^{2}C_{u}}$$

La potenza nel caso di verifichi il moto diretto è:
$$\begin{gather}
\Pi_{e}^{(M)} = -C_{m}w_{m} - J_{m}\dot{w}_{m}w_{m} = \left[ -C_{m}-\left( \frac{-\eta_{d}C_{m}+\tau C_{u}}{\eta_{d}J_{m}+\tau^{2}C_{u}} \right)\cdot J_{m} \right]\cdot w_{m} >0
\end{gather}$$

Questo semplifica è:

$$\begin{gather}
J_{m}\cdot \frac{\eta_{d}C_{m}+\tau C_{u}}{\eta_{d}J_{m}+\tau^{2}C_{u}}>C_{m} \\
\implies \frac{\eta_{d}C_{m}+\tau C_{u}}{C_{m}} > \frac{\eta_{d}J_{m}+\tau^{2}J_{u}}{J_{m}} \\
\cancel{ \eta_{d} }+\frac{\tau C_{u}}{C_{m}} > \cancel{ \eta_{d} }+\frac{\tau^{2}J_{u}}{J_{m}} \\\boxed{ 
\frac{C_{m}}{\tau C_{_{u}}} < \frac{J_{m}}{\tau^{2}J_{u}} }
\end{gather}$$

Quest'ultima è la condizione nel caso 4 per cui è diretto.

È possibile fare un rappresentazione grafica che è:

<!Diagramma D/R con coppie in asse>




