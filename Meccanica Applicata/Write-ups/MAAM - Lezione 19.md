---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 19 - Moto Forzato (sinusoidale)


Il sistema di calcolo è come descritto qui:

<!Diagramma sistema di calcolo>

La equazione del sistema sarà:
$$m\ddot{x}+r\dot{x}+kx=F_{o}\cos\Omega t$$

La soluzione complessiva avrà la forma:
$$x(t) = \underbrace{ \underbrace{ x_{_{G}}(t) }_{ \text{Transitorio} } }_{ \substack{\text{Integrale}\\\text{Omogenea}\\\text{Associata}} }+\underbrace{ \underbrace{ x_{p}(t) }_{ \text{Regime} } }_{ \substack{\text{Integrale}\\\text{Particolare}} }$$
L'integrale particolare avrà 1 sola parte perché la forza è singola.

La condizione di regime è:
$$\lim_{ t \to \infty } x(t) = x_{p}(t)$$

Per il caso sinusoidale è utile andare dal dominio del tempo a quello delle frequenze.

Per fare tale trasformazione possiamo dire che:
$$F_{o}\cos\Omega t = \mathbb{R}e(F_{o}e^{ i\Omega t })$$
Rappresentato in su delle asse:
<!Diagramma vettore complesso su assi complesse>

Diciamo $F(t)$ la componenet reale nel tempo di $F_{o}e^{ i\Omega t }$, possiamo disegnarla nel tempo come:
<!Diagramma F nel tempo>

La variabili di x nel tempo hanno equazione:
$$\begin{gather}
x(t) = \mathbb{R}e(\overline{x}_{o} e^{ i\Omega t }) \\
\dot{x}(t) = \mathbb{R}e (i\Omega \overline{x}_{o}e^{ i\Omega t } ) \\
\ddot{x}(t) = \mathbb{R}e(-\Omega^{2}\overline{x}_{o} e^{ i\Omega t })
\end{gather}$$

Per sostituizione:
$$m\mathbb{R}e(-\Omega^{2}\overline{x}_{o} e^{ i\Omega t })+r\mathbb{R}e(i\Omega \overline{x}_{o}e^{ i\Omega t })+k\mathbb{R}e(\overline{x}_{o}e^{ i\Omega t }) = \mathbb{R}e(F_{o}e^{ i\Omega t })$$

L'uguaglianza delle parti reali implica un'uguaglianza delle parti complesse.

$$\implies -m\Omega^{2}\overline{x}_{o}e^{ i\Omega t }+ir\Omega \overline{x}_{o}e^{ i\Omega t }+k\overline{x}_{o}e^{ i\Omega t } = F_{o}e^{ i\Omega t }   $$

Abbiamo trovato un legame algebrico attraverso questo considerazioni:
$$(-m\Omega^{2}+i\Omega r+k)\overline{x}_{o}e^{ i\Omega t } = F_{o}e^{ i\Omega t } $$
Possiamo trovare allora il vettore delle vibrazioni come:
$$\overline{x}_{o} = \frac{F_{o}}{k-m\Omega^{2}+i\Omega r} \cdot \frac{k-m\Omega^{2}-i\Omega r}{k-m\Omega^{2}-i\Omega r} = \frac{F_{o}(k-m\Omega^{2})}{(k-m\Omega^{2})^{2}+(\Omega r)^{2}} - \frac{iF_{o}\Omega r}{((k-m\Omega^{2})^{2}+(\Omega r)^{2}) \to D}=$$
$$=x_{_{Re}} + ix_{i}$$

<!Diagramma parti reali e complesse della amplitudine>

La ampiezza delle vibrazioni allora sarà il modulo di quest'ultimo, allora;
$$|\overline{x}_{o} | = x_{o} = \sqrt{ x_{_{Re}}^{2}+x_{i} ^{2}} = \sqrt{ \frac{F_{o}^{2}(k-m\Omega^{2})^{2}}{D^{2}} + \frac{F_{o}^{2}(\Omega r)^{2}}{D^{2}} } = $$
$$= F_{o}\sqrt{ \frac{(k-m\Omega^{2})^{2}+(\Omega r)^{2} }{D^{2}}} = \frac{F_{o}}{\sqrt{ (k-m\Omega^{2})^{2}+(r\Omega)^{2} }}= x_{o}$$

La tangente dell'angolo di fase invece è:
$$\tan \varphi = \frac{x_{i}}{x_{_{Re}}} = -\frac{F_{o}\Omega r}{D}\cdot \frac{D}{(k-m\Omega^{2})F_{o}} = -\frac{\Omega r}{k-m\Omega^{2}}$$

Siamo riusciti a descrivere la soluzione a regime in termine di ampiezza e fase.

Proviamo a ridurre queste equazioni a termini adimensionali usando le grandezze adimensionali che già conosciamo:

I parametri che abbiamo sono:
$$\begin{gather}
h = \frac{r}{r_{c}} = \frac{r}{2mw_{o}} \\
w_{o} = \sqrt{ \frac{k}{m} } \\
a = \frac{\Omega}{w_{o}} = \text{pulsazione tangenziale}
\end{gather}$$

La ampiezza allora sarà:
$$x = \frac{F_{o}/k}{\sqrt{ \left( \frac{k}{k}-\frac{m}{k}\Omega^{2}+\frac{r\Omega}{k}  \right)^{2}}} = \frac{x_{st}}{\sqrt{(1-a^{2})^{2}+(2ha)^{2} }}\implies x_{o} = x_{st} \cdot H(a) \to H(a) = \frac{x_{o}}{x_{st}}$$

