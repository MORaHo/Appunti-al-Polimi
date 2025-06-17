---
creation_date: 2024-02-11 14:02
tags:
  - MCS
share: true
---
# Lezione 12 - Metodo degli Spostamenti

## Ripasso

Nella ultima lezione abbiamo iniziale guardando il problema di un momento concentrato posto sul nodo B.

<!Diagramma primo problema>

Possiamo risolvere perfettamente questo con la linea elastica, questo però non è facile perché dobbiamo risolvere un'ODE di grado 4.

Avendo risolto possiamo un'equilibrio al non e troviamo che il momento concentrato può esser messo in funzione della rotazione del nodo stesso:
$$W_{b} = \frac{4EI}{L}\varphi_{b}$$
Questo è un'espressione equivalante ed una molla rotazionale agente sul nodo, questa molla infatti è vera ed è la trave stessa che si può deformare, generando un momento che bilancio il momento esterno posto su B.

Vediamo il nodo come un oggetto infinitesimale rigido (che è rigido) su cui allora possiamo fare un bilancio delle forze agenti su essi.

Dopo questo esempio abbiamo guardato un'altro esempio dove non c'era un momento concentrato posto su B ma un carico distribuito sulla trave intera.

<!Diagramma secondo esempio>

Possiamo risolvere anche qui la equazione della linea elastica e troviamo che si genera una rotazione al nodo, ma questa volta visto che non c'è carico concentrato al nodo il momento della azione interna generata dalla trave in B è 0. Questo allora significa che se volessimo fare un'equilibrio al nodo non c'è ragione fisica per la esistenza della rotazione.

Se potessimo trovare un sistema equivalente potremmo risolvere il sistema come il caso iniziale al momento concentrato cioè usando una semplice equazione simile alla legge di Hooke che ci permette di analizzare risolvere il problema facilemente.

Il problema allora è trovare $W_{b}$ equivalente che possiamo usare in congiunzione agli spostamenti per risolvere il sistema, ci sono 2 modi con cui possiamo trovare equivalenza.

### Equivalenza Energetica
Il primo modo per aver equivalenza è di trovare l'equivalenza energetica:
<!Diagramma equivalente energetica>

La cinematica del sistema è data dalla deformata è la rotazione in B:
$$\hat{v} = v_{\varphi}\cdot \hat{\varphi}_{b} $$
$\hat{v}$ è una cinematica ammissibile associata ad una possibile deformata del sistema $v_{\varphi}$.

Il lavoro compiuto dalle forze esterne per il sistema a è:
$$L_{ext}^{a} = \int\limits_{0}^{L} p\hat{v} \, dx = p \hat{\varphi}_{b}\int\limits_{0}^{l} v_{\varphi}(x) \, dx  = -\frac{pl^{2}}{12}\hat{\varphi}_{b} $$
Il lavoro compiuto dalle forze esterne per il sistema b è:
$$L_{ext}^{b} = W_{b}\cdot \hat{\varphi}_{b}$$
Per avere equivalenza energetica ci servono che questi due lavori siano uguali:
$$L_{ext}^{a} = L_{ext}^{b} \iff W_{b} = -\frac{pl^{2}}{12}$$
Per vedere se questo è corretta si può usare l'equazione della molla rotazione:
$$k_{RB}\cdot \varphi_{b} = W_{b} $$
Troviamo da qui $\varphi_{b}$:
$$\frac{4EI}{L}\cdot \varphi_{b}=  -\frac{pl^{2}}{12} \implies  \varphi_{b} = -\frac{1}{48} \frac{pl^{3}}{12}$$
Questo è in effetti la rotazione in B per il secondo esempio. Questo metodo è utile ma non è standardizzabile, non ci permetterebbe di risolvere un qualsiasi problema velocemente.

### Metodo Meccanico
Il secondo metodo è meccanico, vogliamo arrivare allo stesso risultato.

Prendiamo la struttura reale:
<!Diagramma reale>

Dopo aver identificato tutti i nodi e tutte le possibilità di spostamento generalizzato, vincoliamo questi spostamenti possibili.
Questo vincolo impone una contro-rotazione e un momento resistente.

