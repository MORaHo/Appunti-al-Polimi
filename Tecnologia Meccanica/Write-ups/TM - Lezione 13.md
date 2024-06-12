---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 13 - 

Questa è solo una 1 ora perché poi ci sono state 2 ore di esercitazione.

La forgiatura di solito usa molti passi per portare alla forma finale.

Nella forgiatura viene appoggiata la billetta e comprimiamo con una certa forza. Inizialmente agisce come una forgiatura libera e poi se ci sono i muri laterali agiscono anche loro per definire la forma del pezzo.

Guardando il grafico di forza-corsa, vediamo che appena inizia a formari la bava iniziano ad agire i muri.

<!Diagramma forza-corsa>

Usiamo formula semi-empiriche per capire le forze:
$$F_{max} = k_{p}Y_{f}A$$

$k_{p}$ è il coefficiente di attrito e dipende dal processo:

Se il processo è con bava può avere valori in base alla complessità:
- semplice $\to$ 6
- media $\to$ 8
- complessa $\to$ 10
Senza bava dipende dal processo:
- coniatura $\to$ 6
- forma complesse $\to$ 8

La coniatura è il processo di stampare disegni su monete ed è una processo di forgiatura libero.

La energia che usiamo durante la forgiatura è:
$$E = c\lambda F_{max}$$
con $\lambda = 0,15 -0,25$ e la corsa c della pressa.

$F_{max}$ è la forza massima che riusciamo ad esercitare. Mettendo tutto insieme possiamo trovare un limite e da li determinare la energia:
<!Diagramma energia con F_max>

## Macchine di Forgiatura

Le due macchine che completano la forgiature si chiamano presse e maglie.

Le presse generano pressione per la applicazione di forza per abbassamento di un lato della pressa, alcuni tipi sono:
- idraulica
- Meccanica
- A vite
Queste sono caratterizzate da velocità di discesa della mazza bassa.
Le maglie generano pressione per la applicazione di forza per effetto di gravità della mazza. Le loro velocità di discesa sono elevate. Alcuni tipi includono:
- Effetto Semplice
- Doppio Effetto
- Contracolpo

### Tipologie di Macchine

#### Tipi di Presse
<!Diagramma pg.29>

-Eccentrico (~10000-12000 tons)
-Ginocchio
-A vite
-Idraulica $\to$ maggiore forza (~85000 tons)

#### Tipi di Magli
Esistono maglie a doppio effetto assistenza pneumatica
<!Diagramma pg.30>

## Criteri di Design For per forgiatura

- Angoli di Sformo
- Raggi di Raccordo
- Direzione di Separazione degli stampi
- Canale e camera per bava (chiuso con bava)


## Progettazione del ciclo di forgiatura

- Sovrametallo e ritoro
- Raggi di Raccordo
- Piani di Bava
- Angoli di Sformo $\to$ da 7-8 per minimo e 10-20 per pezzi alti
- Canale di Bava
- Dimensioni dello Stampo

Per il piano di bava, bisogna tenere a conto:
- possibilità di creazione
- buono stampo, angoli più perpendicolari che possibile
- Costo $\to$ lavorare una cavità sola è meglio.

<!Diagramma pg.32 e 33>

### Canale di Bava

Questo il canale dentro cui scorre il metallo per creare la bava, e dimensionato opportunamento:
<!Diagramma dimensionamento canale pg.37>

Il valore $l$ è designato sperimentalmente.
Abbiamo $R = (2,5-3)r+0,5$

$l = 0,07 \frac{S}{P}$$\to$ S è la sezione del pezzo nel piano di bava e P è il perimetro nello stesso piano.

Invece è possibile usare anche: $l = 0,0175\sqrt{ S }$

Queste sono equazioni empiriche con numeri costanti.

## Dimensionamento dello stampo

Lo stampo è molto più grande ed è molto più sollecitato. È più sollecitato anche perché lavora a temperatura quindi serve allora massa per resistere.

Le dimensioni dello stampo dipendono da:
- materiale dello stampo
- Lavorazioni meccaniche
- Resistenza alla forza di stampaggio

<!Diagramma pg.38>


Prendiamo $l,h$ e $b$ come le dimensioni desiderate del pezzo, e $f_{l},f_{h}$ e $f_{b}$ determinati da grafici empirici.

Allora abbiamo che le dimensioni dello stampo saranno:
$$\begin{gather}
L= lf_{l} \\
H = hf_{h} \\
B = b f_{b}
\end{gather}$$

Per h molto piccoli, $f_{h}$ sono molti grandi, questo è perché portare ad un pezzo ad uno spessore molto piccolo richiede pressioni molto alte.

## Difetti di Forgiatura

<!Diagramma pg.39>

- Fratture duttili
	- Si estendono dalla superfice alla interno
	- Causata dalla adesione con lo stampo
		- Servono lubrificanti
	- Instabilità plastica e frattura
		- Raggio di raccordo basso
> [!note] 
> Anche il getto nello stampaggio ha la buccia di arancia
> 

## Costi di Forgiatura

<!Diagramma pg.36>

- la forgiatura ha costi elevati per gli stampi ed attrezzato
	- $\implies$ volumi elevati e materiali più costosi la casistica per l'uso
- costo del lavoro da medio ad alto
- Per la forgiatura serve un operatore con esperienza da media ad alta
- Conveniente per grandi volumi di produzione

Dal diagramma possiamo veder che ci sono costi di produzione per pezzo relativo, e con volumi grandi la forgiature ha il prezzo più basso.

I pezzo sono generati da una conseguenza di processi per produrre un pezzo con certa caratteristiche.