---
creation_date: 2023-10-26 17:03
tags:
  - fistec 
share: true
---
# Lezione 13 - Cicli Termodinamici

## Introduzione ai Cicli Termodinamici

![](Pasted%20image%2020231029131231.png)

Ci sono 2 modi per realizzare macchine termodinamiche:

1. Sistema cilindro pistone
2. Circuito chiuso percorso da fluido di lavoro

#### Il ciclo diretto (di potenza)

![](Pasted%20image%2020231029131140.png)

I cicli diretti sono i cicli percorsi da fluidi in MTM, di solito il liquido è più freddo del serbatoio caldo e il serbatoio freddo è più freddo del liquido che cede calore. 
Quando il fluido sta aumentando la temperatura, aumenta la sua entropia invece quando sta diminuendo la temperatura, la entropia diminuisce.
#### Ciclo Inverso (per MTO)

![](Pasted%20image%2020231029131206.png)

In questo caso la temperature del fluido deve esser più alta del serbatoio cosi può cedere calore al serbatoio, invece il fluido deve avere temperature più bassa del serbatoio freddo così il serbatoio può cedere il calore al fluido.

### Considerazioni

Ciclo TD $\to$ Sappiamo costruire "nel modo migliore possibile" dispositivi che scambiano o solo Q o solo L, quindi sono quelli che considereremo. 

Trasformazione che considereremo per i due tipi di sistema:

1. Cilindro Pistone
	1. Isocora si scambia calore
	2. Adiabatica si scambia lavoro
2. Sistema Chiuso
	1. Isobara si scambia calore
	2. Adiabatica si scambia lavoro

> [!note]- "Modo migliore possibile"
> Per scambiare il lavoro servono organi di movimento a piccole superfici per ridurre gli attriti, invece per scambiare il calore servono organi di movimento a grandi superfici per massimizzare gli attriti. Questi due requisiti sono mutualmente esclusivi e quindi non li mischiamo e li costruiamo individualmente "nel modo migliore possibile".


### Ciclo di Carnot

Carnot è l'unico circuito che può esser costruito in tutti e due i modi con 2 adiabatiche e 2 isoterme, perché massimizza L e Q.

![](Pasted%20image%2020231029142836.png)

$\eta_{c}=\frac{W}{Q_{H}}=\frac{Q_{H}-Q_{c}}{Q_{H}}= 1- \frac{Q_{C}}{Q_{H}}= 1 - \frac{T_{c}\Delta S_{41}}{T_{H}\Delta S_{23}}=1-\frac{T_{c}}{T_{H}} = 1?$

Non può = 1, perché $T_{c}$ è limitato dalla natura e $T_{H}$ è limitato dalla resistenza termica di materiali. Quindi:
$$\eta_{c}<1$$
$\eta_{II}=1$ se $\eta_{I}=\eta_{c}$

## Cicli Ideali

![](Pasted%20image%2020231029142848.png)

### Prime Ipotesi Semplificative

1. Trascuriamo gli attriti perché sono fluidi ideale perciò non c'è perdita di carico
2. Tutti i processi sono quasi-statici
3. Condotti e dispositivi sono adiabatici.

![](Pasted%20image%2020231029142901.png)

L'area racchiusa è uguale al lavoro netto scambiato.

**Il ciclo di Carnot è la base di ogni ciclo**

**Cicli Diretti**:

- Cicli che conservano le due isoterme
	1. Stirling
	2. Erikson
- Cicli che conservano le due 2 adiabatiche
	1. Otto
	2. Joule-Bayton
	3. Rankine
	4. Diesel


I cicli Stirling e Erikson non li studieremo.

#### Cicli Ideali che Studiamo

##### Ciclo Otto

- Cilindro-pistone con 2 adiabatiche e 2 isocore
- Ciclo di riferimento per auto a benzina
- Accensione a candela

##### Ciclo Diesel

- Cilindro-pistone con 2 adiabatiche,1 isocore e 1 isobara
- Ciclo di riferimento per auto a gasolio
- Non simmetrico
- Accensione a compressione

