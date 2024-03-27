---
creation_date: 2023-11-22 21:58
tags:
  - PIE
share: true
---
# Lezione 18

## Introduzione

Nel regime stazionario Studiamo circuiti disegnati come:

<!Diagramma transitore>

I campi che ci interessano sono:

- $\vec{B}$ - campo di induzione magnetica
- $\vec{H}$ - campo magnetico

Questi campi sono 2 cose completamente diverse come i e v, e come i e v hanno una relazione lineare tale che $$\vec{B}=\mu  \vec{H}$$

### Equazioni di Maxwell in forma differenziale

Abbiamo le leggi di Maxwell che ci spiegano come agiscono i campi magnetici:

$$\text{Legge di Ampere: }\underbrace{ \vec{\nabla}\cdot \vec{H} }_{ rot \vec{H} } = \underbrace{ \vec{J} }_{ \substack{\text{Densità}\\\text{di corrente}} } + \underbrace{ \cancelto{ 0 }{ \frac{d\vec{D}}{dt} } }_{ \substack{\text{Sistema}\\\text{Quasi-}\\\text{Stazionario}} }$$
$$\text{Legge di Gauss: }\underbrace{ \nabla \cdot \vec{B} }_{ div(\vec{B}) }=0$$
La prima legge ci dice che i campi magnetici sono derivati dalla corrente, invece il secondo ci dice che non esistono mono poli magnetici, se un polo magnetico esiste deve esistere un secondo. La seconda equazione ci dice anche che il campo di induzione non è cosante, invece il flusso del campo è costante.

Questo ultima equazione ci spiega la rappresentazione:

<!Diagramma calamita S-N con A>

L'area aumenta quando ci si allontana perché dobbiamo avere lo stesso flusso, dato che il campo induttivo diminuisce quando il ci si allontana serve più area per avere lo stesso flusso.

### Studiamo il circuito

Dato il circuito:

<!Diagramma circuito con area rossa>

Le linee nel circuito sono le linee di flusso di induzione magnetica e sono sempre tangenti al campo $\vec{B}$.

$\vec{B}$ non è mai costante ma il suo flusso lo è.

La area di aria tra il ferro è detto traferro e è molto piccolo per limitare le deviazione del campo.

La formula generale del flusso di un vettore è:

$$\text{Flusso di Vettore: }\int\limits_{S}^{} \vec{V}\cdot \hat{n} \, dS $$
<!Diagramma flusso>

In generale il flusso è quanto del campo sta attraversando la superfice in un istante, ed esempio il volume d'acqua attraverso un sezione.

Nel nostro caso il flusso ha equazione:

$$\varphi = \int\limits_{S}^{} \vec{B}\cdot  \hat{n} \, dS = [Wb]$$
La direzione di $\vec{B}$ si trova con il metodo del cacciavite:
<!Diagramma metodo del Cacciavite>

## Equazioni di Maxwell in Forma Integrata

### Legge di Ampere

Data la equazione:

$$\underbrace{ \vec{\nabla}\times \vec{H} }_{ \text{Flux di }rot\vec{H} }=\vec{J}$$

Il rotore misura la vorticosaità di un campo, il suo flusso misura quanti vortici passano per la superfice

Integrando:
$$\begin{align}
\int\limits_{S}^{} \vec{\nabla}\times \vec{H}\cdot  \hat{n} \, dS &= \int\limits_{S}^{} \vec{J} \cdot\hat{n}\, dS \\
\text{Stokes} \implies  \oint_{l} \vec{H}\cdot \vec{t}\cdot dl &= NI  
\end{align}$$
> [!note]- 
> La parte alla destra è l'integrale delle densità di corrente, l'integrale attraverso la superfice da $I_{TOT}$.
> Cioè tutta la corrente che <u>attraversa</u> la superfice (quella rossa nel nostro caso), che sono tutte le correnti delle spire, guarando il diagramma la corrente che attraversa la superice è la corrente in ogni spira cioè, NI, perché ogni spira ha I passante e ci sono N spire.
> Se il perimetro delle superfice fosse preso fuori dalla bovina le corrente si cancellerebbero (eque entranti e uscenti). Invece se più piccolo dell'area della bovina non ci sarebbero correnti uscenti o entranti.

