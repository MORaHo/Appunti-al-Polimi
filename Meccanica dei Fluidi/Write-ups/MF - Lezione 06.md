---
creation_date: 2024-02-11 14:02
tags:
  - MF
share: true
---
# Lezione 6 - Equazioni di Navier-Stokes

Siamo arrivati a definire il tensore dello sforzo:
- $p \underline{\underline{I}}$
- $f(\underline{\underline{D}}) \to$ Lo sforzo non è dato da solo la pressione, e lo stato di sforzo deve esser legato alle velocità deformazione, con $\underline{\underline{D}}$ tensore delle velocità di deformazione.

## Come è fatto $f(\underline{\underline{D}})$?

Non sappiamo definitivamente come è $f(\underline{\underline{D}})$, Stokes fece l'ipotesi che $f(\underline{\underline{D}})$ abbi la forma:
$$f(\underline{\underline{D}}) = p \underline{\underline{I}}+\underbrace{f_{2}(\underline{\underline{D}})}_{\underline{\underline{\phi}}_{D}(\underline{\underline{D}})}$$

Dove $\underline{\underline{\phi}}_{D}(\underline{\underline{D}})$ è il deviatore degli sforzi. Questa è una ipotesi che non possiamo dimostrare ma presa questa ipotesi possiamo sviluppare un sistema di equazioni.

Quello che ci dimostra è che i fluidi reali stokesiani, agiscono come fluidi perfetti con una componente aggiunte che li fa deviare da questo comportamento.

Una ipotesi aggiuntiva che facciamo è che $f_{2}$ è funzione lineare. Questa è detta la ipotesi di Newton. I fluidi che seguono questa ipotesi sono detti fluidi Newtoniani.

Mettendo le due ipotesi insieme abbiamo una classe di fluidi detta fluidi stokesiano-newtoniani, che saranno la base del nostro studio della dinamica.

## Sviluppo del deviatore degli sforzi

Nei fluidi stokesiani-newtoniani il deviatore degli sforzi è una matrice simmetrica, questo significa che avrà 6 componenti indipendenti.
Abbiamo già visto che la matrice delle velocità di deformazione è simmetrica quindi anche lui ha 6 componenti.

Tale che la funzione $f_{2}$ sia lineare e leghi tutti i componenti delle due matrici.

Prendendo $\underline{\underline{\phi}}_{D}$ e $\underline{\underline{D}}$ diagonali, $f_{2}$ avrà solo 9 coefficienti:
$$\underline{\underline{\phi}}_{D} = \begin{bmatrix}
\phi_{Dx} & 0 & 0 \\
0 & \phi_{Dy} & 0 \\
0 & 0 & \phi_{Dz}
\end{bmatrix}\,,\,\underline{\underline{D}} = \begin{bmatrix}
D_{x} & 0 & 0 \\
0 & D_{y} & 0 \\
0 & 0 & D_{z}
\end{bmatrix}$$
Il deviatore degli sforzi sarà:
$$\begin{align}
\phi_{Dx} &= a_{xx}D_{x}+a_{xy}D_{y}+a_{xz}D_{z} \\
\phi_{Dy} &= a_{yx}D_{x}+a_{yy}D_{y}+a_{yz}D_{z} \\
\phi_{D_{z}} &= a_{zx}D_{x} + a_{zy}D_{y}+a_{zz}D_{z}
\end{align}$$
Dove $a_{ij}$ e $a_{ii}$ sono i componenti di $f_{2}$.

Per il legame lineare e il fatto che non ci sono costante possiamo dire che passa per l'origine, questo fa senso perché questi tipi di fluidi non hanno sforzi se non c'è velocità di deformazione.

Ammettiamo per ipotesi che ci sono solo due coefficienti in $f_{2}$, $a_{ii}$ e $a_{ij}$, cioè:
$$a_{xx} = a_{yy}= a_{zz}$$
e $$a_{xy} = a_{xz} = \dots$$
Prendiamo questi due coefficienti come:
$$\begin{gather}
a_{ii} = -2\mu-\mu' \\
a_{ij} = -\mu'
\end{gather}$$
Questo significa che possiamo riscrivere la nostre equazioni di $\phi$ come (per non scrivere tutto tre volte, scriviamo equazioni simili solo una volta):
$$\begin{align}
&= -2\mu D_{x}-\mu' D_{x} - \mu'D_{y}-\mu'D_{z} = -2\mu'D_{x} - \mu'\left( \frac{ \partial U }{ \partial x } +\frac{ \partial v }{ \partial y } +\frac{ \partial w }{ \partial z }  \right) \\
&= \dots \\
&= \dots
\end{align} $$

