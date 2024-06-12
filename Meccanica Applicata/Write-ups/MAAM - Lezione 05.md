---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 05 - Sistemi Funi, Cinghie, Pulegge

## Sistema pulegge
Prendiamo un sistema di pulegge mobili e fisse come:

<!Diagramma sistema pulegge>

Dato che il punto alla sinistra in alto è fisso anche il primo punto che tocca la puleggia mobile alla sinistra è nullo, come visto nella ultima lezione, all'altro lato sarà a $2v_{c}$. Questo è girato alla puleggia fissa alla sinistra. Questo velocità arriva alla puleggia mobile a destra alla sua sinistra, sappiamo anche che il centro deve avere velocità $v_{c}$ perché sta tirando su il peso, tracciando la linea, troviamo il CIR della puleggia appena a sinistra del centro e che la velocità a destra della puleggia è $4v_{c}$

<!Diagramma puleggia a destra>

Chiamiamo taglia una coppia di pulegga fisso-mobile.

Troviamo che $v_{a} = 4v_{c} \implies v_{c} = \frac{v_{a}}{4}$ .
In generale la equazione per questi sistemi è:
$$v_{c} = \frac{v_{a}}{2n_{t}}$$
Troviamo anche che $w$ è diverso per ogni puleggia.

Il sistema che abbiamo usato è molto ingombrante, quindi possiamo girare queste pulegge e aumentare la densità:

<!Diagramma pulegge girate>

La potenza del sistema è:
$$\begin{gather}
F_{a}v_{a} = F_{c}v_{c} \\
F_{a} = F_{c}\cdot \frac{v_{c}}{v_{a}} = \frac{F_{c}}{2n_{t}} \\
\end{gather}$$

## Meccanismo a camme

<!Diagramma sistema a camme>

Studiamo questo sistema mediante il vincolo di contatto, questo implica che le velocità lungo la normale devono esser uguale. Poi lo studieremo con il teorema dei moti relativi.

### Studio Vincolo di Contatto

$$\vec{v}_{p_{1}}\cdot \hat{n} = \vec{v}_{p_{2}}\cdot \hat{n}\implies [\vec{w}\times(P-O)]\cdot \hat{n} = v_{p_{2}}\cdot \hat{j}$$

Espandendo troviamo ($v_{2}$ di tutto corpo 2):

$$[\vec{w}\times\underbrace{ ((P-C)+(C-O)) }_{\substack{\text{Più facile capire come}\\\text{funzione e come risolvere}}}]\cdot \hat{n} = v_{2}\cdot\hat{j}$$

(C-O) è divisibile nei sui vettori componenti e P-C è semplificabile ad un vettore di lunghezza uguale al raggio.

$$\vec{w}\times(R\hat{j}+\overline{OC}_{} \cos\theta \hat{i}+\overline{OC}_{} \sin\theta \hat{j})\cdot \hat{n}=v_{2}\hat{j}$$

Scomponendo troviamo:
$$\begin{gather}
\hat{w}\times R\hat{j} = -wR\hat{i} \\
\vec{w}\times \overline{OC}_{}\cos\theta \hat{i} = w\overline{OC}\cos\theta \hat{j} \\
\vec{w}\times \overline{OC}_{}\sin\theta \hat{j} = -w\overline{OC}\sin\theta \hat{i}    
\end{gather}$$

<!Diagramma prodotto vettore di equazioni sopra>

Sappiamo anche che:
$$\begin{gather}
\hat{i}\cdot \hat{n} = 0 \\
\hat{j}\cdot \hat{n}=1
\end{gather}$$

Quest'ultimo implica che solo la seconda equazione delle tre scomposte rimane, allora: ($\dot{\theta}$ è modulo di $w$)

$$\dot{\theta}\overline{OC}\cos\theta \hat{j} = v_{2}\hat{j} $$
$$\implies \dot{\theta}\overline{OC}_{}\cos\theta = v_{2} $$

Creando questo grafico:

<!Diagramma sinusoidale v2>

Derivando abbiamo:

$$a_{2} = -\dot{\theta}^{2}\overline{OC}\sin\theta $$

<!Diagramma sinusoidale a2>

### Studio Teorema dei Moti Relativi

<!Diagramma teorema moti relativi>

In questo studiamo il punto di contatto come punto di riferimento

La velocità che troviamo è:

|     | $\vec{v}_{c}^{AS}$  | $\vec{v}_{c}^{TR}$ | $\vec{v_{c}}^{REL}$ |
| --- | ------------------- | ------------------ | ------------------- |
| M   | $w\overline{OC}_{}$ | $v_{2}$?           | $v_{c}^{REL}$?      |
| D   | $\perp OC$          | $\parallel y$      | $\parallel x$       |

<!Diagramma vettori>

Troviamo allora $v_{2}  = \dot{\theta}\overline{OC}\cos\theta$

