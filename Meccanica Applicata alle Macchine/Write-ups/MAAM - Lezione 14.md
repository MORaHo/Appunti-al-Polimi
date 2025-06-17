---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 14 - 

In questa lezione guardiamo sistemi con 3 elementi:

<!Diagramma sistema>

$J_{m}$ contiene l'effetto inerziale di tutti gli element interni al motore. Descriviamo il motore con parametri $J_{\tiny{M}}$, $C_{\tiny{M}}$, $w_{\tiny{M}}$ e Z che è il parametro caratteristico, un parametro in che curva di funzionamento il nostro motore funziona.

$\tau$ è il rapporto di trasmissione, dove $w_{u} = \tau w_{\tiny{M}}$. Di solito la trasmissione riduce, cioè $\tau<1$. È vantaggioso avere $w_{\tiny{M}}$ e poi se vogliamo possiamo aumentare la coppia che ricaviamo. 

L'utilizzare può esser visto come una coppia, una velocità rotazionale e un parametro di regolazione.

Studiamo alcune delle curva caratteristiche dei motore.

## Curve Caratteristiche Ideale per Motore

<!Diagramma curve caratteristiche>

La curva bianca è il motore ideale generatore di coppia, il fatto che a $w=0$ riesce a generare una coppia significa che riesce ad accendersi da solo. 

La curva verde è il motore ideale generatore di velocità, questo deve esser iniziato da una sorgente esterna.

La curva blue è la curva ideale della potenza costante.

## Curve Reali Elettrici

Le curve reali sono una somma delle curve ideali.

### Motore a corrente continua a magneti permanenti

<!Diagramma motore cc.m.p>

La coppia coppa generata dal motore è:
$$C_{m} = C_{o}\left( 1-\frac{w_{m}}{w_{M_{o}}} \right)$$
La curva che ricaviamo è determinata dalla corrente di alimentazione. A $w_{m}=0$ può generata $C_{o}$ che significa che si avvia autonomamente.

Si può funzionare nel campo intero fino alla curva massima, basta che si applica la corrente appropriata.

Se si vuole lavorare a $w>w_{M_{o}}$ bisogna trascinare il motore, visto che la coppia che genera è negativa.

### Motore a corrente alternata asincrono trifase

<!Diagramma motore c.a.a.t>

La frequenza nominale è la frequenza a cui il motore è stato progettato per lavorare 24 ore su 24, senza riscaldarsi.

La velocità angolare di sincronismo è:
$$w_{s} = \frac{2\pi f_{a}}{P}$$
Dove P è il numero di coppia orarie.

$w_{nom} \approx (95-99)\%\cdot w_{s}$
$C_{o}\approx (1,8-2,2)\cdot C_{nom}$
$C_{max} = (2-2,5)\cdot C_{nom}$

Asincrono significa che la velocità di rotazione non è uguale a quella di alimentazione, in questo caso si usano avvolgimenti (nei sincroni si usano magneti permanenti) per generare la induzione che gira il rotore.
### Motore in corrente alternata comandato da inverter

In inverter è un meccanismo che prende una corrente ad una certa frequenze ed emette una corrente a frequenza diversa.

<!Diagramma motore c.a.c.i>

In questo motore ci sono 2 metodi di funzionamento, nel primo e terzo quartile il motore agisce come motore ed aggiunge potenza al sistema. Nel secondo e quarto quartile la coppia e frequenza hanno segno opposto, questo significa che il motore agisce con un freno per il sistema assorbendo potenza, questo funzionamento è utile per le macchine automatiche.

Il ciclo deve esser all'interno del confine del motore.

## Motori a Combustione Interna

<!Diagramma motori a combustione interna>

La curva va in alto più si aumenta la ammissione, cioè quanto spingiamo sull'acceleratore.

Si vede che nella linea minima, cioè quando non si sta spingendo sull'acceleratore a frequenze alte il motore agisce come un freno naturale.

Dato che la curve è taglia alle estremità, alla sinistra naturalmente e alla destra artificialmente, non c'è $C_{o}$, questo significa che il motore ha bisogno di un sistema prima di esser avviato.

## Trasmissione

Per ora prendiamo la trasmissione come una scatola nera dove mettiamo un coppia e una frequenza ed esce una coppia ed una frequenza.

<!Diagramma trasmissione>

Diciamo che:$w_{2}=\tau w_{1}$

In una trasmissione ideale si ha:
$$C_{1}w_{1}=|C_{2}|w_{2} \to \Pi_{1} = |\Pi_{2}|$$

In realtà la trasmissione ha un rendimento per la potenza persa:
<!Diagramma trasmissione di potenza>

