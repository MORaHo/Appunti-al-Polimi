---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 15 - 

Come abbiamo visto nella ultima lezione, la laminazione occorre a tutte le temperature. Fondamentalmente è un cambio di forma e riduzione di spessore.

<!Diagramma laminazione>

$$\begin{gather}
h_{e}l_{e}b_{e} = h_{u}l_{u}b_{u} \\
\text{Preso: } b_{e} \cong b_{u} \implies  h_{e}v_{e} = h_{u}v_{u} \\
\to \frac{v_{u}}{v_{e}} = \frac{h_{e}}{h_{u}} \to v_{u} > v_{e}
\end{gather}$$

Il punto dove $v = v_{c}$ è detto il punto di sezione neutra o punto di inversione perché cambia la velocità relativa al rullo.

$$L \approx AB = \sqrt{ R\Delta h }$$
$$\alpha = \frac{L}{R} \approx \sqrt{ \frac{\Delta h}{R} }$$


Guardiamo le forze che agiscono al punto di contatto:
<!Diagramma delle forze pg.18>

L'attrito consente al laminando di "imboccare" il laminatoio, cioè di entrare tr ai rulli. Queste è vero se viene verificate la condizione di imbocco.

La condizione di imbocco è verificata se $F_{t,o} \geq F_{u,o}$, cioè le componenti orizzontali somma ad una forza che punta nella direzione del moto voluto.

Se scomponiamo F con l'angolo $\alpha$:

<!Diagramma F a imbocco curvo>

$$\begin{gather}
F_{n}= \underbrace{ p }_{ \text{Pressione} }\cdot \underbrace{ dL\cdot b_{e} }_{ \text{Area Contatto} } \\
F_{t} = \underbrace{ \mu }_{ \substack{\text{Coefficiente}\\\text{di Attrito}} } \cdot p\cdot dL \cdot b_{e}
\end{gather}$$
$$\begin{gather}
F_{u,o} = p \cdot dL\cdot b_{e}\sin\alpha \\
F_{t,o} = \mu \cdot p\cdot dL\cdot b_{e}\cos\alpha
\end{gather}$$

La condizione di imbocco $F_{t,o} \geq F_{n,o}$:
$$\implies \mu \cos\alpha \geq \sin\alpha \implies \mu =\tan \tau \geq \tan\alpha \implies  \tau \geq\alpha$$
$$\mu \geq \underbrace{ \tan\alpha \approx \alpha }_{ \substack{\alpha\text{ molto piccolo}\\\text{dato che }R\gg\Delta h} } =\frac{L}{R} = \sqrt{ \frac{\Delta h}{R} } \implies \boxed{ \Delta h\leq\mu^{2}R }$$

### Se Condizione di Imbocco non è verificata

Se la condizione imbocco non è verificata, alcune cose che possiamo fare sono:
- aumentare l'attrito (riduzione in lubrificante)
	- Può esserci adesione tra rulli e laminando che non vogliamo, è rischioso e causa surriscaldamento dei cilindri riducendo la resistenza meccanica e aumenta la usura, ossidandone anche la superfice.
- Aumentare raggi dei rulli
	- Aumento in costo
- Diminuire la riduzione in spessore, fare diversi cicli di diminuizione
	- Se fatto in modo opportuno può anche velocizzare il processo.
- Applicando una forza di spinta al laminando
	- Per materiali difficili da laminare

## Condizione di Trascinamento

<!Diagramma pg.25>

Per verificare la condizione di trascinamento dobbiamo controllare tutto l'arco non solo l'imbocco, usiamo la ipotesi delle sezione neutra.

La condizione di trascinamento è verificata quando $\tau \geq \frac{\alpha}{2}$, questa è meno restrittiva della condizione d'imbocco.

## Forze di Laminazione

Se scomponiamo la forza che sta agendo perpendicolare al rulli, nei sui componenti verticali e orizzontali. Per trovare la forza orizzontale facciamo:
$$\begin{gather}
v_{u}dM_{u} -v_{e}dM_{e} = F_{o}dt \\
\implies \underbrace{ \rho A_{u}v_{u}^{2}dt-\rho A_{e}v_{e}^{2}dt }_{ \substack{\text{Variazione della quantità}\\\text{di moto fra ingresso e uscita}} } = \underbrace{ F_{o}dt }_{ \text{Impulso} }
\end{gather}$$

$$\begin{gather}
v_{e}A_{e} = v_{u}A_{u} \\
\implies F_{o} = \rho A_{e}v_{e}^{2}\left( \frac{h_{e}-h_{u}}{h_{u}} \right)
\end{gather}$$