##### Joule-Brayton

- Circuito chiuso, gas, 2 adiabatiche, 2 isobare
- Riferimento per turbine a gas (aerei a compressione, sottomarini,...)
- In realtà il circuito è aperto, ma studieremo quelli chiusi

##### Rankine

- Circuito chiuso (sempre), 2 adiabatiche, 2 isobare
- Lavora con vapore e non gas

Con i cicli Otto, Joule-Brayton e Diesel studiamo usando le leggi dei gas ideali. Invece con Rankine studiamo usando le tabelle perché usa il vapore.

### Ulteriori Ipotesi

Immaginiamo macchine di combustione però modelliamo questa macchine con una camera detta scambiatore di calore. In questo caso etra ed esce aria come gas ideale, invece di aria e combustibile entrante e prodotto uscente.

![](Pasted%20image%2020231029141223.png)

1. Fluido di lavoro è aria e è gas ideale biatomico
2. Trasformazioni quasi-statiche
3. Processo di combustione è rimpiazzato da un processo di somministrazione del calore
4. Processo di espulsione è sostituito da un processo di reiezione del calore che riporta il fluido nello stato iniziale. 

L'aria standard è detta di avere $M_{m}=28,96 \frac{kg}{kmol}$ e $c_{v}=1005 \frac{kJ}{mol}$

### Nomenclatura Ciclo-Pistone

![](Pasted%20image%2020231029142921.png)

Cilindrata = Area $\cdot$ Corsa
Rapporto di Compressione = $\frac{v_{max}}{v_{min}}$

$\underbrace{ P_{ME} }_{\substack{\text{Pressione}\\\text{Media}\\\text{Effettiva}} } = W_{netto} \cdot$ area pistone $\cdot$ corsa

## Ciclo Otto

Il ciclo Otto più o meno reale è:

![](Pasted%20image%2020231029142935.png)

Invece il ciclo che studieremo è un forma semplificata:

![](Pasted%20image%2020231029142947.png)

Questo ciclo vede 2 giri di un motore e 1 una fase utile che cambia non per inerzia.

I cicli otto possono creare moto a 2 o 4 tempi. I tempi sono azioni diverse del ciclo. Un motore a 2 tempi è due volte più potente ma meno efficace e più inquinante.
### Rendimento di Otto

$$
\begin{gather}
q_{e}=q_{23}=u_{2}-u_{3}=c_{v}(T_{3}-T_{2}) \\
q_{u}=-q_{41}=-(u_{1}-u_{4})=c_{v}(T_{4}-T_{1}) \\
\eta_{otto}=\frac{W_{netto}}{Q_{e}} = \frac{Q_{e}-Q_{u}}{Q_{c}} = 1 - Q_{u}-Q_{e} = 1- \frac{c_{v}(T_{4}-T_{1})}{c_{v}(T_{3}-T_{1})} = 1 - \frac{T_{1}}{T_{2}} \\
\frac{T_{1}}{T_{2}} \text{da sopra} = \left( \frac{v_{2}}{v_{1}} \right)^{\gamma-1} = \left( \frac{v_{3}}{v_{4}} \right)^{\gamma-1}=\frac{T_{4}}{T_{3}} \\
\rho = \frac{V_{max}}{V_{min}} = \frac{V_{1}}{V_{2}} = \frac{v_{1}}{v_{2}} \\
\text{Troviamo che:} \boxed{ \eta_{otto} = 1- \frac{1}{\rho^{\gamma-1}} }
\end{gather}
$$
Per il ciclo Otto $\rho$ di solito è tra 7 e 10.
Per l'ultimo passo della 3a linea abbiamo usato una proprietà dei cicli simmetrici dove:

$T_{1}\cdot T_{3}=T_{2}\cdot T_{4}\to \frac{T_{4}}{T_{1}}=\frac{T_{3}}{T_{2}}$

Questo vale anche per v e P.

Aumentando $\rho$ si porta a T e P più alte, ma limitiamo $\rho$ perché vogliamo evitare l'autocombustione del combustibile prima di $V_{min}$. L'autocombustione è da evitare in ogni macchina a combustione interna.

