---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
 # Lezione 18 - Sistemi Vibranti

Possiamo risolvere i sistemi vibranti con lagrange o un equilibrio dinamico.

## Oscillatore Armonico

<!Diagramma oscillatore armonico>

Questo sistema ha equazione:
$$m\ddot{x}+kx=0$$
Detto anche lineare tempo-invariato (LTI) per il fatto che i sui parametri (m e k) non cambiano nel tempo.

La parti dipendenti nel tempo hanno equazione:
$$\begin{gather}
x(t) =Ce^{ \lambda t } \\
\ddot{x}(t) = \lambda^{2} Ce^{ \lambda t } \\
(m\lambda^{2}+k)Ce^{ \lambda t } =0
\end{gather}$$
Dato che $m\lambda^{2}+k$ è costante nel tempo la soluzione dovrà esser indipendente del tempo:
$$m\lambda^{2}+k=0\to\lambda^{2}=-\frac{k}{m}\to\lambda=\pm \sqrt{ -\frac{k}{m} }=\pm j\sqrt{ \frac{k}{m} } =\pm jw_{o}$$

$w_{o}$ è la pulsazione propria del sistema

Per isolare il contributo lungo x prendiamo $x(t)$ come:
$$x(t) = C_{1}e^{ jw_{o}t }+C_{2}e^{ -jw_{o}t }$$

<!Diagramma con frecce su contributo x>

Eulero di dice:
$$e^{ j\theta }=\cos\theta+j\sin\theta$$

La equazione di $x(t)$ allora sarà:
$$x(t) = C_{1}\cos w_{o}t+jC_{1}\sin w_{o}t+C_{2}\cos(-w_{o}t)+jC_{2}\sin(-w_{o}t)=$$
$$=(C_{1}+C_{2})\cos(w_{o}t)+j(C_{1}-C_{2})\sin (w_{o}t)$$

Prendendo $C_{1} = a+jb$ e $C_{2}=a-jb$ :
$$\begin{gather}
C_{1}+C_{2} =a+jb+a-jb=2a=A \\
j(C_{1}-C_{2}) = [a+jb-a-(-jb)]=-2b=B
\end{gather}$$
$$\implies x(t) - A\cos w_{o}t+B\sin w_{o}t$$

$\lambda$ è caratteristica del sistema perché è data da m e k, A e B invece dipendono dalla amplitudine della vibrazione.

La velocità sarà:
$$\dot{x}(t)=-w_{o}A\sin w_{o}t+w_{o}B\cos w_{o}t$$

Troviamo allora lo spostamento **iniziale** $X_{o}$ come:
$$X_{o}=A$$
E la velocità **iniziale** dato un impulso come:
$$V_{o}=w_{o}B$$
Possiamo rimettere queste nella nostra equazione di $x(t)$:
$$x(t) = X_{o}\cos w_{o}t+\frac{V_{o}}{w_{o}}\sin w_{o}t$$

Il diagramma della vibrazione allora sarà:

<!Diagramma vibrazione condizioni iniziali rappresentate>

La equazione del sinusoide sarà:
$$x(t) = C\cos(w_{o}t+\psi)=\underbrace{ C\cos \psi }_{ A } \cos w_{o}t-\underbrace{ C\sin \psi }_{ B } \sin w_{o}t$$
Possiamo riscriverla secondo l'equazione di prima:
$$=A\cos w_{o}t+B\sin w_{o}t$$

Dato che $A=C\cos \psi$ e $B=-C\sin \psi$, possiamo trovare C come:
$$A^{2}+B^{2}=C^{2}\cos ^{2}\psi+C^{2}\sin ^{2}\psi=C^{2}\implies C = \sqrt{ A^{2}+B^{2} }$$

$$\frac{B}{A}=-\tan \psi$$

Dato che $m\lambda^{2}+k=0$, l'unica possibilità che il nostro sistema vibri viabilmente è quando vibra alla frequenza propria.

## Moto Libero Smorzato

Aggiungiamo uno smorzatore al sistema di prima:
<!Diagramma moto libero smorzato>

Questo sistema allora avrà equazione di secondo grado:
$$m\ddot{x}+r \dot{x}+kx=0$$

Le variabili allora saranno:
$$\begin{gather}
x(t)=Ce^{ \lambda t } \\
\dot{x}(t)=\lambda Ce^{ \lambda t } \\
\ddot{x}(t) = \lambda^{2}Ce^{ \lambda t }
\end{gather}$$
$$\implies (m\lambda^{2}+r\lambda+k)Ce^{ \lambda t }=0$$

Le soluzioni non banali del sistema saranno le soluzioni del quadratico, allora saranno:
$$\lambda_{1,2} = -\frac{r}{2m}\pm \sqrt{ \left( \frac{r}{2m} \right)^{2}-\frac{k}{m} }$$

Dove $\Delta=0?$

$$\left( \frac{r}{2m} \right)^{2}=\frac{k}{m}\to \frac{r}{2m}=\sqrt{ \frac{k}{m} }$$

