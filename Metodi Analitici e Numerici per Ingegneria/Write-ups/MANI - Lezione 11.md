---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 11 - Criteri d'Arresto per l'Approssimazione d'Integrali, Quadratura Gaussiana e Approssimazione di Derivate

## Errore della Quadratura con l'interpolazione di Lagrange.

Come abbiamo visto l'errore per rettangolo e il trapezio hanno equazione, in forma semplice e composta come:

$$\begin{gather}
I(f) - \widetilde{I}_{pm}(f) = \frac{1}{24}(b-a)^{3} f''(\alpha) \\
I(f) - \widetilde{I}_{pm}^{C}(f) = \frac{1}{24}(b-a)H^{2} f''(\beta) \\
I(f) - \widetilde{I}_{T}(f) = \frac{1}{12} (b-a)^{3} f''(\delta) \\
I(f) -\widetilde{I}_{T}^{C}(f) = \frac{1}{12}(b-a)H^{2}f''(\gamma)
\end{gather}$$
Dove $\alpha,\beta,\gamma,\delta \in [a,b]$ e $f \in C^{2}([a,b])$

L'errore per Simpson è:
$$\begin{gather}
I(f)-\widetilde{I}_{S}(f) = -\frac{1}{2880}(b-a)^{5}f^{(4)}\sigma \\
I(f)- \widetilde{I}_{s}^{C}(f) = -\frac{1}{2880}(b-a)H^{4}f^{(4)}(\rho)
\end{gather}$$

Con $\rho,\sigma \in [a,b]$ e $f\in C^{4}([a,b])$

Tutte queste equazioni hanno il problema che non sono ricavabili per il fatto che non sappiamo le constanti che vanno nella derivata, per questo come abbiamo fatto nell'interpolazione, prendiamo il valore massimo per ogni valore, questo significa che invece di avere una equivalenza avremmo una maggioranza che ci garantisce lo stesso una stima buona dell'errore.

$$\mathop{max}_{x \in [a,b]} |I(f) - \widetilde{I}_{*}(f)| \leq C_{*}(b-a)^{\theta_{*}}\cdot \mathop{max}_{x \in [a,b]}|f^{(l_{*})}(x)|$$
Il valore dei valori con gli asterischi cambiano in base al tipo di quadratura che stiamo facendo, che sia il punto medio, trapezio o Simpson.

In forma composta quest errore è:
$$\mathop{max}_{x \in [a,b]} |I(f) - \widetilde{I}^{c}_{*}(f)| \leq C_{*}(b-a)\cdot H^{(\theta_{*}-1)}\cdot \mathop{max}_{x \in [a,b]}|f^{(l_{*})}(x)|$$
Possiamo fare una minoranza della parte destra di questa disuguaglianza con una tolleranza per costituire un criterio d'arresto.

### Criteri di Classificazione delle formula di quadratura

Ci sono 2 criteri che possiamo usare per classificare questo formula di quadratura:
1. Ordine di Accuratezza
2. Grado di Esattezza

L'ordine di Accuratezza è legato alla velocità di convergenza a 0, per H che tende a 0, questo è perché H è l'unico valore che possiamo cambiare, l'ordine di accuratezza allora è l'esponente di H, che è $\theta_{*}-1$.

Per le diverse formule di quadratura l'ordine di accuratezza è:
- PM = 2
- T = 2
- S = 4

Il grado di esattezza invece è definito come il massimo grado dei polinomi che vengono integrati esattamente dalla formula di quadratura ($\widetilde{I}(f)$)

In modo più semplice è il grado massimo di polinomio la cui derivata $l_{*}$ è nulla, il grado esattezza è $l_{*}-1$

Per le diverse formula di quadratura il grado di esattezza è:
- PM = 1 $\to$ costante e lineare
- T = 1 $\to$ costante e lineare
- S = 3 $\to$ costante, lineare, parabolico e cubico

Simpson può interpolare cubici perché come il punto medio quando interpola cubici l'errore ai due lati del punto intermedio si cancella.

### Se abbiamo una formula di quadratura e non l'errore associato.

Se vogliamo classificare questa formula di quadratura senza sapere la formula dell'errore, possiamo usare l'ordine di esattezza. Applicando polinomi di ordine sempre maggiore, riusciamo a determinare il grado di esattezza della formula di quadratura.

