---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 14 - 

Un sistema di primo ordine è lineare con un componente aggiunte che è una derivata di primo ordine.

Il sistema di secondo ordine con 1 gdl è come molti sistemi funzionano. Un esempio di questo è il sistema di molla-smorzamento.

### Esempio Molla-Smorzamento

<!Diagramma pg.39>

Il funzionamento è descritto dalla funzione:
$$m\ddot{x}+r\dot{x}+kx=f$$

La cinematica di x è:
$$\begin{gather}
x=X_{o}e^{ iwt } \\
\dot{x} = iwX_{o}e^{ iwt } \\
\ddot{x} = -w^{2}X_{o}e^{ iwt } = -w^{2}x
\end{gather}$$

Sostituendo troviamo:
$$x(-mw^{2}+iwr+k)=f\to \frac{x}{f} = \frac{1}{-mw^{2}+iwr+k} = FT$$

Un altro esempio di sistema con soluzione di secondo ordine è un circuito RLC.

## Sistemi di Secondo Ordine

Sottoposto da un ingresso impulsivo, un sistema di secondo ordine risponde con la pulsazione propria:

$$w_{o}=\sqrt{ \frac{k}{m} }$$

Appena inizia la vibrazione inizia a ridursi per smorzamento, secondo l'equazione:
$$x = X_{o}\cos(wt)e^{ -\alpha t }$$
Un diagramma rappresentativo di x nel tempo è:

<!Diagramma smorzamento>

### Parametri dello Smorzamento

Ci sono 3 parametri che ci importano nello smorzamento:

$$\alpha = w_{o}h$$
$$h = \frac{r}{2mw_{o}}$$
$$\alpha =\frac{r}{2m}$$

r è lo smorzamento generale, invece h è lo smorzamento adimensionale, utile perché rappresenta il comportamento a prescindere della sua direzione.

### Esempio Bilancia con Molla 

<!Diagramma pg.42>

$$\frac{x_{o}}{f_{o}} = \frac{1}{k-mw^{2}+jwr}$$
$$\frac{x_{o}}{f_{o}} = \frac{1}{\sqrt{ (k-mw^{2})^{2}+r^{2}w^{2} }}e^{ j\phi }\to \text{modulo}$$

$$\varphi = \tan^{-1}\left( \frac{wr}{k-mw^{2}} \right) \to \text{Fase}$$