Prendiamo il rendimento come: $\eta = \frac{|\Pi_{2}|}{\Pi_{1}}$ e $-\Pi_{2}=|\Pi_{2}|$

A regime abbiamo:
$$\Pi_{1}+\Pi_{2}+\Pi_{p}=0$$
$$\implies \Pi_{p} = -\Pi_{1}-\Pi_{2} = -\Pi_{1}+|\Pi_{2}| = -\Pi_{1}+\eta \Pi_{1} = (1-\eta)\Pi_{1}$$

## Studio del sistema motore, trasmssione, utilizzatore

<!Diagramma sistema con motore isolato>

Il bilancio delle potenze del sistema sarà:
$$\begin{gather}
\vec{C_{m}}\cdot \vec{w_{m}} + \Pi_{p}+\vec{C}_{u}\cdot \vec{w_{u}} = J_{\tiny{m}}\cdot \vec{\dot{w}}_{m}\cdot \vec{w}_{m} + J_{u}\cdot\vec{\dot{w}}_{u}\cdot w_{u} \\
C_{m}w_{m} - (1-\eta)\Pi^{(m)}_{e} -C_{u}w_{u} = J_{m}\dot{w}_{m}w_{m} + J_{u}\dot{w}_{u}w_{u}
\end{gather}$$

$\Pi_{e}^{(m)}$ è la potenza emessa dal motore.

Isolando il motore e facendo il bilancio della potenza parziali:

<!Diagramma motore isolato>

$$C_{m}w_{m}-\Pi_{e}^{(m)} = J_{m}\dot{w}_{m}w_{m}$$
$$\Pi_{e}^{(m)} = C_{m}w_{m} - J_{m}\dot{w}_{m}w_{m}$$

Si vede che una parte della potenza serve per mantenere il motore alla velocità stessa, quindi la potenza generata è maggiore di quella emessa.

Ritornando al sistema intero troviamo che:

$$C_{m}\cdot \cancel{ w_{m} } -(1-\eta)(C_{m}\cancel{ w_{m} }-J_{m}\dot{w}_{m}\cancel{ w_{m} }) - C_{u}\tau \cancel{ w_{m} } = J_{m}\dot{w}_{m}\cancel{ w_{m} }+J_{u}\tau \dot{w_{m}}\tau \cancel{ w_{m} }$$
$$\eta C_{m}-\tau C_{u} = (\eta J_{m}+\tau^{2}J_{u})\dot{w}_{m}$$

$$\implies \boxed{ \dot{w}_{m} = \frac{\eta C_{m}-\tau C_{u}}{\eta J_{m}+\tau^{2}J_{u}} }$$

Vero per coppie costanti, cambia quando le coppie sono dipendenti da $w$. 

Prendendo per esempio un motore a corrente continua con magneti permanenti:

<!Diagramma motore preso>

Preso $\tau<1$, troviamo a $\overline{w}_{m}$ la frequenza dove $\dot{w}_{m}=0$, questo è perché dato il rendimento della coppia, troviamo $\tau C_{u}$ che è uguale a $\eta C_{m}$, visto che questi due sono uguali i denominatore della equazione di $\dot{w}_{m}$ è zero, diciamo che $\overline{w}_{m}$ è la frequenza dove il sistema è a regime, cioè dove la accelerazione è zero.


### Rappresentazione Grafica di Flusso di Potenza

<!Diagramma rappresentazione grafica di flusso di potenza>

## Accelerazione se coppia è funzione della frequenza

Se la coppia è funzione della frequenza allora:

$$\dot{w}_{m} = \frac{\eta C_{m}(w_{m})-\tau C_{u}(\tau w_{m})}{\eta J_{m}-\tau^{2}J_{u}}\to \frac{dw}{dt} =f(w_{m})\to w_{m}(t)$$

### Transitorio di avviamento

La accelerazione in funzione della frequenza è molto importante nell'avviamento.

Prendendo il motore come a corrente continua abbiamo il motore che è:

<!Diagramma motore continua per avviamento>

Dato che $$\dot{w_{m}} = \frac{\eta C_{m}-\tau C_{u}}{J_{eq}}$$
A $\overline{w}_{m}$ il sistema è a regime, con $\tau C_{u} = \dot{w}_{M_{o}}J_{eq}=\eta C_{m}$ .

La velocità angolare in funzione del tempo prima di arrivare alla velocità di regime, aumenta con un sistema di primo ordine:

<!Diagramma aumento fino alla velocità di regime>

Questo è perché all'aumentare della velocità, la differenza tra $\eta C_{m}$ a $w$ e $\dot{w}_{M_{0}}J_{eq}$ diminuiscono, questo significa che $\dot{w}_{m}$ diminuisce e allora rallenta anche quanto sta aumentano la velocità.



