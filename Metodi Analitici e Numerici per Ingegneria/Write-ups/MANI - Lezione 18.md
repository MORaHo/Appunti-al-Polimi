---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 18 - PDE

Definiamo la funzione differenziabile:
$$u:\Omega\to \mathbb{R}$$
Dove $\Omega$ è il dominio in cui la funzione varia, il dominio è di dimensione d.

## Operatori

### Operatori di Ordine 1

Ci sono 2 operatori di ordine 1 che possiamo utilizzare per operare sulla nostra funzione, questi operatori sono il gradiente e lo .

Il gradiente ($\nabla$) che converge uno scalare in un vettore.
$$\nabla u \in \mathbb{R}^{d}\to d=2,3$$
$$\begin{cases}
\text{se }d=2 \to \nabla u = \begin{bmatrix}\frac{ \partial u }{ \partial x } ,\frac{ \partial u }{ \partial y } \end{bmatrix}^{T}  \\
se d = 3 \to \nabla u = \begin{bmatrix} \frac{ \partial u }{ \partial x } ,\frac{ \partial u }{ \partial y } ,\frac{ \partial u }{ \partial z } \end{bmatrix}^{T}
\end{cases}$$

La divergenza è il prodotto scalare tra gradiente e la funzione ($\nabla \cdot$) e converte un vettore in uno scalare.

Preso il vettore di funzioni:
$$v = [v_{1},v_{2},v_{3}]^{T}$$
La divergenza è:
$$\nabla \cdot v(x) = \frac{ \partial v_{1} }{ \partial x } + \frac{ \partial v_{2} }{ \partial y } + \frac{ \partial v_{3} }{ \partial z }  $$

C'è un ordine di convergenza di ordine due la combinazione dei due operatori di ordine 1, questo operatore è il Laplaciano ($\Delta$). Il Laplaciano converte il scalare in uno scalare.

$$\begin{align}
\Delta u = \underbrace{ \nabla \cdot }_{ \text{div} }(\underbrace{ \nabla u }_{ \text{grad} }) &= \nabla \cdot\left[ \frac{ \partial u }{ \partial x } , \frac{ \partial u }{ \partial y } ,\frac{ \partial u }{ \partial z } \right]^{T} \\
&= \frac{ \partial  }{ \partial x } \cdot \frac{ \partial u }{ \partial x } +\frac{ \partial  }{ \partial y } \cdot \frac{ \partial u }{ \partial y } + \frac{ \partial  }{ \partial z } \cdot \frac{ \partial u }{ \partial z }  \\
&=\frac{ \partial^{2} u }{ \partial x^{2} } +\frac{ \partial^{2} u }{ \partial y^{2} } +\frac{ \partial^{2} u }{ \partial z^{2} } 
\end{align}$$

## Classificazioni di PDEs

Classificare una funzione è molto facile se la funzione è lineare di secondo ordine e a coefficienti costanti.

Prendiamo il PDE: $Lu =g$.

Dove:
$$Lu = \underbrace{ A \frac{ \partial^{2} u }{ \partial x_{1}^{2} }+B\frac{ \partial^{2} u }{ \partial x_{1} \partial x_{2} } + C \frac{ \partial^{2} u }{ \partial x_{2}^{2} } }_{ \text{Blocco Derivate Ordine 2} } + \underbrace{ D \frac{ \partial u }{ \partial x_{1} }+E \frac{ \partial u }{ \partial x_{2} } }_{ \substack{\text{Blocco Derivate}\\\text{Ordine 1}} } + \underbrace{ Fu }_{ \substack{\text{Blocco}\\\text{Derivate}\\\text{Ordine 0}} }   $$
Dove $A,B,C,D,E,F \in \mathbb{R}$ $\to$  se non sono coefficienti reali allora non sarebbe lineare.

$x_{1},x_{2} \in \{x,y,z,t\}$ sono due qualunque delle variabili indipendenti.

Per classificare questa la PDE usiamo la discriminante come la base della nostra classificazione.

