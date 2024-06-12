---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 13 - 

Un sistema di ordine 0 è lineare, con l'equazione:
$$q_{o} = kq_{i}$$

Invece un sistema di primo ordine ha equazione

$$q_{o}+\tau  \frac{dq_{o}}{dt} = kq_{i}$$
$$\implies (\tau D+1)q_{o} = kq_{i}$$
### Esempio Termometro
Un esempio di sistema di primo ordine è il termometro dove:
<!Diagramma pg.16,17,18 e 19>

Troviamo allora la funzione di trasferimento:

$$\frac{q_{o}}{q_{i}} = \frac{k}{\tau D+1} = FT$$

### Esempio Circuito RL
Dato l'esempio di un circuito RL:

<!Diagramma circuito RL>

$$\begin{gather}
L \frac{ dI_{i}(t) }{ dt } + RI_{i}(t) = V_{i}(t)  \\
(LD+R)I_{i}(t) = V_{i}(t) \\
\implies \frac{I_{i}}{V_{i}} = \frac{1}{LD+R}
\end{gather}$$

Se la frequenza è molto alta allora $V_{i} \to V_{o}$ perché la resistenza diventa molto piccola rispetto alla tensione corrente creata da L.

### Esempio Circuito RC

<!Diagramma circuito RC>

$$\begin{gather}
V_{i}(t) = Ri+\frac{Q}{C} \\
i = \frac{dQ}{dt}\text{ e }V_{c}=\frac{Q}{C} \\
V_{i} = R \frac{ dQ }{ dt } +\frac{Q}{C} = \left( DRQ+\frac{Q}{C} \right) = \left( \frac{DRC+1}{C} \right)Q \\
V_{i} = (DRC+1)V_{c}
\end{gather}$$

La funzione di trasferimento allora è:
$$\frac{V_{c}}{V_{i}} = \frac{1}{DRC+1}=FT$$
Con D che è $jw$ se la funzione è armonica.

I circuiti RL e RC sono i circuiti che sono usati nei filtri, in particolare RC è un filtro passa alto e basso.

## Risposta Dinamica di Circuiti a Primo Ordine

### Gradino

<!Diagramma risposta al gradino>

La costante $\tau$ è il parametro fondamentale degli strumenti del primo ordine.

Sappiamo che:

$$\begin{gather}
q_{o} = 0\text{ a }t=0^{+} \\
\text{Sappiamo: }q_{o} = kq_{is}(1-e^{ -\frac{t}{\tau} })
\end{gather}$$

A qualsiasi punto t la risposta sarà un percentuale dalla sua risposta finale:
$$\frac{q_{o}}{kq_{is}} = (1-e^{ -\frac{t}{\tau} })$$

Presa una certa discrepanza, si può dire che il valore è arrivato al valore finale.

## Prontezza Dinamica e $\tau$

Uno strumento è detto pronto quando la risposta all'entrata del sistema è simile a quella di una sistema lineare, cioè: $$\frac{q_{o}}{k}=q_{i}$$ Possiamo vedere la linearità separando questo in due grafici diversi, il modulo rispetto a $q_{i}$ e la fase. 

<!Diagramma pg.28>

Nel primo diagramma vediamo il coefficiente tra $q_{o}$ e $q_{i}$, vediamo che per certo numero di cicli (in questo caso $w\tau$), la risposta è simile (valore 1 sull'ascissa) all'input, poi inizia a collassare. 

Nel secondo diciamo se è pronto se $\phi$ rimane uguale con i cicli o cambia linearmente ai cicli.

Da questo vediamo che a parità di $w$, con $\tau$ più piccolo il numero di cicli prima del collasso aumenta. Un'altro modo per vederlo è che con $\tau$ più piccolo, serve una $w$ più alta tale che la risposta collassi allo stesso punto, cioè con $\tau$ basso il sistema è più pronto a rispondere a frequenza più alte.

Questo è molto evidente nei due esempi:

<!Diagramma pg.31,32,33 e 34>

Con un $\tau$ più grande i valori di k è ridotto rispetto alla linearità ideale perciò la funzione ad un certo numero di cicli inizia a collassare. Invece con $\tau$ piccolo il valore di k rimane uguale ad un sistema lineare ideale perciò non collassa nel dato numero di cicli.

(Non cambia k, questo è il valore di linearità che vogliamo avere, invece cambia il suo affetto visto nel 0,24k e 0,93k, che riducono il valore di più di quello che un sistema lineare richiederebbe.)

Con questo capiamo che $\tau$ è il valore principale per determinare la prontezza di un sistema di primo ordine data la frequenza.

## Sistema del Secondo Ordine

I sistemi di secondo ordine descrivono la maggior parte dei sistemi ingegneristici, specialmente quelli vibranti.

Un sistema vibrante tipico è disegnato come:

<!Diagramma vibrante tipico>

La sua equazione allora sarà:
$$\begin{gather}
m\ddot{x}+r\dot{x}+=f \\
x=X_{o}e^{ iwt } \\
\dot{w} = iwX_{o}\cdot e^{ iwt } = iwx \\
\ddot{x} = -w^{2}\cdot X_{o}e^{ iwt } = -w^{2}x \\
x(-mw^{2}+jwr+k)=f \\
\implies \frac{x}{f} = \frac{1}{(-mw^{2}+jwr+k)} = FT
\end{gather}$$

La equazione generale di una sistema di secondo ordine:

$$a_{2} \frac{d^{2}q_{o}}{dt^{2}} + a_{1} \frac{dq_{o}}{dt}+a_{o}q_{o} = b_{o}q_{i}$$

Parametri fondamentali:

$$f_{n} = \frac{w_{n}}{2\pi} \to \text{Frequenza propria}$$
$$h = \frac{a_{1}}{2\sqrt{ a_{0}}a_{2}}$$
$$w_{n} = \sqrt{ \frac{a_{0}}{a_{2}} }$$

La risposta di un sistema di secondo ordine è descritta da $f_{n}$ e h.

Se sotto posto a ingresso impulsivo il sistema risponde con moto oscillante di pulsazione propria $w_{n}$.w_{n}$.



