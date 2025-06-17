---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 11 - 

Abbiamo visto diversi modelli:
$$\begin{cases}
\text{Sistemi Rigidi ad Elasticità Concentrata} \\
\text{Travi (Timoshenko, Eulero-Bernoulli)} \to \frac{h}{l} < \frac{1}{10}
\end{cases}$$
I metodi di soluzione che abbiamo visto:
$$\begin{cases}
\text{MDF} \to \substack{\text{Descrivere tutte le configurazioni equilibrate}\\\text{selezioniamo quella congruente, incognite }\\\text{sono forze generalizzate}} \\
\text{MDS} \to \substack{\text{Equazioni di congruenza per trovare equilibrio,}\\\text{incognita è di spostamento}}
\end{cases}$$

Abbiamo visto il MDF per i corpi rigidi e le travi, invece l'MDS lo abbiamo visto in modo sintetico per i corpi rigidi e in modo esteso per le travi. Oggi iniziamo a formalizzare il modo sintetico.

Abbiamo visto che con l'MDS ricaviamo un equazione con un senso di MDS avente $v(x)$ incognita:
$$EIv''''=p$$
Però questa equazione non è applicabile in pratica, perché ci richiederebbe di risolvere un sistemi di ODE per usarla.

Allora, usiamo l'MDS in forma discretizzata andando dal sistemi di ODE ad un sistema di equazioni algebriche. 

Facciamo questo anche se abbiamo già l'MDF perché l'MDF possiamo applicarlo solo a struttura iperstatiche e la scelta di svincolamente è a nostra scelta quindi non è facilmente digitalizzabile per uso per sistemi di modellazione.

Nelle MDS come nei rigidi è un metodo risolutivo perché possiamo risolvere sia strutture isostatiche che struttura iperstatiche.

## Esempio

Facciamo un esempio per sviluppare un idea di come funzione questo metodo risolutivo è poi lo formalizziamo.

<!Diagramma problema di esempio>

Il problema assiale e flessionale sono sconnessi perché abbiamo preso un sistema di riferimento baricentrico.

L'equazione delle infinite coordinate lagrangiane è $v(x)$, la rotazione del sistema allora sarà $\varphi(x) = v'$.

$v$ deve aderire alle condizioni di vincolo e alle condizioni di congruenza interna, cioè la condizioni che non risultato in strappi e compenetrazioni.

Facciamo l'ipotesi che stiamo usando il modello della trave di Eulero-Benoulli, quindi :
$\chi = \varphi'=v'' \implies$ v deve esser sufficientemente regolare $v\in C^{2}$ per permetterci di calcolare $\chi$, per poter garantire che non ci siano compenetrazioni e strappi.


La condizioni di vincolo sono:
$$\begin{cases}
v(0)= v(l)=0 \\
v'(0)=0
\end{cases}$$
Queste condizioni non sono abbastanza per risolvere il sistema.

Torniamo alla linea elastica.
Nella linea elastica abbiamo l'equazione della linea elastica:
$$EIv''''=p$$
È sappiamo che la variabile $v=v(x)$ con $x\in(0,L)$

Le condizioni di vincolo sono:
$$\begin{cases}
v(0)=0 \\
v(L)=0 \\
v'(0)=0 \\
\underbrace{ -EIv''(L) }_{ M(L) }=W_{b}
\end{cases}$$
Vediamo questa ultima equazione se troviamo l'equilibrio delle rotazioni al nodo B.

<!Diagramma equilibrio al nodo B>

Quello che facciamo nel metodo degli spostamenti è che prendiamo la parte infinitesima attaccata al vincolo come un corpo rigido e la trave come la parte deformabile.

Questo è molto simile a quello che abbiamo visto nei corpi rigidi dove abbiamo preso la trave intera come corpi rigidi e abbiamo visto la deformazione (movimento nella spazio) del sistema come effetto della deformazione dei vincoli e dei corpi elastici.

