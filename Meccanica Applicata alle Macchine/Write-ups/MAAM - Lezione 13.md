---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 13 - Attrito e Resistenza al Rotolamento

## Attrito

Dati 2 corpi a contatto:

<!Diagramma contatto>

In realtà la superficie non sarà mai piana, e perciò ci saranno area di contatto, le aree di contatto avranno pressione elevate data la loro dimensione microscopica:

<!Diagramma superficie scabra e pressione su area di contatto>

Se proviamo a muovere le due superfici di contatto creano una forza di trazione.

Troviamo che la area delle superfici di contatto vere è molto minore delle aree di contatto nominale, di un fattore che è circa ~$10^{-3}$
$$\sum A_{i} \ll A_{nom}$$

L'attritto si genera per l'interazione tra le creste della superficie scabra e in base è la somma delle forze generate quando proviamo a staccare queste aree di contatto. Il coefficiente di attrito è proporzione tra la trazione limite (prima di scorrimento) e la forza normale:

$$\frac{T_{lim}}{N} = \frac{\sum A_{i}\tau_{\tiny{H}}}{\sum A_{i}p_{H}} = \frac{\tau_{\tiny{H}}}{p_{H}} \cdot \cancelto{ 1 }{ \frac{\sum A_{i}}{\sum A_{i}} } = f_{a} \to \substack{\text{ coefficiente di}\\\text{attrito di aderenza}}$$

<!Diagramma cubo con pressione e normale>

### Condizione di Aderenza


$|T| \leq f_{a}|N| = T_{lim}$ ?
- se si allora c'è aderenza
- se no allora c'è strisciamento $\implies |T| = f_{D}|N|$

Se li limite di trazione è sorpassato allora il pezzo inizierà a muoversi, il coefficiente di attrito allora è deformato e invece di esser di aderenza diventa il coefficiente di attrito dinamico (detto anche di strisciamento).

In generale:
$$f_{a}>f_{d}$$
Questo è vero perché durante la dinamico non tutti i contatto riesco a crearsi quindi la trazione da sorpassare è minore, la vita di ogni contatto è minore quindi non riescono a creare la forza di un contatto che li da tempo.

## Esempio

Dato un cubetto:

<!Diagramma cubetto di esempio di attrito>

Come stato iniziale, prendiamo il caso statico dove:
$$N = Mg; T= F$$
La condizione che vogliamo controllare è che:
$$T_{lim} = f_{a}N = f_{a}Mg$$
Per mantenere il caso statico dobbiamo verificare la questione: $T\leq f_{a}N?$
Questa può esser riscitta come:
$$F\leq f_{a}Mg$$

Come secondo stato prendiamo lo strisciamento, dove:
$$\begin{gather}
N= Mg \\
F-T-Ma =0 \\
T=f_{d}N=f_{d}Mg
\end{gather}$$

Possiamo trovare la accelerazione del sistema con la seconda equazione, come:
$$a = \frac{F-f_{d}Mg}{M} = \frac{F}{M}-f_{d}g = a\left|_{\overline{t}_{} ^{+}}\right.$$

$\frac{F}{M}$ è la accelerazione che contrasta la forza, nel caso di zero attrito, invece $f_{d}g$ è la riduzione dato l'attrito.

La accelerazione al limite delle trazione sarà:
$$a = \frac{F-f_{d}Mg}{M} = \frac{f_{a}Mg-f_{d}Mg}{M} = (f_{a}-f_{d})g$$

<!Diagrammi della forza, accelerazione e velocità in funzione del tempo>

## Resistenza al rotolamento

La resistenza al rotolamento si presenta quando abbiamo due corpi di rotolamento relativo:

<!Diagramma rotolamento>

Prendendo almeno uno dei due corpi come deformabile troviamo che al punto di contatto c'è uno spianamento del corpo deformabile:

<!Diagramma spianamento>

Se il corpo fosse un materiale a comportamento elastico lineare allora la sua deformazione a diversi punti nel contatto sarebbero:
<!Diagramma deformazione lineare>

Questo significa che la energia accumulata tra 2 e 3 è uguale a quella restituita tra 3 e 4.

Se invece il materiale esibisce comportamento isteretico allora date le pressione la deformazione sarà:

<!Diagramma comportamento isteretico>

La area della interna sarebbe la energia dissipata del corpo deformabile, questa energia dissipata implica la resistenza al rotolamento.

La mappa della pressione in funzione della posizione nel caso lineare e isteretico sono:

<!Diagramma linea di pressione>

Data la energia dissipata nella inizialmente nell'isteretico la pressione davanti allo 0 è maggiore invece la pressione dopo è minore, questo causa uno spostamento del punto di applicazione della forza normale di u rispetto allo x=0.

Il coefficiente di resistenza al rotolamento è $f_{v}$ con valori tipico tra $5\times 10^{-3}$  e $5\times 10^{-2}$. Questo valore cambia in base alla velocità ma nel nostro caso lo prenderemo come costante.

La potenza dissipata per resistenza al rotolamento è data dall'equazione:
$$\begin{align}
\Pi_{Diss} &= -Nuw \\
&= -Nf_{v}Rw \\
&= -N f_{v}v
\end{align}$$
Questo valore serve solo per calcolare la energia dissipata ed è negativo perché toglie potenza.

## Esempio - Resistenza al Rotolamento

<!Diagramma problema esempio>

### Bilancio delle Potenze

Non teniamo a conto dell'attrito perché è al punto di contatto dove la velocità è 0, quindi la potenza che genera/dissipa è nulla.

$$\begin{gather}
\vec{c}\cdot \vec{w} +\vec{F}\cdot \vec{v} -Nuw = M\vec{a}\cdot \vec{v} + J_{c}\vec{\dot{w}}\cdot \vec{w} \\
cw-Fv - \underbrace{ N }_{ ? } f_{v}(Rw) = Mav+J_{c}\dot{w}w \\
\text{Rotolamento}\to v=Rw\:\:; a = \dot{w}R \\
c \frac{v}{R} - Fv-Nf_{v}v = Mav+J_{c} \frac{a}{R}\cdot \frac{v}{R} \\
\frac{c}{R}-F-Nf_{v} = \left( M+\frac{J_{c}}{R^{2}} \right)a \\
N = Mg +P \\
\implies a = \frac{\frac{c}{R}-F-(P+Mg)f_{v}}{M+\frac{J_{c}}{R^{2}}}
\end{gather}$$

### Verifica di Adesione

 Questa deve esser fatta per ultima quando si sanno tutti i valori.
<!Diagramma nella verifica>

$$\begin{gather}
M_{c} \text{(ruota)}+\text{\^)}: -c+J_{c}\dot{w}+Nu+TR=0 \\
T = \frac{c-J_{c}\dot{w}-(P+Mg)f_{v}R}{R}
\end{gather}$$

Vogliamo verificare che $T\leq f_{a}N$, che può esser scritto come:

$$\frac{c-J_{c}\dot{w}}{R}-(P+Mg)f_{v} \leq f_{a}(P+Mg)$$

$T$ dipende dalla condizioni di equilibrio. Se la condizione non è verificata allora il sistema inizierà a rotolare e avanzare, creando allora due equazioni dinamiche.

