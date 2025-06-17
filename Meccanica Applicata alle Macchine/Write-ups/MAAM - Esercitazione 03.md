---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Esercitazione 3 - Moti Relativi

Ho mancato la ultima esercitazione quindi hanno fatto il 2 senza di me, ma non dovrebbe esser troppo difficile risolverlo.

## Esercizio 3
Avevano iniziato ma non finito l'esercizio 3:
<!Diagrammi  esercizio 3>

$$(P-O_{0}) = (O_{1}-O_{0})+(P-O_{1}) = (O_{1}-O_{0}) + x_{1p}\hat{i}_{1}+y_{1p}\hat{j}_{1}$$

$$\vec{v}_{p} = \underbrace{ \vec{v}_{O1} + \vec{w}\times(P-O_{1}) }_{ \vec{v}_{tra} } + \underbrace{ \dot{x}_{1p}\hat{i}_{1}+ \dot{y}_{1p}\hat{j}_{1} }_{ \vec{v}_{rel} }$$

$$\vec{a}_{p}^{ASS} = \underbrace{ \vec{a}_{O1} }_{ \vec{a}_{p}^{TRA,T} } + \underbrace{ \vec{\dot{w}}\times(P-O_{1}) }_{ \vec{a}_{pt}^{TRA,R} } + \underbrace{ \vec{w}\times(\vec{w}\times(P-O_{1})) }_{ \vec{a}_{pn}^{TRA,} } + \underbrace{ \ddot{x}_{1p}\hat{i}_{1}+\dot{y}_{1p}\hat{j}_{1} }_{ \vec{a}_{p}^{REL} } + \underbrace{ 2\vec{w}\times(\dot{x}_{1p}\hat{i}_{1}+\dot{y}_{1p}\hat{j}_{1}) }_{ \vec{a}_{p}^{CO} }$$

La T è per traslazionale e la R è per rotazionale.

### Approccio Grafico/Tracciando Traiettoria

<!Diagrammi traiettorie>

Ci sono 3 gdl rimasti, blocchiamo 2 alle volta per trovare la traiettoria di ognuno individualmente

$$\vec{v}_{p}^{ASS} = \vec{v}_{p}^{TRA}+\vec{v}_{p}^{REL}$$


|     | $\vec{v}_{p}$ | $\vec{v}_{p}^{TRA,T}$ | $\vec{v}_{p}^{TRA,R}$    | $\vec{v}_{p}^{REL}$ |
| --- | ------------- | --------------------- | ------------------------ | ------------------- |
| M   | ?             | $v_{c}$               | $\vec{w}\times(P-O_{1})$ | $v_{s}$             |
| D   | ?             | ORIZZ.                | $\perp O_{1}P$           | $\parallel O_{1}P$  |
<!Diagramma sovrapposizione delle velocità>

#### Accelerazione

$$ \vec{a}_{p}^{ASS}=\vec{a}_{p}^{TRA,T}+\vec{a}_{p}^{TRA,R}+\vec{a}_{p}^{REL}+\vec{a}_{p}^{COR}$$


|     | $\vec{a}_{p}^{ASS}$ | $\vec{a}_{pn}^{TRA,T}$                   | $\vec{a}_{pt}^{TRA,T}$ | $\vec{a}_{pn}^{TRA,R}$         | $\vec{a}_{pt}^{TRA,R}$ | $\vec{a}_{pn}^{REL}$                   | $\vec{a}_{pt}^{REL}$            | $\vec{a}_{p}^{COR}$ |
| --- | ------------------- | ---------------------------------------- | ---------------------- | ------------------------------ | ---------------------- | -------------------------------------- | ------------------------------- | ------------------- |
| M   | ?                   | =0                                       | $a_{c}$                | $w^{2}(O_{1}P)$                | $\dot{w}(O_{1}P)$      | =0                                     | $a_{s}$                         | $2wv_{p}^{REL}$     |
| D   | ?                   | Perchè $\Gamma_{p}^{TRA,T}$ è rettilineo | ORIZZ                  | $\parallel O_{1}P$$P\to O_{1}$ | $\perp O_{1}P$         | Perchè $\Gamma_{p}^{REL}$ è rettilineo | $\parallel O_{1}P$ $O_{1}\to P$ | $\perp O_{1}P$      |

<!Diagramma combinazione dei accelerazioni>