In questo caso possiamo aggiungere più ottano per aumentare la T di autocombustione ed evitare che acceda.

## Ciclo Diesel -> non simmetrico

In questo ciclo vogliamo la autoaccensione perché è come accendiamo il nostro combustibile.

Nel ciclo Diesel come il ciclo Otto usiamo $\rho$ che per il ciclo diesel varia tra 12 e 24.

Dato che $\rho$ è più alto anche $\eta$ di solito è più alto di Otto.

![](Pasted%20image%2020231029143005.png)

### Rendimento Diesel

Rapporto volumetrico di introduzione: $\tau = \frac{V_{3}}{V_{2}}=\frac{v_{3}}{v_{2}}$

$$
\begin{gather}
q_{e}=q_{23}=h_{3}-h_{2} =c_{p}(T_{3}-T_{2}) \\
q_{u}=-q_{41}=-(u_{1}-u_{4})=c_{v}(T_{4}-T_{1}) \\
\eta_{diesel} = \dots = 1 - \frac{c_{v}(T_{4}-T_{1})}{c_{p}(T_{3}-T_{2})} = 1 - \frac{T_{1}}{\gamma T_2}\cdot \frac{\left( \frac{T_{4}}{T_{1}} - 1\right)}{\left( \frac{T_{3}}{T_{2}}-1 \right)} \\
\end{gather}
$$
<u>Adiabatico 1-2</u>:
$$\frac{T_{1}}{T_{2}}=\left( \frac{v_{2}}{v_{1}} \right)^{\gamma-1}=\frac{1}{\rho^{\gamma-1}}$$
<u>Isobara 2-3</u>:
$$\frac{T_{2}}{V_{2}}=\frac{T_{3}}{V_{3}}\to \frac{T_{3}}{T_{2}}=\frac{V_{3}}{V_{2}}=\tau$$
<u>Isocora 4-1</u>:
$$\frac{T_{1}}{P_{1}}=\frac{T_{4}}{P_{4}}\to \frac{T_{4}}{T_{1}}= \frac{P_{4}}{P_{1}}$$

Dividendo 1-2 per 2-4:

$P_{1}v_{1}^{\gamma}=P_{2}v_{2}^{\gamma}$ e $P_{3}v_{3}^{\gamma}=P_{4}v_{4}^{\gamma}$

$$\frac{P_{4}}{P_{1}}\left( \frac{v_{4}}{v_{1}} \right)^{\gamma}= \frac{P_{3}}{P_{2}}\left( \frac{v_{3}}{v_{2}} \right)^{\gamma} \to \frac{P_{4}}{P_{1}}=\left( \frac{v_{3}}{v_{2}} \right)^{\gamma} \to \frac{T_{4}}{T_{1}}=\left( \frac{v_{3}}{v_{2}} \right)^{\gamma}= \tau^{\gamma}$$
$$\eta_{diesel}= 1 - \frac{1}{\rho^{\gamma-1}}\left[ \frac{\tau^{\gamma-1}}{\gamma(\tau-1)} \right]$$
Se $\tau = 1$ abbiamo una trasformazione isocora in vece di una isobara, quindi sarebbe uguale al ciclo Otto, questo spiega perché $\eta_{diesel} \geq \eta_{otto}$

## Joule-Brayton $\to$ simmetrico

Joule-Brayton è il ciclo ideale per turbina a gas

In realtà e formato così:
![](Pasted%20image%2020231029142024.png)

Ma la rappresentazione ideale che useremo è:

![](Pasted%20image%2020231029142047.png)

Joule-Brayton ha i diagramma T-s e P-v:

![](Pasted%20image%2020231029143024.png)

### Rendimento Joule-Brayton