Dopo che il primo polinomio fallisce, l'ordine di quello prima è il grado di esattezza, anche se continuiamo e polinomi di grado maggiore non falliscono, il grado prima di quello che ha fallito è quello che prendiamo.

Per semplicità le funzioni che usiamo per testare i gradi di esattezza sono:
$$f = 1,x,x^{2},x^{3},\dots$$

## Formule di Quadratura

Le formule di quadratura che abbiamo visto fin'ora posso esser rappresentate in formula interpolatoria come:
$$I(f) \simeq \widetilde{I}(f) = \sum_{j=1}^{J}f(x_{j})\alpha_{j}$$

Con $\alpha_{j}\in\mathbb{R}$ pesi di quadratura e $x_{j} \in [a,b]$ nodi di quadratura, e J è il numero di nodi per la formula di quadratura

Le diverse formule di quadratura hanno valori diversi:
$$\begin{matrix}
&\text{Punto}: &J=1 &x_{1} = \frac{a+b}{2} & \alpha_{1} = b-a\\
& \text{Trapezi}: &J=2 &x_{1}= a, x_{2}= b & \alpha_{1}=\alpha_{2} = \frac{b-a}{2}\\
&\text{Simpson}: & J=3 & x_{1}=a,x_{2}=\frac{b+a}{2},x_{3} = b & \alpha_{1} = \frac{b-a}{6},\alpha_{2} = \frac{2(b-a)}{3}, \alpha_{3} = \frac{b-a}{6}
\end{matrix}$$

Abbiamo già trovato questi valori, ma se volessimo potremmo trovare questi valori facendo:
$$\int\limits_{a}^{b}\Pi f(x)  \, dx  = \sum_{j=1}^{J}f(x_{i})\underbrace{ \int\limits_{a}^{b} \varphi_{i}(x) \, dx }_{ \alpha_{i} } $$

La formula più semplice che una formula di quadratura deve calcolare è f=1, in questo caso:
$$\begin{align}
&I(1) = &\widetilde{I}(1) \\
& \,\,\,\,|| &|| \\
&\int\limits_{a}^{b} 1 \, dx &\sum_{j=1}^{J}\alpha_{j} \\
& \,\,\,\,|| &|| \\
&b-a & b-a
\end{align}$$
La quadratura deve esser uguale all'integrale della formula vera.

## Formula di Quadratura Gaussiane

Le famiglia di formula di quadratura interpolatorie che abbiamo visto fin'ora era quella di Newton-Cotes.
Una seconda famiglia di formule di quadratura è quella Gaussiana, dove i pesi di quadratura sono ottimizzati con un criterio di ottimalità.


Le formula Gaussiane sono quelle che a parità di nodi massimizzano il grado di esattezza.

Prendiamo esempio il caso dove J=2, cioè abbiamo 2 nodi, in Newton-Cotes questo ha un gradi di esattezza 1, quindi lo vogliamo aumentare.

Prendiamo i nodi e i pesi e li cambiamo per aderire a 4 equazioni che ognuna impone un grado di esattezza sempre maggiore.

La formula di quadratura prende la stessa forma:
$$\widetilde{I}(f) = \sum_{j=1}^{J}f(x_{j})\alpha_{j}$$

La formula che impone il grado di esattezza a 0 è:
$$b-a = I(1) = \sum_{j=1}^{2}\alpha_{j}$$

Quella che impone il gradi di esattezza come 1 è:
$$\frac{b^{2}}{2}-\frac{a^{2}}{2} = \int\limits_{a}^{b} x \, dx  = I(x) = \widetilde{I}(x) = \alpha_{1}x_{1}+\alpha_{2}x_{2}$$

Quella che impone il gradi di esattezza come 2 è:
$$\frac{b^{3}}{3}-\frac{a^{3}}{3} = \int\limits_{a}^{b} x^{2} \, dx  = I(x) = \widetilde{I}(x^{2}) = \alpha_{1}x_{1}^{2}+\alpha_{2}x_{2}^{2}$$

Quella che impone il gradi di esattezza come 3 è:
$$\frac{b^{4}}{4}-\frac{a^{4}}{4} = \int\limits_{a}^{b} x^{3} \, dx  = I(x) = \widetilde{I}(x) = \alpha_{1}x_{1}^{3}+\alpha_{2}x_{2}^{3}$$

