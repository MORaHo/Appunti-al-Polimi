---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 17 - Estrusione e Trafilatura

## Lavoro di Estrusione

Il lavoro che dobbiamo fare è determinato dall'angolo interno della matrice.

<!Diagramma diagramma angolo della matrice>

Se $\alpha=90$ c'è molto lavoro di distorsione, e l'attrito è ridotto a solo quello con la matrice

Se $\alpha <90$ c'è attrito con la superficie di scorrimento che aumenta con l'angolo decrescente e il lavoro di distorsione che diminuisce quando l'angolo diminuisce.

Con $\alpha$ bassi il materiale ha no problemi a scorrere perché è accompagnato verso la matrice.

##### Distorsione

Quando il materiale passa attraverso la matrice viene distorta la struttura interna, più al centro che ai lati:

<!Diagramma semplice di distorsione della matrice>

### Analisi della Deformazione

Presi i costanti nella estrusione come:

<!Diagramma costanti di deformazione pg.2 di pdf>

Assumiamo come sempre la costanza del volume:
$$A_{o}L_{o} = A_{f}L_{f}$$

Il rapporto di estrusione r è:
$$r_{x} = \frac{A_{o}}{A_{f}} = \frac{L_{f}}{L_{o}}$$

La deformazione ideale del processo è:
$$\mathcal{E} = \ln r_{x}$$
E la pressione per far occorrere questo processo è:
$$p = Y_{f}\ln r_{x}$$

La relazione di Johnson della deformazione reale è:
$$\mathcal{E}_{x} = a+b\ln r_{x}\left\{\begin{align}a&=0,8\\b&\in[1,2;1,5]\end{align}\right\}$$
La pressione per la deformazione reale allora è:
$$p=\left\{\begin{gather}Y_{f}\left( \underbrace{ \mathcal{E}_{x} }_{ \text{Reale} }+\underbrace{ \frac{2L}{D_{o}} }_{ \text{Attrito} } \right) \to \text{Estrusione Diretta}\\Y_{f}\underbrace{ \mathcal{E}_{x} }_{ \text{Reale} } \to \text{Estrusione Inversa}
\end{gather}\right\}$$

Il valore L non è la corsa totale $L_{o}$ , ma è la corsa rimasta per il corpo, cioè la lunghezza all'istante della billetta, perciò la pressione che serve diminuisce con il processo.

#### Curva della pressione per i due casi

<!Diagramma curva della pressione>

La prima parte è la pressione che serve perché il metallo riempia completamente la camera di estrusione, appena curva inizia la estrusione

Possiamo mappare anche la energia che ci serve per deformare:

<!Diagramma energia vs. alfa>

Vediamo che:
- L'energia della deformazione ideale è costante
- L'energia di attrito diminuisce con $\alpha$
- L'energia di distorsione aumenta con $\alpha$

Il punto dove la energia totale è minima è l'angolo ottimale per il processo.
Questo principio in realtà non si usa perché ci sono altri parametri a cui dobbiamo tenere conto, ma per noi va bene così. In realtà si va quasi sempre più vicino a 90.

Quello a cui non abbiamo tenuto a conto è la usura della matrice. Il profilo di usura cambia con l'angolo. Se la matrice ha $\alpha=90$, solo la faccia davanti si usura, questo significa che se si è usurata troppo possiamo tagliare una parte davanti per avere una faccia non usurata. Invece nel caso di altri angolo anche le faccie pendenti si usurano, questo significa che anche quelle devono esser messe a porto. Per mantenere la forma si cambia l'angolo, perciò tende 90 gradi, questo è perché è comodo andare più vicino a 90, se non ci importa la distorsione.
Si riduce il costo con l'angolo a 90.

#### Profili più complessi

Tutti i calcoli che abbiamo fatto sono per profili semplici. Per profili più complessi usiamo un coefficiente per tenere a conto della complessità.

$k_{x} \to$ rapporto fra pressione per estrudere forma complessa e forma circolare