Il discriminante è:
$$\mathscr{D} = B^{2}-4AC$$
$$\begin{cases}
\text{Se }\mathscr{D} <0 \to \text{PDE è ellittico} \\
\text{Se } \mathscr{D} =0 \to \text{ PDE è parabolico} \\
\text{Se }\mathscr{D} > 0 \to \text{ PDE è iperbolica}
\end{cases}$$

Le PDE ellittiche sono usate per sistemi stazionari, sono complicate da risolvere ma non impossibili. Le PDE paraboliche descrivono sistemi evolutivi (cioè che variano nel tempo). Per ultimo le PDE iperboliche sono molto difficili da risolvere, descrivono fenomeni come onde, urti, fenomeni diffusivi ed altri.
### Esempi

#### Esempio 1 $\to$ Equazione di Laplace

In una dimensione la equazione di Laplace prende forma:
$$\begin{cases}
-u''(x) = 0 \to\Omega = (a,b)\subset \mathbb{R} \\
+\text{ CB (condizione di bordo)}
\end{cases}$$
In 2 o 3 dimensioni prende forma:
$$\begin{cases}
-\Delta u=0 \text{ in }\Omega \subset \mathbb{R}^{d} \\
+2/3 \text{ CB}
\end{cases}$$

Usiamo la forma in 2 dimensioni per fare la classificazione:
$$-\Delta u = -\frac{ \partial^{2} u }{ \partial x^{2} } -\frac{ \partial^{2} u }{ \partial y^{2} } $$
Non possiamo fare in 3 dimensioni per come abbiamo preso la forma della PDE $Lu$, quindi per classificare il PDE dobbiamo emulare quella forma. La cosa utile è che la dimensione della PDE non cambia la classificazione, quindi possiamo farla nella dimensione che emula al meglio la forma di $Lu$ per permetterci di fare la classificazione.

In questa equazione le variabili indipendenti $x_{1}$ e $x_{2}$ sono $x$ e $y$.
I coefficienti invece sono $A=-1$, $C= -1$ e il resto nulli, il discriminante allora è $\Delta = -4$, allora la equazione è di tipo ellittico.

Una equazione di tipo ellittica di solito è isotropa, cioè non distingue direzioni, questo significa anche che quello che su un punto influenza ogni altro punto e vice versa.

<!Diagrammi effetto isotropo>

Le equazioni ellittiche non tengono a conto del tempo, tengono a conto solo dello spazio, quindi vengono usate per studiare fenomeno stazionari, cioè fenomeni che hanno già raggiunto equilibrio.

Facciamo un esempio, se riscaldiamo una barretta di metallo, inizialmente la temperatura è dipendente dal tempo, quando arriva all'equilibrio termico non è più dipendente dal tempo, vediamo allora che le equazioni ellittiche sono le equazioni paraboliche che hanno raggiunto equilibrio.
#### Esempio 2 $\to$ Equazione del Calore

I una dimensione l'equazione del calore è:
$$\begin{cases}
\frac{ \partial u }{ \partial t } -\mu \frac{ \partial^{2} u }{ \partial x^{2} }  =0 \text{ in }\underbrace{ (0,L)\times(0,T)  }_{ \text{cilindro spazi-temporale} }= Q_{T} \\
+1 \text{ CT } (\text{condizione iniziale}) \\
+2\text{ CB}
\end{cases}$$
$\mu$ è il coefficiente di diffusione di calore del materiale.

Il cilindro spazio-temporale è rappresentato come:
<!Diagramma cilindri spazio temporale per 1D>

In 2 dimensioni la equazione del calore è:
$$\begin{cases}
\frac{ \partial u }{ \partial t } -\mu\Delta =f \to \text{ in }\Omega \times(0,T)\\
+\text{CB} \\
+CI
\end{cases}$$
Anche qui usiamo un cilindro spazio-temporale, avente più significato fisico, possiamo prendere il dominio a t=0 e allungare per creare il nostro cilindro 3-dimensionale:
<!Diagramma cilindro spazio temporale>