Questo è un sistema di equazione non lineari per cui occorre usare Newton per sistemi per risolverlo.

Risolvendo il sistema abbiamo che:
$$\begin{gather}
x_{1} = a + \left( 1-\frac{1}{\sqrt{ 3 }} \right)\left( \frac{b-a}{2} \right) \\
x_{2} = a + \left( 1+\frac{1}{\sqrt{ 3 }} \right)\left( \frac{b-a}{2} \right) \\
\alpha_{1} = \alpha_{2} = \frac{b-a}{2} \to \text{I pesi sono gli stessi}
\end{gather}$$

La formula di quadratura Gaussiana con 2 nodi allora sarà:
$$\widetilde{I}_{G_{2}}(f) = \frac{b-a}{2}[f(x_{1}^{G})+f(x_{2}^{G})]$$

È la formula del trapezio dove le basi non sono calcolate agli estremi ma in posti opportuni per garantire in maggiore gradi di esattezza.

<!Diagramma formula di quadratura gaussiana>

L'errore per questa formula è:
$$I(f) -\widetilde{I}_{G_{2}}(f) = \frac{1}{4320}(b-a)^{5}f^{(4)}(\nu)$$
Dove $\nu \in[a,b]$ e $f\in C^{(4)}([a,b])$

Quest è la stessa struttura di Simpson che usare 3 nodi invece di 2 ed è ancora più piccolo l'errore. Per costruzione il grado di esattezza è 3.

In forma composta prendiamo i nodi rispetto ad ogni sotto-intervallo:
<!Diagramma gaussiana a 2 nodi composta>

L'errore per il composto sarà:
$$I(f)-\widetilde{I}_{G_{2}}^{C}(f) = \frac{1}{4320}(b-a)H^{4}f^{(4)}(\phi)$$
L'ordine di accuratezza è 4, mentre il grado di esattezza è 3, come Simpson ma usando solo 2 nodi.

## Approssimazione di Derivate
Prendiamo $f:[a,b]\to \mathbb{R}$ e $f \in C^{1}([a,b])$

Vogliamo approssimare $f'(\overline{x}_{})$, con $\overline{x}_{}\in [a,b]$.
Non vogliamo approssimare la derivata come funzione, solo valori della derivata in punti.
### Differenze Finite in avanti
Guardando in avanti, dall'analisi sappiamo che:
$$f'(\overline{x}_{} ) = \lim_{ h \to 0 } \frac{f(\overline{x}_{} +h)-f(\overline{x}_{} )}{h}$$
Il limite non è compatibile per il l'uso al computer quindi lo rimuoviamo e prendiamo h piccolo.

Abbiamo allora:
$$f'(\overline{x}_{} ) \simeq \delta_{+}f(\overline{x}_{} ) = \frac{f(\overline{x}_{} +h)-f(\overline{x}_{} )}{h}$$
$\delta_{+}f(\overline{x}_{})$ è un simbolo unico come $\Pi_{n}f(x)$ è il simbolo che rappresenta lo schema delle differenze in avanti.

Graficamente questo schema sarà:
<!Diagramma schema in avanti>
In questo caso l'h è molto grande per enfatizzare la differenza.

#### Errore dell'approssimazione

Per trovare l'errore di questo schema:
$$\begin{gather}
f'(\overline{x}_{}  )-\delta_{+}f(\overline{x}_{} )
\end{gather}$$
Per facciamo Taylor sulla funzione $f(x)$ centrato in $\overline{x}_{}$ al secondo ordine:
$$\frac{f(\overline{x}_{} +h)}{h}= \frac{f(\overline{x}_{} )}{h}+\cancel{ h }f'(\overline{x}_{} ) + \frac{h^\cancel{ {2} }}{2}f''(\alpha)$$
Con $\alpha \in [\overline{x}_{},\overline{x}_{}+h]$
$$f'(\overline{x}_{} )-\underbrace{ \frac{f(\overline{x}_{} +h)}{h}+\frac{f(\overline{x}_{} )}{h} }_{ \delta_{+}f(x) } = -\frac{h}{2}f''(\alpha)$$
L'errore allora sarà:
$$f'(\overline{x}_{} ) -\delta_{+}f(\overline{x}_{} ) - -\frac{h}{2}f''(\alpha)$$
Questo è uno schema di ordine 1.
### Differenze Finite all'indietro