In questo caso l'unico spostamento possibile è la rotazione in B. Definiamo allora struttura cinematicamente determinata:
<!Diagramma struttura cinematicamente determinata>

Per esser uguale alla struttura originale serve una congruenza, in questo caso $W_{b}=0$. Questo è molto simile al MDF dove imponiamo un momento relativo nullo.

Questa condizione di congruenza di congruenza ci permetterà di trovare $\varphi_{b}$ che effettivamente ci risolve la linea elastica.

Per il principio della sovrapposizione sommiamo gli effetti della struttura ausiliaria "0" dove ($p \neq 0$ e $\varphi_{b}=0$) e la struttura ausiliaria "1" dove ($p=0$ e $\varphi_{b}=1$).

Questo è come nel MDF dove identificavamo una incognita iperstatica è imponevamo ad 1 per avere una risposta semplice è poi usavamo i valori veri per ricavare con la incognita.

L'MDS e MDF sono sistemi risolutivi analoghi, il MDF funzione sulla rotazioni per trovare la forze, invece il MDS lavora sulla forze per trovare le rotazioni.

La struttura ausiliaria "0" è:
<!Diagramma struttura "0">

Vediamo che in questo caso teniamo il vincolo e attiviamo solo il carico distribuito. Non è strano che la struttura "0" sia una struttura incastro incastro.

Tutti i diversi casi di struttura sono tabellati, quindi della tabelle troviamo che:
$$\begin{cases}
V_{0}(x) = \frac{pl^{4}}{24EI} \left[ \left( \frac{x}{l} \right)^{4}-2\left( \frac{x}{l} \right)^{3}+\left( \frac{x}{l} \right)^{2} \right] \\
\varphi_{0}(x)= V_{0}'(x) = \dots \\
M_{0}(x) = -EI\varphi_{0}'(x)= \dots \\
T_{0}(x) = M_{0}'(x)= \dots
\end{cases}$$
La struttura ausiliaria "1" è:
<!Diagramma struttura 1>

Questo problema lo abbiamo già risolto, è il primo esempio in cui avevamo una carico concentrato:
Della tabelle abbiamo che:
$$\begin{cases}
v_{1}(x) = 1\cdot L{\left[ \left( \frac{x}{l} \right)^{3}-\left( \frac{x}{l} \right)^{2} \right]} \\
\varphi_{1} (x) = v_{1}'(x) = \dots \\
M_{1}(x) = -EI\varphi_{1}'(x) =\dots \\
T_{1}(x) = M_{1}'(x)= \dots
\end{cases}$$

Quello che troviamo nelle tabelle sono le diverse struttura con diversi configurazioni di carichi e le azioni interne agli estremi come.

Nel caso della struttura "0" abbiamo:
<!Diagramma struttura da tabella per 0>

Troviamo allora che:
$$W_{1,0}=\frac{pl^{2}}{12}$$
Questo è lo stesso che abbiamo trovato prima quindi sappiamo che è giusto.

Per la struttura "1" abbiamo:
<!Diagramma struttura da tabella per 1>

Troviamo allora che:
$$W_{b1} = \frac{4EI}{L} = K_{rb}$$

Per la condizione di congruenza e la sovrapposizione degli effetti abbiamo:
$$\begin{gather}
W_{b}=0 \implies  W_{b} = \varphi_{b}W_{b,1} + W_{b,0}=0 \\
\varphi_{b}\cdot k_{rb} +\frac{pl^{2}}{12}=0 \\
\implies \varphi_{b} = -\frac{1}{48}  \frac{pl^{2}}{EI}
\end{gather}$$
Abbiamo trovato la soluzione vera.

Il procedimento per il metodo meccanico e quindi il metodo degli spostamenti è:
1. Identifichiamo i nodi
2. Vincoliamo tutti gli spostamenti possibili
3. Imponiamo $W_{b}=0$
4. Studiamo n+1 strutture

Dove n è il numero di vincoli.

## Esempio di MDS con 2 di gradi di libertà

Definiamo la struttura reale e vincoliamola:
<!Diagramma struttura vincolata>

Abbiamo 2 campi di trave e 3 vincoli, ma imponiamo solo 2 vincoli.