Lo smorzamento critico $r_{c}$, è il valore di smorzamento dove il comportamento del sistema vibrante cambia da oscillante a non-lineare, questo valore critico ha equazione:
$$r_{c}= 2mw_{o}$$
h invece è il fattore di smorzamento (smorzamento adimensionale), ha equazione:
$$h=\frac{r}{r_{c}}$$

Questo ci dice la distanza di $r_{c}$ da $r$, cioè se il valore di smorzamento sarà oltre il critico (comportamento non-lineare) od sotto il critico (comportamento lineare)

$$\frac{r}{2m} \frac{w_{o}}{w_{o}} = \frac{rw_{o}}{r_{c}}=hw_{o}$$

$$\implies \lambda_{1,2} = -hw_{o}\pm \sqrt{ h^{2}w_{o}^{2}-w_{o}^{2} }=hw_{o}\pm w_{o}\sqrt{ h^{2}-1 }$$

## ? h $\lesseqgtr 1$

#### h> 1

$$\lambda_{1,2} = -hw_{o}\pm w_{o}\sqrt{ h^{2}-1 }$$
La soluzione è uguale a $-\alpha_{1}$ o $-\alpha_{2}$, due soluzioni reali negative.

Sulle asse reale saranno:
<!Diagramma alpha>

$$x(t)=Ae^{ -\alpha_{1}t }+Be^{ -\alpha_{2}t }$$

Il diagramma della posizione del tempo sarà:
<!Diagramma smorzamento h più grande di 1>

#### h=1

$$\lambda_{1,2}=-hw_{o}=-\alpha$$
Questa è una soluzione doppia per lo stesso angolo. Il diagramma dello smorzamento:
<!Diagramma smorzamento non-lineare h=1>

h=1 è lo smorzamento non-lineare che posta il sistema allo stato di minimo nel tempo minore.

Ci fa vedere che quando lo smorzamento è quello critico è il più brusco smorzamento possibile ed anche il più also smorzamento prima della oscillazione.

#### 0<h<1

Per noi non può esser negativa h.

$$\lambda_{1,2} = -hw_{o}\pm w_{o}\sqrt{ h^{2}-1 }=-h_{o}w_{o}\pm jw_{o}\sqrt{ 1-h^{2} } = -\alpha \pm jw_{d}$$

$w_{d}$ è la pulsazione damped, $=w_{o}\sqrt{ 1-h^{2} }$

$$x(t) = C_{1}e^{ -\alpha t }e^{ jw_{d}t }+C_{2}e^{ -\alpha t }e^{ -jw_{d}t }=e^{ -\alpha t }(C_{1}e^{ jw_{d}t }+C_{2}e^{ -jw_{d}t })$$

La equazione sarà:
$$x(t) = e^{ -\alpha t }(A\cos w_{d}t+B\sin w_{d}t)$$

La rappresentazione vettoriale sarà:

<!Diagramma vettoriale>

Invece il diagramma della posizione nel tempo sarà:

<!Diagramma posizione nel tempo>

$$x(t)=Ce^{ -hw_{o}t }\cos(w_{d}t+\psi)$$

## Determinazione sperimentale dello smorzamento

Immaginiamo $x(t)$ misurato

<!Diagramma smorzamento nel tempo>

Proviamo a calcolare h prendendo 2 valori di massimo successivi:
$$\begin{align}
\delta &= \ln \frac{x_{i}}{x_{i+1}} = \ln \frac{Ce^{ -hw_{o}\overline{t}_{} }\cos(w_{o \\
}t+\psi)}{Ce^{ -hw_{o}(\overline{t}_{} +T) }\cos(w_{o}(\overline{t}+T )+\psi)} \\
&= \ln \frac{e^{ -hw_{o}\overline{t}_{}  }}{e^{ -hw_{o}(\overline{t}_{} +T) }} = \ln e^{ hw_{o}T  } = hw_{o}T=hw_{o} \frac{2\pi}{w_{o}(1-h^{2})} \\
&= h \frac{2\pi}{\sqrt{ 1-h^{2} }} \approx 2\pi h \to h = \frac{\delta}{2\pi}
\end{align}$$

Di solito si prendono più periodi allora:
$$h=\frac{\delta}{n2\pi}$$

## Moto Forzato

In questo si aggiunge una forza variabile nel tempo, che per semplicità diciamo è armonica.

<!Diagramma sistema con moto forzato>

La equazione del sistema sarà:
$$m\ddot{x}+r\dot{x}+kx=F(t)=F_{o}\cos\Omega t$$

La soluzione non è più quella dell'omogenea, sarà:
$x(t)=\underbrace{ x_{G_{o}}(t) }_{ \text{transitorio} }+\underbrace{ x_{p}(t) }_{ \text{regime} }$

Ci focalizzeremo sulla soluzione particolare/ a regime.


$\Omega$ = pulsazione della forzante, detta anche driving frequency

Continua la prossima volta.