$$
\begin{gather}
q_{e}=q_{23}=h_{3}-h_{2}=c_{p}(T_{3}-T_{2}) \\
q_{u}=-q_{41}=-(h_{1}-h_{4}) = c_{p}(T_{4}-T_{1}) \\
\text{Rapporto manometrico di compressione: } \beta = \frac{P_{max}}{P_{min}} = \frac{P_{2}}{P_{1}}=\frac{P_{3}}{P_{4}} \\
\text{Dopo passi che non ho molta voglia di riportare:}\\
\eta_{joule}= \frac{W_{netto}}{Q_{e}} = \frac{Q_{e}-Q_{u}}{Q_{e}} = 1 - \frac{Q_{u}}{Q_{e}} = 1- \frac{1}{\beta^{\frac{\gamma-1}{\gamma}}}
\end{gather}
$$

$\eta_{joule}$ crescente per $\beta$ crescente.
In generale teniamo $\beta$ tra 11 e 16.

![](Pasted%20image%2020231029142448.png)

Fissato $T_{min}$ e $T_{max}$ allora $\beta = \left( \frac{T_{max}}{T_{min}} \right)^{\frac{\gamma}{[2(\gamma-1)]}}$

L'aria all'ingresso è sia ossidante che raffriggerante della pale della turbina.

Circa 50% lavoro generato dalla turbina è usato dal compressore.

## Aumentare la efficenza

1. Aumento della temperatura di combustione e/o di ingresso in turbina
2. Aumentare l'efficienza delle macchine (turbine,compressori)
3. Modifica del ciclo base (interrefrigerazione,rigenerazione, ricombustione)

Nel nostro caso analizzaremo il punto 3 dato che è l'unico che cambia la forma dei grafici che usiamo per fare i calcoli.

![](Pasted%20image%2020231029143038.png)

In base stiamo provando a portare l'entropia generata il più vicino a 0 che è possibile.

### Ciclo Joule con Rigenerazione

![](Pasted%20image%2020231029131401.png)

Con un rigeneratore prendiamo il fluido che esce dalla turbina e usiamo la sua temperatura per riscaldare il fluido che sta per entrare nella turbina. Facendo questo il lavoro netto non cambia, invece diminuisce solo il $q_{e}$ che spendiamo per aumentare la temperature del fluido.

![](Pasted%20image%2020231029131441.png)

In breve, usiamo il gas al passo 4 per riscaldare il gas al passo 2, riducendo $q_{e}$.

Rendimento senza la rigenerazione:

$$\eta_{J} = \frac{W_{netto}}{Q_{H}} = \frac{W_{T}-W_{c}}{Q_{H}} = \frac{c_{p}(T_{3}-T_{4})-c_{p}(T_{2}-T_{1})}{c_{p}(T_{3}-T_{2})}$$

Rendimento con la rigenerazione:
$$\eta_{jr}=\frac{c_{p}(T_{3}-T_{4})-c_{p}(T_{2}-T_{1})}{c_{p}(T_{3}-T_{5'})}$$
Il $q_{rig-ideale} = h_{5'}-h_{2}=h_{4}-h_{2}$

$$\mathcal{E}_{rig}=\frac{q_{rig -reale}}{q_{rig-ideale}}$$
Il nuovo rendimento può esser riscritto come:
$$\eta_{jr}=1-\left( \frac{T_{1}}{T_{3}} \right)\beta^{\frac{\gamma-1}{\gamma}}$$
E può esser rappresentato con:

![](Pasted%20image%2020231029131504.png)

L'effetto è maggiore quando $\beta$ è basse e $\frac{T_{1}}{T_{3}}=\frac{T_{min}}{T_{max}}$

## Joule con interrifregirazione, rigenerazione e ricombustione

![](Pasted%20image%2020231029132730.png)

Con la aggiunta di tutti e 3 i sistema stiamo provando a massimizzare il lavoro ricavato dalla turbina minimizzando il lavoro usato dal compressore.


Con le nuove addizioni il diagramma T-s viene modificato e troviamo:
![](Pasted%20image%2020231029132753.png)

Aggiungendo multipli stadi di interrifregirazione il diagramma T-s cambia a:

![](Pasted%20image%2020231029132815.png)

Di solito aggiungono solo 2 stadi di interrifregerazione dato il costo e effetto che decrescente individuale.