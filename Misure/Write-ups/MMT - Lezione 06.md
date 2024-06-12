---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 6 - 

La taratura ci da sia il legame che la taratura. Usiamo la deviazione standard per definire l'incertezza.

La retta sarà approssimante ma facciamo la approssimazione migliore che possiamo.

## Approssimazione di Retta Approssimante

Possiamo trovare la differenza tra il valore vero e calcolato con l'equazione:
$$y_{1}-(ax_{1}+b) = res_{1}$$

Quello che vogliamo con la linea approssimativa è ridurre questi valori.

Il modo per trovare la retta è la somma dei minimi quadrati si questi valori.

r è la correlazione lineare dei nostri valori, facciamo un confronto dei valori rispetto alla media e i valori calcolati e la media. Questo metodo presuppone che l’incertezza sui valori di riferimento sia comunque molto piccola.

Più vicino la linea approssima i punti più vicino a 1 è $r^{2}$:
$$r^{2} = \frac{\sum^{n}_{i=1} [y(x_{i})-y_{m}]^{2}}{\sum^{n}_{i=1}[y_{i}-y_{m}]^{2}}$$
$r = 0 \implies$ non concorda con i valori trovati
$r = 1\implies$ la retta traccia perfettamente i punti

## Diagramma di taratura

Un diagramma di taratura rappresenta la linea di media, con due linee di incertezza.

<!Diagramma media e incertezza>

Passi per tarare:
- Misuro con campioni di incertezza trascurabile (rispettivamente)
- Ripeto più volte
- Media e deviazione standard
- Minimo quadratico
- Calcolo $r^{2}$
- Deviazione standard

### Sensibilità (S)

La sensibilità è ricavata dal diagramma di taratura, è il rapporto tra la variazione di uscita rispetto alla variazione di ingresso.

Effettivamente la sensibilità è la derivata al punto:

<!Diagramma sensibilità>

### Tassonomia

Il campo di misure è il campo di misure possibili, cioè quelle che il trasduttore riesce a misurare.

La portata è il limite assoluto superiore del campo di misura

Il campo di sicurezza è il campo di valori tale che il campo di misure non sia permanentemente alterato, tale che non si rompa, è più grande del campo di misura. Se si esce dal campo di sicurezza bisogna ritarare il trasduttore.

### Quando si fa la taratura:

- Quando il certificato di validità è scaduto
- Grandezze di influenza è fuori campo di sicurezza
- Misurando è stato fuori campo di sicurezza
- il dispositivo è impiegato in condizioni operative diverse rispetto a quelle del diagramma di taratura
- Si è rotta la cella di carico accidentalmente

### Riferibilità

La riferibilità è il fatto che il trasduttore è stato tarato da un dispositivo con più affidabilità che è vero se stesso, finché il primo dispositivo nella serie di taratura è stato tarato dal campione nazionale.

Ci garantisce che la misura è compatibile con una misure fatta con il campione nazionale

### Scostamento dalla linearità

- Se il trasduttore non ha comportamento lineare, si può definire una linearità approssimante, e poi aggiungere una differenza nello scostamento per parte per riportare all valore vero ogni tanto.
### Altri errori di taratura

- Errori di lettura $\to$ con misuratori con frecce
- Effetto di carico
	- L'applicazione del dispositivo di misure può avere effetto su grandezza misurate
<!Diagramma amp- e volt- metro>


### Rappresentazione di Incertezza

Ci sono 3 modi per riportare la incertezza:

1. Percentuale delle media

<!Diagramma percentuale di media>

2. Percentuale di lettura

<!Diagramma percentuale lettura>
Questo è meno usato perché implica che la incertezza diminuisce più si tende a 0.

3. Sovrapposizione dei 2 metodi

<!Diagramma sovrapposizione>
Questo è più usato perché è più rappresentativo della realtà.

## Misure di Deformazione Meccanica

- Estensimetri
- Incollaggio
- Ponte di Wheatstone

Applicando una forza ad oggi, questo oggetti si deformano, questo è quello che vogliamo misurare.

<!Diagramma deformazione>

Quando un'elemento è sottoposto ad uno sforzo, l'elemento si allunga e contrare in sezione.

<!Diagramma contrazione in sezione e allungamento>

Gli estensimetri misurano questo cambio nella lunghezza localmente, riportando la deformazione locale.

Caratteristiche di un estensimetro:

- idealmente misurando solo l'estensione
- $\frac{\Delta L}{L}$ locale non media, e superficiale.
- deve avere una buone risposta in frequenza
- deve esser economicamente accessibile $\to$ cosi ne possiamo usare molte per parti diverse

### Tipi di Estensimetri

- Meccanici $\to$ Vecchio
- Ottico $\to$ Vecchio
- Acustico $\to$ usa corde vibranti, sfruttiamo la variazione nella frequenza di una corda con la tensione, la facciamo vibrare poi lo sforzo causa un cambio nella frequenza che non misuriamo.
<!Diagramma corde vibranti>
- Resistenza elettrica $\to$ misura la variazione di resistenza di un conduttore con la deformazione

## Estensimetri a Resistenza Elettrica

Dato che la resistenza ha equazione:
$$R = \frac{\rho l}{A}$$

Supponendo il conduttore ad una trazione, aumento la resistenza, questa creerà una relazione tra $\Delta R$ e $\mathcal{E}$

Gli estensimetri sono composit da una piccola serie di fili che sono disposti per esser sensibili al cambio in lunghezza in un direzione e non in un'altra.

Con la trazione troviamo la estensione dei fili della griglia.

Aumentando i fili amplifica la deformazione e ci da una misura più sensibile che è utile.

Ci sono diverse disposizioni di estensimetri per diversi usi e applicazione, che misurano la resistenza in modi e direzioni diverse. Esistono anche per materiali diversi

<!Diagrammi di estensimetri diversi>

