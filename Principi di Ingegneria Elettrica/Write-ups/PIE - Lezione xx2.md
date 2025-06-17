---
creation_date: 2023-12-10 20:41
tags:
  - PIE
share: true
---
# Lezione 22 - Trasformatori

## Ripasso

Nella ultima lezione abbiamo iniziato a considerare le perdite nei trasformatori

<!Diagramma trasformatore e nuovo diagramma elettrico>

La parte prima senza l'induttore ideale è la prima bovina, come abbiamo considerato prima.

La ragione perché $L_{o}$ è in parallelo è perché creiamo una induttanza che va nello stesso pezzo ma è indipendente delle bovine quindi è per effetto in parallelo.

Nelle rappresentazioni dei trasformatori possiamo muovere le resistenze e le induttanza da lato a lato basta che cambiamo il valore per riconoscere l'effetto delle bovine.

<!Diagramma spostamento delle resistenze e induttanze>

## Continuiamo

Riguardando la nostra nuova rappresentazione, se prendiamo tutte le resistenza e induttanze e le spostiamo alla destra, possiamo sostituire tutto per delle resistenze e induttanza equivalenti:

<!Diagramma resistenze e induttanze ideali>

Prendiamo:
$$V_{1n}=220V\to v_{1}=\sqrt{ 2 }\cdot 220 \cos(wt+\varphi)$$

$V_{2n}$ può variare in vase alla corrente che passa per la seconda bovina, perciò viene definita la tensione a vuoto, $V_{20}$

$$V_{2n}=\underbrace{ V_{20} }_{ i_{2}=0 }$$
Prendendo a caso:
$$A_{n}=V_{1n}I_{1n}=V_{20}I_{2n}=2200VA\to I_{1n}=\frac{2200VA}{220V}=10A$$

## Prova a Vuoto

Per trova $V_{20}$ serve fare la prova a vuoto, detta anche alimentazione a vuoto. In questa alimentazione, facciamo passare solo abbastanza corrente tale che il ferro sia alimentato e non il trasformatore:

<!Diagramma prova a vuoto>

Quando non alimentiamo il carico $I_{1}$, è talemente piccolo che le perdite alle vovine sono trascurabili rispetto al ferro allora, prendiamo $I_{1}=0$.

### Prova a Vuoto

La prova a vuoto si fa a $V_{1n}=220V$
Il trasformatore assorbe solo $I_{o}$ = 0,1A (<1% di $I_{1n}$,in questo caso usiamo il valore che abbiamo trovato prima per semplicità)

In generale abbiamo $i_{0\%}=\frac{I_{0}}{I_{1n}}\cdot100 \approx <1 \% I_{1n}$

$P_{o}=V_{1n}\cdot I_{o}\cos \varphi_{o}\to$ usiamo il wattmetro per trovare lo sfasamento

Troviamo anche allora che: $P_{0\%} = \frac{P_{0}}{A_{n}}\cdot100 = \underbrace{ 1\% \div 10\% }_{ \substack{\text{Dipende da}\\\text{qualità di }\\\text{trasformatore}} }$

Avendo questi 3 possiamo trovare le impedenze:

$$\begin{gather}
\cos \varphi_{0} = \frac{P_{0}}{V_{1n}I_{0}} \\
P_{0}=\frac{V_{1n}^{2}}{R_{0}} \\
R_{0}=\frac{V_{1n}^{2}}{P_{0}} \\
Q_{0} = P_{0}\tan \varphi_{0} = \frac{V_{1n}^{2}}{X_{0}} \\
X_{0} = \frac{V_{1n}^{2}}{Q_{0}}
\end{gather}$$
<!Diagramma triangolo delle potenze>

> [!note] 
> Di solito non calcoliamo $Z_{0}$ direttamente, usiamo Boucherot perchè ci da mento errori

## Prova di Corto Circuito

Con la prova di corto circuito vogliamo trovare la corrente $I_{2n}$ senza modificare il sistema, calcoliamo $I_{2n}$ perché non vogliamo che il circuito bruci:

<!Diagramma prova a corto circuito>

La prova di fa a $I_{2n}$ se non brucia.
Alimentiamo a $V_{1cc}$ e $V_{2cc}$ $\approx 5\% \div 15\%$ di $V_{2n}$
Abbiamo: $V_{2cc\%} = \frac{V_{cc}}{V_{20}}\cdot 100$

Troviamo $P_{cc}=V_{2cc}\cdot I_{2n}\cos \varphi_{cc}$

$$\begin{gather}
P_{cc} = V_{2cc}\cdot I_{2n}\cos \varphi_{cc} \implies  P_{cc} = R_{2eq}\cdot I_{2n}^{2} \\
\cos \varphi_{cc} = \frac{P_{cc}}{V_{2cc}\cdot I_{2n}} \\
R_{eq} = \frac{P_{cc}}{I_{2n}^{2}} \\
Q_{cc}= P_{cc}\tan \varphi_{cc} = X_{cc}I_{2n}^{2} \\
X_{cc} = \frac{Q_{cc}}{I_{2n}^{2}}
\end{gather}$$

Quando la tensione nominale è applicata le correnti e potenze sono $\sim 1\%$ del totale. Nella prova a corto circuito per fare circolare $I_{2n}$ ci serve $V_{cc} \approx 10\% V_{20}$, questo significa che $I_{0}$ e $V_{0}$ che sono già 1$\%$ sono ridotti di nuovo del 90$\%$, questo implica che sono .1% del totale e diventano trascurabili. Tutto questo significa che nella prova a corto circuito $R_{0}$ e $L_{0}$ sono trascurabili.

## Riassunto

$V_{1n}, V_{20} \implies A_{n} = V_{1n}\cdot I_{1n}=V_{20}\cdot I_{2n}$

Nella prova a corto circuito:
$$i_{0\%} = \frac{I_{0}}{I_{1n}} \text{ e }p_{0\%} = \frac{P_{0}}{A_{n}}$$
Nella prova di corto circuito:
$$v_{cc\%} = \frac{V_{cc}}{V_{20}} \text{ e }p_{cc\%} = \frac{P_{cc}}{A_{n}}$$

Tutti i modelli che useremo per i trasformatori sono altamente approssimati.