La accelerazione con lo stesso approccio è:


|     | $\vec{a}_{c}^{ASS}$     | $\vec{a}_{c}^{TR}$ | $\vec{a}_{c}^{REL}$ |
| --- | ----------------------- | ------------------ | ------------------- |
| M   | $w^{2}\overline{OC}_{}$ | $a_{2}$?           | $a_{2}^{REL}$       |
| D   | C$\to$ O                | $\parallel y$      | $\parallel x$       |

<!Diagramma accelerazioni>

Allora troviamo che:
$$\vec{a}_{2} = -\dot{\theta}^{2}\overline{OC}\sin\theta \hat{j} $$

## Esame di H-Gantry

Prendiamo un sistema H-Gantry, con le 4 pulegge mobile che muovono insieme a un telaio che muove orizzontalmente, prendendo sia rifermento fisso che mobile.

<!Diagramma H-Gantry>

Il sistema H-Gantry prende $w_{1}$ e $w_{2}$ come input e genera $v_{x}$ e $v_{y}$ come output.

<!Diagramma input, output>

Guardando le due pulegge in basso a sinistra, troviamo che la pulegge fissa genera una velocità rotazione e la impone su quella mobile secondo il sistema mobile. Imponiamo che per la puleggia alla sinistra la velocità positiva sarà quella che gira nel senso anti-orario, non è la velocità vera ma solo una rappresentazione di quella relativa che sarebbe prodotta. La velocità verticale non è solo dipendente dalla velocità $w_{1}$ quindi non troviamo direttamente la velocità angolare ma solo un valore per trovarla.

Se la velocità angola e la velocità verticale hanno risultato uguale la velocità relativa è zero, la ruota non gira ma in questo caso la puleggia aumenta in lunghezza.

<!Diagramma sistema pulegge basso-sinistra>

Vedendo la velocità:
$$\begin{gather}
\vec{v}_{a}^{ASS} = \vec{v}_{a}^{TR} + \vec{v}_{a}^{REL} \\
w_{1}R\hat{j} = v_{y}\hat{j} - w_{a}R\hat{j} \\
\implies w_{1}R = v_{y} - w_{a}R
\end{gather}$$

Guardando la seconda coppia abbiamo una situazione simile:

<!Diagramma sistema pulegge basso-destra>

$$\begin{gather}
\vec{v}_{b}^{ASS} = \vec{v}_{b}^{TR} + \vec{v}_{b}^{REL} \\
-w_{2}R\hat{j} = v_{y}\hat{j} + w_{b}R\hat{j} \\
-w_{2}R = v_{y} + w_{b}R
\end{gather}$$

A e B non possono avere velocità diverse, sono limitate dalla loro velocità comune data dalla cinghia.

Guardando al riferimento mobile $x_{1},y_{1}$ troviamo :

$$w_{a}R = w_{b}R = -v_{x}$$

Questa è la stessa perché sono attaccate alla stessa cinghia.

Mettendo questa equivalente nelle equazioni che abbiamo trovato prima ci ha:
$$\left\{\begin{gather}
w_{1}R = v_{y}+v_{x} \:\:\:\:\:(1)\\ -w_{2}R = v_{y} - v_{x} \:(2)
\end{gather}\right\}$$

Facendo sottrazione e somma:
$$\begin{gather}
(1)-(2) \:\:w_{1}R+w_{2}R = 2v_{x} \implies v_{x} = \frac{R}{2}(w_{1}+w_{2})\\
(1)+(2) \:\: w_{1}R - w_{2}R = 2v_{y} \implies v_{y} = \frac{R}{2}(w_{1}-w_2)
\end{gather}$$
Mettendo questo in una matrice:

$\;\;\;\;\;\;\;\;\;\;\;\;\;\;\;\;\;\;\;\;\;\;\;\;\;\left\{\begin{gather}v_{x}\\ v_{y}\end{gather}\right\} = \begin{bmatrix} 1 & 1\\ 1 & -1\end{bmatrix}$ $\left\{\begin{gather} w_{1}\\w_{2}\end{gather}\right\}$

Due casi sono:

#### Caso $w_{1}=w_{2}=w$ :

$$\begin{gather}
v_{x} = Rw \\
v_{y} = 0
\end{gather}$$
#### Caso $w_{1}\neq 0$ e $w_{2} = 0$ :

$$\begin{gather}
v_{x} = \frac{wR}{2} \\
v_{y} = \frac{wR}{2}
\end{gather}$$

<!Diagramma vettori triangolare>

Se il motore è verticale questo non è dato dalla rotazione delle pulegge nel sistema di pulegge, dal fatto che la pulegge motori causano la banda ad andare da un lato all'altro, accorciandosi complessivamente ad un lato ed allungandosi all'altro.

![](Pasted%20image%2020240514203556.png)