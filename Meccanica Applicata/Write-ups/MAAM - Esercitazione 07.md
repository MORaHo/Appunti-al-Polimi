---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 7 - 

<!Diagramma tutti i casi di problemi visti>

Possiamo cambiare i sistema ad equivalenti cinematici, dato il caso della piano concava, possiamo cambiarla ad una cerniera a terra connessa ad un asta:

<!Diagramma piano concavo e equivalente cinematico>

Troviamo allora:
$$\begin{gather}
(R-r)\Omega  = wr \\
(R-r)\dot{\Omega} = \dot{w}\cdot  \frac{r}{R-r}
\end{gather}$$

Introducendo la cerniera $C_{\gamma}$ togliamo il piano e possiamo usare un sistema di riferimento traslante in C.

Proviamo con un sistema di riferimento rotante:
<!Diagramma con terna rotante>

Se vogliamo usare un sistema di riferimento allora dobbiamo usare le velocità angolare relative invece di quella assoluta del disco, perché è quella vista dal sistema di riferimento. Ergo:

$$\vec{w}_{d}^{REL} = \vec{w}_{d}^{ASS}-\vec{w}_{Rif}^{TRA}$$

Quello che dobbiamo fare è provare a risolvere molti tipi diversi di problemi:

<!Diagramma tipi diversi di problemi>

Prendiamo un problema del gliffo (?):
<!Diagramma problema gliffo>

Separiamo il sistema in 2 e tracciamo le traiettoria in tutti e due i sottosistemi:

<!Diagramma sottosistema e traiettorie>

La velocità sarà:


|     | $\vec{v}_{a}^{ASS}$ | $\vec{v}_{A}^{REL}$ | $\vec{v}_{A}^{TRA}$ |
| --- | ------------------- | ------------------- | ------------------- |
| M   | $wO_{2}A$           | ?                   | ?                   |
| D   | $\perp O_{2}A$      | $\parallel O_{1}B$  | $\perp O_{1}B$      |
La somma dei vettori sarà:

<!Diagramma somma vettori>

Da questa somma possiamo trovare il valore di $\Omega$ che prima era incognito:
$$|\Omega| = \frac{|\vec{v}_{a}^{TRA}|}{O_{1}A}$$

Le accelerazioni, le separiamo per sistema e troviamo:

|     | $\vec{a}_{An}^{ASS}$               | $\vec{a}_{nt}^{ASS}$ | $\vec{a}_{An}^{REL}$ | $\vec{a}_{At}^{REL}$ | $\vec{a}_{An}^{TRA}$               | $\vec{a}_{At}^{TRA}$ | $\vec{a}_{A}^{CO}$    |
| --- | ---------------------------------- | -------------------- | -------------------- | -------------------- | ---------------------------------- | -------------------- | --------------------- |
| M   | $w^{2}O_{2}A$                      | $\dot{w}O_{2}A$      | =0                   | ?                    | $\Omega^{2}O_{1}A$                 | ?                    | $2w_{rif}v_{A}^{REL}$ |
| D   | $\parallel O_{2}A$<br>$A\to O_{2}$ | $\perp O_{2}A$       | Rettilineo           | $\parallel O_{1}B$   | $\parallel O_{1}A$<br>$A\to O_{1}$ | $\perp O_{1}A$       | $\perp O_{1}A$        |

<!Diagramma somma di vettori di accelerazione>

Non sappiamo i valori dei due, ma con le frecce riusciamo a trovare $\dot{\Omega}$ che ci permette di trovare i valori delle frecce che non sappiamo:

$$|\dot{\Omega}| = \frac{|\vec{a}_{At}^{TRA}|}{O_{1}A}$$

Un'altro problema, separiamo e facciamo le traiettorie:

<!Diagramma separato e traiettorie>

Prendendo un'altro problema:

<!Problema e separazioni e traiettorie>

La velocità sarà:


| $\vec{v}_{c}^{ASS}$ | $\vec{v}_{c}^{REL}$ | $\vec{v}_{c}^{TRA}$ |
| ------------------- | ------------------- | ------------------- |
| $wO_{2}C$           | ?                   | ?                   |
| $\perp O_{2}C$      | $\parallel O_{2}B$  | $\perp O_{2}C$      |

<!Diagramma frecce velocità>

Troviamo la velocità del sistema di riferimento:
$$|\Omega| = \frac{|\vec{v}_{c}^{TRA}|}{O_{1}C}$$
La velocità del relativo sarà:
$$|\vec{\omega}_{d}^{REL}| = \frac{|\vec{v}_{c}^{REL}|}{r}$$
La velocità assoluta di rotazione del disco sarà:
$\vec{w}_{d}^{ASS}= \vec{w}_{d}^{REL}+\underbrace{ \vec{w}_{Rif} }_{ =\Omega }$

Il sistema che scegliamo ha effetto sulle variabili che abbiamo e le loro complessità, dato il problema:

<!Diagramma problema e sistema reparati>

Possiamo mettere il sistema sulla seconda asta in 3 modi diversi:

<!Diagramma 3 sistemi di riferimento diverso>

Le velocità che avremmo cambieranno con quello che usiamo. Scegliendo il sistema di riferimento adeguato semplifichiamo i nostri calcoli.