---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 8 - Principio dei Labori Virtuali

Se la somma dei lavori è nulla allora il sistema è statico, se non è uguale a 0 non è statico

$\Delta L = 0 \Leftrightarrow$ equilibrio di una sistema di corpi rigidi.

Da qui in poi usiamo $\delta$ per implicare che è virtuale, che è paragonabile all'infinitesimale.

La equazione completa è:
$$\delta L = \sum_{i}\vec{F}_{i}\cdot\delta \vec{P}_{i} + \sum_{k}\vec{c}_{k}\cdot\delta \vec{\theta}_{k}$$
Dove $\delta \vec{P}_{i}$ è lo spostamento virtuale e $\delta \vec{\theta}_{k}$ è la rotazione virtuale della stessa coppia.

Le caratteristiche di uso di questo principio sono:
1. Compatibile con i vincoli $\to$ tutto è coordinato
2. Reversibile $\to$  posso muovere in un verso e nel verso opposto
3. Di ampiezza arbitraria
4. Assimilabili ad infinitesimi ($1^{o}$ ordine)
	$\to$  piccoli ma non interessa quanto
5. Indipendente dal tempo

Facendo il confronto dai la velocità normale del tempo e gli spostamenti virtuali:

#### Velocità
$$\vec{v} = \frac{dx}{dt}\hat{i}+\frac{dy}{dt}\hat{j}$$
In questo caso $x = x(t)$ e $y = y(t)$
Se invece : $q = q(t)$

$$\vec{v} = \frac{dx}{dq}\dot{q}\hat{i}+\frac{dy}{dq}\dot{q}\hat{j}$$
#### Spostamenti Virtuali

Con gli spostamenti virtuali abbiamo un grado di liberta e per ciò una variabile indipendente, q, che per esempio nel manovellismo è $\alpha$.

$$\delta \vec{P} = \left( \frac{dx}{dq}\hat{i}+\frac{dy}{dq}\hat{j} \right)\delta \dot{q}$$
In quest'equazione: $x = x(q)$ e $y = y(q)$.

Con la geometria troviamo che le velocità e le velocità virtuali sono tangenti alla traiettorie che descrivono.

### Esempio di Soluzione con Spostamento Virtuale

<!Diagramma esempio>

Con questo sistema abbiamo sarà:
$$\begin{gather}
x_{a} = l\cos\alpha \\
y_{a} = l\sin\alpha \\
(A-O) = \vec{A} = l\cos\alpha \hat{i} + l\sin\alpha \hat{j}
\end{gather}$$

Lo spostamento virtuale invece sarà con $q =\alpha$ :
$$\delta \vec{P} = \left( \frac{dx}{dq} \hat{i}+\frac{dy}{dq}\hat{j}\right)\delta \dot{q}$$
Troviamo allora che:
$$\delta \vec{A} = -l\sin\alpha \cdot\:\delta\alpha\cdot\hat{i} + l\cos\alpha \cdot\delta\alpha \cdot \hat{j}$$

Applicando uno spostamento virtuale vediamo come cambia il resto del sistema. Usando la cinematica troviamo una sistema dipendente dal tempo, con gli spostamenti virtuali un non sistema dipendente dal tempo ma dipendente invece dalla variabile indipendente.

La velocità reale dal sistema sarebbe:
$$\vec{v} = (-l\sin\alpha)\dot{\alpha}\hat{i}+(l\cos\alpha)\dot{\alpha}\hat{j}$$

Esistono 2 approcci per studiare i sistemi, quello energetico e quelli degli equilibri statici.

### Condizione di Staticità:

Abbiamo iniziato dicendo:

$$\sum_{i}\vec{F}_{i}\cdot\delta \vec{P}_{i} + \sum_{k}\vec{c}_{k}\cdot\delta \vec{\theta}_{k}=0$$

Usando un sistema di riferimento dove F e $\delta x_{i}$ e $\delta y_{i}$ sono definite, separiamo:
$$\sum_{i}(F_{ix}\delta x_{i} + F_{iy}\delta y_{i})+\sum_{k}c_{k}\cdot\delta\theta_{k}=$$

Tendendo tutto indipendente di $t$ abbiamo:

$$= \sum_{i}\left( F_{ix}\cdot \frac{dx_{i}}{dq}\delta q + F_{iy}\cdot \frac{dy_{i}}{dq}\delta q \right)+\sum_{k}c_{k}\cdot \frac{d\theta_{k}}{dq}\delta q=$$

