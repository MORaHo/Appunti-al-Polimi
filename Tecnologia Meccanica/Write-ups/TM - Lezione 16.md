---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 16 - 

Laminazione può produrre pezzi a 25 $\frac{m}{s}$, questo può cambiare in base al materiale che stiamo laminando.

## Tipologie di Laminatoi

<!Diagramma pg.27>

- Duo:
	- 2 cilindri
	- continuo
	- Serve molto spazio
- Trio
	- 3 cilindri
	- Non continuo, deve esser ritirato e messo in basso
	- Serve meno spazio del duo, fatto apposta
- Incastellati
	- 4 cilindri
	- Continuo
	- Inflessione impedita
	- Perché $\overline{L}_{} = \sqrt{ R\Delta h }$ per mantenere L = cost e aumentare $\Delta h$
- Incastellato a 6
	- 6 cilindri
- Tandem
	- Serie di cilindri $\to$ 2n cilindri
	- n riduzioni successive
	- Riduce spazi e tempo di laminazione
	- Velocità di uscita aumenta con ogni riduzione
	- Per alte produttività

Per la laminazione a freddo l'uso di cilindri incastellati e molto comune, specialmente per pezzi fini

<!Diagramma pg.28>

Sistemi a molti cilindri sono usati per laminare acciai auto-resistenti in carrozze di macchine.

## Laminazione di Calibratura

Usato per produrre barre di forme specifiche:
- e.g T,doppia T,L,C,etc.
- Usato anche per creare rotaie
- Sezione quadrata e cilindrica

### Obbiettivo
L'obbiettivo di questa lavorazione è:
- Creare un forma specifica
- Imporre proprietà meccaniche
- Avere precisone superficiale

### Problemi

Il problema principale con la calibrature è che servono molti passi per portare il pezzo al forma finale.

<!Diagramma pg.31>

Questo però aiuta a non rompere il materiale, ed è più facile controllare le dimensioni e tolleranze. Ci sono regole empiriche per determinare il numero di passi minimo, queste regole posso esser assistite anche da programmi di simulazione.

### Calcolo del Numero di Passi

Dato:
$$\begin{gather}
A_{e} \to \text{sezione in entrata} \\
A_{u} \to \text{sezione in uscita} \\ \\
\lambda_{t} = \frac{l_{u}}{l_{e}} = \frac{A_{e}}{A_{u}} \\
\end{gather}$$

Per ogni sezione vale che $A_{e} = \lambda _tA_{u}$.

Se ipotizziamo n-passaggi, e prendiamo $1<i<n$, vale allora:

$$A_{i-1} = \lambda_{i}A_{i}=\lambda_{i}\lambda_{i+1}A_{i+1}$$

$$A_{e} = \lambda_{1}\cdot\lambda_{2}\cdot... \cdot\lambda_{i}\cdot...\cdot\lambda_{n-1}\cdot\lambda_{n}\cdot A_{u}$$

Prendiamo $\lambda_{m}$ come coefficiente di allungamento medio, dove:
$$A_{e} = \lambda_{m}^{n}A_{u}$$
Il coefficiente $\lambda_{m}$ è determinato da esperienza ed empiria, dove $1,25<\lambda_{m}<1,8$.

$$\ln(\lambda _{m}^{n}) = \frac{A_{e}}{A_{u}}\ln\lambda_{t}$$
$$n\cdot\ln\lambda_{m} = \ln\lambda_{t} \implies n = \frac{\ln\lambda_{t}}{\ln\lambda_{m}}$$

## Processi di Nicchia/ Specifici

### Rullatura (Thread Rolling)

<!Diagramma pg.42>

Questo è il processo usato per produrre filettatura su viti e bulloni.
Per conservazione di volume prendiamo un cilindro con diametro intermedio al massimo e minimo finale, cosi il materiale che togliamo per creare i minimi vengono molti nei punti massimi.

Si cambia la direzione delle fibre, cambiano ad esser parallele alla filettatura.

I vantaggi del thread-rolling sono:
- Alti lotti di produzione facili
- Fibre allineate
- Zero scarti
Gli svantaggi sono:
- Costo delle matrice che lo rende possibile solo ad alti lotti.

### Laminazione di Anelli (Ring Rolling)

Questo processi usa due matrici per creare anelli, ed è usato nella creazione delle palline e corone nei cuscinetti. È usato per creare anche altra roba.

Per conservazione di volume dato che stiamo riducendo la sezione deve aumentare il perimetro dell'anello.

> [!note] 
> Non ero felice con i miei appunti perché non sono riuscito a concentrarmi durante la lezione, quindi ho riguardato la lezione da questo punto in poi, perciò gli appunti saranno basati sul bis invece degli appunti originali

### Laminazione Mannesmann

La laminazione Mannessmann è un metodo di creazione di tubi cavi senza saldatura, è specialmente usato per la creazione di tubi di grandi dimensioni. Consistente in due fasi che sono la foratura e la riduzione di spessore.

#### Foratura

<!Diagramma foratura>

Questo processo consiste nel rotolamento di una cilindro metallico tra 2 rulli sghembi e spingere un mandrino nel cilindro.

La punta del mandrino non è quella che crea il foro. Usiamo i rulli sghembi perché nel loro rotolamento creano delle forze di trazione che tirano e creano il foro microscopico che poi è espolitato ed espando dalla punta del mandrino.

<!Diagramma basso-destra pg.43>

Dato che stiamo strappando il materiale per creare il foro iniziale la precisione superficiale interna è basse, perciò servono processi di asportazione successivi per migliorarla.