$C_{c} \to$ circonferenza di cerchio con stessa area di forma complessa

$C_{x} \to$ perimetro di sezione effettiva 

$$k_{x} = 0,98+0,02\left( \frac{C_{x}}{C_{c}} \right)^{2.25}; \frac{C_{x}}{C_{c}}\in[1,0;6,0]$$

La forza che serve è: $F=k_{x}pA_{o}$

## Processi di Estrusione di Nicchia

### Estrusione ad impatto

<!Diagramma pg.47>

In questo processo il pistone lavora a velocità altissime, a lotto singolo per estrusione e tempi di produzione bassi. 

Il processo può esser diretta (a), inverso (b), o un mischio dei due (c).

Usato per la creazione di tubetti a spessore sottile velocemente.

### Estrusione idrostatica

<!Diagramma pg.48>

Pressione viene posta da fluido che viene messo in pressione da pistone. È costoso, ma è utile per metalli fragili come il magnesio. Secondamente per aiutare la estrusione viene asportata una punta che aiuta a non rompere le prime parti estruse.

## Difetti di estrusione

<!Diagramma pg.49>

I due difetti più comuni sono le cricche interne e la cricche esterne.

#### Cricche Interne

Si sono parti spazi internamente, questi compromettono la struttura quindi sono pericolosi.

#### Cricche Esterne

Questi difetti sono più visibili e sono causati da diverse cose.

Causa possibili:
- Temperatura di estrusione $\to$ si scalda, si attacca alle pareti e poi è strappato dalle pareti.
- Velocità di estrusione $\to$  aumentato attrito
- Attrito troppo alto

### Formazione di Cricche Interne

<!Diagramma pg.51>

Il materiale che è esterno scorre più lentamente del materiale interno per effetto dell'attrito.

Se si lascia il pistone piatto si apre una cavità a causa di questa differenza. Per evitare questo allora si realizzano pistoni curvi che spingono verso il centro, chiudendo le cricche che stanno iniziando a formarsi.

### Formazione di Cricche Superficiali

<!Diagramma pg.8 di pdf>

Il motore che usiamo ha un limite se quanta potenza può produrre, a temperatura basse serve più forza per deformare quindi per la stessa potenza le velocità devono esser basse.

A temperature alte invece il materiale aderisce alle pareti della camera, con velocità alte si strappano queste adesioni dalla superfice e si creano cricche esterne.

Per mantenere il bilancio tra i due, prendiamo la velocità massima possibile tra le due condizione e la diminuiamo un'pò per fare in modo che riusciamo a mantenere un coefficiente di sicurezza, considerando che linee limite sono la media statistica e non sarà sempre il nostro caso.

##### Distrosione del pezzo

Parti del pezzo escono dalla matrice a diverse velocità, questo causa la formazione di pieghe e deformazioni residue.

Per evitare si può cambiare la matrice o lubrificante, se no si limita e poi si raddrizza successivamente.

## Criteri per buon design

<!Diagramma pg.46>

## Trafilatura

<!Diagramma trafilatura>

La trafilatura è molto simile alla estrusione con alcune differenze:
- sforzi di trazione non compressione dato che stiamo tirando
- A freddo non a caldo

Il processo è usato principalmente per ridurre il diametro della billetta, mettendosi a valle della matrice, prendendo il trafilato e tirando.

La trafilatura è molto precisa dato che è a freddo, ha incrudimento e non si generano ossidi, in ogni aspetto a buono.
### Calcolo di Lavoro

La riduzione si spessore è:
$$r = \frac{A_{o}-A_{f}}{A_{o}} = 1-\frac{A_{f}}{A_{o}}\implies \frac{A_{f}}{A_{o}} = 1-r$$

La deformazione ideale è:

$$\mathcal{E} = \ln \frac{A_{o}}{A_{f}} = \ln(1-r)$$

La matrice deve esser ancora più dura perché il materiale è deformato a freddo quindi le forze sono elevate.