Gli spostamenti sono infinitesimi del primo ordine e devono rispettare i vincoli
$$ = Q\cdot\delta q = 0$$
L'equilibrio è indipendente da q, ma invece è dipendente da Q, che è effetto di F e c che applichiamo al sistema.

$$\delta L = Q\cdot\delta q\to\boxed{ \delta L \implies Q= 0 }$$

## Esempio - Manovellismo Ordinario Circolare

<!Diagramma manovellismo>

Togliamo i vincoli lasciando le reazione vincolari e abbiamo:
<!Diagramma reazione vincolari>

Il lavori delle due reazioni vincolari al punto O sono nulli, perché stiamo prendendo questo punto come punto di riferimento del sistema, ergo il braccio è 0.

$\vec{\phi_{B}}\cdot\delta \vec{B} = 0$ essendo $\perp$ tra loro.

### Approccio Cinematico
Usiamo la cinematica per studiare con equazioni che sappiamo già.

<!Diagramma spostamenti virtuali>
Vogliamo risolvere risetto allo spostamento di A con $q=\alpha$

$$\begin{gather}
\vec{c} \cdot\delta \vec{\alpha} + \vec{F}\cdot\delta \vec{B} =0 \\
\underbrace{ -c \cdot\delta\alpha }_{ \substack{(-)\text{ perchè}\\\text{direzioni}\\\text{diverse}\\\text{prese}} } - F \frac{dc}{dx} \delta \alpha = 0\implies  \underbrace{ \left( -c-F \frac{ dc }{ dx }  \right) }_{ Q } \delta \dot{\alpha} = 0
\end{gather}$$

Prendiamo gli angoli così:

<!Diagramma angoli>

Dalla cinematica sappiamo che la velocità di c è:
$$\dot{c} = \Lambda(\alpha)\dot{\alpha} = (-a\sin\alpha+a\cos\alpha \tan\beta)\dot{\alpha}$$

Portando allo spostamento virtuale abbiamo:
$$\begin{gather}
\delta c = \Lambda(\alpha)\delta\alpha \\
c=-F\Lambda(\alpha) \\
\implies c=  Fa\sin\alpha-Fa\cos\alpha \tan\beta
\end{gather}$$
### Studio con Equilibrio Statico e Flusso di Energia

<!Diagramma con equilibrio di vettori>

I vettori hanno lo stesso modulo ma non sono lo stesso vettore, quindi non si può mettere la freccia sopra, sono il loro modulo.

$R_{x}$ (biella) $\to$ $A_{x}-F=0$
Si scrive che tipo di reazione stiamo parlando per capire da cove deriva, si perdono anche meno punti durante l'esame.

$R_{y}$ (biella) $\to$ $-A_{y}+\phi_{B}=0$

$+\underset{ ) }{ < }$ $M_{a}$ (biella) $\to$ $\phi_{B}b\cos\beta-b\sin\beta(-F)=0$

$+\underset{ ) }{ < }$ $M_{o}$ (manovella) $\to$ $-c +\underbrace{ A_{y}a\cos\alpha }_{ \substack{\text{Braccio di}\\\text{Azione}} } + A_{x}\underbrace{ a\sin\alpha }_{ \substack{\text{Braccio di}\\\text{Azione}} }=0$
$$c = A_{y}a\cos\alpha+A_{x}a\sin\alpha$$

Abbiamo $A_{x} = F$ e $A_{y} = \phi_{B} = - F\tan\beta$

$\phi_{B} = -F \frac{\sin\beta}{\cos\beta} = -F\tan\beta$

Essendo tangente ferma la rotazione della biella.

Portando tutto alla asta a, abbiamo:
$$c =-F\tan\beta a\cos\alpha+ Fa\sin\alpha = F(a\sin\alpha-a\cos\alpha \tan \beta)$$

Questa è la stessa coppia che abbiamo trovato prima con la cinematica, ma ora la abbiamo trovato con il movimento dell'energia

### Approccio Grafico

<!Diagramma approccio grafico>

### Movendo il sistema di rotazione

Prendendo lo stesso sistema ma con il sistema che genera la coppia spostato per aumentare il vantaggio di c rispetto a F
<!Diagramma sistema di rotazione>