In B serve sono definire un angolo perché non è una trave interrotta, quindi l'angolo sarà uguale a sinistra e destra.

Avendo i due vincoli possiamo possiamo definire il vettore delle coordinate lagrangiane:
$$\underline{U} = (\varphi_{b},\varphi_{c})^{T} = (U_{1},U_{2})^{T}$$
Questo è lo stesso di quello che abbiamo fatto con i corpi rigidi, questo esempio sarà per definire l'analogia tra l'MDS per i corpi rigidi e per le travi elastiche.

Con N = 2 vincoli studiamo 3 struttura ausilarie.
Pero prima di far questo definiamo le equazioni di congruenza:
$$\begin{cases}
W_{b} = W_{b_{1}}U_{1} + W_{b_{2}}U_{2}+W_{b_{0}}=0 \\
W_{c} = W_{c_{1}}U_{1} + W_{c_{2}}U_{2} + W_{c_{0}}=0
\end{cases}$$

La struttura ausiliaria "0" è:
<!Diagramma struttura 0>

Da qui troviamo:
$$W_{b_{0}} = \frac{pl^{2}}{12}$$
$$W_{c_{0}} = 0$$

La struttura ausiliaria "1" è:
<!Diagramma struttura 1>

In questa struttura troviamo:
$$\begin{cases}
W_{b_{1}} = (4+4) \frac{EI}{L} = 8  \frac{EI}{L} = K_{rb_{1}} \\
W_{c_{1}} = 2 \frac{EI}{L} = K_{rc_{1}}
\end{cases}$$
In $W_{b_{1}}$ il 4 è raddoppiato perché il vincolo deve resistere sia la trave alla sinistra che la trave alla destra.

Nei corpi rigidi avevamo scritto:
$$\underline{F}_{R} = \underline{\underline{K}}\underline{U}$$

Qui possiamo scrivere qualcosa equivalente.
Il momento con $\varphi=1$ è la resistenza della trave, questo fa senso perché la risposta di un oggetto elastico ad uno spostamento unitario è una forma uguale alla rigidezza della molla:
$$W_{b_{1}} = K_{rb} \cdot 1\implies  W_{b_{1}} = K_{rb}$$

Questo significa che possiamo descrivere ogni momento unitario dove la rotazione è unitaria come la rigidezza della trave a quel punto in quella configurazione.

Possiamo scrivere le condizioni di congruenza come:
$$\begin{cases}
W_{b} = k_{11}U_{1} + k_{12}U_{2} +P_{1} = 0 \\
W_{c} = k_{21}U_{1} + k_{22}U_{2} + P_{2} =0
\end{cases}$$

Per le costanti di rigidezza il primo pedice in quale struttura viene attivato e il secondo pedice è di chi lo attiva.

Definiamo anche le forze esterne in forma $P_{i}$, dove $P_{i}$ è il momento equivalente al carico applicato nel nodo che stiamo guardando.

In forma matriciale possiamo scrivere le condizioni di congruenza come:
$$\underline{\underline{K}}\underline{U} + \underline{P} = 0$$
Questo è lo stesso modo con cui lo abbiamo scritto nei corpi rigidi.

Vedremo che $k_{21}=k_{12}$ perché $\underline{\underline{K}}$ è sdp.

La struttura ausiliaria "2" è:
<!Diagramma struttura 2>

Troviamo:
$$k_{12} = \frac{2EI}{L}\text{ (= }k_{21}\text{ ok)}$$
$$k_{22} =\frac{4EI}{L}$$

Tutti i termini che tutti i termini $k$ sono positivi dando più credenza a quello che abbiamo detto e che confermeremo nella prossima lezione che $K$ è sdp.

Con la condizione di congruenza troviamo la soluzione agli angoli di rotazione:
$$\underline{\underline{K}}\underline{U} +\underline{P}=0 \implies  \underline{U} = -\underline{\underline{K}}^{-1}\underline{P} = \frac{pl^{3}}{12EI}\begin{pmatrix}
-\frac{1}{7}\\ \frac{1}{14}
\end{pmatrix}$$

## Ultimo Esempio

Fa un esempio usando la forma assiale della trave:
<!Diagramma si deformazione assiale>












