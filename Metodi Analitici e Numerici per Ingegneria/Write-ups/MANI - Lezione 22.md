---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 22 - Concluse Lax-Milgram e Formulazione di Galerkin

## Ripasso

Nella ultima lezione abbiamo preso un problema tipo:
$$\begin{cases}
-\mu_{0}u''(x) + \sigma_{0} u(x) = f(x) & x\in(0,L) \\
\mu_{0}u'(0) = q_{1} \\
\mu_{0}u'(L) = q_{2}
\end{cases}$$

Abbiamo riscritto il problema nella formulazione debole e poi abbiamo fatto l'analisi dell'esistenza e unicità attraverso il Lemma di Lax-Milgram.

### Nel caso di $\mu_{0}(x)$ non costante.

Prendiamo il problema:
$$\begin{cases}
\mu(x)u''(x) = 0 \\
u(0)= u(L) = 0
\end{cases}$$

Si può avere $\mu(x)$ che cambia nello spazio, per esempio nel problema della conduzione si possono avere pezzi di metallo diversi.

Lo possiamo scrivere nella forma debole come:
$$-\int\limits_{0}^{L} (\mu(x)u'(x))'\cdot v(x) \, dx  = \int\limits_{0}^{L} f(x)v(x) \, dx $$
$$\int\limits_{}^{} \underbrace{ \mu(x)u' (x)v'(x) }_{ a }\, dx  -\cancel{ \mu(x)u'(x)v(x) }\bigg|_{0}^{L} = \underbrace{ \int\limits_{0}^{L} f(x)v(x) \, dx }_{ F } $$

Visto che le condizione di bordo sono di tipo di Dirichlet, lo spazio $\mathbb{V}$ sarà:
$$\mathbb{V} = H_{0}^{1}$$

Per studiare la continuità di questa equazione per Lax-Milgram, non possiamo più estrarre $\mu$ e poi seguire i passaggi della ultima volte, ci serve un'altro risultato.

#### Risultato/Richiamo 6 $\to$ Disuguaglianza di Hölder

Siano $f\in L^{p}(\Omega)$, $g\in L^{q}(\Omega)$ tale che:
$$\frac{1}{p}+\frac{1}{q}=1$$

Per esempio:
$$\begin{cases}
p=q=2 & \to \text{Cauchy-Schwarz} \\
p =1 \;,\;q=\infty  &\to \text{quello che ci interessa}
\end{cases}$$

Allora:
$$\lvert\lvert fg \rvert\rvert  _{L^{1}}\leq \lvert\lvert f \rvert\rvert  _{L^{p}(\Omega)}\cdot \lvert\lvert g \rvert\rvert _{L^{q}(\Omega)} $$

Continuando con la continuità ci richiede che:
$$\begin{align}
\left|\int\limits_{0}^{L} \mu(x)u'(x)v' (x)\;dx  \right|&\leq \int\limits_{0}^{L} \left|\underbrace{ \mu(x) }_{ g }\underbrace{ u'(x)v'(x) }_{ f } \right| \, dx \\ \\
&\leq \lvert\lvert \mu \rvert\rvert  _{L^{\infty}(\Omega)}\lvert\lvert u'v' \rvert\rvert  _{L^{1}(\Omega)} \\
&=\lvert\lvert \mu \rvert\rvert  _{L^{\infty}(\Omega)}\int\limits_{0}^{L} \left|u'(x)v'(x) \right| \, dx  \\
&=\lvert\lvert \mu \rvert\rvert  _{L^{\infty}(\Omega)}\int\limits_{0}^{L} \underbrace{ \left|u'(x) \right|\left|v'(x) \right|  }_{ \left|\int\limits_{0}^{L} u'(x)v'(x) \, dx  \right| }\, dx  \\
&=\lvert\lvert \mu \rvert\rvert  _{L^{\infty}(\Omega)} \left|\int\limits_{0}^{L} u'(x)v'(x) \, dx  \right| \to \text{permette CS} \\
&\mathop{\leq}^{\text{CS}} \lvert\lvert \mu \rvert\rvert  _{L^{\infty}(\Omega)} \lvert\lvert u' \rvert\rvert _{L^{2}(\Omega)}\cdot \lvert\lvert v' \rvert\rvert  _{L^{2}(\Omega)} \\
&\mathop{\leq}^{\text{R2}} \underbrace{ \lvert\lvert \mu \rvert\rvert  _{L^{\infty}(\Omega)} }_{ M }\;\lvert\lvert u \rvert\rvert_{\mathbb{V}} \cdot \lvert\lvert v \rvert\rvert _{\mathbb{V}} 
\end{align} $$
### Tabellina


| a continua | R2,CS,Hölder                  |
| ---------- | ----------------------------- |
| a coerciva | Poincarè o la sua conseguenza |
| F limitata | R2,CS e Traccia               |
## Corollario di Lax-Milgram

Sotto le ipotesi del Lemma di Lax-Milgram, si ha che:
$$\lvert\lvert u \rvert\rvert_{\mathbb{V}} = \frac{1}{\alpha} \lvert\lvert F \rvert\rvert  _{\mathbb{V}'}  $$
Lo spazio $\mathbb{V}'$ è lo spazio duale dello spazio $\mathbb{V}$ che definito come:
$$\{ F:\mathbb{V}\to \mathbb{R} \text{ funzionali lineari e limitati}\}$$

La norma di questo spazio è:
$$\lvert\lvert F \rvert\rvert  _{V'}= \mathop{\text{sup}}_{\substack{v\in\mathbb{V}\\v\neq 0}} \frac{\left|F(v)\right|}{\lvert\lvert v \rvert\rvert  _{_{\mathbb{V}}}}\implies \frac{\left|F(v)\right|}{\lvert\lvert v \rvert\rvert  _{_{\mathbb{V}}}} \leq \lvert\lvert F \rvert\rvert  _{_{\mathbb{V}'}} \;\;\forall F\in\mathbb{V}'$$
$\implies$ $u$ si può trovare in base ai dati del problema.

### Dimostrazione

Iniziamo con la forma debole secondo Lax-Milgram di un problema generico:
$$a(u,v) = F(v)\;\forall v\in\mathbb{V}$$

Prendiamo $v=u$ per poter sfruttare la coercività:
$$\begin{align}
\alpha \lvert\lvert u \rvert\rvert ^{\cancel{ 2 }}_{_{\mathbb{V}}}\leq a(u,u) &= F(u) \leq \left|F(u) \right| \leq \lvert\lvert F \rvert\rvert  _{_{\mathbb{V}'}}\cdot \cancel{ \lvert\lvert u \rvert\rvert _{_{\mathbb{V}}} }  \\
\alpha \lvert\lvert u \rvert\rvert  _{_{\mathbb{V}}} &\leq \lvert\lvert F \rvert\rvert  _{_{\mathbb{V}'}} \\
\lvert\lvert u \rvert\rvert  _{_{\mathbb{V}}}& \leq \frac{1}{\alpha}\lvert\lvert F \rvert\rvert  _{_{\mathbb{V}'}}
\end{align}
$$

## Problema di Formula debole in più dimensioni
Noi lo analizziamo in 2 dimensioni.

Prendiamo il problema:
$$\begin{cases}
-\Delta u(x,y) = f(x,y) &\text{ in } \Omega \\
u(x,y) = 0 & \text{ su }\partial\Omega
\end{cases}$$

Integriamo:
$$-\int\limits_{\Omega}^{} \Delta u(x,y) v(x,y)\, d\Omega = \int\limits_{\Omega}^{} f(x,y)v(x,y) \, d\Omega $$

A questo punto usiamo il teorema di Green che è effettivamente un generalizzazione dell'integrazione per parti in più dimensioni.

$$\int\limits_{\Omega}^{} \nabla u(x,y) \cdot \nabla v(x,y)\, d\Omega - \int\limits_{\partial\Omega}^{} \cancelto{ 0 }{ \nabla u(x,y)\cdot u(x,y)\cdot \underbrace{ v(x,y) }_{ =0 } \, ds }  = \int\limits_{\Omega}^{} f(x,y)\cdot v(x,y) \, d\Omega  $$

Il problema allora è:
$$?u\in\mathbb{V}\text{ tale che }a(u,v)=F(v)\;\;\forall v\in\mathbb{V}$$
$$a(u,v) = \int\limits_{\Omega}^{} \underbrace{ \nabla u(x,y) }_{ l } \cdot \underbrace{ \nabla v(x,y) }_{ m }\, d\Omega $$
$$F(v) = \int\limits_{\Omega}^{} f(x,y)v(x,y) \, d\Omega $$

Per Cauchy-Schwarz abbiamo che:
$$\left|(l,m) \right| \leq \lvert\lvert l \rvert\rvert  _{L^{2}(\Omega)}\cdot \lvert\lvert m \rvert\rvert  _{L^{2}(\Omega)}$$
$$\implies \nabla u \in[L^{2}(\Omega)]^{2}\text{ e }\nabla v\in[L^{2}(\Omega)]^{2}$$

Visto che $f\in L^{2}(\Omega)$ e $v\in L^{2}(\Omega)$ $\implies \mathbb{V} = H_{0}^{1}(\Omega)$

Dove:
$$H^{1} = \{ v\in L^{2}(\Omega) \text{ tale che }\nabla v\in[L^{2}(\Omega)]^{2}\}$$

Alternativamente si potrebbe scrivere: $$\frac{ \partial v }{ \partial x } ,\frac{ \partial v }{ \partial y } \in L^{2}(\Omega)$$
E:
$$H^{1}_{0} = \{ v\in H^{1}(\Omega)\text{ tale che } v\bigg|_{\partial\Omega}=0 \}$$

## Discretizzazione

Ci stiamo movimentando verso la compatibilità. Il problema principale è come abbiamo visto nel passato che i computer non sanno computer gli integrali che usano il concetto di infinito.

Allora usiamo diversi passi per portarci dal problema forte iniziale in dimensione infinità ad un problema che possiamo risolvere con il computer.

<!Diagramma passi vero la discretizzazione>

## Problema Discreto/Formulazione di Galerkin

Prendiamo uno spazio $\mathbb{V}_{h}\subset \mathbb{V}$ con dimensione non infinita.

<!Diagramma V-h e V>

 Questo spazio non è $\mathbb{V}$, quindi nel futuro dovremmo espanderlo tale che riempia assintoticamente $\mathbb{V}$.

Definiamo $h$ come il parametro di discretizzazione.
$u_{h}$ è la funzione trial discreta e $v_{h}$ è la funzione test discreta.

Definiamo la base per lo spazio $\mathbb{V}_{h}$ come:
$$\left\{ \varphi_{i}^{ ‎} \right\}_{i=1}^{N_{h}}$$
La base ha dimensione finita dato che lo spazio $\mathbb{V}_{h}$ è di dimensione finita.

Prendiamo:
$$v_{h} = \varphi_{i}\;\;\;i=1,\dots,N_{h}$$

La forma debole per una problema generica secondo Lax-Milgram allora è:
$$a(u_{h},\varphi_{i}) = F(\varphi_{i})\;\;\;\;i=1,\dots,N_{h}$$

Data la linearità, se vale per tutti i $\varphi_{i}$, vale anche per una qualsiasi combinazione lineare della base.

Sfruttiamo la definizione della base per scrivere:
$$u_{h}(x) = \sum_{j=1}^{N_{h}}u_{j}\varphi_{j}(x)$$
Possiamo scrivere la forma debole come:
$$a\left( \sum_{j=1}^{N_{h}}u_{j}\varphi_{j}(x),\varphi_{i}(x) \right) = F(\varphi_{i}(x))\;\;\;i=1,\dots,N_{h}$$

Ora sfruttiamo la bilinearità rispetto al primo argomento per riscrivere come:
$$\sum_{j=1}^{N_{h}}u_{j}\cdot a(\varphi_{j},\varphi_{i}) = F(\varphi_{i}(x))\;\;\;i=1,\dots,N_{h}$$
Questo è il sistema di $N_{h}$ equazioni con $N_{h}$ incognita $u_{j}$.

Possiamo scrivere questa equazione in forma matriciale come:
$$A\vec{u} = \vec{f}$$
Questi vettori avranno definizione:
$$\vec{u} = \begin{bmatrix}
u_{1}, & u_{2}, & \dots, & u_{N_{h}}
\end{bmatrix}^{T}\in\mathbb{R}^{N_{h}}$$
$$\vec{f} = \begin{bmatrix}
f_{1}, & f_{2}, & \dots, & f_{N_{h}}
\end{bmatrix}\in\mathbb{R}^{N_{h}}$$
Dove $f_{i} = F(\varphi_{i}(x))$

Per esempio, nel caso in cui abbiamo Dirichlet la equazione valori di $f_{i}$ sono: $\int\limits_{0}^{L} f(x)\cdot \varphi_{i}(x) \, dx$

Definiamo anche la matrice $A$ per cui ogni oggetto è definito come:
$$[A]_{ij} = a(\varphi_{j},\varphi_{i})$$
$A$ è definita come la matrice di stiffness/rigidezza è ed di dimensione:
$$A\in\mathbb{R}^{N_{h}}\times \mathbb{R}^{N_{h}}$$
Il concetto di questa discretizzazione nasce dai sistemi di travi.

È possibile che la matrice sia simmetrica, cioè:
$$a(\varphi_{j},\varphi_{i}) = a(\varphi_{i},\varphi_{j})$$
Ma non è detto, dipende da caso in caso.

Per esempio, questo è simmetirco:
$$\int\limits_{0}^{L} \varphi_{j}'(x)\varphi_{i}'(x) \, dx $$
Invece in questo caso non lo sono:
$$\int\limits_{0}^{L} \varphi_{j}'(x)\cdot\varphi_{i}(x) \, dx $$

### Proprietà della matrice $A$

Possiamo classificare le proprietà della matrica A in cui gruppi, la proprietà problema dependent, e le proprietà base dipendenti.

#### Proprietà problema dipendenti

1. Se $a(\cdot,\cdot)$ è coerciva $\implies$ $A$ è [sdp](sdp.md), dunque è invertibile
2. Se $a(\cdot,\cdot)$ è simmetrica $\iff$ $A$ è simmetrica

#### Proprietà Base dipendenti $\{ \varphi_{i} \}$

1. $k(A)$
2. sparsity pattern

## Analisi della Formulazione di Galerkin

Analizziamo 5 proprietà della formulazione di Galerkin:
- $\exists!$
- stabilità
- consistenza
- convergenza
- ortagonalità di Galerkin

### $\exists!u_{h}$

Un sistema di equazioni lineari ammetto solo una soluzione se è invertibile, quindi è $a(\cdot,\cdot)$ è coerciva, quindi in Lax-Milgram, allora si ha $\exists!$

### Stabilità

Per studiare la stabilità dobbiamo guardare all'equazione:
$$\lvert\lvert u_{h} \rvert\rvert  _{\mathbb{V}} \leq \frac{1}{\alpha}\lvert\lvert F \rvert\rvert  _{\mathbb{V}'}$$
La stabilità prenderà una forma simile.

Per studiare la stabilità prendiamo un sistema normale:
$$a(u_{h},v_{h}) = F(v_{h})=\int\limits_{\Omega}^{} f\cdot v_{h} \, \;\;\forall v_{h}\in\mathbb{V}_{h}$$

Un sistema perturbato ha forma:
$$a(w_{h},v_{h}) = G(v_{h}) = \int\limits_{\Omega}^{} (f+\rho)\cdot v_{h} \, \;\;\;\forall v_{h}\in\mathbb{V}_{h} $$

Dove $\rho$ è una perturbazione sui dati e definiamo $w_{h} = u_{h}+\Sigma$, con $\Sigma$ che è una perturbazione sulla soluzione.

Sfruttiamo la bilinearità rispetto al primo termine e troviamo la differenza tra i due sistemi, come:
$$a(u_{h}-w_{h},v_{h}) = F(v_{h})-G(v_{h})\;\;\;\forall v_{h}\in\mathbb{V}_{h}$$
Scegliamo apposta, $v_{h} = u_{h}-w_{h}$ e riscriviamo questo come:
$$\begin{align}
\alpha \lvert\lvert u_{h}-w_{h} \rvert\rvert ^{\cancel{ 2 }} _{\mathbb{V}} \leq a(u_{h}-w_{h},u_{h}-w_{h}) &= F(u_{h}-w_{h}) - G(u_{h}-w_{h})  \\
&= (F-G)(u_{h}-v_{h}) \\
&\leq \left|(F-G)(u_{h}-w_{h}) \right| \\
&\leq \lvert\lvert F-G \rvert\rvert_{\mathbb{V}'}  \lvert\lvert u_{h}-w_{h} \rvert\rvert  _{\mathbb{V}}
\end{align}$$

Troviamo allora che:
$$\lvert\lvert u_{h}-w_{h} \rvert\rvert  _{\mathbb{V}} \leq \frac{1}{\alpha}\lvert\lvert F-G \rvert\rvert  _{\mathbb{V}'}$$

Possiamo fare la differenza tra $F$ e $G$ perché sono funzionali non funzioni.

Questa equazione ci dice che la perturbazione sui dati da perturbazione sui risultati, quindi se $\lvert\lvert F-G \rvert\rvert_{\mathbb{V}'}$ è piccolo allora $\lvert\lvert u_h -w_h\rvert\rvert_{\mathbb{V}}$ è piccolo, a patto di un $\alpha$ piccolo.

### Ortagonalità di Galerkin e Consistenza

$u_{h}$ soluzione di Galerkin tale che $a(u-u_{h},v_{h})=0$.

Dove $u-u_{h}$ è l'errore di discretizzazione.

#### Dimostrazione

Un sistema normale è:
$$a(u,v) = F(v)\;\;\;\forall v\in\mathbb{V}$$
Un sistema per Galerkin è:
$$a(u_h,v_{h}) = F(v_{h})\;\;\;\forall v_{h}\in\mathbb{V}_{h}$$

Se prendiamo $v=v_{h}$ è lo mettiamo nel primo sistema allora:
$$a(u,v_{h} ) = F(v_{h})$$

Facendo la differenza tra questo sistema è il sistema di Galerkin abbiamo:
$$a(u,v_{h})-a(u_{h},v_{h}) = F(v_{h})-F(v_{h})=0$$

Cioè:
$$a(u-u_{h},v_{h})=0$$
Possiamo vedere questa operazione come una proiettura della soluzione esatta $u$ su $v_{h}$, la differenza tra la soluzione esatta e la soluzione sarà ortogonale rispetto al $v_{h}$ su cui abbiamo prioettato.
Se ci dimentichiamo dell'$a$ nella equazione, allora possiamo vedere la prima parte della formulazione come un prodotto scalare.

<!Diagramma prodotto scalare.>


Se $a(\cdot,\cdot)$ è simmetrico, allora $a(u,v)$ è un prodotto scalare, che induce:
$$\lvert\lvert \cdot \rvert\rvert  _{A} = (a(u_{h},w_{h}))^{1/2} = (\vec{a}A\vec{a}^{T})^{1/2}$$


