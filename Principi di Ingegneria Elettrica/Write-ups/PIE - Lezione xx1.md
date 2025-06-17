---
creation_date: 2023-12-05 22:30
tags:
  - PIE
share: true
---
# Lezione 21 - Trasformatori

<!Diagramma trasformatore inizio>

In corrente continua non varia $\Psi$, significa che l'induttore non genera resistenza e per cio il circuito diventa generatore e filo in corto circuito

In corrente alternata invece si ha:

$$\begin{gather}
v_{1}=\frac{d\Psi_{1}}{dt}=\frac{N_{1}d\varphi}{dt} \\
v_{2} = \frac{d\Psi_{2}}{dt} = \frac{N_{2}d\varphi}{dt} \\
\implies \frac{v_{1}}{v_{2}}=\frac{N_{1}}{N_{2}} \\
\text{se } \frac{v_{1}}{v_{2}}>1 \text{ è detto abbassatore} \\
\text{se } \frac{v_{1}}{v_{2}} <1 \text{è detto inalzatore}
\end{gather}$$

Aggiungendo la resistenza alla destra possiamo regolare la corrente che generiamo:

<!Diagramma con resistenza aggiunga>

$$\frac{i_{2}}{i_{1}}=\frac{N_{1}}{N_{2}}$$
$$\implies N_{1}i_{1}=N_{2}i_{2}$$

Mettendo tutti insieme abbiamo:
$$\boxed{ \frac{v_{1}}{v_{2}}=\frac{i_{1}}{i_{2}}=\frac{N_{1}}{N_{2}} = K } \to \text{rapporto di trasformazione}$$

Dato che:
$$v_{1}=Kv_{2}$$
E che:
$$i_{1}=\frac{1}{K}i_{2}$$
Mettendo tutto insieme abbiamo:
$$v_{1}i_{1} = Kv_{2}\cdot \frac{1}{K}i_{2} = v_{2}i_{2}$$

Sostanzialmente questa ultima equazione implica che il trasformatore assorbe potenza al primario con tensione $v_1$ e corrente $i_{1}$ ed eroga questa potenza a tensione $v_2$ e corrente $i_{2}$ che possiamo regolare per avere gli effetti desiderati.

## Valori Nominali

Nella pratica ogni trasformatore che compriamo avrà dei valori nominali. In generale questi valori saranno:
$V_{1,n}$,$V_{2n}$,$I_{1n}$ e $I_{2n}$, viene aggiunta anche la potenza attiva:

$A_{n}=V_{1n}I_{1n}=V_{2n}I_{2n}$.

In generale questi valori sono le grandezze di progetto per la macchina. Questi valori sono le prestazioni che la macchine riesca a sostenere 24 ore su 24, per la sua vita utile, non sono i parametri massimi (anche se li prendiamo come massimi), sono come è stato progettato per questi vincoli. 
Si può andare oltre questi valori ma non è garantita la vita utile che viene data ai valori nominali.

La tensione è quella che vogliamo massimizzare perché viaggi a lunghe distanze.
Le tension alte di possono isolare la gomma, ma le correnti alte riscaldano la gomma quindi è sempre meglio correnti basse.

Serve tensione alta e perciò corrente bassa perché a lunghe distanze la resistenza del filo è la unica perdita che abbiamo ed è alta data la lunghezza del filo, quindi minimizzando la corrente possiamo minimizzare le perdite:

<!Diagramma perdita di potenza>

## Imperfezioni nei trasformatori

Ricavando le imperfezioni con il nostro modello possiamo creare un modello più corrento per i nostri calcoli e progettazione.
### Permeabilità del ferro

Non possiamo più trascurare la permeabilità del ferro, per progettare un trasformatore bene serve che la consideriamo.


Togliendo la trascurabilità del ferro ci accorgiamo che serve una forza magneto-motrice di base tale che il flusso si mantenga e perciò le leggi di Kirchhoff non siano rotte.
Per questa ragione aggiungiamo un generatore di forza magneto-motrice tale che non rompiamo le leggi:

<!Diagramma circuito>

Andando alla rappresentazione del trasformatore intero, per primo cambiamo la rappresentazione a due induttore con spazio tra loro e per secondo aggiungiamo la resistenza del ferro che viene rappresentata da un induttore perché effettivamente è una induttanza attaccata all'induttore con equazione:

$$L_{o}=\frac{N_{1}^{2}}{\theta_{Fe}}$$
Questo significa che la corrente che entra nel sistema non è $i_{1}$ ma invece $i_{0}+i_{1}$:
<!Diagramma con i0+i1>

La rappresentazione circuitale ci di questo diventa:
<!Diagramma con due generatori di forza magneto-motrici>

### Dissipazione per l'aria

Dobbiamo riconoscere che la bovina anche se la attacchiamo al ferro avrà sempre un'pò di aria nel mezzo, questo significa che un'pò del flusso viene dissipato per l'aria. Per rimediare aggiungiamo delle induttanze dissipative a tutti e due i lati.

<!Diagramma dissipazione per l'aria>

### Resistenza del Rame

Il rame che viene usato per le bovine ha una resistenza anche lui, per questo aggiungiamo una resistenza a destra e una a sinistra per rimediamo questo. Sembra piccolo ma data l'altro rendimento del trasformatore ha effetto sul risultato.

### Perdite per Isteresi

Il ferro ha un diagramma di isteresi:

<!Diagramma di isteresi>

Ci ricordiamo che la differenza nell'area del grafico $\Psi-i$ è il lavoro accumulato dall'induttore.

Anche se stiamo nel campo linea, ad alta frequenza la somma di tutte queste aree inizia ad accumulare molto e significa che abbiamo delle perdite per riscaldamento.

Per rimediare queste perdite nei calcoli aggiungiamo una resistenza intorno alla induttanza di base.

### Correnti Parassitiche

Nel ferro, i flussi che passa attraverso sono come molte bovine in corto circuito, questa bovine immaginarie interne generano correnti che generano flussi contrastanti al flusso che passa per il ferro, questa correnti sono dette parassitiche:

<!Diagramma correnti parassitiche>

Per limitare queste correnti possiamo dividere la sezioni in molte parti e mettere insieme molti pezzi. Però a frequenze industriali questo non basta quindi il ferro viene rimpiazzato da polveri di ferrite, che aiutano anche con le perdite per isteresi.

# 

Mettendo tutti insieme abbiamo un circuito nuovo più rappresentativo dei trasformatori che è:

<!Diagramma con tutto messo insieme>

## Resistenze Muovibili

Possiamo spostare le resistenze tra lati del trasformatore per facilitare i calcoli.

<!Diagramma resistenza>

In questo esempio possiamo riscrivere $R_{2}$ come $R_{1}=\frac{R_{2}i_{2}^{2}}{i_{1}^{2}}=R_{2}K^{2}$

Non importa esternamente dove R è posto se $R_{2}$ è a destra e se lo vogliamo a sinistra basta che $R_{1}=R_{2}K^{2}$