Sapendo che $\vec{H}=\frac{\vec{B}}{\mu}$ scriviamo:
$$\begin{gather}
\oint_{l}\frac{\vec{B}}{\mu}\cdot \vec{t}\cdot dl=NI \\
\implies \boxed{ \frac{\vec{B}}{\mu_{Fe}}\cdot l_{Fe} + \frac{\vec{B}}{\mu_{o}}\cdot\delta = NI } \\
\implies \boxed{ \underbrace{ \vec{H}_{Fe} \cdot l_{Fe} }_{ U_{Fe} } + \underbrace{ \vec{H}\delta }_{ U_{o} } = \underbrace{ NI }_{ \substack{\text{Forza}\\\text{Magneto}\\\text{motrice}} } } \to \substack{\text{Legge della circuitazione Magnetica}\\\text{Legge di Kirchhoff delle Tensioni Magnetiche}}
\end{gather}$$
U sono le "tensioni magnetiche"
Questa equazione di potrebbe scrivere come il circuito:

<!Diagramma circuito con NI e U_Fe>


### Legge di Gauss

Prendendo un blocco del circuito infinitesimale:

<!Diagramma blocco per gauss>

Integrando la legge di Gauss per $\tau$ ci da:
$$\begin{gather}
\int\limits_{\tau}^{} \nabla \cdot \vec{B} \, = 0 \\
\text{Per il teorema delle divergenza: } \int\limits_{S}^{} \vec{B}\cdot  \hat{n} \, dS = 0 \\
\implies  \varphi_{\tiny{TOT}} = 0 \text{ come per LKC } i_{TOT} =0 
\end{gather}$$

Formulandola come LKC:

$$\sum_{i=1}^6 \int\limits_{S_{i}}^{} \vec{B}_{i}\cdot  \hat{n}_{i} \, dS =0$$
Sappiamo che B non esce dalla superfici 1,2,5 e 6
$$\implies \underbrace{ \vec{B}_{1}S_{1} }_{ \varphi_{1} } + \underbrace{ \vec{B}_{2}S_{2} }_{ \varphi_{2} } = 0$$
Riscrivendo il circuito abbiamo:

<!Diagramma circuito con varphi>

A questo punto possiamo scrivere le tensioni come:

$$\begin{gather}
U_{o} = \frac{\vec{B}}{\mu_{o}}\cdot\delta \cdot \frac{A_{Fe}}{A_{Fe}} = \frac{1}{\mu_{o}}\cdot \frac{\delta}{A_{Fe}}\cdot \varphi \\
U_{Fe} = \frac{\vec{B}}{\mu_{Fe}}\cdot l_{Fe} \cdot \frac{A_{Fe}}{A_{Fe}} = \frac{1}{\mu_{Fe}}\cdot \frac{l_{Fe}}{A_{Fe}} \cdot \varphi
\end{gather}$$

Una forma generale per le tensioni è:
$$U_{Fe} = \theta_{Fe}\cdot \varphi$$
Dove $\theta$ è detta riluttanza:
$$\theta = \frac{1}{\mu}\cdot \frac{l}{A} \text{come } R = \frac{1}{\rho}\cdot \frac{l}{A}$$
La riluttanza è una misura di quanto un materiale è riluttante al passaggio del campo magnetico attraverso se stesso.

Da questo punto in poi diremo che il ferro avrà $\mu=\infty$ e per ciò avrà $\theta=0$, come i cavi nei circuiti li possiamo tralasciare dai calcoli della resistenza.

## Esempio

Prendendo un sistema come:

<!Diagramma sistema in parallelo>

Possiamo costruire un circuito rappresentativo:
<!Diagramma circuito rappresentativo>

Abbiamo:
$$\begin{gather}
\theta_{S_{1}} = \frac{1}{\mu_{o}} \cdot \frac{\delta_{1}}{A_{Fe}} \\
\theta_{S_{2}} = \frac{1}{\mu_{o}} \cdot \frac{\delta_{2}}{A_{Fe}} \\
\varphi=\varphi_{1}+\varphi_{2}
\end{gather}$$
### Ultima osservazione

Il fatto che consideriamo $\mu_{Fe}=\infty$

$$\implies  H_{Fe} = \frac{B}{\mu_{Fe}} = 0$$

<!Diagramma circuito>

Il campo di induzione esiste anche se il campo magnetico è 0.

Prendendo $\mu_{Fe}=\infty$ creiamo un campo di induzione senza campo magnetico $\implies$ come creare corrente senza tensione

<!Diagramma corrente senza tensione>