In quest'equazione $x_{st}$ è lo spostamento del sistema se la forza fosse applicata staticamente, invece $H(a)$ è la amplificazione dinamica del sistema a diverse $a$.

Per fase invece dobbiamo fare alcune cose prima:
$$\begin{gather}
1) \frac{m}{k}\Omega^{2} = \frac{\Omega^{2}}{w_{o}^{2}} =a^{2} \\
2) \frac{r\Omega}{k} = \frac{2}{2} \frac{r\Omega}{mw_{o}w_{o}} = \frac{2r}{r_{c}} \cdot \frac{\Omega}{w_{o}} = 2ha \\
\to \tan \varphi = \frac{\Omega r/k}{1-\frac{m}{k}\Omega^{2}} = -\frac{2ha}{1-a^{2}}
\end{gather}$$

### Mappando $H(a)$ rispetto ad $a$

Mappando la amplificazione dinamica, $H(a)$ in base di $a$ ci permette di capire il comportamento delle onde.

Prendiamo dei casi limite per capire a questi punti critici dove arriva:

#### Caso 1, a $\to$ 0

$\lim_{ a \to 0 } -\frac{2ha}{1-a^{2}} = 0^{-}$
$$\implies \varphi = 0$$
#### Caso 2, a $\to 1^{-}$

$$\lim_{ a \to 1^{-} } -\frac{2ha}{1-a^{2}} = -\frac{2h}{0^{+}} = -\infty = \varphi = -\frac{\pi}{2}$$
$$\implies \varphi \to -\frac{\pi}{2}$$
#### Caso 3, a $\to$ $1^{+}$

$$\lim_{ a \to 1^{+} }  -\frac{2ha}{1-a^{2}} = -\frac{2h}{0^{-}} = \infty$$
$$\implies \varphi \to -\frac{\pi}{2}$$
#### Caso 4, $a \to \infty$

$$\lim_{ a \to \infty } -\frac{2ha}{1-a^{2}} = -\frac{2h}{-a} = 0^{+}$$
$$\implies \varphi = -\pi$$

Questi andamenti possono esser tracciati come:
<!Diagramma amplificazione delle vibrazioni>
Questo diagramma può esser diviso in 3 tasi:
1. corpo rigido
2. risonanza
3. sismica

<!Diagramma dello sfasamento>

Possiamo rappresentare il comportamento in funzione del tempo come:

$a\ll 1$

<!Diagramma minore di 1>

$a =1$

<!Diagramma uguale ad 1>

$a\gg 1$

<!Diagramma maggiore ad 1>

## Rappresentazione di vettori rotanti

Prendendo la equazione originale:

$$m\ddot{x} + r\dot{x} + kx = F_{o}\cos\Omega t$$
Portiamo tutto ad un lato:
$$F_{o}\cos\Omega t-m\ddot{x}-r \dot{x}-kx=0$$

Riportando alla forma vettoriali:
$$F_{o}e^{ i\Omega t }\underbrace{ -m(-\Omega^{2}\overline{x}_{o} e^{ i\Omega t }) }_{ \overline{F_{i}}_{}  }\underbrace{ -ri\Omega \overline{x}_{o} e^{ i\Omega t } }_{ \overline{F}_{v}  } \underbrace{ - k\overline{x}_{o}e^{ i\Omega t } }_{ \overline{F}_{e}  } = 0  $$

$$\implies (F_{o}+\overline{F}_{i} +\overline{F}_{v} +\overline{F}_{e} )e^{ i\Omega t } = 0$$

Visto che abbiamo integrato il meno nella equazione delle forze, i le forze che non sono la forzante avranno verso opposto del loro vettore di smostamento.

Per $a\ll 1$

I vettori di spostamento sono:
<!Diagramma vettori di spostamento a <<1 >

I vettori delle forza sono:
<!Diagramma vettori forze a<<1>

Queste si sottraggono portandoci a:
<!Diagramma somma vettoriale delle forze>

In questo caso allora $F_{o} \approx F_{e}$

Per a =1

I vettori di spostamento sono:
<!Diagramma vettori di spostamento a=1 >

I vettori delle forza sono:
<!Diagramma vettori forze a=1 >

Queste si sottraggono portandoci a:
<!Diagramma somma vettoriale delle forze>

La forzante in questo caso allora è:
$$F_{o} \approx \overline{F_{v}}_{} $$
Dove $F_{v} = r\Omega \overline{x}_{o}$

Per $a\gg 1$

I vettori di spostamento sono:
<!Diagramma vettori di spostamento a greater than 1 >

I vettori delle forza sono:
<!Diagramma vettori forze a greater than 1>

Queste si sottraggono portandoci a:
<!Diagramma somma vettoriale delle forze>

In questo caso $F_{o} \approx F_{i}$

Questo ultimo è utile per le sospensioni perché l'inerzia è uguale e opposta alla forza forzante, questo implica che la massa non avrà accelerazione assoluta per ciò rimarrà nella stessa posizione anche se avrà moto relativo.

Troviamo quindi che molte sospensioni lavorano a $\Omega$ elevate rispetto a $w_{o}$ cioè  $a$ è molto grande.

Negli altri due casi il corpo segue la sollecitazione, che non vogliamo nel caso delle macchine, in altri casi può esser utile.