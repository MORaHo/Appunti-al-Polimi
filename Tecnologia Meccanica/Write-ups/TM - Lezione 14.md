---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 14 - 

Abbiamo visto la forgiatura e il modello semplificato di costo di prodotto

## Confronto Economico tra forgiature e fonderia

<!Diagramma pg.43>

Entrambi i processi richiedono forme chiuse. È difficile distinguere un grezzo di fonderia da una grezzo di stampaggio.

Il processo fusorio genera grezzi anche molto complessi nella forma, ma con caratteristiche meccaniche inferiori. Lo stampaggio permette un migliore controllo della struttura microscopica del grezzo. I costo dipendono molto dal processo.

La forgiature è il costo più basso in lotti immensi (>100000)

La colata in sabbia ovviamente costa poco ad ogni punto. Il die casting e forging hanno macchine costo e setup costoso, per pochi lotti è molto simile per grandi lotti la forgiatura.

Ha a forgiatura ha costi minori di tutto, meno del die casting perché meno offre meno scarti e problemi.

La scelta del processo è economica e tecnica.

## Altri Processi di Forgiatura

### Ricalcatura

<!Diagramma pg.44 e 45>

La forma della cavità può variare da libera a forma diversa. Questo processo è usato nella produzione di viti e bulloni di tutti i tipi.


### Coniatura
<!Diagramma pg.47>

La forgiatura a stampi chiusi di estrema precisione. Senza bava con piccoli sezione di riduzione di spessore.
Questo processo è usato principalmente per stampare le monete e fibbie.

### Conifica/Forgiatura Radiale/ Marellatura

<!Diagramma pg.48>

Questo process forgia radialmente per creare sezioni coniche. Tempo fa erano usati martelli manuali ma non è più normale, si ora si usano martelli (o mandrini) automatici per deformare.

Il tubo è girato per creare una forma omogenea.

### Forgiatura Isoterma

Questo processo è detto isoterma perché le mazze della pressa hanno la stessa temperatura che il pezzo, e tutti e due vengono tenute costanti facendo occorrere il processo in un forno. Dato che sono la stessa temperatura riduce l'attrito, questo riduce il barreling e diruce il degrado dello stampo

<!Diagramma macchine pg.49 alto-destra>

Questo è fatto anche sotto vuoto per prevenire il degrado per ossidazione.

Il pezzo e mazza sono tenute a 300-500 grandi costantemente
Il costo d'usura è maggiore, quindi è usato solo per leghe con elevate resistenze meccaniche e soggetti a strutture fragili.

## Processi di Deformazione Plastica Massica $[\text{chap.11}]$

Abbiamo visto la forgiatura, allora iniziamo ora con la laminazione.

## Laminazione

La laminazione occorre a caldo, tiepido e freddo

<!Diagramma pg.4>

La laminazione è una lavorazione di riduzione di spessore del componente prismatico mediante forza di compressione esercitate da rulli.

Il processo occorre a caldo per grandi deformazioni e a freddo per aumentare la resistenza.


Vengono usate le forze verticali che agiscono sull'arco di contatto. Se non ci fosse l'attrito non si sarebbe movimento del laminando, e solo le forze applicate permetterebbero il movimento.

La microstruttura del laminando viene compresa e stirata:

<!Diagramma pg.5>

Ma dato che siamo a caldo la struttura si ricristallizza in una struttura equi-assica.

### Geometria dei rulli:

<!Diagramma geometria dei rulli pg.6>

Esistono sagomatiche che riducono la sezione ad una sezione geometricamente precisa come in questo caso quella quadratica.

## Laminazione Piana: principi relazioni

<!Diagramma pg.10>

Prendiamo $\Delta h$ come il rapporto di riduzione delle sezione cioè: $h_{e}-h_{u}$

Prendiamo invece $r$ come la riduzione percentuale della sezione: $r_{l} = \frac{\Delta h}{h_{e}}$

Data la conservazione del volume abbiamo:
$$h_{e}l_{e}b_{e} = h_{u}l_{u}b_{u}$$
La portata volumetrica allora è:
$$h_{e}v_{e}b_{e} = h_{u}v_{u}b_{u}$$

Di solito $\Delta b \cong 0\implies b_{e}=b_{u}$:
$$\implies \frac{v_{u}}{v_{e}}=\frac{h_{e}}{h_{u}}\implies \frac{v_{u}}{v_{e}}$$

Questo ultima ci permette di trovare anche un valore della velocità ad ogni punto nell'arco dato che ogni punto ha una altezza associata ad essi:

<!Diagramma velocità punto nell'arco>

Esistono formula empiriche (che saranno sul formulario) per stimare tutto senza formula facile.

Cercando le relazioni prendendo l'arco di contatto L:

<!Diagramma pg.9 di appunti miei>

$$\begin{gather}
CB = \frac{\Delta h}{2} \\
AB^{2}=AC^{2}+CB^{2}=OA^{2}-OC^{2}+CB^{2} \\
AB^{2} = R^{2}-\left( R-\frac{\Delta h}{2} \right)^{2}+\frac{\Delta h^{2}}{4} = R\Delta h
\end{gather}$$

Approssimando L con la retta AB allora:
$$\begin{gather}
L\approx AB = \sqrt{ R\Delta h } \\
\implies \alpha = \frac{L}{R} \approx \sqrt{ \frac{\Delta h}{R} }
\end{gather}$$

In riassunto:
$$\begin{gather}
L = \sqrt{ R\Delta h } \\
\alpha = \frac{L}{R} \\
v_{e}<v_{c}<v_{u} \\
\text{Slittamento: }s = \frac{v_{u}-v_{c}}{v_{c}}
\end{gather}$$

Lo slittamento la velocità di movimento del reticolo al punto dato che abbiamo preso $v_{c}$.