In questo caso visto che la trave è elastica, vediamo la deformazione (spostamenti) dei pezzi infinitesimali ai vincoli come effetto della deformabilità della trave e dei vincoli stessi.
Vediamo allora che nel MDS per il modello elastico le parti deformabili non saranno le molle ma le travi stesse.

L'insieme di corpi rigidi non sarà più l'insieme delle travi ma sarà dei nodi.

Integrando l'equazione della linea elastica troviamo una equazione generalizzata che prende forma:
$$v(x) = C_{3}x^{3}+C_{2}x^{2}+C_{1}x+C_{0}$$

Dalle prime due condizioni di vincolo ricaviamo che $C_{1}$ e $C_{2}$ sono nulli.
Dalla altre equazioni ricaviamo che:
$$\begin{cases}
C_{3}L^{3}+C_{2}L^{2} = 0 \implies C_{2}= -C_{3}L \\
-EI(6\cdot C_{3}L+2C_{2} )+W_{b}=0
\end{cases}$$
La seconda equazione la possiamo riscrivere come:
$$\begin{gather}
(6-2)C_{3}L = \frac{W_{b}}{EI}\implies C_{3} =\frac{W_{b}}{3EIL} \\
\implies v(x) = \frac{W_{b}}{4EIL}x^{3}+\frac{W_{b}}{4EI}x^{2} = \frac{W_{b}L^{2}}{4EI}\left[ \left( \frac{x}{l} \right)^{3}-\left( \frac{x}{l} \right)^{2} \right] \\
\varphi(x) = v'(x) = \frac{W_{b}L}{4EI}\left[ 3\left( \frac{x}{l} \right)^{2}-\left( \frac{x}{l} \right) \right]
\end{gather}$$
A questa equazione possiamo applicare la condizione le contorno:
$$\begin{gather}
\varphi(0)=0 \\
\varphi_{b} = \varphi(L) = \frac{W_{b}L}{4EI}
\end{gather}$$

Possiamo trovare anche i punti dove la trave ha rotazione 0:
$$\varphi(x)=0 \iff\left( \frac{x}{l} \right)\left[ 3\left( \frac{x}{l} \right)-L \right]=0 \iff \begin{cases}
\frac{x}{l}=0 \to \text{Gia noto}\\ \frac{x}{l}=\frac{2}{3} \to \text{Non noto}
\end{cases}$$

Lo spostamento a questo punto non noto è:
$$v\left( \frac{2}{3}l \right) = \frac{W_{b}L^{2}}{4EI}\left( \frac{2}{3} \right)^{2}\left[ \frac{2}{3}-1 \right] = -\frac{1}{27} \frac{W_{b}L^{2}}{EI}$$

Possiamo allora disegnare la deformata qualitativa come:
<!Diagramma deformata qualitativa>

### Calcolo dell Azioni Interne

Il momento delle trave sarà:
$$\begin{align}
M(x) = EI\chi = -EI\varphi'&=-\cancel{ EI }\cdot \frac{W_{b}\cancel{ L }}{4\cancel{ EIL }}\left[ 6\left( \frac{x}{l} \right)-2 \right]\\&= -\frac{W_{b}}{4}\left[ 6\left( \frac{x}{l} \right)-2 \right]
\end{align}$$

Possiamo trovare l'azione di taglio derivando:
$$T(x) = M'(x) = -EI\varphi'' = -\frac{W_{b}}{4L}\cdot 6 = -\frac{3}{2} \frac{W_{b}}{L}$$
Questo valore è costante quindi il momento ha andamento lineare, che vediamo alla equazione del momento, e ci servono solo il valore ai due estremi per trovare il diagramma del momento:
$$\begin{cases}
M(0)= \frac{W_{b}}{2}\\M(L) = -W_{b}
\end{cases}$$

<!Diagramma del momento>

La rotazione al nodo B è:
$$\varphi_{b} = \varphi(L) = \frac{W_{b}L}{4EI} \to \varphi_{b}\text{ e }W_{b}\text{ sono lineari tra l'un l'altro} $$
 Possiamo definire una costante:
 $$K_{RB} = \frac{4EI}{L}$$
 Per cui: $$\varphi_{B} = \frac{W_{B}}{K_{RB}} \to W_{b} = K_{rb}\cdot \varphi_{b}$$
