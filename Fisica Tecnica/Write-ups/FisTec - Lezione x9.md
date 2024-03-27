---
creation_date: 2023-11-30 20:02
tags:
  - fistec 
share: true
---
# Lezione 19 - Irraggiamento

## Onde Elettromagnetiche

Maxwell ci ha dato:

$$\lambda=\frac{c}{f}$$
Hertz trovo che ogni materiale non opache ha un indice di refrazione, n, tale che:

$$c= \frac{c_{o}}{n}$$
Dove $c_{o}$= 300000$\cdot 10^{3} \frac{m}{s}$

Nel 1900 Plench trovo che:
$$e= hf = \frac{hc}{\lambda}$$
h, detto costante di Planch è $=6,625 \cdot 10^{-34}J\cdot s$

Se prendiamo un corpo caldo, e massa in una camera fredda a vuoto, il corpo si raffredda, ma non è possibile con conduzione e convezione. Il trasferimento di calore in questo caso occorre attraverso l'irraggiamento.

<!Diagramma onde magnetiche>

## Irraggiamento

Un corpo nero (C.N./B.B.) $\to$ corpo ideale di riferimento per l'emissione di radiazione. È un perfetto emmittore e assorbitore di radiazione termica. Un corpo nero emmette in modo diffuso in tutte le direzioni:

<!Diagramma emisfero>

Fissata la T $[K]$ emette la massima energia rispetto a tutti gli altri corpi alla stessa T.

Attraverso esperimenti troviamo che la lunghezze d'onda emesse da corpi neri dipende alla temperatura del corpo nero:

<!Diagramma T-lambda>

Vediamo che con l'aumento delle temperatura la lunghezza d'onda diminuisce. I nostri occhi si sono adattati alla luce emesse di più dal sole (tra 0,4 e 0,7)

Mammando che aumenta T, si sposta a sinistra e la energia massima emessa aumenta.

La linea di $E_{max}$ è definita dalla Legge di Wien o di spostamento del massimo:

$$T\cdot\lambda_{max} = 2898 \mu m\cdot K$$

Fissando posso ricavare $\lambda_{max}$ e vice versa.
Per esempio il sole ha T superficiale = 5800K$$\implies=\frac{2898}{5800}\simeq 0,5 \mu m$$

Facendo l'integrale della curva di ha che il potere emissivo totale del corpo nero per unita di superfice è:
$$E_{CN}=\int\limits_{\lambda}^{} E_{\lambda CN} \, d\lambda =\sigma T^{4} \to \text{Legge di Stephan-Boltzmann}$$
$$\text{Costante di Stephan-Boltzmann }\sigma = \frac{5,67\cdot10^{-8}W}{m^{2}K^{4}}$$

## Corpi Reali

I corpi reali hanno curva di energia emessa in funzione della lunghezza d'onda meno curve di quella dei corpi neri:

<!Diagrammi curva di energia emessa>

La energia emessa dai corpi reali dipende sia della lunghezza d'onda che la direzione delle radiazione:

<!Diagramma emisfero corpo nero e reale>

Il fattore per cui le emissioni sono diminuite è detta la emissività $\mathcal{E}$.

La emissività spettrale è il fattore cambia la emissioni in funzione di $\lambda$:

$$\mathcal{E}_{\lambda}(T) = \frac{E_{\lambda}(T)}{E_{\lambda C.N}(T)}\to 0\leq \mathcal{E}_{\lambda}(T)\leq 1$$ 
La emissività direzionale invece è il fattore che cambia la emissività rispetto alla direzione:

$$\mathcal{E}_{\theta}(T)= \frac{\text{Radiazione di C.R. a T}}{\text{Radiazione di C.N. a T}}= \frac{F'(\theta)}{F(\theta)}$$

La emissività per i corpi reali non è costante, solo i corpi neri hanno emissività costante a 1:

<!Diagrammi emissività rispetto a lambda e teta>

Tutto questo significa che la emissività è dipendente solo da $\lambda,\theta$ e T

Se integro $\mathcal{E}(\lambda,\theta)$ su tutti $\lambda$ e $\theta$ ottengo l'emissività emisferica totale $\implies \mathcal{E}=\mathcal{E}(T)$ che è solo dipendente da T.

$$\mathcal{E}(T)=\frac{E(T)}{E_{CN}(T)} \frac{\to \text{Potere emissivo a T di corpo grigio e diffuso a T}}{\to \text{Potere emissivo di corpo nero a stessa T}}$$

Un corpo grigio è un corpo la cui emissività è dipendente solo da $\lambda$ e $\theta$.

#### Irradiazione su Corpo Grigio

<!Diagramma corpo grigio>

La irradiazione su ogni corpo grigio trasparente, ha parte della energia che passa attraverso, una parte che viene assorbita e una parte che viene riflessa.

Abbiamo tre coefficienti:
$\tau - \text{Coefficiente di Trasmissione/Trasmittanza}$
$\alpha - \text{Assobimento/Assorbanza}$
$\rho - \text{Riflessione o Riflettanza}$

La somma di questi tre è 1, e sappiamo che per mezzi opachi $\tau=0 \implies \alpha+\rho=1$

## Legge di Kirchhoff per l'irraggiamento

Data una cavità nera con un corpo grigio e opaco all'interno:
<!Diagramma cavita>

Raggiungiamo l'equilibrio termico tra la cavita nera e il corpo grigio quando $T_{s}=T_{c}$

A questo punto:
$$\begin{gather}
\substack{\text{Radiazione termica emmessa}\\\text{da corpo grigio}} = \substack{\text{Radiazione termica assorbita}\\\text{da corpo grigio}} \\
\mathcal{E}_{c}\cancel{ \sigma T_{c}^{4} } = \alpha_{c}\cancel{ \sigma T_{s}^{4} } \\
\implies \mathcal{E}_{c}=\alpha_{c}
\end{gather}$$
$\mathcal{E}$ è difficile da calcolare invece $\alpha$ no, quindi per i corpi grigi è possibile fare questa equivalenza.

## Fattore di Vista $\to$ puramente geometrico

Il fattore di vista è la parte del calore emesso da un corpo che raggiunge un altro corpo:
$$F_{ij}=\frac{\dot{q}_{i\to j}}{\dot{q}_{i}}\leq 1$$

<!Diagramma emisferi i con j>

Nel caso di un pezzo al centro di una concavità il fattore è 1 perché non può andare in nessun altra direzione

<!Diagramma pezzo in concavità>

Se due piastre sono molto vicine tale che la solo distanza è molto minore della loro dimensione allora il fattore è 1:

<!Diagramma piastra vicine>

Un piastra da sola piana ha fattore =0 perché nessun pezzo assorba la energia che emette, invece un piastra da sola curva non può avere fattore a 0 perché una parte delle calore emesso passa ad altre parti delle piastra stessa:

<!Diagramma piastra piana e curva>

## Regola della Reciprocità

Per due sistemi nello spazio si ha la equivalenza:

$$A_{1}F_{12}=A_{2}F_{21}$$
<!Diagramma regola delle reciprocità>

Per cavità chiusa ad N superfici $\to$ regola della somma

<!Diagramma regola della somma>

## Scambio Termico per Irraggiamento tra Superfici


Per due superfici nere a temperature diverse:

<!Diagramma superfici nere fine pag.9>

$$\begin{align}
\boxed{ \dot{Q}_{1\to2} } &= \substack{\text{Radiazione termica}\\\text{emessa da 1 intercettata}\\\text{dal corpo nero 2}}-\substack{\text{Radiazione termica}\\\text{emessa da 2 intercettata}\\\text{dal corpo nero 1}} \\
&= A_{1}E_{C.N.1}F_{12} - A_{2}E_{CN_{2}}F_{21} \\
&=A_{1}F_{12}\sigma T_{1}^{4}-A_{2}F_{21}\sigma T_{2}^{4} \\
& \text{Regola della Reciprocità:} \\
&= \boxed{ A_{1}F_{12}\sigma(T_{1}^{4}-T_{2}^{4}) }
\end{align}$$

## Superfici grigie e diffuse

Data un superfice opache ($\tau=0 \implies \alpha+\rho=1$) con energia irragiata sulla superfice G:

<!Diagramma superfici grigie e diffuse>

$J_{i}$ è la radiosità, cioè la somma di tutte le energie che abbandonano la superfice del corpo, cioè la somma della energia riflessa e della energia emessa.


$J_{i}=\rho_{i}G_{i}+\mathcal{E}_{i}E_{CN_{1}}$

Sappiamo che $\rho_{i}=1-\alpha_{i}$ e per Kirchhoff possiamo dire che $\rho_{i}=1-\mathcal{E}_{i}$

$$\implies J_{i} = (1-\mathcal{E}_{i})G_{i}+\mathcal{E}_{i}E_{CN_{i}}\to G_{i}= \frac{J_{i}-\mathcal{E}_{i}E_{CN_{i}}}{(1-\mathcal{E}_{i})}$$

Se i è corpo nero $\implies \mathcal{E}_{i}=1\implies J_{i}=E_{CN_{i}}=\sigma T_{i}^{4}$

La potenza netta scambiata da i è:

$$\begin{gather}
\dot{Q}_{i} = \substack{\text{Radiazione che}\\\text{abbandona i}}-\substack{\text{Radiazione Intercettata}\\\text{da i}} \\
= A_{i}J_{i}-A_{i}G_{i} = A_{i}J_{i} - A_{i} \frac{J_{i}-\mathcal{E}_{i}E_{CN_{i}}}{(1-\mathcal{E}_{i})} \\
\dot{Q}_{i} = \frac{A_{i}J_{i}(1-\mathcal{E}_{i})-A_{i}J_{i} + A_{i}\mathcal{E}_{i}E_{CN_{i}}}{(1-\mathcal{E}_{i})} \\
\dot{Q}_{i} = \frac{\cancel{ A_{i}J_{i} } - A_{i}\mathcal{E}_{i}J_{i} - \cancel{ A_{i}J_{i} } + A_{i}J_{i}E_{CN_{i}}}{(1-\mathcal{E}_{i})} = \frac{A_{i}\mathcal{E}_{i}}{1-\mathcal{E}_{i}}(E_{CN_{i}}-J_{i}) \\
\boxed{ \dot{Q}_{i} = \frac{E_{CNi} - J_{i}}{\frac{1-\mathcal{E}_{i}}{A_{i}\mathcal{E}_{i}}} }
\end{gather}$$

Come visto nella conduzione e convezione, la superfice grigia può esser modellata come corpo nero attaccato ad una resistenza superficiale:

<!Diagramma equivalente elettrico>

## Scambio tra due superfici disposte nello spazio

La resistenza allo scambio termico per irraggiamento tra due corpi è detta la resistenza spaziale, guardando dal calore scambiato da queste due superfici si ha:

$$\begin{align}
\dot{Q}_{12} &= \substack{\text{Radiazione che}\\\text{lascia 1 ed è}\\\text{Intereccettata da 2}} - \substack{\text{Radiazione che}\\\text{lascia 2 ed è}\\\text{Intereccettata da 1}} \\ \\

& = A_{1}J_{1}F_{12} - A_{2}J_{2}F_{21} = A_{1}F_{12}(J_{1}-J_{2}) \\
&=\frac{J_{1}-J_{2}}{\frac{1}{A_{1}F_{12}}} = \frac{\Delta T}{R} \implies  \boxed{ R_{spaziale} = \frac{1}{A_{1}F_{12}} }
\end{align}$$

### Corpi grigi nello spazio

Abbiamo corpo grigio 1 con $T_{1},\mathcal{E}_{1}$ e $A_{1}$, e un corpo grigio 2 con $T_{2},\mathcal{E}_{2}$ e $A_{2}$

<!Diagramma corpi grigi 1 e 2>

Questo sistema ha equivalente circuitale:

<!Diagramma equivalente circuitale>

$$\begin{gather}
\dot{Q}_{12} = \frac{E_{CN_{1}}-E_{CN_{2}}}{R_{S_{1}}+R_{12}+R_{S_{2}}} \\ \\

= \boxed{ \frac{\sigma (T_{1}^{4}-T_{2}^{4})}{\frac{1-\mathcal{E}_{1}}{A_{1}\mathcal{E}_{1}}+ \frac{1}{A_{1}F_{12}}+ \frac{1-\mathcal{E}_{1}}{A_{2}\mathcal{E}_{2}}} }
\end{gather}$$

### Due piastre piane parallelo

Piastra 1 ha $A_{1},\mathcal{E}_{1}$ e $T_{1}$, invece la piastra 2 ha $A_{2},\mathcal{E}_{2},T_{2}$

<!Diagramma piastra parallele>

Supponendo che $d\ll L \implies F_{12}=1$

Il calore scambiato è:

$$\begin{gather}
\dot{Q}_{12} = \frac{\sigma(T_{1}^{4}-T_{2}^{4})}{R_{s_{1}}+R_{12}+R_{S_{2}}} \\
= \boxed{ \frac{A\sigma(T_{1}^{4}-T_{2}^{4})}{\frac{1}{\mathcal{E}_{1}}-\frac{1}{\mathcal{E}_{2}}-1} }
\end{gather}$$