## Effetto dello Smorzamento
(Questo continua con dell'esempio)

Ci interessa il massimo di queste funzioni, quindi definiamo:
$$a = \frac{w}{w_{o}}$$
Allora l'ampiezza e la fase avranno equazioni rispetto ad a che sono:
$$\underbrace{ A(a) }_{ FT(a) } = \frac{1}{\sqrt{ (1-a)^{2}+(2ah)^{2} }}$$
$$\tan(\phi) = -\frac{2ah}{1-a^{2}}$$

Queste equazione hanno grafici:

<!Diagramma ampiezza e fase rispetto ad a>

A a = 1, troviamo che il modulo della funzione è massimo.

Diciamo che un sistema è pronto quando il modulo è costante e $\phi$ è lineare con a.

<!Diagramma di viabilità pg.43 e pg.45>

Vediamo che le linee cambiano con il valore di h. h perciò si può sfruttare per allungare la zona in cui lo strumento è pronto.

Troviamo che h$\approx$ 0,7 la curva del modulo della funzione di trasferimento è piatta:

<!DIagramma pg.45>

L'effetto dello smorzamento significa che con h $\approx$ 0,7 il modulo rimane costante molto più a lungo.

<!Diagramma pg.46 e 47>

Anche $\phi$ è lineare con f( che è necessario per definire la prontezza).

## Risposta ad Altri Segnali
### Risposta a Segnale Rampa

<!Diagramma risposta a segnale rampa>

All'inizio oscilla e poi sale con ritardo.

### Rampa fino a regime

Dato l'input:
<!Diagramma rampoa fino a regime>

La risposta sarà come l'impulso, la il sistema raggiungere un valore stabile finale:
<!Diagramma risposta gradino fino a regime>

Con h più alto, arriverà al valore finale più velocemente.

### Gradino

Dato l'input:

<!Diagramma gradino>

La risposta quindi invece sarà:
<!Diagramma risposta a gradino>

Inizia orizzontale e poi smorza al valore finale.

Dopo h =0,7 non si vedono più le oscillazioni (non significa che non ci sono)

## Deformazione Sperimentale di Prontezza

### Taratura Dinamica

 Nella taratura dinamica si studia la risposta del sistema ad ingressi semplici. La scelta di segnale da studiare è dettata dalla comodità e semplicità operativa.

### Sinusoide

Dando come ingresso una funzione sinusoidale
<!Diagramma pg.56>

Per trovare la risposta diamo una sinusoide con frequenza variabile, e troviamo la risposta armonica per ogni tale frequenza.

<!Diagramma pg.58>

### Sweep

Una taratura con armoniche sinusoidale richiede molto tempo per determinare ogni funzione di trasferimento. Lo sweep è un segnale armonico dove la frequenza cambia velocemente. Questo permette di fare un test ad ogni frequenza senza occupare il tempo che è richiesto dalla sinusoidale.

Si usano tracking filter per tenere a conto della risposta ad ogni frequenza, date le alte velocità di cambio.

### Impulso

#### Impulso Ideale

<!Diagramma impulso ideale e risposta>

Teoricamente l'impulso si distribuisce tra tutte le frequenze

#### Impulso Reale

In verità un impulso ecciterà più le frequenze basse e meno le frequenza alte.

<!Diagramma impulso reale>

Più grande è la struttura più difficile è da eccitare, quindi le ampiezze saranno più piccole.

Cambiando il sistema di impulso aggiungendo gomma al martello, cambiamo la forma dell'impulso generato. Questo viene leggermente spianato e allungato.

<!Diagramma impulso di materiali diversi>

Guardando le ampiezze in base alle frequenze si vede che la gomma ha più effetto sulle frequenze basse.

### Rumore Bianco

Impulso che ecita tutte le frequenze. Il segnale bianco è un segnale completamente casuale
<!Diagramma pg.73>

Ci sono rumori naturale che quello che vuoto o il vento che sono rumori bianchi, ma non può esser prodotto artificialmente. Il vento eccita solo a frequenze basse ed è usato molto per studiare la risposta a certa frequenze data la sua natura.

## Determinazione di $\tau$ per sistemi con 1 gdl

Data una risposta al gradino, prendiamo $\tau$ il tempo in cui il sistema ci mettere per arrivare a 63,2$\%$

<!Diagramma pg.80>

Un metodo migliore pero è:
$$\begin{gather}
\frac{q_{o}-kq_{is}}{kq_{is}} = -e^{ -t/\tau } \\
1-\frac{q_{o}}{kq_{is}}=e^{ -t/\tau } \to Z = \ln\left( 1-\frac{q_{o}}{q_{kis}} \right) \\
Z = -\frac{t}{\tau} \implies \frac{dZ}{dt} = -\frac{1}{\tau}
\end{gather}$$


Un modo per visualizzare questo è:

<!Diagramma pg.82>

Possiamo fare anche un'altro metodo:

<!Diagramma pg.84>

Con armonica usiamo $\log w$ e la ampiezza è $\phi$ dove cambia prendiamo $\tau = \frac{1}{w_{\text{break}}}$

<!Diagramma pg.83>

### Nel Secondo Ordine

<!Diagramma pg.85>

Non abbiamo $\tau$ ma abbiamo $h$ e $w_{n}$. Prendiamo la risposta ad impulso:

<!Diagramma pg.85>

$$w_{n} = \frac{2\pi}{\frac{T}{n}\sqrt{ 1-h^{2} }}$$
$$h = \frac{\ln\left( \frac{x_{1}}{x_{n}} \right)}{2\pi n}$$
Come sapere se trasduttore è abbastanza veloce:

- Tagliando il segnale del traduttore e guardando come agisce. Poi possiamo fare una ricostruzione di questo segnale finale per trovare $\tau$ e vedere se è abbastanza.

<!Diagramma pg.88 e 89>

