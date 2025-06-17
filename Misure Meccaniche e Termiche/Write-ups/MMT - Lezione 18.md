---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 18 - 

Possiamo usare pattern matching per calcolare la vibrazione e lo spostamento con più pezzi. Si può avere precisione molto elevata.

Ha fatto esempi dell'uso di pattern matching per fare analisi dinamica.

## DIC $\to$ Digital Image correlation

Analisi di pattern matching due foto diverse per misure il campo intero di spostamento.

Invece di prendere un area, si prende tutto l'oggetto per vedere come le tante aree nell'imaggine cambiano. Importante per corpi morbidi. Perché possiamo vedere come parti diverse dello stesso corpo si muovono.

<!Diagramma pg.100>

Con questo metodo è possibile analizzare la deformazione di un corpo reale. 

<!Diagramma pg.101>

Usando la misure di spostamento di migliaia di aree di pezzi.
Se vogliamo fare l'analisi della deformazione però, è importante avere rumore nella superficie che misuriamo così possiamo tracciarlo e capire come si sta deformando.

Questo rumore può esser naturale o generato artificialmente.

Per il DIC usiamo algoritmi, alcuni sono:
- sovrapposizione parziale $\to$ uso di più aree sovrapposte per evitare correllazioni errone.
- Subset deformabile $\to$  riconoscere che le aree possono deformare e compensare perciò aggiustare la forma nel nostro pattern matching per compensare per la deformazione che cambia la forma. In base consideriamo che la forma può cambiare per poter analizzare le forme che si deformano.

Per il DIC serve un area abbastanza grande per renderla unica, per ciò permettendo anche una correllazione.

### Procedura di Prova

<!Step pg.105>


## Stereo Scopia

<!Diagramma pg.124>

Prese due telecamere sapendo la posizione relativa riesca a trovare la distanza di un oggetto, riesco anche ad interpolare la geometria 3D.

Gli oggetti di solito sono sferette, perché durante il blob analysis è molto più facile trovare il centro e per ciò una posizione definitiva.

Usato tipicamente da robot industriali e anche a precisione come quelli nella medicina.

## Scansione 3D con frange di Moiré

<!Diagramma pg.128>

## Scansione luce struttura per ricreazione 3D

<!Diagramma pg.129>

## Pose Estimation

La pose estimation è una tecnica di misure 3D che usa una singola telecamera.

<!Diagramma pg.141>

Creiamo un modello numerico dell'acquisione della telecamera. 
Dato che abbiamo questo modello, quando abbiamo una foto, sappiamo matematicamente come la telecamera la scatterebbe quindi possiamo muovere un modello digitale per trovare la posizione e rotazione dell'oggetto vero se dovessimo riprendere questa foto, questo allora ci permette digitalmente di trovare la posizione relativa nello spazio con solo un'immagine è un modello matematico.

Ci sono diversi algoritmi di pose estimation che fanno delle ipotesi diverse per velocizzare il calcolo della posizione.

<!Diagramma pg.142>

La pose estimation riporta una stima di tutte le posizioni sulle 3 le assi e angoli di rotazione.