Trovando $F_{v}$ invece, usiamo la pressione media nota $p(\theta)$:

$$p_{AV} = \frac{1}{\alpha}\int\limits_{0}^{\alpha} p(\theta) \, d\theta >Y_{f}$$
$$\implies p = \frac{2}{\sqrt{ 3 }}Y_{f}\left( 1+\frac{\mu a}{h} \right)A = \frac{2}{\sqrt{ 3 }}Y_{f}\left( 1+\frac{\mu L}{2h_{m}} \right)h_{m}$$
$h_{m} = \frac{h_{e}+h_{u}}{2} \to \text{h medio}$

$$\implies F_{v} = p_{AV}b_{m}L = p_{AV}b_{m}\sqrt{ R\Delta h } = \frac{2}{\sqrt{ 3 }}Y_{f}\left( 1+\frac{\mu L}{2h_{m}} \right)b\sqrt{ R\Delta h }$$

Facendo il confronto tra $F_{v}$ e $F_{o}$:

$$\frac{F_{v}}{F_{o}} = \frac{Y_{f}h_{u}}{\rho h_{e}v_{e}^{2}}\sqrt{ \frac{R}{\Delta h} }\cdot \frac{2}{\sqrt{ 3 }}$$

Presi numeri tipico come dalla pagina 27:

$$\frac{F_{v}}{F_{o}} = 20934$$
La laminazione è in gran parte verticale, per questo nel calcolo delle potenza trascuraremo $F_{o}$.

## Collina delle Pressione su Arco di Contatto:

<!Diagramma pg.30>

Alla sinistra il diagramma è in base a coefficiente di attrito, invece alla destra si legge come il primo ma invece è in base a $\frac{\Delta h}{h_{e}}$, cioè la percentuale di riduzione di sezione.

In tutti casi troviamo che il punto di pressione massimo è il punti di inversione. 

Con meno $\mu$ serve più arco di contatto per avere la stessa forza forza di trascinamento, e per ciò deformazione.

Con un aumento in riduzione aumenta la pressione. Se voglio aumentare la capacità di laminazione serve più forza a parità di attrito (diagramma alla destra).

## Sezione di Inversione

<!Diagramma sezione di inversione>

Possiamo trovare la posizione delle sezione di inversione con l'equazione:

$$x_{H} = \frac{R\sin\alpha}{2}+\frac{1}{4}\frac{\Delta h}{\mu}$$

Con $\mu \to \infty$ , $x_{H} = \frac{R\sin\alpha}{2}$
Invece con $\mu \to 0$, $x_{H}=\infty \implies \Delta h=0$ $\to$ La laminazione richiede attrito.

## Calcolo dell'Energia e Potenza

$$\begin{gather}
F_{v} = p_{AV}Lb_{m} \\
\text{Coppia: } M = F_{v}d \approx F_{v} \frac{L}{2} = p_{AV} \frac{L^{2}}{2}b_{m} \\
\text{Potenza: }P = 2Mw = p_{AV}b_{m}L^{2} \frac{v_{c}}{R} = p_{AV}b_{m}v_{c}\Delta h \\
\text{Energia: } W = P\cdot \text{tempo}_{lam} = (p_{Av}b_{m}v_{c}\Delta h)t_{lam} \\
\to v_{c}\cdot \text{tempo}_{lam} \cong \frac{l_{e}+l_{u}}{2} = l_{m} \\
W = p_{av}b_{m}l_{m}\Delta h = p_{av}b_{m}l_{m}h_{m} \frac{\Delta h}{h_{m}} \approx p_{av}\ln \frac{h_{e}}{h_{u}}V = uV
\end{gather}$$

L'energia di deformazione tiene a conto dell'attrito con la presenza di $\Delta h$.

## Difetti di Laminazione

- I rulli possono inflettersi
	- <!Diagramma pg.33>
	- Visto che sono vincolati alle estremità occorre una inflessione.
	- I cilindri si inflettono basato sulla direzione in cui applichiamo le forze.
	- Soluzione: con poca spesa correggere per la deformazione che subirà, cambiano il materiale o riducendo le forze.
- Surriscaldamenti Locali
	- Quando non c'è sufficiente lubrificazione, il lubrificante non è quello adatto per portare via tutto il calore che bisognerebbe togliere.
	- I rulli si surriscaldano e cucinano il laminando
- Apertura
	- <!Diagramma pg.26>
	- Se si supera attrito e si entra nella adesione, il laminando segue tutti e due i rulli alle due superfici di contatto e spezza il pezzo in due, esploitando qualsiasi difetto interno ci sia.


