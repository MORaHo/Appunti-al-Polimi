---
creation_date: 2023-12-03 11:38
tags:
  - cosmac
share: true
---
# Esercitazione 12

## Teoria

Se prendiamo un componente ripetitamente anche molto sotto a $\sigma_{sn}$ si rompe.
##### Diagramma di Wohler

<!Diagramma di Wohler>
Con l'aumento delle rivoluzioni, per materiali come l'accaio troviamo uno sforzo limite di fatica, $\sigma_{f}$, per il materiale. Lo limite di fatica del materiale è sempre maggiore del limite di fatica del pezzo, questo è perché le proprietà.

La fatica risente molte delle dimensione, più è grande più si sente la fatica. Più il materiale è rugoso più è probabile che si formino cricche innescano la rottura.

<!Diagramma sforzo alternato>

Il fenomeno di fatica è molto sperimentale.

$$\begin{gather}
R = \frac{\sigma_{min}}{\sigma_{max}} \\ \\
\text{Sigma Alternato}\to \sigma_{a}=\sigma_{m}, \sigma_{min} = \sigma_{m}-\sigma_{a}, \sigma_{max}=\sigma_{m}+\sigma_{a} \\
\text{Fatica Pulsante}\to R =0 \implies  \sigma_{min}=0 , \sigma_{max} = 2\sigma_{m} \\
\text{Fatica Alternata}\to R = -1 \implies  \sigma_{m}=0, \sigma_{min} = -\sigma_{a}, \sigma_{max} = \sigma_{a}
\end{gather}$$
I limiti di fatica per ogni sforzo su un mezzo:
<!Diagramma limite di fatica per ogni sforzo>

La forza che alterna ha equazione:
$$F = F_{o}\sin(\omega t)$$
Nelle forze rotati si presenta la fatica e il punto più sollecitato si può in base alle forze a cui è sottoposto:
<!Diagramma forze rotanti>

Se ci sono sia forze rotanti che forze non rotanti, prendiamo il punto della forze rotante che con la forze non rotanti causa la sollecitazione più alta:

<!Digramma forze rotanti e non-rotanti>

Gli sforzi rotanti si sommano e poi troviamo il punto più sollecitato con gli sforzi non rotanti:
<!Diagramma somma di rotanti>

### Verifica

#### Coefficienti Della Fatica

##### Coefficiente Dimensionale - $b_{2}$

Il coefficiente $b_{2} <1$ perciò riduce il limite di fatica

<!Diagramma b2>

##### Coefficiente della rugosità - $b_{3}$

Anche $b_{3}<1$, perciò anche lui riduce il limite di fatica, questo è perché una superficie più rugosa have più possibilità di generare cricche.

<!Diagramma b3>
##### Coefficiente per intaglio - $k_{f}$

$k_{f}<k_{t}$, dove $k_{t}$ è il coefficiente di intaglio che abbiamo già visto.

$k_{f}= q(k_{t}-1)+1$, nei casi estremi q = 1 $\implies$ $k_{f}=k_{t}$, o q = 0 $\implies k_{f}=1$

Per il calcolo di q esistono due equazioni, la prima è la equazione di Neuber:
$$q=\frac{1}{1+\sqrt{ \frac{p}{r} }}$$
Dove r è il raggio d'intaglio

<!Diagramma per Neuber>

L'altra equaz+ione è di Peterson: $q=\frac{1}{1+\frac{a}{r}}$
<!Diagramma per peterson>

Mettendo tutti i coefficienti insieme troviamo la fatica a cui è sottoposto il nostro pezzo con l'equazione:
$$\sigma_{FA}'=\frac{\sigma_{FA}b_{2}b_{3}}{k_{f}}$$
Dove $\sigma_{FA}$ è lo sforzo assiale, flessionale, e torsionale generico, le cui equazioni abbiamo visto prima.

### Verifica
Ci sono due casi di verifica:

Il primo caso è che R = -1, cioè lo sforzo medio è 0, questo significa che:
$$\sigma_{a}\leq\sigma_{FA}'$$
Tutti gli altri casi sono dove $R \neq -1$:

#### Diagramma di Haigh:

Con il diagramma di Haigh possiamo mappa ogni sistema e trovare il limite di fatica:
<!Diagramma di Haigh>

Mettendo il nostro valore per $\sigma_{m}$ e $\sigma_{a}$, seguiamo la linea che interseca l'origine e questo punto fino alla linea di limite, il valore lungo l'asse y delle linea di limite è il punto il limite di fatica per il nostro pezzo.

Nel caso dove $\sigma_{a}^{*}=\sigma_{m}^{*}$ cioè, R = 0 allora 
$$\begin{gather}
\frac{\sigma_{a}}{\sigma_{FA}'}+\frac{\sigma_{m}}{R_{m}}=1
\end{gather}$$
Questa linea è la stessa linea di del sistema $(\sigma_{lim},\sigma_{lim})$ che ci riporta il valore di $\sigma_{lim}$ come:
$$\sigma_{lim}=\left( \frac{1}{\sigma_{FA}'} \frac{1}{R_{m}}\right)^{-1}$$

Nel caso dove $\sigma_{a}^{*} \neq \sigma_{m}^{*}$, troviamo che:
$$\left\{\begin{gather}
\sigma_{a}=\frac{\sigma_{a}^{*}}{\sigma_{m}^{*} }\sigma_{m} \\
\frac{\sigma_{a}}{\sigma_{FA}'}+\frac{\sigma_{m}}{R_{m}}=1
\end{gather}\right\}$$
La prima equazione è come y=mx, perché come spiegato prima dai valori a cui il nostro sistema è sottoposto, troviamo la linea di limite seguendo una linea dall'origine passante per il punto $(\sigma _{a}^{*},\sigma_{m}^{*})$.

In base $\sigma_{a}^{*}$ e $\sigma_{m}^{*}$ sono gli sforzi assiali ciclici a cui sottoponiamo il nostro pezzo e $\sigma_{a}$ e $\sigma_{m}$ sono gli sforzi assiali ciclici per il limite di fatica.

#### Limite di Fatica Torsionale

<!Diagramma limite di fatica torsionale>

In generale per la maggior parte dei nostri casi lavororemo nel campo dove il limite non cambia.

### Coefficiente di Sicurezza

Il coefficiente si sicurezza che useremo è 2.
$$\begin{gather}
\sigma_{lim} \geq \sigma_{a}^{*}  \\
\eta_{FA}=\frac{\sigma_{lim}}{\sigma_{a}^{*} } \geq 2
\end{gather}$$
Negli esercizi usa $\sigma_{a}$ e non $\sigma_{a^{*}}$ perché nel caso dove R = 0 non c'è differenza tra $\sigma_{a}$ e $\sigma_{lim}$ quindi non usiamo $\sigma_{a}$ per lo sforzo limite invece lo usiamo intercambiabilmente con $\sigma_{a}^{*}$




## Esercizio 1

## Esercizio 2

## Esercizio 3 (4 negli appunti)