Questo è l'atto di una molla rotazionale. Possiamo vedere che la trave agisce come una molla rotazionale intorno al nodo equilibrando il momento agente in B.

<!Diagramma molla rotazionale in B>

Avendo irrigidito solo il materiale della trave intorno al nodo B, il momento delle azioni interne è come una molla.

$K_{rb}$ è la rigidezza della trave rispetto al nodo B.
$W_{b} = \varphi_{b}\cdot k_{RB}$ in effetti allora è equazione di equilibrio al nodo B.

Conoscendo $\varphi_{b}$ conosco tutti gli spostamenti, questo però non è gli infiniti spostamenti che abbiamo detto che ci servono per descrivere la trave. Allora è possibile esprimere $v(x)$ in termine di $\varphi_{b}$? La risposta è si.

Sapendo che:
$$\frac{W_{b}L^{2}}{4EI}=\varphi_{b}L$$
Allora, da quello che abbiamo trovato prima, possiamo scrivere $v(x)$ come:
$$v(x) = \varphi_{b}L\left[ \left( \frac{x}{l} \right)^{3}-\left( \frac{x}{l} \right)^{2} \right]$$
Se risolviamo la linea elastica per $\varphi_{b}$, possiamo trovare $v(x)$, allora le infinite configurazioni interne sono descritte da $\varphi_{b}$, $\varphi_{b}$ equilibrata è quello che tiene a conto di tutte le azioni interne ed interne, e le rigidezze.

Possiamo ricavare $k_{rb}$ per i diversi casi, cambiando il 4 nella equazione $k_{rb}=\frac{4EI}{L}$ 

Anziché aste rigide abbiamo i nodi rigidi, anziché le molle abbiamo le travi elastiche.

## Esempio

Prendiamo un laltro esempio e risolvere con i valori in tabella:

<!Diagramma esempio>

