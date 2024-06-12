---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 7 - Altre Considerazioni

## Ripasso

Di solito prendiamo $M_{m} \geq 1,2 M_{p}$

y ci da quanto materiale serve per ricavare il grezzo che abbiamo scelto.
c $\to$  dipende da che materiali circondano il pezzo e/o la materozza.

$c = \frac{\frac{ dT }{ dt }|_{\text{materozza}}}{\frac{ dT }{ dt }|_{\text{pezzo}}}$

Usiamo materozze che hanno forma cilindrica e proporzioni tra l'altezza e il diametro che sono determinate dal valore $\delta$ :
$\frac{H}{D} = \delta \in (0,5-1,5)$

Dalle relazioni troviamo che $y = kx^{3}$ dove $k = \frac{\pi}{4} \frac{M_{p}^{3}}{V_{p}} \frac{(4\delta + 1)^{3}}{\delta^{2}}$
<!Diagramma isodelta>

$\delta$ è il valore a cui minimizziamo il volume della materozza, se possiamo quello è quello che scegliamo, ma in alcuni casi non si può fare quindi scegliamo valori fino a $1,5$

Il valore c cambia il gradiente, riducendo il volume richiesto della materozza, ma costa un'po' di più.

Le materozze hanno un raggio di influenza dentro cui possono imporre la struttura e ridurre le microporosità, questo raggio dipende dalla forma del pezzo e gli effetti di raffreddamento delle pareti.

## Spinte Metallostatiche

Dopo aver riempito la cavità il metallo esercita una spinta/pressione sulle pareti della cavità questo è data dalla forza di archimede.

<!Diagramma spinta con archimede>

Le forze agiscono sia su qualsiasi anime è stata posta nella cavità che le staffe. 

Se le forze poste sull'anima sono troppo grandi, possiamo "armarla" di metallo per fare in modo che non cedono tali forze.

L'integrale delle pressioni generate dal liquido sulla staffa superiore causa il suo movimento in su e per ciò si creerà uno spazio che non vogliamo che verrà riempito dal metallo. Per evitare questa separazione possiamo aggiungere dei pesi sopra alla staffa superiore per aggiungere più peso alla staffa così non viene spinta in su.

<!Diagramma pressioni in alto>

## Tensioni residue

Le tensioni residue sono un fenomeno difficile da spiegare, non è qualcosa che possiamo misurare ma sappiamo come sono generate.

Le tensioni residue sono generate da corpi connessi cha hanno geometrie diverse e per ciò velocità di raffreddamento diverse ergo le contrazioni istante per istante sono diverse.

### Esempio

Prendiamo questa lastra con due taglio.
<!Diagramma lastra con a b e c>


Data l'equazione:
$$\Delta Q = S\cdot(T-T_{a})\cdot\Delta t = \rho Vc_{p}\cdot\Delta T$$
Troviamo che la velocità è effetto dal modulo termico:
$$\implies \frac{\Delta T}{\Delta t} \propto \underbrace{ \frac{S}{V} }_{ \frac{1}{M} }\cdot(T-T_{a})$$

Questo implica che la barra a raffredderà più velocemente rispetto alla piastra. Matematicamente lo troviamo facendo:

<!Diagramma dimensioni>

$$\begin{gather}
M_{a} = \frac{H_{a}}{4} \\
M_{b} = \frac{H_{a}\cdot H_{b}}{2(H_{a}+H_{b})} \\
\frac{M_{b}}{M_{a}} = \frac{2}{\left( 1+\frac{H_{a}}{H_{b}} \right)}
\end{gather}$$

Dato che prendiamo $H_{b}\gg H_{a} \implies \frac{H_{a}}{H_{b}}\to0 \implies \frac{M_{b}}{M_{a}}\approx 2$

<!Diagramma raffeddamento>

L'allungamento assiale dei due corpi se fosse liberi (senza c) sarebbe:
$$\begin{gather}
\Delta L_{a} = L_{TA}\cdot\alpha \cdot (T_{a}-T_{A}) \\
\Delta L_{b} = L_{TB}\cdot\alpha \cdot(T_{b}-T_{A})
\end{gather}$$

Questo implica che al punto $t^{*}$ (il punto dove $T_{a}$ e $T_{b}$ sono più lontani), la barra a sarebbe più costa della piastra b:

<!Diagramma a più corta di b>

Ma c esiste, questo li forza tutti e due i pezzi a rimanere alla stessa lunghezza intermedia.

<!Diagramma a e b con c>

Dato che a e b sono forzati a stare alla stessa lunghezza, il corpo a sarà tirato per portarlo a tale lunghezza, invece il corpo b sarà compresso per portare anche lui a tale lunghezza.

$\delta L_{a}+\Delta L_{a} = \delta L_{b}+\Delta L_{b}$

### Tensioni a fine raffreddamento

Ci sono 3 casi possibili le tensioni che saranno rimaste a fine raffreddamento:

1. Se le sollecitazioni nei corpi a e b rimangono nel campo elastico, non c'è problema, non si creano tensioni residue in alcuno dei due corpi.
2. (Il caso peggiore) Se le sollecitazioni in uno dei due corpi a o b supera il limite di rottura del materiale
	1. Disastro, pezzo diventa scarto
	2. Di solito il pezzo più sottile di rompe
	3. Cricche a caldo
3. Se la sollecitazione in uno dei due a o b (o entrambi) entra nel campo plastico, rimane un allungamento ($\mathcal{E}$), e tensioni residue.

#### Caso 3

Senza considerare c. Immaginiamo che il corpo a è stato esteso permanentemente perché lo abbiamo forzato ad esser più lungo questo significherebbe che senza vincoli sarebbe più lungo di b, circa così:

<!Diagramma con A allungato rispetto a b>

Ora se riprendiamo c, anche questa volta vuole che a e b abbino la stessa lunghezza, per avere la stessa lunghezza a verrà compresso e invece b verrà tirato:

<!Diagramma A allungato con b>

Questo significa che il segno delle tensioni interne che abbiamo è stato cambiato rispetto a prima, la trazione che avevamo prima ha create una compressione a fine raffreddamento.
Se anche b fosse stato deformato plasticamente allora avrà tensioni residue di trazione.

Queste tensioni il pezzo se le ricorda se non facciamo trattamenti termici. Se lo lavoriamo senza aver fatto trattamenti termici il pezzo modificherà le tensioni interne data la nuova forma e è possibile che si rompa, il pezzo senza trattamento termico è fragile.

Le tensioni possono esser evitate durante la progettazione seguendo 2 regole:
1. Nessuna parte massiva va messa vicino a parti sottili
2. Avere una variazioni "lenta" degli spesso per distribuire le sollecitazione, questo è un'altra ragione perché arrotondiamo gli spigoli.