#### Passo del Pellegrino/ Riduzione di Spessore

<!Diagramma pg.47>

In questo passo riduciamo lo spessore usando rulli fatti apporta per portare il pezzo 2 passi avanti e 1 indietro, questo ci permette di avere uno spessore stabile nella struttura intera. Nel processo di riduzione dello spessore, la precisione superficiale aumenta. Questo processo toglie anche gli ossidi che si formano se superfice è calda.

Il processo è più complesso di questo ma ci vorrebbe un corso intero per imparare tutto, questa è solo una *overview*.

## Estrusione

La estrusione non è un processo complicato in base, si spinge un pezzo di metallo caldo o freddo attraverso una matrice.

I pezzi ricavati nella estrusione sono detti di avere un profilo 2.5D, perché hanno un profilo articolato ed una terza dimensione che è una protrusione di tale profilo, cioè e molto semplice.

La estrusione è nota comunemente per l'alluminio e le sue leghe, ma in verità si possono estrudere molti metalli inclusi l'alluminio, rame, ottone, acciaio e titanio.

La estrusione di acciaio non è comune ma è presente e quella di titanio è di nicchia.

Pezzi estrusi sono usati nelle finestre, porte, strutture e telai.

Dato che di solito vengono aggiunte cavità interne sono noti come pezzi isolanti. È il profilo è ottimizzabile.


### Come avviene l'estrusione?

#### Estrusione Diretta

Il processo di estrusione diretta è come ce lo immagineremmo.
Si spinge una billetta di metallo attraverso un matrice con un pistone, e un estrusione esce nella stessa direzione del movimento del pistone.

<!Diagramma pg.35>

La matrice ha un profilo che ci permette di avere la deformazione che vogliamo.

La billetta è <u>spesso</u> pre-riscaldata per esser più malleable nella estrusione, si può avere estrusione anche a freddo, ma comporta forze più elevate per accomodate tale estrusione.

Il pistone deve fare un lavoro ideale, poi dato il contatto con le pareti della camera di genera un attrito che dobbiamo tenere a conto. 
C'è anche una deformazione delle fibre che dobbiamo tenere a conto con il lavoro di distorsione, questo occorre nel passaggio attraverso la matrice, e può esser accomodato.

C'è una deformazione intrinseca negli estrusi genera che dovranno esser raddrizzati.

#### Estrusione Diretta di Profili Cavi

<!Diagramma pg.36>

Si utilizza un pistone con un mandrino alla sua estremità con il profilo cavo voluto.

Dobbiamo tenere a conto anche dell'usura del mandrino.

#### Matrici per l'estrusione di tubi 

<!Diagramma pg.37>

Nella estrusione dei tubi si usa uno spider (un sistema di razze) per tenere una matrice interna in aria. Il metallo è separato e visto che in questo caso deve esser pre-riscaldato il metallo si auto-risalda per permette la deformazione voluta.

Sfruttando la saldabilità si possono creare anche forme complesse, perciò è il metodo usato per la creazione di strutture più complesse.

#### Estrusione Inversa

Simile alla estrusione diretta, la estrusione inversa vede una estrusione nella direzione opposta al movimento del pistone.

La estrusione inversa occorre in due modi. Il primo è un pistone che ha una matrice interna ed estrusione il pezzo dentro a se stesso, nell'altro caso il pistone usa le pareti della camera di estrusione come forma per estrudere un pezzo cavo.

<!Diagramma pg.38>

##### Vantaggi

Il vantaggio di questo processo è che c'è meno attrito, questo è perché la matrice è con il pistone, il materiale rimane fermo quindi ha interazioni con le pareti della camera ridotte e perciò attrito minimizzato.


##### Svantaggi

Il pistone è cavo o più piccolo quindi la resistenza è minore.

Il pistone deve esser lungo o con una architettura complessa per poter estrarre i pezzi.

### Distorsione della Struttura Interna

<!Diagramma pg.39>

Dato che dobbiamo fare passare il pezzo per la matrice ci saranno grandi deformazioni e distorsione.

Per determinare la distorsione si può aprire la billetta prima di estrusione, incidere una matrice abbastanza piccola che non abbia effetto, risaldare il pezzo e poi estrudere. Alla fine delle estrusione si può ri-aprire e vedere come la struttura di deforma.

La distorsione cambia in base all'angolo dell'ingresso alla matrice.

- se $\alpha$ = 90

<!Diagramma distorsione a 90 gradi>

In questo caso si crea un zona morta di amteriale che non fluisce, si forma naturalmente $\alpha _s$

In questo caso la distorsione è massima.

- se $\alpha=\alpha_{s}$

<!Diagramma uguale all'angolo di scorrimento>

Riducendo $\alpha$ si accompagna il pezzo verso la matrice riducendo la distorsione delle fibre interne al pezzo.

- se $\alpha<\alpha_{s}$

<!Diagramma meno dell'angolo di scorrimento>

Questo è il caso con la distorsione minore.

Troviamo che cambiando l'angolo della matrice cambia la distorsione, ma cambia anche l'attrito. Questo è perché riducendo l'angolo l'area che è coperta dalla billetta prima della matrice è maggiore ergo aumento l'attrito.

Possiamo allora creare la matrice:


|                     | Distorsione | Attrito |
| ------------------- | ----------- | ------- |
| $\alpha=90$         | Massimo     | Minimo  |
| $\alpha=\alpha_{s}$ | Neutro      | Neutro  |
| $\alpha<\alpha_{s}$ | Minimo      | Massimo |

La scelta dell'angolo allora è un trade-off tra distorsione, attrito e deformazione.





