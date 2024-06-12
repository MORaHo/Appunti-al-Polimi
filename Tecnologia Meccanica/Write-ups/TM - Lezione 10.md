---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 10 - 

## Ripasso

Pressofusione, metallo viene iniettato ad alta velocità da un pistone.

A camera calda, la macchina contiene un forno, solo per metalli sotto 600 gradi di temperatura di fusione.
Invece a camera fredda non c'è il forno ed è per metalli basso fondenti con temperatura di fusione superiore a 600.

I metalli che non possono esser usati sono il nickel, acciaio, ghisa e titanio.

## Colata in Bassa Pressione

Questo processo è tra la colata in conchiglia e la pressofusione in termini di complessità.
In questo processo lo stampo posto in alto rispetto una an bagno di metallo fondente che è dentro ad una camera. Il metallo e la forma sono connessi da un tubi che va fino al fondo del metallo liquido. Dentro alla camera del metallo viene spinta aria per creare una pressione maggiore di quella atmosferica di una bar, questo causa il metallo ad andare su per il tubo lentamente e poi riempire la forma.

<!Diagramma colata in bassa pressione>

Questo processo ha tutti i vantaggi di uno stampo metallico, cioè il raffreddamento rapido e la precisione, più il metallo è pulito perché lo peschiamo dal fondo del metallo eliminando anche la turbolenza.

Questo è usato pertanto con l'alluminio, tipicamente per creare i cerchio di automobili.

Questo processo è più lento della pressofusione, ma per pezzi simmetrici e basso fondenti va bene. In generale il processo è molto automatizzato.

## Colata Centrifuga

Questo è un processo di colata che utilizza la forza centrifuga invece di pressione per creare un pezzo.

Questo è utile per simmetrie assiali, spesso è girato in una posizione con l'asse di rotazione parallela al suolo.

La colata centrifuga è ancora un'po' manuale ed è usato per creare tubi e corpi cilindri senza saldatura.

<!Diagramma colata in centrifuga>

Per questo processo bisogna regolare il numero di giri ma di solito è circa tra 200 e 500 giri al minuto. Il grezzo è facilmente estratto o la forma a volte è anche apribile.

La ragione per teniamo a conto i giri è perché dobbiamo tenere a conto la forza di gravità e la forza centrifuga.

<!Diagramma forze>

Sperimentalmente troviamo il G Factor che è il rapporto tra le forza centrifuga e peso, possiamo trovare il numero di giri a minuto che ci servono facendo:

$$GF = \frac{F_{c}}{W} = \frac{v^{2}}{gR} = \frac{\left( \frac{2\pi RN}{60} \right)^{2}}{gR}\implies N = \frac{30}{\pi}\sqrt{ \frac{2gGF}{D} }$$

### Vantaggi:

- Alte densità, in particolare alla superfice esterna
- Le contrazione rende la estrazione facile.
### Svantaggi:

- serve la simmetria assiale
- non controlliamo direttamente il diametro interno

### Campi di Applicazione

- Tubature non saldata di lunghezza elevata
- Configurazione verticale: piccoli pezzi di lunghezza non superiore al due volte il diametro 

### Esempi

- In verticale se la altezza non è molto grande
- Valvola per usi marini

<!Immagini esempi>

## Difetti nella colata

### Processi di Rimediamentro

1. Sbavatura $\to$ rimozione della bava ed eliminazione di tutti quello che non è il pezzo
2. Rimozione di anima
3. Pulizia di superfice per togliere tracce di staccamento
	1. Aria
	2. Sabbia
	3. Palline
4. L'ispezione $\to$ Distinzione tra pezzi e scarti
	1. Basato su pezzo e specifiche
5. Se pezzo è riparabile allora si mette a posto se no diventa scarto
6. Trattamento termico
	1. Per creare omogeneità
	2. Per imporre proprietà volute

### Difetti Comuni a tutti i processi

<!Diagramma difetti comuni>

- (a) Colata incompleta/ mancata colata
	- Solidificato prematuramente prima di raggiungere estremi ultimi
	- Non riparabile, si scarta il pezzo
- (b) Giunto freddo $\to$ errore di progettazione
	- Il metallo freddo sotto incontra il metallo freddo di una altro fronte, due fronti freddi non si dovrebbero incontrare.
	- Risolto cambiando sistema di colata
- (c) Gocce fredde
	- Primo metallo si solidifica prima e poi si mescola, questo è anche un giunto freddo
	- Difficile da riparare
	- Risolto cambiando sistema di colata
- (d) Macrocavità nel pezzo
	- Errore di progettazione delle materozze
	- Risolto cambiando dimensione
	- Se piccola è riparabile, se è grande si scarta
- (e) Microporosità
	- Difficile da riparare
- Cricche
	- Per errore di dimensionamento
	- Non riparabile
	- Risolto con raggi di accordo più dolci.

### Difetti Specifici: Colate in Sabbia

<!Diagramma difetti specifici>


(a) $\to$ Sabbia troppo umida $\to$ crea bolle di gas su superfice
(b) $\to$  (a) se è troppo umido sulla superfice di tutta la forma
(c & d & e) $\to$  Metallo troppo veloce, ha scavato nella forma, cambia la geometria e intrappola sabbia. È se ci sono delle crepe nella forma.

(f) $\to$ Disallineamento
- È ho da quando abbiamo messo insieme la forma, o è causata dalle forze metallostatiche.
(g) $\to$ Anima a spasso
- Foro sarà fuori asse
- Causato da un sistema di sostegno non sufficientemente rigido per forze metallostatiche.

### Ispezione

1. L’ispezione visiva: si usa per colate incomplete, i giunti freddi e i difetti superficiali gravi.
2. Le misurazioni dimensionali: si usano pergarantire che le tolleranze  siano state raggiunte.
3. Test metallurgici, chimici e fisici: si usano per misurare la qualità intrinseca della colata. Tali prove comprendono:
	1. le prove in pressione per localizzare perdite nei grezzi;
	2. i metodi radiografici, i test mediante particelle magnetiche, l’uso di penetranti fluorescenti e i test mediante ultrasuoni per rilevare sia difetti superficiali che interni della colata e
	3. le prove per determinare le proprietà meccaniche.

## Criteri di Design For

- Angolo do forma. Quando creando una forma tutte le superfici ortogonali dovrebbero esser angolate per facilitare l'estrazione, troviamo gli angoli da tabelle che si basano su forma e metallo.
- Eliminazione di sottosquadro
	<!Diagramma pg.62>
- Raggio di raccordo
	- Per evitare cricche da tensioni residue

## Tabelle

<!Tabelle>

La microfusione ha costi di produzione alti perché il bisogna assemblare il grappolo che permette la produzione di molti pezzi piccoli allo stesso momento e questo processo è interamente manuale.