La forma di questo schema è simile:
$$f'(\overline{x}_{} )= \lim_{ h \to 0 } \underbrace{ \frac{f(\overline{x}_{} )-f(\overline{x}_{} -h)}{h} }_{ \delta_{-}f(\overline{x}_{} ) }$$

Facendo di nuovo la espansione di $f$ di Taylor per trovare l'errore:
$$f(\overline{x}-h ) = f(\overline{x}_{} ) - hf'(\overline{x}_{} ) + \frac{h}{2}f''(\beta)$$
$$f'(\overline{x}_{} ) - \underbrace{ \frac{f(\overline{x}_{} )}{h}+\frac{f(\overline{x}_{} -h)}{h} }_{ \delta_{-}f(x) } = \frac{h}{2}f''(\beta)$$

#### Ricavo di $\delta_{-}f(\overline{x}_{})$ passando per la funzione interpolatrice di Lagrange

Durante l'esame è possibile che ci chiedano di ricavare $\delta_{-}f(\overline{x}_{})$ partendo dal polinomio interpolatore.

La formula del polinomio sarà:
$$\begin{align}
\Pi_{1}f(x) &= f(\overline{x}_{} -h)\cdot \varphi_{\overline{x}_{} -h}(x)+f(\overline{x}_{} )\cdot \varphi_{\overline{x}_{} }(x)= \\
& = f(\overline{x}_{} -h) \cdot \left( \frac{x-\overline{x}_{} }{\overline{x}_{} -h-\overline{x}_{} } \right) + f(\overline{x}_{} )\cdot \left( \frac{x-\overline{x}_{} +h}{\overline{x}_{} -\overline{x}_{} +h} \right) =  \\
& = f(\overline{x}_{} -h)\cdot \frac{\overline{x}-x }{h} + f(\overline{x}_{} )\cdot\frac{f(\overline{x}_{} )\cdot(x-\overline{x}_{} +h)}{h}
\end{align}$$

La derivata di questo polinomio è:
$$[\Pi_{1}f(x)]' = \frac{1}{h}f(\overline{x}_{} -h)+\frac{1}{h}f(\overline{x}_{} ) = \delta_{-}f(\overline{x}_{} )$$

Anche questo sistema è di ordine 1.
### Differenze Finite in avanti e indietro

In questo schema invece di guardare avanti o indietro anche in tutte e due le direzioni.

La derivata della funzione allora è:
$$f'(\overline{x}_{} ) = \lim_{ h \to 0 } \underbrace{ \frac{f(\overline{x}_{} +h)-f'(\overline{x}_{} -h)}{2h} }_{ \delta f(\overline{x}_{} ) }$$
Questo è uno schema del secondo ordine.

Per trovare l'errore dobbiamo fare una espansione di Taylor di $f(x)$ in tutte e due le direzioni.

$$\begin{gather}
f(\overline{x}_{}+h ) = f(\overline{x}_{} )+hf'(\overline{x}_{} ) + \frac{h^{2}}{2}f''(\overline{x}_{} ) + \frac{h^{3}}{6}f'''(\gamma) \\
f(\overline{x}_{} -h) = f(\overline{x}_{} )-hf'(\overline{x}_{} ) + \frac{h^{2}}{2}f''(\overline{x}_{} ) -\frac{h^{3}}{6}f'''(\sigma) \\
f(\overline{x}_{} +h) - f(\overline{x}_{} -h) = 2hf'(\overline{x}_{} ) + \frac{h^{3}}{6}[f'''(\gamma)+f'''(\sigma)]
\end{gather}$$
$$f'(\overline{x}_{} )-\underbrace{ \frac{f(\overline{x}_{} -h)}{2h}+\frac{f(\overline{x}_{}+h )}{2h} }_{ \delta f(\overline{x}_{} ) } = -\frac{h^{2}}{12}[f'''(\gamma)+f'''(\sigma)]$$
È uno schema che è accurato al secondo ordine, l'errore conberge molto più velocemente degli altri due.

Per è più restrittivo visto che serve una funzione che sia in $C^{3}$ e non solo $C^{2}$.

Il problema principale con questo schema è che non si può usare agli estremi di un intervallo, quindi o no sappiamo il valore agli estremi o usiamo uno degli altri due schemi, però usando gli altri schemi agli estremi significa che il calcolo delle derivata per l'intero intervallo è limitato al primo ordine.