$$\sigma_{d} = \frac{F_{d}}{A_{f}}$$

### Lavoro Interno ed Esterno Ideali

Lavoro esterno: $$W_{ext} = \Delta L\cdot F_{d} = \Delta L\cdot\sigma_{d}\cdot A_{f}$$
Lavoro Interno:
$$W_{int} = V\cdot \overline{Y_{}}_{f}\cdot\mathcal{E} = \Delta L\cdot A_{f}\cdot \overline{Y}_{f}\cdot \mathcal{E}  $$

Lo sforzo ideale lo troviamo con l'equazione di Schey:
$$\sigma_{d}^{ideale } = \overline{Y}_{f}\cdot\mathcal{E}  =\overline{Y}_{f}\cdot \ln \frac{A_{o}}{A_{f}} = \overline{Y}_{f}\cdot \ln\left( \frac{1}{1-r} \right)  $$

### Lavoro Reale $\to$ Formula Empirica

$$\sigma_{d}^{reale} = \overline{Y}_{f}\left( 1+\frac{\mu}{\tan\alpha} \right)\phi \ln \frac{A_{o}}{A_{f}} $$

$\mu \to$ coefficiente d'attrito 
$\phi = 0,88+0,12 \frac{D_{o}+D_{f}}{D_{o}-D_{f}}\to$ coefficiente di distorsione

Possiamo trovare lo sforzo e l'angolo ottimale per una data riduzione:

<!Diagramma pg.56>

Al crescere del rapporto d riduzione aumenta l'angolo ottimale.

### Massima Riduzione

Nella trafilatura il trafilato (dopo la matrice) non può superare $\sigma_{sn}$, questo è perché se è superato il diametro cambierà di un valore ignoto possibilmente fuori dalle specifiche, che non vogliamo.

La minima riduzione massima è trovata con le ipotesi:
- Lavoro ideale
- Assenza di incrudimento $\implies \overline{Y}_{f} = Y_{f}$

Lo sforzo è:
$$\sigma_{d} = Y_{f}\ln \frac{A_{o}}{A_{f}} = \cancel{ Y_{f} }\ln \frac{1}{1-r}\leq \cancel{ Y_{f} }$$
$$\frac{A_{o}}{A_{f}} = e = 2,718 \to r_{max} =\frac{e-1}{e} = 0,632$$

Senza incrudimento (e con solo lavoro ideale) la riduzione massima è di 0,632.

Ma in realtà durante la deformazione nella matrice il materiale si incrudisce, questo significa che il filo trafilato avrà resistenza maggiore del materiale da cui lo abbiamo preso, questo ci va bene. Significa che possiamo esser alla resistenza di snervamento del materiale senza avere effetto sul filo, significa anche che più è alto il coefficiente di snervamento più possiamo superara lo snervamento del materiale più possiamo ridurre la sezione. Tutto questo ci permette di fare il grafico:

<!Diagramma pg.58>

Si può trovare la riduzione massima dato il coefficiente di incrudimento con l'equazione:
$$r_{max} = 1-\frac{1}{e^{n+1}}$$

In realtà non facciamo solo il lavoro ideale ma anche quello di attrito e distorsione, questo significa che per ogni n(coefficiente di incrudimento) la riduzione sarà più bassa, circa 0,3 per fili e 0,5 per barre.

## Difetti di Trafilatura

<!Diagramma pg.59>

La pelatura occorre quando $\alpha$ è pronunciato, significa che la matrice taglia il materiale che sta provando a resistere.

## Macchina Da Trafilatura

<!Diagramma pg.60>

Il pistone tira il carro che tira il pezzo trafilo.

## Trafilatura Multi-stadi

<!Diagramma pg.61>

I cabestani sono i rulli che prendono il filo ad ogni stadio per ridurre la dimensione dell'impianto.

È importante ricordarsi del cabestano per a volte chiedono cos'è durante l'esame.

La velocità del cabestano è la entrata nel prossimo trafilata.