Per classificare questa equazione guardiamo il caso 1D, dove la variabili indipendenti $x_{1}$ e $x_{2}$ sono $x$ e $t$.
I coefficienti sono, $A=-\mu$, $E= 1$ e il resto sono nulli. Il discriminate allora è nullo.

Disegniamo il cilindro spazio-temporale per il caso 1D:
<!Diagramma cilindro per 1D con tempo>

Prendendo $u$ ad un qualsiasi punto nel dominio, visto che $u$ dipende dal tempo possiamo vedere che dipenderà da tutti i valori nella area sotto di se e influenzerà tutti quelli sopra di se, questo fa senso perché il passato (la area sotto) influenza il presente e il presente influenza il futuro (la area sopra), ma il futuro non può influenzare il presente ne il presente può influenzare il passato.

#### Esempio 3: Equazione delle Onde

Nel caso 1D l'equazione delle onde è:
$$\begin{cases}
\frac{ \partial^{2} u }{ \partial t^{2} } -\sigma^{2}\frac{ \partial^{2} u }{ \partial x^{2} } =0\to \text{ in }\underbrace{ (0,L)\times(0,T)  }_{ \text{lo stesso cilindro} }= Q_{T}  \\
+2\text{ CB} \\
+2\text{ CI}
\end{cases}$$

Invece nel caso 2 o 3 dimensioni la equazione delle onde è:
$$\begin{cases}
\frac{ \partial^{2} u }{ \partial t^{2} } -\sigma^{2}\Delta u=0 \to \text{ in }\Omega \times[0,T] = Q_{T} \\
+\text{ CB} \\
+ 2\text{ CI}
\end{cases}$$

Classifichiamo questa equazione usando la forma 1D, dove la variabili indipendenti sono $x_{1} =x$ e $x_{2} = y$.

Le costanti sono, $A=-\sigma^{2}$, $C= 1$ e il resto è negativo.

Il discriminante allora è $4\sigma^{2}$ che è maggiore di 0 quindi questa equazione è di tipo iperbolico.

Disegnando il cilindro:
<!Diagramma cilindro per iperbolico>

Disegnando delle linee di confine, troviamo una zona di influenza e un dominio di influenza, tutto ciò che è nel dominio di influenza influenza il punto preso invece il punto preso influenza influenza la zona di influenza.

Più è alta la velocità, quindi più è alto $\sigma$, più aumenta l'area.

## Equazioni Ellittiche

In questo corso guarderemo quasi esclusivamente equazioni tipo ellittico.

### Equazione di Poisson (Equazione di Laplace generalizzata)

L'equazione di Poisson è la equazione di Laplace in cui il forzante è accesso, o per dirlo in un altro modo la equazione di Laplace è l'equazione di Poisson dove il forzante è 0, o in modo lungo dove l'equazione è omogenea.

L'equazione di Poisson in una dimensione è:
$$\begin{cases}
-\mu u''= f \\
+\text{ CB}
\end{cases}$$
L'equazione di Poisson in 2 e 3 è:
$$\begin{cases}
-\mu\Delta u = f \\
+\text{ CB}
\end{cases}$$

Abbiamo scritto il Laplaciano senza $\mu$ dentro perché lo prendiamo come costante, se non fosse costante e variabile secondo una delle variabili indipendenti, allora la prima equazione dovrebbe esser scritta come:
$$\nabla \cdot(\mu \nabla u)$$
Questa è la forma conservativa, è preferita perché ci permette di avere la conservazione della massa, momento ed energia.

