---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 7 - Uso di Estensimetri

## Sensibilità

<!Diagramma sensibilità>

La sensibilità ha equazione:

$$k = \frac{\frac{\Delta R}{R}}{\frac{\Delta L}{L}} = \frac{\frac{\Delta R}{R}}{\mathcal{E}}$$

Si solito k = 2 per estensimetri a conduttore invece k = 100 per estensimetri a seimconduttore.

La sensibilità è massimizzata nella direzione di misure, e minimizzata nella direzione ortogonale.

<!Diagramma esempio numerico pg.25 lezione 6>

Le resistenze che misuriamo sono molto piccole, quindi usiamo circuiti a ponte di Wheatstone per condizionare il canale.

## Ponte di Wheatstone

Questo è un punto di Wheatstone:
<!Diagramma ponte di Wheatstone>

Quello che misuriamo è la variazione della corrente o la tensione al punto 5, sappiamo che quando il sistema è bilanciato la corrente passante per il punto 5 è 0.

Al moment che c'è un cambio nella resistenza data dalla estensione la corrente non è più 0.

Come regola abbiamo che gli effetti dei cambi nelle resistenze opposte sono somma e gli effetti dei cambi nelle resistenze opposte sono sottratti.

Abbiamo che:

$$\Delta I_{5} = \frac{E\Delta R_{1}R_{4}}{G}$$

Possiamo semplificare la equazione, se stiamo misurando la tensione al punto 5, allora $R_{5}\gg$altre resistenze quindi:
$$\Delta I_{5} = \frac{1}{R_{5}} \frac{E}{4}\cdot   \frac{\Delta R_{1}}{R_{1}}\implies \Delta V_{5} = \frac{E}{4} \frac{\Delta R_{1}}{R_{1}}$$
Invece se misuriamo la corrente, $R_{5}\ll$ altre resistenze

$$\Delta I_{5} = \frac{E\Delta R_{1}}{2R_{1}^{2}+R_{2}R_{1}}$$

<!Diagramma per sbilanciamento pg.38>

se $R_{1} = R_{3}$ allora $\Delta I_{5}$ = 0 perché $R_{1}R_{4} = R_{3}R_{2}\implies R_{4}=R_{3}$, la tensione e corrente che passarà per il cavo di misura sarà 0, perché le tensioni che passano sono uguali e opposte quindi si cancellano.

Quando le resistenze sono uguali le correnti si cancellano al misuratore.
Se per esempio $R_{1}$ aumentasse, si crea un sbilancio nelle corrente che passerebbero in 5, questo significa che la corrente passante per l'altro non è sufficiente per cancellare, quindi ci troviamo una $I_{5}$ e conseguente $V_{5}$

$V_{AD}-V_{AB} \neq 0$ ma $>0$

#### Misura per deflessione

$\mathcal{E} \implies \Delta R\implies\Delta V$

$\Delta V = \frac{E}{4} \frac{\Delta R}{R}$

<!Diagramma esempio numerico 43>

Troviamo $\Delta V = 0,25mV$ con $E= 1V$, questo valore è molto basso, serve un'amplificatore per amplificare questi cambi che abbiamo. Un'altro modo è aumentare la tensione di alimentazione, il problema con questo metodo è che causa correnti elevate che aumentano il calore generato.

### Quarto Ponte

Il $\frac{1}{4}$ ponte è il ponte che abbiamo visto con un estensimetro, niente ci limita nell'aggiunta di più estensimetri.

<!Diagramma quarto e mezzo estensimetri>

### Ponte Intero

Questo è un ponte dove tutte e 4 le resistenze sono estenimetri.

<!Diagramma ponte intero>

### Equazione

La equazione per i ponti è:

$$\Delta V = \frac{E}{4}\left( \frac{\Delta R_{1}}{R_{1}} - \frac{\Delta R_{2}}{R_{2}}+\frac{\Delta R_{4}}{R_{4}}-\frac{\Delta R_{3}}{R_{3}} \right)$$

Si può applicare in ogni caso. Applichiamo $R_{2}$ e $R_{3}$ in posti dove si contrae perché li $\Delta R = (-)$ che aumenta V.

Nel caso dove variano solo $R_{1}$ e $R_4$ nello stesso modo allora abbiamo:
$$\Delta V = \frac{E}{4} \left( 2 \frac{\Delta R}{R} \right)$$

Più estensimetri aggiungo più aumento la sensibilità, e allo stesso momento compensiamo per gl'effetti indesiderati come quelli dato da $\Delta T$. La possibilità di aggiungere più estensimetri è il vantaggio del ponte di Wheatstone.

## Effetti di T

- L'estensimetro di danneggia
- Cambia la sensibilità $k = f(T)$
- Varia la lunghezza della griglia $\Delta L_{EST} = \alpha_{EST}\Delta T$
- La base del pezzo varia per T, $\Delta L_{pezzo} = \alpha_{pezzo}\Delta T$
- Cambia R perché cambia la resistività

### Variazione di Sensibilità

$$\beta_{k} = \frac{k_{T}-k}{k}\cdot \frac{1}{\Delta T}$$
k è il Gauge factor e $k_{t}$ è il fattore alla temperature non di taratura.
$\beta_{k}$ è il coefficiente di temperatura, dato dal produttore che usiamo per trovare $k_{t}$. Con valore tipico $80-100 \frac{ppm}{K}$

### Dilatazione differenziale

La diversa dilatazione tra pezzo e estensimetro da una dilatazione differenziale:

$$\mathcal{E}_{di} = (\alpha-\alpha_{e})\Delta T$$
Gli estensimetri sono fatti con $\alpha$ al più vicino all'acciaio o alluminio, in moltissimi casi non importa.

### Variazione di Resistività

$\rho$ cambia con T e per ciò anche R:
$$\rho = \rho_{o}(1+\beta\Delta T)$$
$$R = R_{o}(1+\beta\Delta T)$$

Mettendo tutti questi effetti insieme, troviamo:
$$\mathcal{E}_{a} = \left( \frac{\beta}{k}+(\alpha-\alpha_{e}) \right)\Delta T$$


### Compensazione degli effetti di $\Delta T$ con estensimetri

Detto anche "Dummy Gauge", un compensatore è un secondo estensimetro attaccato ad un pezzo non sollecitato che ci allora presenta $\Delta R$ per gli effetti di $\Delta R$ che allora si cancellano, dato che sono messi su lati contigui.

<!Diagramma diagramma compensatore>

#### Collegamenti a centralina

In molti casi la centralina non è vicino all'estensimetro.

<!Diagramma pg.11>

Dato questo ci sarà una non-trascurabile resistenza dei cavi e i cavi possono subire anche loro cambi di temperatura.

La resistenza allora sarà:

$$\frac{\Delta R_{L}+\Delta R_{EST}}{R_{EST}+R_{L}}$$

In un sistema a 3 fili, tutti i cavi hanno la resistenza, 2 cavi cancellano l'un l'altro, il terzo cavo sarà il cavo di misura che se stiamo misurando la tensione, la resistenza del cavo sarà trascurabile quindi non c'è problema.

In un collegamento a 4 fili non sappiamo la R dei cavi, quindi aggiungiamo altri 2 fili. I due fili usati per misurare la vera tensione alimentazione, questo ci compensa l'effetto di caduta sui cavi, ora sappiamo la differenza e i nostri calcoli non sono più errati.

## Studio di Applicazione

### Trazione 1

### Trazione 2

### Trazione 3

### Flessione 1

### Flessione 2



