---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 19 - Misure di Massa e Forze, e Misure di Temperatura

$$\vec{F} = mg$$

La forza è un vettore, possiamo scomporlo in 3 parti, e vogliamo che il vettore su cui la forza agisce di più sia quello che misuriamo.

Misuriamo la massa usando la forza.

## Bilance g-sensibili

In queste bilance le misure basate su g
g non è costante quindi è un problema

## Prima Bilance

Queste bilance usavano il principio della leva per misurare la massa, si metteva un massa ignota vicino alla cerniera è una massa nota che poteva muoversi dall'altro lato. Bilanciamo la massa nota con quella ignota, troviamo la massa di quella ignota.
<!Diagramma prima bilancia>

## Bilancia Analitica

Quelle che conosciamo:

<!Diagramma bilancia analitica>

Il problema con questa è che se i bracci non sono identici allora è un problema, però se fatta bene la qualità dei risultati è molto buona quindi viene usata in casi dove importa la precisone e serve mantenere i costi bassi.

## Dinamometri

### Dinamometri a molla:

<!Diagramma dinamometro a molla e curva di linearità>

C'è una forza che agisce sulla molla che causa la sua compressione, misuriamo lo spostamento e vediamo come cambia rispetto alla forza.

### Dinamometro idraulico

<!Diagramma pg.16>

In questo caso abbiamo una pezzo su cui mettere la nostra massa, sotto a cui mettiamo la acqua ad una certa pressione, misuriamo questa pressione per vedere quanta massa abbiamo messo sopra.

Il fondo scala può esser molto elevato, e con diametro giusta il sistema riesce a reggere che è molto utile.

Costo molto basso dato che è 3 pezzi di metallo e dell'acqua o olio.

### Bilance Pneumatiche

<!Diagramma pg.17>

Anziché mettere acqua/ o olio si mette del gas. Sono scomodi perché il gas si può comprimere ma in casi dove importa la contaminazione in caso ci sia un perdita si può usare aria pulita che non causa contaminazione rispetto all'olio che ci sarebbe negl'idraulici. Per questo, le bilance pneumatiche sono usate nell'ambito medico.

Un altro svantaggio è data la compressione si possono fare solo misure statiche.

## Celle di Carico a deformazione (Estensimetriche)


<!Diagramma pg.18>

Per queste ci sono molte geometrie, per vari fondo scala, usi e sensibilità

### Esempi

Binocolo e anello:
<!Diagramma pg.19>

<!Diagramma pg.20>
Ci sono molti altri esempi, le forme sono quasi infinite.

Nelle celle si potrebbe usare misurato di spostamento ma non sono molti diffusi perché complicano la struttura rispetto alla semplicità degli estensimetri

Le celle di carico di solito proviamo a renderlo più rigide possibile per esser sicuri che non cambi il fondo scala.

## Materiali Piezoresistivi

I materiali piezo-resistivi sono materiali che quando viene applicata una forza aumentano la loro resistenza.

È possibile misurare le forze dinamiche e statiche.

Questi possono esser usati per misurare le forze se messi su un circuito addato per misurare la variazione nella loro resistenza come un ponte di Wheatstone.

## Dinamometri al quarzo

Funzionano con piezoelettrici, dove aumenta la carica con la forza applicata.

Tutti questi dinamometri hanno casse esterne che poi trasferiscono la forza la quarzo. Ci sono diversi tipi per diversi usi.

### Valori Tipici

- Portata massima: 10-100kN
- Banda passante: 1Hz- 70kHz
	- Non riesca misurare le forze costanti perché il piezoelettrico si scarica come nei piezo-accelerometri. Il campo di frequenze è lo stesso molto ampio
- Sensibilità: 4 pC/N
- Linearità: $\pm1\%$

Sono usati nei martelli dinamometrici, dove vengono messi alla punta per misurare la forza applicata, data la bassa passante molto grande possono misurare l'impatto che è velocita e a forze elevate senza problema.

## Celle di Carico Triassiale

<!Diagramma pg.35>

Per ogni direzione creiamo lasse del piezo giusta per misurare in quella direzione. Gli output non sono esattamente direzionali quindi bisogna elaborarli per isolare la forza in ogni direzione.

## Taratura Dinamometrica

Faccio un confronto con un'altro dinamometro con incertezza minore, sullo stesso segnale di acquisizione.

## Misure di Temperatura

Le misure di temperatura sono fatte abbastanza comunemente.

La temperatura é la proprietà che regola il trasferimento di energia termica.

La temperature non è facile da misurare, serve portare il misurando ad equilibrio termico con i misuratore.

La legge Zero delle termodinamica è che la temperature è intensiva non estensiva, servono molti campioni o un campione e una scala della temperatura per misurare la temperatura. Se abbiamo una scala possiamo fare un confronto per dire la temperatura.

Storicamente si sono fatti due punti noti e poi l'interpolazione lineare usando qualcosa come la dilatazione mercurio per fornire una scala.

### Scale Per misura di temperatura

Ci sono diversi modi con cui abbiamo creato scale nel passato:
- viaraizone di stato fisico
- variaione di volume
- variazione di proprietà elettriche
- variazione di irraggiamento

Costruzione:
La variazione dello stato fisico è stata usare per creare punti fissi come il punto triplo $\to$ usato perché è estremamente stabile
Gli altri 3 sono utilizzati per realizzare i termometri stessi.

Fahrenheit $\to$  0 = più basse che poteva misurare e 100 = temperatura del corpo

Scala Celsius $\to$ 0 = acqua e ghiaccio, e 100 = acqua bollente

La legge tra le due scale è:
$$t_{F} = \frac{9}{5}t_{c}+32$$

Scala Kelvin:
- Scala di temperature assoluta, basata sul ciclo di Carnot
- A dato un vincolo per definire la temperatura perché usando il ciclo di Carnot la temperatura ha un effetto fisico specifico che è specifico ad ogni temperatura
- 0K è la temperatura minima assoluta
- 273,15 acqua congela
- 273,16K punto triplo dell'acqua $\to$ punto fisso
- 373,15 acqua bolle.

#### Temperatura Termodinamica

La temperatura uguale a quella del gas ideale.

Non esistono gas ideali, ma nella condizioni giuste si possono approssimare.

#### Termometri a gas ideale

La logica su cui si basano le scale di temperatura moderne.

Oggi si usano tecnologie affidabili e pratiche per simulare il comportamento di un termometro a gas ideale e fornire temperature precise.

## Concetti Fondamentali ITS-90

### Concetto 1

$$C = K+273,15$$

Un K è $\frac{1}{273,16}$ della temperatura termodinamica dell'acqua al punto triplo

### Concetto 2

Intervallo da 0,65K fino a T$_{massimo}$ misurabile per le leggi di irraggiamento.

### Concetto 3

Punti fissi:
- punti di cambio di stato
- punto triplo dell'acqua

### Concetto 4

Usiamo diversi strumenti per diversi campi di misura:
<!Diagramma pg.25>

### Concetto 5

Definisce i valori forniti dai termometri campione in corrispondenza
dei punti fissi.

### Concetto 6

Definisce le funzioni interpolanti da adottare tra i vari punti fissi.

L’insieme di queste norme definisce una scala di temperature a
cui tutte le misure devono essere riferibili.