Invece se lo scrivessimo come:
$$-\mu(x)\Delta u(x)$$
O in 1D come:
$$(\mu u')'$$
Questa è lo forma non-conservativa.

L'ellittico è lo stazionario del parabolico, infatti Poisson è lo stazionario della equazione del calore.

Esempi di diversi natura della equazioni di Poisson:
- natura termica: sbarretta surriscaldata in equilibrio termico
- natura meccanica: filo elastico sottoposto ad un carico concentrato
- natura fluido: mettendo l'inchiostro in una bacinella d'acqua senza muoverla, l'inchiostro si diffonderà secondo l'equazione di Poisson dove $\mu$ è la concentrazione locale dell'inchiostro. Se si sollecita l'acqua causandone il moto allora diventa tempo-dipendente.

## Condizioni di Bordo

Guardiamo le condizioni di bordo del dominio $\Omega$, cioè le condizioni sul bordo $\partial\Omega$. Il dominio è aperto e risolviamo l'equazione all'interno di questo dominio aperto, le condizioni che ci vincolano ad una singola risposta sono le condizioni di bordo.

### Forma del Bordo

In una dimensione, il bordo è definito dall'insieme di a e b, cioè
<!Diagramma bordo 1D>
$$\partial\Omega = \{a,b\}$$

In due dimensioni, il bordo è il perimetro dell'area del dominio:
<!Diagramma bordo 2D>

Invece in tre dimensioni il bordo è la superficie di bordo del volume del dominio.

<!Diagramma bordo 3D>

Il bordo come abbiamo visto in analisi 2 è di una dimensione inferiore rispetto alla dimensione del volume di controllo.

### Tipi di condizioni di bordo (CB)

Le condizioni che guardiamo non lo le uniche, ma sono frequenti.

#### Condizione di Bordo di Dirichlet ($u$)

Questa è una condizione al bordo per il valore di $u$ stesso, tale che:
$$u(x)= g(x)\to \text{ per }x \in \partial\Omega$$

Nell'esempio termico di prima della sbarretta, una condizione di bordo potevamo imporre era una condizione sulla temperature ai due lati della sbarretta.

Se $g(x)$ è nulla la condizione si dice omogenea, invece se è non-nulla si dice non-omogenea.

#### Condizioni al Bordo di Neumann (derivata di $u$)

La condizione di bordo di Neumann va ad imporre un valore per la derivata di $u$ al bordo.

Nel caso uno dimensionale questo è:
$$\mu u'(x) = h(x) \to x \in \partial\Omega$$

Nel caso due o tre dimensionale, possiamo guardare le derivata in ogni direzione rispetto al bordo, quello che facciamo per semplicità è prendere il versore perpendicolare al bordo e guardiamo la derivata in quella direzione, questa condizione prende la forma:
$$\mu \underbrace{ \nabla u\cdot n }_{ \frac{ \partial u }{ \partial n }  }  =h$$
#### Condizione al bordo di Robin ($u$, derivata di $u$)

In questa condizione di bordo condizioniamo sia i valori di $u$ che i valori della derivata di $u$ al bordo.

In una dimensione, la condizione ha forma:
$$\alpha(x)u(x) +\mu u'(x) = q(x) \text{ per }x\in\partial\Omega$$
In due e dimensioni invece ha forma:
$$\alpha(x)u(x) + \mu \nabla u(x)\cdot n(x) = q(x) \to x\in\partial\Omega$$
Questa condizione è simile al funzionamento di un'attacco elastico funzionante secondo la legge di Hooke.
#### Condizione miste

Le condizioni mista spartiscono il confine in parti, e possiamo definire diverse condizioni su diverse parti.

In una dimensione le condizioni miste hanno forma:
$$\begin{cases}
u(a) = 3 \to \text{Dirichlet} \\
\mu u'(b) = -7,3 \to \text{Neumann}
\end{cases}$$

In due dimensioni dividiamo il bordo in parti ($\Gamma$):
<!Diagramma parti di bordo>

Su ogni parte di bordo ($\Gamma$) definiamo condizioni diverse che vogliamo. Possiamo definire quante ne vogliamo, basta che aderiscono a certe condizioni:
$$\begin{gather}
\Gamma_{R} \;\cap\;\Gamma_{D} \; \cap\; \Gamma_{N} = 0 \\
\overline{\Gamma}_{R} \;\cup\;\overline{\Gamma}_{D} \;\cup\; \overline{\Gamma}_{N} = \partial u  
\end{gather}$$
La prima condizione richiede che non ci sia intersezione tra i vari pezzi. La seconda invece chiede messi insiemi le parti di bordo chiuse devono comprendere insieme tutto il bordo.

## Esistenza e Unicità ($\exists!$)

### Poisson $\exists!$
Sia $\Omega \subset \mathbb{R}^{d}$ limitato e con $\partial u$ regolare ($\in C^{2}$). Allora $\exists$ al più una funzione $u\in C^{2}(\Omega) \;\cap\;C^{1}(\overline{\Omega}_{})$ soluzione $-\mu\Delta u = f$ completato con $\text{CB}$ di tipo D,R, miste D/N, supposto di avere dati sufficientemente regolari.

Deve esser in $C^{2}(\Omega)$ perché il Laplaciano deve aver senso e valore solo per $\Omega$ aperto. $C^{1}(\overline{\Omega}_{})$ fa stare in piedi la condizione di bordo per Neumann.

Il "al più" in questa teoria è critico perché significa che è possibile avere al massimo 1 soluzione ma anche 0. Questo serve perché ci sono alcune configurazioni che sono definite da Poisson ma non possono aderiscono alle condizioni di regolarità:
<!Diagramma caso funzione non derivabile>

La esistenza di questi problemi è la ragione per cui andremo a dare una forma diversa a queste equazioni, una forma detta "debole" per definire questi problemi e trovare la soluzione. La formulazione debole è l'inizio teorica della discretizzazione che forma la base dei metodi numerici.

### Poisson con Neumann

#### Perdita di Unicità

Vediamo che nelle condizioni non c'è scritto Neumann, questo è perché Neumann non funziona bene con Poisson. 

Se prendiamo Poisson e lo chiudiamo con Neumann sul bordo:
$$\begin{cases}
-\mu\Delta u =f\to\text{ in }\Omega \\
\mu \frac{ \partial u }{ \partial n }  = h \to \text{su }\partial\Omega
\end{cases}$$
Il problema declina con Neumann perché l'unica cosa che possiamo garantire è l'esistenza della soluzione, non è più garantita la unicità.

Prendiamo per esempio $u+c$ come soluzione, con $c\in\mathbb{R}$, mettendola nel problema:
$$-\mu\Delta(u+c) = -\mu\Delta u-\cancelto{ 0 }{ \mu\Delta c } = f$$
Vediamo anche $u+c$ è soluzione al PDE, per lo più passa anche la soluzione al contorno:
$$\mu \frac{ \partial (u+c) }{ \partial n } =\mu\Delta(u+c)\cdot n = \mu \nabla u\cdot n+\mu \cancelto{ 0 }{ \nabla c }\cdot n = \mu \frac{ \partial u }{ \partial n } =h$$
Vale anche per Neumann, quindi anche $u+c$ è soluzione ergo la soluzione non è unica. La Neumann da sola non garantisce la unicità alla soluzione del problema di Poisson, se fosse mista allora si.

#### Condizione di Compatibilità dei Dati

L'unico problema con Poisson chiuso con Neumann non è solo che non è più garantita l'unicità. Un'altro problema è che i dati $h$ e $f$ non possono esser più qualsiasi, i dati devono esser legati tra di loro da una condizione di compatibilità. Che legame è?

Iniziamo integrando la equazione differenziale su $\Omega$:
$$\begin{align}
\int\limits_{\Omega}^{} f(x) \, dx  &= -\mu \int\limits_{\Omega}^{} \Delta u(x) \, dx \\
& = -\mu \int\limits_{\partial\Omega}^{} \nabla u(s)\cdot n(s) \, ds \\
\int\limits_{\Omega}^{} f(x) \, dx  &=-\int\limits_{\partial\Omega}^{} h(s) \, ds  
\end{align} $$
La condizione di compatibilità richiede un legame tra la funzione nel suo dominio e la condizione di bordo sul bordo.

Quello che si può fare per rimediare alcuni dei problemi di Poisson chiuso son Neumann è di aggiungere una correzione di ordine 0, cioè aggiungere un termine $\gamma u$:
$$\begin{cases}
-\mu\Delta u-\gamma u=f\to \text{in }\Omega \\
\mu \frac{ \partial u }{ \partial n } = h \to \text{su } \partial\Omega
\end{cases}$$
Anche se $\gamma$ è molto piccolo, come nell'ordine di $10^{-15}$, è abbastanza per distinguere $u$ da $u+c$, garantendo la unicità. Serve che questo sia molto piccolo per non cambiare il modello troppo, mantenendo lo stesso la unicità.

##### Significato Simbolico

Abbiamo appena aggiunto un termine di ordine 0, avere la unicità della soluzione. Componenti di diverso ordine hanno diversi significati:

Un termine di ordine 2 di forma $-\mu u''$ sono di tipo diffusivo e infatti sono usati per modellare la diffusione e rappresentano la isotropia.

Un termine di ordine 1 di forma $u'$ sono di tipo convettivo e infatti sono usati per modellare la convezione (cioè un trasporto direzionale) e rappresentano una anisotropia.

Un termine di ordine 0 di forma $\gamma u$ sono di tipo reattivo e infatti sono usati per modellare aggiunte e tolte da sistemi


## Equazione di Laplace

La equazione come detto prima è Poisson omogeneo:
$$\begin{cases}
-\mu\Delta u=0 \\
+\text{ CB}
\end{cases}$$
### Definizione: Funzione Armonica
Una funzione $u$ si dice armonica in $\Omega \subset \mathbb{R}^{d}$ se $u \in C^{2}(\Omega)$ e se $\Delta u=0$ in $\Omega$
#### Osservazione:
La soluzione di Laplace è armonica.

### Teorema della Media
Sia $u$ funzione armonica in $\Omega \subset \mathbb{R}^{d}$.
Allora $\forall B_{R}(x) = \{y \in \mathbb{R}^{d}, \lvert\lvert y-x \rvert\rvert <R\}$ tale che $\overline{B_{R}(x)}_{}\subset\Omega$ valgono le formule:
$$\begin{gather}
u(x) =\frac{1}{\left|B_{R}(x) \right|} \int\limits_{B_{R}(x)}^{} u(y) \, dy \\
u(x) = \frac{1}{\left|\partial B_{R}(x) \right|} \int\limits_{\partial B_{R}(x)}^{} u(s) \, ds  
\end{gather}$$

$B_{R}(x)$ è la palla centrata in x, di raggio R.
$\overline{B_{R}(x)}_{}$ è la chiusura della palla e continuità di $\Omega$.

Queste due equazioni implicano che $u(x)$ è il valore medio della palla intorno al punto. È una soluzione puntuale al PDE.

### Principio di Massimo

Sia $u\in C^{0}(\Omega)$ che soddisfa in $\Omega \subset \mathbb{R}^{d}$ la proprietà della media, e sia $p\in \Omega$ un punto interno e punto di estremo (massimo o minimo) globale di $u$. Allora $u$ è costante.

Una funzione che soddisfa la proprietà della media che non è costante, e raggiunge il valore massimo o minimo globale al bordo.

Questo principio fa senso perché se $u(x)$ armonico è la media dei punti intorno a se, se si ha un massimo globale interno a $\Omega$, significa che si ha punti più alti di se per avere la media al punto ma questo è impossibile se il punto è il massimo globale, l'unico modo che sia vero è se ogni altro punto intorno è uguale quindi la media al punto allora potrà esser il valore stesso.

Questo principio significa che se vogliamo trovare i massimi e minimi di una funzione armonica dobbiamo guardare la bordo, se la funzione non è costante.

Questo significa che:
$$\mathop{max/min}_{x\in\overline{\Omega}_{} }\;u(x) = \mathop{max/min}_{x\in\partial\Omega}\;u(x)$$
Analogamente:
$$\mathop{min}_{x\in\partial\Omega} \;u(x) \leq u(x) \leq \mathop{max}_{x\in\partial\Omega}\;u(x)$$

Ora sappiamo come trovare il valore puntuale e il valore del massimo e il minimo della funzione armonica.