Per ogni punto e tipo di punto di riferimento che prendiamo esiste una sua combinazione di vettori di accelerazione, invece per le velocità indipendentemente del punto di riferimento i vettori sono uguali perché godono della proprietà della sovrapposizione. Invece per le accelerazioni dipendendo dal sistema di riferimento è possibile che sia presente la accelerazione di Coriolis quindi è diverso.

## Esercizio 4

<!Diagramma sistema>

gdl = 9 - 6 = 3

$O_{0},x_{0},y_{0}$ sistema di riferimento assoluto
$O_{1},x_{1},y_{1}$ sistema di riferimento rotante solidale con l'asta $O_{1}O_{2}$
$O_{2},x_{2},y_{2}$ sistema di riferimento rotante solidale con l'asta $O_{2}P$

$\overline{O_{1}O_{2}}_{} = L_{1}$
$\overline{O_{2}P}_{}=L_{2}$

$\frac{di_{0}}{dt} = 0, \frac{d\hat{i}_{1}}{dt}\neq 0, \frac{d\hat{i}_{2}}{dt}\neq 0$

### Approccio Analitico

$$(P-O_{0}) = (O_{1}-O_{0})+(O_{2}-O_{1})+(P-O_{2}) = x_{O1}\hat{i}_{0}+L_{1}\hat{i}_{1}+L_{2}\hat{i}_{2}$$

$$\begin{align}
\vec{v}_{p} &= \dot{x}_{O1}\hat{i}_{0}+L_{1}\vec{w}\times \hat{i}_{1}+L_{2}\vec{w}\times \hat{i}_{2} \\
&= \dot{x}_{O1}\hat{i}_{0}+\vec{w}_{1}\times L_{1}\hat{i}_{1}+\vec{w}_{2}\times L_{2} \hat{i}_{2}
\end{align}$$

<!Diagramma vettori velocità sul sistema>

$$\vec{a}_{p} = \ddot{x}_{O1}\hat{i}_{0}+\vec{\dot{w}}_{1}\times L_{1}\hat{i_{1}}+\vec{w}_{1}\times L_{1}\frac{d\hat{i}_{1}}{dt} + \vec{\dot{w}}_{2}\times L_{2}\hat{i}_{2}+\vec{w}\times L_{2} \frac{d\hat{i}_{2}}{dt}$$

$$\vec{a}_{p} = \ddot{x}_{O1}\hat{i}_{0}+\vec{\dot{w}}_{1}\times L_{1}\hat{i}_{1}+\vec{w}_{1}\times(\vec{w}_{1}\times(L_{1}\hat{i}_{1}))+\vec{\dot{w}}_{2}\times L_{2}\hat{i}_{2}+\vec{w}\times(\vec{w}\times(L_{2}\hat{i}_{2}))$$

<!Diagramma freccie accelerazione>

Dobbiamo centrare su P:
<!Diagramma freccie centrate su P>

### Approccio Grafico

Come ogni altro, le traiettorie cambiano dipendendo da dove e che tipo di punto di riferimento mettiamo.

Iniziamo provando a mettere un punto di riferimento di solo traslazione in $O_{2}$

<!Diagramma con pdr O_3 traslatorio>

Quando blocchiamo la rotazione relativa, troviamo che la traiettoria è circolare con lo stesso raggio della traiettoria del punto $O_{3}$ intorno a $O_{1}$. Questo è perché non è permesso a girare intorno a $O_{3}$ allora visto che il sistema di riferimento è puramente traslatorio, non cambia in niente oltre posizione, questo significa che P si muove come una estensione fissa di dell'asta a cui è connesso, non cambia direzione quindi crea il cerchio uguale ma solo traslato di $P-O_{3}$.  

In base tracciando la traiettoria di $O_{3}$ con un asta che non può girare e quindi rimane sempre uguale, si trova la traiettoria di P, che è lo stesso cerchio ma con questo con continuo spostamento dato che non può fare altro, se si disegna fa più senso.

Cambiando ad un punto di riferimento a $O_{1}$ che può girare troviamo le traiettorie:

<!Diagrammi traiettorie>

In questo caso quando blocchiamo la rotazione, crea un diametro più grande, questo è perché non è più fissato ad un angolo fisso rispetto ad un punto di riferimento non può girare, in questo caso il punto di riferimento può girare e l'angolo fisso non significa che deve mantenere una specifica direzione e verso, deve solo stare alla stessa distanza dal punto di riferimento che è forzato dal fatto che stiamo parlando di corpi rigidi.