Possiamo scrivere queste come:
$$\begin{align}
&=-2\mu D_{x} - \mu'div(\underline{v}) \\
&= -2\mu D_{y} - \mu' div(\underline{v}) \\
&= -2 \mu D_{z} - \mu' div(\underline{v})
\end{align}$$
Riscrivendo in modo vettoriale abbiamo:
$$\underline{\underline{\phi}}_{D} = -2\mu \underline{\underline{D}}-\mu'div(\underline{v})\underline{\underline{I}}$$

Da qui possiamo ricavare il legame costitutivo per i fluidi reali stokesiani-newtoniani e il tensore degli sforzi per il fluidi stokesiano, che avevamo definito come $f(\underline{\underline{D}}) = p \underline{\underline{I}}+\underline{\underline{\phi}}_{D}(\underline{\underline{D}})$:
$$\underline{\underline{\phi}} = (p-\mu'div(\underline{v}))\underline{\underline{I}}-2\mu \underline{\underline{D}}$$

Questo legame anche per le matrici non diagonali per ridurre i calcoli abbiamo fatto quella ipotesi.

## Equazioni di Navier-Stokes
Come già visto la equazione indefinita dell'equilibrio dinamico è:
$$\rho(\underline{f}-\underline{a}) = div (\underline{\underline{\phi}})$$

Come abbiamo visto applicando il tensore degli sforzi dei fluidi perfetti ricaviamo la equazione di Eulero:
$$\underline{\underline{\phi}} = p \underline{\underline{I}} \implies \rho\left( \underline{f}-\frac{d\underline{v}}{dt} \right) = grad(p) \to \text{Eulero}$$

Mettendo il legame costitutivo dei fluidi reali stokesiani-newtoniani avremo:
$$\begin{align}
\underline{\underline{\phi}} &= (p-\mu'div(\underline{v}))\underline{\underline{I}}-2\mu \underline{\underline{D}} =  \\
&\implies  \rho\left( \underline{f}-\frac{d\underline{v}}{dt}  \right) = div[(p-\mu'div(\underline{v}))\underline{\underline{I}}-2\mu \underline{\underline{D}}] \\
&= grad(p-\mu' div(\underline{v}))-2\mu \cdot div\underline{\underline{D}}
\end{align}$$

Per definire bene questa equazione dobbiamo espandere il divergente di $\underline{\underline{D}}$.

Abbiamo definito $\underline{\underline{D}}$ come:
$$\underline{\underline{D}} = \begin{bmatrix}
\frac{ \partial u }{ \partial x }   & \frac{1}{2}\left( \frac{ \partial v }{ \partial x } +\frac{ \partial u }{ \partial y }  \right) & \frac{1}{2}\left( \frac{ \partial w }{ \partial x } +\frac{ \partial u }{ \partial z }  \right) \\
\frac{1}{2}\left( \frac{ \partial u }{ \partial y } +\frac{ \partial v }{ \partial x }  \right) & \frac{ \partial v }{ \partial y }  & \frac{1}{2}\left( \frac{ \partial w }{ \partial y } +\frac{ \partial v }{ \partial z }  \right) \\
\frac{1}{2}\left( \frac{ \partial u }{ \partial z } +\frac{ \partial w }{ \partial x }  \right) & \frac{1}{2}\left( \frac{ \partial v }{ \partial z } +\frac{ \partial w }{ \partial y }  \right) & \frac{ \partial w }{ \partial z } 
\end{bmatrix}$$
Per ricordaci il divergente è $div(\underline{\underline{M}}) = \underline{\underline{M}}\cdot \nabla$, dove $\nabla = [\frac{ \partial  }{ \partial x },\frac{ \partial  }{ \partial y },\frac{ \partial  }{ \partial z }]$:

$$div(\underline{\underline{D}}) = \begin{bmatrix}
\frac{1}{2} \frac{ \partial^{2} U }{ \partial x^{2} } + \frac{1}{2} \frac{ \partial^{2}U }{ \partial x^{2} }  + \frac{1}{2}\left( \frac{ \partial^{2} u }{ \partial y^{2} }  +\frac{ \partial^{2} v }{ \partial x \partial y } \right) + \frac{1}{2} \left( \frac{ \partial^{2} u }{ \partial z^{2} } +\frac{ \partial^{2} w }{ \partial x \partial z }  \right)\\ \dots \\ \dots
\end{bmatrix} = $$

$$= \frac{1}{2}\begin{bmatrix}
\left( \frac{ \partial^{2} U }{ \partial x^{2} } +\frac{ \partial^{2} U }{ \partial y^{2} } + \frac{ \partial^{2} U }{ \partial z^{2} } \right) + \left( \frac{ \partial^{2} U }{ \partial x^{2} } + \frac{ \partial^{2} v }{ \partial x \partial y } +\frac{ \partial^{2} w }{ \partial x \partial z }  \right)\\ \dots \\ \dots
\end{bmatrix} = $$

$$= \frac{1}{2} \begin{bmatrix}
 \Delta u + \frac{ \partial  }{ \partial x } (div(\underline{v})) \\
\Delta v + \frac{ \partial  }{ \partial y } (div(\underline{v})) \\
\Delta w +\frac{ \partial  }{ \partial z }(div(\underline{v})) 
\end{bmatrix}$$
Il simbolo che stiamo usando il Laplaciano che può esser scritto come $\nabla^{2}$, il Laplaciano ha valore: $$\frac{ \partial^{2}  }{ \partial x^{2} } +\frac{ \partial^{2}  }{ \partial y^{2} } +\frac{ \partial^{2}  }{ \partial z^{2} } $$
Avendo derivato questa definizione possiamo scrivere $div(\underline{\underline{D}})$ come:
$$div\underline{\underline{D}} = \frac{1}{2}\Delta \underline{v} + grad(div(\underline{v}))$$

Tornando all'equilibrio dinamico possiamo scriverlo come:
$$\begin{align}
\rho\left( \underline{f}-\frac{d\underline{v}}{dt} \right) &= grad(p-\mu'div(\underline{v}))-2\mu\left( \frac{1}{2}(\Delta \underline{v}+grad(div(\underline{v}))) \right) \\
& = grad[p(\mu'-\mu)div(\underline{v})]-\mu \Delta \underline{v}
\end{align}$$
Questa è la formula generale per l'equilibrio dinamico per una fluido reale stokesiano-newtoniano.

Diamo la abbreviazione RSN a questa equazione.

Avendo determinato l'equazione dell'equilibrio con il nostro tensore, vediamo che il nostro sistema è cambiato.

Come abbiamo visto, il sistema generale per un fluido è:
$$\begin{gather}
\rho\left( \underline{f}-\frac{d\underline{v}}{dt} \right) =d iv(\underline{\underline{\phi}}) \\
\frac{ \partial \rho }{ \partial t }  + div(\rho \underline{v})=0 \\
\rho = \dots
\end{gather}$$
Questo ha 5 equazioni per 10 incognite.

Mettendo l'equazione per il RSN in questo sistema cambierà e diventerà:
$$\begin{gather}
\rho\left( \underline{f}-\frac{d\underline{v}}{dt} \right) = grad[p-(\mu'+\mu)div(\underline{v})] -\mu\Delta \underline{v} \\
\frac{ \partial \rho }{ \partial t } +div(\rho \underline{v}) = 0 \\
\rho = \dots
\end{gather}$$
In questo sistema le incognite sono: $\rho$,$p$ e $\underline{v}$.

Se prendiamo un fluido incomprimibile, RSNI, che significa che la densità non varia, il sistema sarà:
$$\begin{gather}
div(\underline{v}) = 0 \\
\rho\left( \underline{f}-\frac{d\underline{v}}{dt}  \right) = grad(p)-\mu\Delta \underline{v}
\end{gather}$$
Questo sistema ha 4 equazioni e 4 incognite.

La equazioni di Navier-Stokes sono gli equilibri dinamici dei sistemi RSN e RSNI:
$$\begin{align}
RSN &\to \rho\left( \underline{f}-\frac{d\underline{v}}{dt} \right) = grad[p-(\mu+\mu')div(\underline{v})]-\mu\Delta \underline{v} \\
RSNI &\to \rho\left( \underline{f}-\frac{d\underline{v}}{dt} \right) = grad(p)-\mu \Delta \underline{v}
\end{align}$$

## Esempi Applicativi

### Flusso di Couette

Preso un fluido RSNI, lo mettiamo tra due lastre una stazionaria e una in moto.

<!Diagramma del fluido in moto di Couette>

Il flusso del fluido tra le due lastre è a correnti lineari.

Le equazioni per questo fluidi saranno:
$$\begin{align}
\rho\left( f_{x}-\frac{ \partial u }{ \partial t } +u\frac{ \partial u }{ \partial x } -v\frac{ \partial u }{ \partial y }  \right) &= \frac{ \partial p }{ \partial x } -\mu\left( \frac{ \partial^{2} u }{ \partial x^{2} } +\frac{ \partial^{2} u }{ \partial y^{2} }  \right) \\
\rho\left( f_{y}-\frac{ \partial v }{ \partial t } +u\frac{ \partial v }{ \partial x } -v\frac{ \partial v }{ \partial y }  \right) &= \frac{ \partial p }{ \partial y } - \mu\left( \frac{ \partial^{2} v }{ \partial x^{2} }  +\frac{ \partial^{2} v }{ \partial y^{2} } \right) \\
\frac{ \partial u }{ \partial x } +\frac{ \partial v }{ \partial y } &=0
\end{align}$$
Le soluzione che ci aspettiamo da questo sistema saranno:
$$\begin{gather}
p = p(x,y) \\
u= u(x,y)= u(y) \\
\cancel{ v=  v(x,y) }
\end{gather}$$
Il moto in $v$ non esiste per come è fatto il campo di moto, e anche per come è fatto il moto il flusso in u è solo dipendente da y.

Data la geometria semplice tanti termini si annulleranno:
$$\begin{align}
\rho\left( \cancel{ f_{x} }-\cancel{ \frac{ \partial u }{ \partial t } } +u\cancel{ \frac{ \partial u }{ \partial x } } -\cancel{ v\frac{ \partial u }{ \partial y } }  \right) &= \cancel{ \frac{ \partial p }{ \partial x } } -\mu\left( \cancel{ \frac{ \partial^{2} u }{ \partial x^{2} } } +\frac{ \partial^{2} u }{ \partial y^{2} }  \right) \\
\rho\left( f_{y}-\cancel{ \frac{ \partial v }{ \partial t } } +u\cancel{ \frac{ \partial v }{ \partial x } } -v\cancel{ \frac{ \partial v }{ \partial y } }  \right) &= \frac{ \partial p }{ \partial y } - \mu\left( \cancel{ \frac{ \partial^{2} v }{ \partial x^{2} } }  +\cancel{ \frac{ \partial^{2} v }{ \partial y^{2} } } \right) \\
\frac{ \partial u }{ \partial x } + \cancel{ \frac{ \partial v }{ \partial y } } &=0 \implies  \frac{ \partial u }{ \partial x } =0
\end{align}$$
$\frac{ \partial p }{ \partial x }$ è un termine che indica la presenta di un gradiente della pressione lungo x che spingerebbe il fluido in un verso o un'altro, per semplificare non lo mettiamo, ma lo vedremo nel prossimo esercizio dove non ci sarà lastra che innesca il moto quindi il gradiente in pressione permette il moto del fluido.

Dalle equazioni di questo problema ricaviamo che:
$$\begin{gather}
\frac{ \partial^{2} u }{ \partial y^{2} }  \implies u(y)\text{ è retta}\\
\rho(f_{y}) = \frac{ \partial p }{ \partial y } 
\end{gather}$$
La seconda equazione riscritta ci dice che:
$$\frac{ \partial p }{ \partial y }  = \rho f_{y} = -\gamma$$
Questa equazione indica una distribuzione lineare della pressione del fluido alla Stevino per le correnti lineari, come abbiamo visto sia nella statica che nei fluidi perfetti.

Integrando la prima equazione invece abbiamo:
$$\frac{ \partial u }{ \partial y }  = A$$
E integrando ulteriormente:
$$u(y) = Ay+B$$
Questo implica che si crea una distribuzione di velocità uniforme in x e lineare in y.

Le condizioni al contorno che imponiamo sono le condizioni di aderenza dei fluidi, cioè:
$$\begin{gather}
u(y=0) = 0 \implies  B=0 \\
u(y=h) = v \implies Ah=v\implies  A = \frac{v}{h}
\end{gather}$$
La velocità $u$ allora avrà equazione:
$$u(y) = \frac{v}{h}y$$

<!Diagramma delle diverse distribuzioni nel fluido>

Non lo abbiamo definito fin'ora, ma $\mu$ è la viscosità dinamica del fluido.

Prendiamo un cubetto infinitesimale con faccia inferiore sulla lastra ferma.

Vogliamo trovare lo sforzo che agisce sulla facce di questo cubetto. Supponiamo:
$$\underline{\underline{\phi}} = p \underline{\underline{I}} -2\mu \underline{\underline{D}}$$

Il vettore dello sforzo sulla faccia inferiore di questo cubetto è:
$$\underline{\phi} = \underline{\underline{\phi}}\underline{n}$$

Ora che abbiamo risolto il problema delle velocità, possiamo definire $\underline{\underline{D}}$. Se non avessimo trovato le velocità non saremmo riusciti a farlo:

$$\underline{\underline{D}} = \begin{bmatrix}
\frac{ \partial u }{ \partial x }  & \frac{1}{2}\left( \frac{ \partial u }{ \partial y } +\frac{ \partial v }{ \partial x }  \right) \\
\frac{1}{2}\left( \frac{ \partial u }{ \partial y } +\frac{ \partial v }{ \partial x }  \right) & \frac{ \partial v }{ \partial y } 
\end{bmatrix} = \begin{bmatrix}
0 & \frac{v}{2h} \\
\frac{v}{2h} & 0
\end{bmatrix}$$
 
Il deviatore delle degli sforzi allora avrà equazione:
$$\implies \underline{\underline{\phi}}_{D} = -\mu \begin{bmatrix}
0 & \frac{v}{h} \\
\frac{v}{h} & 0
\end{bmatrix}$$
Tornando al vettore dello sforzo abbiamo:
$$\underline{\phi} = \begin{bmatrix}
0 & -\mu  \frac{v}{h} \\
-\mu  \frac{v}{h} & 0
\end{bmatrix}\cdot \begin{bmatrix}
0\\1
\end{bmatrix} = \underbrace{ \begin{bmatrix}
-\mu  \frac{v}{h}\\0
\end{bmatrix} }_{ \text{Lungo x} }$$
Questo ci indica che la sforzo agisce lungo x nella direzione opposta al moto, questo moto in effetti è l'attrito risentito dal cubetto di fluido sulla sua faccia anteriore:

Nulla faccia superiore invece abbiamo lo sforzo:
$$\underline{\phi} = \begin{bmatrix}
\mu  \frac{v}{h}\\0
\end{bmatrix}$$
Questo è nella direzione x ma nella direzione del moto.

Vediamo in questa due equazioni che l'attrito non è dipendente dalla profondità è costante su tutta la sezione.

La linea di carico totale non è unica perché per quanto LP è costante, la velocità non lo è.

### Flusso di Poiseuille (piano)

Nel flusso di Poiseuille non abbiamo lastre in moto, invece il fluido è spinto in una direzione da un gradiente di pressione nella direzione x, questo tipo di flusso occorre quando il fluido è spinto.

<!Diagramma flusso di Poiseuille>

Prendiamo un sistema di riferimento centrato tra le due lastre.

Le equazioni per questo sistema sono:
$$\begin{gather}
-\rho\left( \cancel{ \frac{ \partial u }{ \partial t }  } + u \cancel{ \frac{ \partial u }{ \partial x }  } + \cancel{ v\frac{ \partial u }{ \partial y }  }\right) = \frac{ \partial p }{ \partial x } -\mu\left( \frac{ \partial^{2} u }{ \partial x^{2} } +\frac{ \partial^{2} u }{ \partial y^{2} }  \right) \\
\frac{ \partial p }{ \partial y } =\gamma \\
\frac{ \partial u }{ \partial x } +\frac{ \partial v }{ \partial y } =0 \mathop{\to}_{v=0} \frac{ \partial u }{ \partial x } =0
\end{gather}$$
In questo caso $\frac{ \partial p }{ \partial x }$ non si annulla perché è presente in gradiente.

Dalla prima equazione ricaviamo che:
$$\frac{ \partial^{2} u }{ \partial y^{2} }  = \frac{1}{\mu}\frac{ \partial p }{ \partial x } $$
Integrando 2 volte in y abbiamo:
$$\begin{gather}
\frac{ \partial u }{ \partial y }  = \frac{1}{\mu}\frac{ \partial p }{ \partial x } y+A \\
u(y) = \frac{1}{2\mu}\frac{ \partial p }{ \partial x } y^{2}+Ay+B
\end{gather}$$

In questo caso il profilo che viene creato non è lineare ma è parabolico.

La condizioni di contorno in questo caso sono ancora le condizioni di aderenza, cioè:
$$u(\pm h) = 0 \implies  \frac{1}{2\mu}\frac{ \partial p }{ \partial x } h^{2}+B$$
$$B = -\frac{1}{2\mu} \frac{ \partial p }{ \partial x } h^{2}$$
$$\frac{ \partial u }{ \partial y } (y=0)=0\implies A=0$$
$$u(y) = \frac{1}{\mu}\frac{ \partial p }{ \partial x } (y^{2}-h^{2})$$
$\frac{ \partial p }{ \partial x }$ è nativo per il fatto che la pressione diminuisce con x che aumenta, questo implica anche la linea piezometrica non è costante in x e infatti diminuisce. Il componente alla destra è sempre negativo o nulla perché $y\leq h$ sempre.
La velocità allora sarà positiva lungo x.

<!Diagramma profilo parabolico e linea piezometrica>

La direzione delle velocità fa anche senso perché se consideriamo che la linea piezometrica diminuisce lungo x, la spinta generata dal liquido diminuirà anche lei, quindi in netto la spinta totale è nella direzione delle velocità.

Guardando l'attrito risentito dal fluido, la matrice $\underline{\underline{D}}$ è:
$$\underline{\underline{D}} = \begin{bmatrix}
0 & \frac{1}{2\mu}\frac{ \partial p }{ \partial x } y \\
\frac{1}{2\mu}\frac{ \partial p }{ \partial x } y & 0
\end{bmatrix}$$

Il deviatore delle velocità è:
$$\underline{\underline{\phi}}_{D} = -2\mu \underline{\underline{D}} = -\begin{bmatrix}
0 & \frac{ \partial p }{ \partial x } y \\
\frac{ \partial p }{ \partial x } y & 0
\end{bmatrix}$$
Il vettore dello sforzo di attrito è:
$$\underline{\phi} = \underline{\underline{\phi}}\underline{n}$$
Deviamo dal fatto che c'è un y nelle equazioni che l'attrito è lineare, avendo minimo a $y =0$

La distribuzione degli sforzi di attrito sarà così:
<!Diagramma distribuzione degli sforzi di attrito>

Il volumetto sotto ha attrito positivo sopra è negativo sotto, e quello sopra ha attrito negativo sopra e positivo sotto.

Queste distribuzione hanno senso visto che l'attrito occorre per le velocità maggiore all'interno.

Se guardiamo l'attrito lungo x, abbiamo il versore come:
$$\underline{n} = \begin{bmatrix}
 1\\0
\end{bmatrix}$$

Il tensore degli sforzi è:
$$\underline{\underline{\phi}} = \begin{bmatrix}
0 &  \frac{ \partial p }{ \partial x } y \\
\frac{ \partial p }{ \partial x } y & 0
\end{bmatrix}\begin{bmatrix}
1 \\0
\end{bmatrix} = \begin{bmatrix}
0\\\frac{ \partial p }{ \partial x } y
\end{bmatrix}$$

Questo implica che sui lati lo sforzo agisce lungo y, come:
<!Diagramma sforzi lungo y>

Questi attrito verticali sono generati per la deformazione dei cubetti che abbiamo preso non per le condizioni di attrito. Quando un cubetto soffre di attrito, di deforma angolarmente e questa deformazione angolare causa un stiramento ai lati che genera un sforzo.