Abbiamo come sempre l'equazione della linea elastica e la condizioni di contorno:
$$\begin{cases}
EIv''''=  p \\
v(0)=0 \\
v'(0)=0 \\
v(L)=0 \\
\underbrace{ -EIv'' }_{ M(L) } = 0 \implies  v''(L)=0
\end{cases}$$
Possiamo scrivere allora le equazioni per lo spostamento traslazionale e la rotazione come:
$$\begin{gather}
v(x) = \frac{pl^{4}}{48}\cdot \left[ 2\cdot\left( \frac{x}{l} \right)^{4}-5\cdot\left( \frac{x}{l} \right)^{3}+3\cdot\left( \frac{x}{l} \right)^{2} \right] \\
\varphi(x) = \frac{pl^{3}}{48EI} \left[ 8\cdot\left( \frac{x}{l} \right)^{3}-15\cdot\left( \frac{x}{l} \right)^{2}+6\cdot \left( \frac{x}{l} \right) \right]
\end{gather}$$
Possiamo allora trovare il $\varphi_{b}$, che ha valore:
$$\varphi_{b} = -\frac{1}{48} \frac{pl^{3}}{EI}$$
Anche qui abbiamo risolto il problema e abbiamo trovato $\varphi_{b}$, potremmo scrivere la deformata $v(x)$ in funzione di $\varphi_{b}$ se volessimo.

Avendo trovato $\varphi_{b}$ non è apparente la forza sul nodo che provoca la sua approssimazione. Non abbiamo $W_{b}$ che lo genera, solo il carico distribuito. Non possiamo calcolare le azioni interne.

Il fatto che $M(L)$ è 0, a B è un problema perché significa che non possiamo trovare in modo sistematico come prima.

Prima stavamo caricando il nodo, qui stiamo caricando la trave, questo allora significa che non è più parallelizzabile
ai sistemi rigidi, visto che le molle non possono esser caricate, le travi invece si.

Quello che possiamo fare è trovare un momento esterno "equivalente" all'effetto di p su B.

<!Diagramma momento equivalente>

Quello che cambia rispetto a prima è il carico esterno.
Quello che facciamo allora è applicare un momento concentrato che genera un'azione di rotazione di B equivalente al carico distribuito.

Il problema allora è di definire $\widetilde{W}$, ci sono due modi per far ciò.

### Metodo "astratto"

Prendiamo una deformata cinematicamente ammissibile che rispetta tutti i vincoli:
$$\hat{v}(x) = \hat{\varphi}_{b}\cdot v_{p}(x) = \varphi_{b}L\left[ \left( \frac{x}{l} \right)^{3}-\left( \frac{x}{l} \right)^{2} \right]$$
$v_{p}$ è una deformata qualsiasi, dove $v_{p}(L)= 1$, cioè in L da $\varphi_{b}$. Possiamo usare quelle dell'esempio 1, visto che ammette i requisiti.

$v_{p}$ non è la deformata vera della trave ma è una qualsiasi cinematicamente ammissibile.

Prendiamo 2 sistemi di carico, il sistemi di carico A:
<!Diagramma sistema di carico A>
E il sistema di carico B:
<!Diagramma sistema di carico B>

Quello che vogliamo è che $\widetilde{W}_{B}$ sia equivalente all'effetto del carico distribuito p. Quello che chiediamo nel metodo astratto è che $\widetilde{W}$ sia energeticamente equivalente a p, cioè compiono la stesso lavoro.

Calcoliamo allora il lavoro di tutti e due i sistemi di carico:
$$\begin{gather}
L_{ext}^{A} = \int\limits_{0}^{L} p \hat{v}(x)  \, dx = -\frac{pl^{2}}{12}\hat{\varphi}_{b} \\
L_{ext}^{B} = \widetilde{W}_{b}\cdot \hat{\varphi}_{b} \\
L_{ext}^{A} = L_{ext}^{B} \iff \widetilde{W}_{b}= -\frac{pl^{2}}{12} \\
\underbrace{ \frac{4EI}{L} }_{ k_{RB} }\cdot \varphi_{b} = -\frac{pl^{2}}{12} \to \varphi_{b} = -\frac{pl^{3}}{48EI}
\end{gather}$$
Con questo metodo abbiamo trovato lo stesso valore della rotazione con la risoluzione della linea elastica.

$\widetilde{W}_{b}$ non esiste in realtà, è un equivalente energetico che facilita i calcoli.
### Metodo "concreto"

Il metodo più concreto è quello che useremo per quello che forma la base del metodo degli spostamenti che usiamo.

Definiamo una struttura reale:
<!Diagramma struttura reale>

E definiamo anche una struttura principale cinematicamente determinata:
<!Diagramma struttura principale cinematicamente determinata>
In questa struttura troviamo i nodi, e poi vincoliamo tutti gradi di libertà di questi nodi tale che la struttura non possa deformarsi.

Per effetto dell'ipervincolamente abbiamo uno cedimento vincolare rotazionale e un momento in B per mantere l'equilibrio.

$W_{b}$ è effetto del caso p, ed è reazione vincolare.
$\varphi_{b}$ è la rotazione reale, agente come se fosse cedimento vincolare.

La condizione di equivalente è la condizione di congruenza cioè che $W_{b}= 0$.

Possiamo definire una struttura ausiliaria "0" ($\varphi_{b}=0$,$p\neq 0$)

<!Diagramma struttura 0>

Questa struttura è facile da risolvere ed è facile da risolvere.

Possiamo definire anche la struttura ausiliaria "1" ($\varphi_{b}\neq 0$,$p=0$)

<!Diagramma struttura 1>

Questa struttura è quella che abbiamo risolto nel primo esempio.

Per il principi della sovrapposizione possiamo scrivere:
$$W_{b} = W_{b,0} + \varphi_{b}\cdot W_{b,1}=0$$
Questo metodo di risoluzione più concreta.








