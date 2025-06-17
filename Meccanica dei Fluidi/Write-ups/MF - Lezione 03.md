---
creation_date: 2024-02-11 14:02
tags:
  - MF
share: true
---
# Lezione 03 - Spinte su piani curvi e cinematica dei fluidi

## Depressione Relativa
È possibile per un fluido di trovarsi a pressione minore di quella atmosferica. Questo significa che il fluido avrà pressione relativa negativa e che esisterà sopra il PCI relativo del fluido.

<!Diagrammi pressione negativa>

La pressione negativa esiste sono quando stiamo parlando della pressione relativa, perché la pressione assoluta non può mai esser minore di 0, più un fluido si avvicina ad una pressione assoluta nulla, più viene vaporizzato.

### Spinte da forze negative

Immaginiamo un contenitore di fluido parallelepipedo con uno sportellino, fatto così:
<!Diagramma sportellino>

La spinta sullo sportellino del fluido sarà:
$S_{x} = p_{G}A= -\gamma\left( h+\frac{l}{2} \right)\cdot l\cdot L$

Se la pressione relativa è negativa allora il fluido "tira" sullo sportellino, tenendolo chiuso. In realtà il fluido interno sta lo stesso spingendo sullo sportellino, ma l'azione della atmosfera (che è nulla nel caso relativo) è più forte della azione del fluido interno, e in effetti la combinatoria genera una forza che spinge lo sportellino dentro.

Nella relativa stiamo guardando rispetto all'atmosfera, la cui pressione prendiamo come nulla, nella assoluta prendiamo rispetto alla pressione del vuoto, quindi quando calcoliamo dobbiamo considerare anche l'atmosfera, che ci porta gli stessi risultati.

## Spinte su superfici curve

<!Diagramma spinte su superfici curve>

Il calcolo delle forze su una superficie curva non viene immediatamente come ci è venuto del caso delle superfici piane. Questo è perché nell'integrale non possiamo prendere come costante il versore normale alla superficie e quindi si complicano i calcoli. Per risolvere il problema invece di guardare la spinta del fluido sulle superfici ci guardiamo la spinta delle superfici sul fluido.

Dobbiamo prima pero definire l'equilibrio del fluido in forma globale anziché in forma indefinita come abbiamo fatto fin'ora.

### Equilibrio del fluido in forma globale

Come abbiamo visto l'equilibrio in forma indefinita(puntuale) ha formula:
$$\rho \underline{f} = grad(p)$$
In questo caso non è molto utile, quindi andiamo a cambiare scala ad una scala più grande.

Per primo prendiamo un volume di forma arbitraria:
<!Diagramma volume arbitrario W>

Integrando le forma indefinita nel volume abbiamo:
$$\int\limits_{W}^{} \rho \underline{f} \, dW  = \int\limits_{W}^{} grad(p) \, dW $$
Il teorema di Green ci dice che l'integrale del gradiente è uguale all'integrale lung o la sua superficie, possiamo allora scrivere:
$$\underline{f}\int\limits_{W}^{} \rho \, dW  = -\int\limits_{A}^{} p \underline{n} \, dA $$

Possiamo riscrivere nella forma generale come:
$$\underline{G}+  \underline{\Pi} = 0$$
Dove $\underline{G}$ è l'azione di massa globale sul volume, che per noi sarà il peso, invece $\underline{\Pi}$ è l'azione di superficie che agisce sul contorno, cioè il risultate delle azioni (spinte) di superficie.

### Tornando al calcolo delle spinte
Per usare la forma globale dell'equilibrio, dobbiamo imporre un volume di controllo, imporre l'equilibrio e da possiamo trovare la spinte.

I requisiti per il volume di controllo sono:
1. Definire il volume di controllo
2. Il contorno deve esser fatto di superfici piane (oltre quella che stiamo guardando)
3. La superficie di interesse deve esser parte del volume di controllo.

Il volume di controllo può avere una forma qualsiasi, basta che segua le regole specificate.

<!Diagramma possibile contorni>

Sviluppo prendendo il volume di forma:
<!Diagramma volume scelto con vettori>

Visto che $\underline{\Pi}$ è un integrale possiamo scomporre il suo valore per ogni faccia del contorno che scegliamo, una delle spinte che estraiamo è la spinta che agisce sulla superficie curva, questa sarà l'opposto della spinta che agisce sulla superficie dal fluido.
$$\underline{\Pi} = \int\limits_{A}^{} p \underline{n} \, dA = \int\limits_{A_{1}}^{} p \underline{n} \, dA +\int\limits_{A_{2}}^{} p \underline{n} \, dA + \int\limits_{A_{3}}^{} p \underline{n} \, dA  $$
Tutto questo assumendo che $A= A_{1}+A_{2}+A_{3}$

Ogni $\underline{\Pi}$ sarà il vettore della forza agente sulla parte della superficie che stiamo guardando.

Il diagramma dei vettori sarà:
<!Diagramma vettori>

Ci cui stiamo provando a trovare il valore del vettore $\underline{\Pi}_{0}$.

La forma completa è:
$$\begin{gather}
\underline{G} +\underline{\Pi} = 0 \\
\underline{G} +\underline{\Pi}_{0} + \underline{\Pi}_{1} + \underline{\Pi}_{2} = 0 \\
\implies  \underline{\Pi}_{0} = -\underline{G}-\underline{\Pi}_{1}-\underline{\Pi}_{2} \\
\implies \underline{S} = \underline{G}+ \underline{\Pi}_{1}+\underline{\Pi}_{2}
\end{gather}$$

Calcolando i componenti non nulli di ogni vettore troviamo:
$$\begin{gather}
G_{y} = -\gamma W  = -\gamma  \frac{\pi R^{2}}{4}L \\
\Pi_{1y} = -p_{1}A_{1}  = -\gamma hRL \\
\Pi_{2x} = -p_{2} A_{2} = -p_{G2}A_{2} = -\gamma\left( h+\frac{R}{2} \right)RL \\
S_{x} = G_{x} + \Pi_{1x} + \Pi_{2x} = -\gamma\left( h+\frac{R}{2} \right)RL \\
S_{y} = G_{y} +\Pi_{1y} + \Pi_{2y} = -\gamma  \frac{\pi R^{2}}{4}L - \gamma hRL
\end{gather}$$




Per determinare la retta di azione, possiamo fare come nel problema della spinta su superficie piana e calcolare il momento intorno ad un punto.

## Cinematica

La cinematica è lo studio e rappresentazione di come si muovono i fluidi, cioè una caratterizzazione dei cambi di moto.

Definiamo la velocità in forma di vettore tridimensionale:
$$\underline{v} = u\underline{i} + v\underline{j} + w\underline{k}$$

La accelerazione avrà equazione:
$$\underline{a} = \frac{d\underline{v}}{dt}$$
Questa derivazione è difficile perché per i fluidi la velocità non è la derivata del punto e del tempo, è la derivata del cambio nel punto e del tempo. Avrà equazione:
$$\underline{v} = \underline{v}(\underline{x}(t),t)$$
Ha relazione allo spazio temporale, perché dopo un istante il fluido non sarà nella stessa posizione, quindi potrebbe avere velocità diversa in base al nuovo punto. Questa relazione significa che dobbiamo usare derivate parziali e composte.

$$d\underline{v} = \frac{ \partial \underline{v} }{ \partial t }  + \frac{ \partial \underline{v} }{ \partial x }dx+ \frac{ \partial \underline{v} }{ \partial y  }dy + \frac{ \partial \underline{v} }{ \partial z }dz  $$
$$\begin{align}
\implies \underline{a} &= \frac{d\underline{v}}{dt} = \frac{ \partial \underline{v} }{ \partial t }  + \frac{ \partial \underline{v} }{ \partial x }\frac{ dx }{ dt } + \frac{ \partial \underline{v} }{ \partial y  }\frac{ dy }{ dt } + \frac{ \partial \underline{v} }{ \partial z }\frac{ dz }{ dt } \\
&= \underbrace{ \frac{ \partial \underline{v} }{ \partial t } }_{ \substack{\text{Accelerazione}\\\text{locale}} }  + \underbrace{ u \frac{ \partial \underline{v} }{ \partial x }  +v\frac{ \partial \underline{v} }{ \partial y } + w\frac{ \partial \underline{v} }{ \partial z } }_{ \text{Accelerazione Convettiva} }  
\end{align}$$
La accelerazione quindi dipende dalla velocità stessa del fluido.

La accelerazione locale descrive un cambio delle caratteristiche dello spazio occupato, il fluido non si sta spostando.

### Tipi di Moto

Possiamo dare 3 classificazioni al moto dei fluidi:
- vario $\to$ il più complesso
- permanente/stazionario $\to$ niente varia nel tempo, sono attiva solo accelerazioni convettive
- Uniforme $\to$ ne variazioni nel tempo ne nello spazio

### Come guardiamo ai fluidi

Possiamo guardare il fluido in modo euleriano o lagrangiano.
Nel modo euleriano si guarda nel punto, tutto è la proprietà del punto, invece nel lagrangiano si guardano le particelle di fluido stesse

#### Mappando il moto
 Ci sono 3 modi per mappare il moto dei fluidi.
1. Traiettorie $\to$  mappiamo successive posizioni di una particella, questo è intrinsicamente Lagrangiano.
2. Linee di Corrente $\to$ Le linee seguono la velocità nello spazio, questa rappresentazione è euleriana in principio.
<!Diagramma linee di corrente>
3. Linee di Fumo/di Emissione $\to$ usato poco, in questa rappresentazione le linee uniscono tutte le particelle che sono passate per lo stesso punto.

Nel caso del moto permanente tutti questi coincidono.

## Conservazione di massa

Il fluidi non si muove per suo, deve muoversi in per obbedire la conservazione della massa.

Anche con la conservazione della massa posso scrivere una forma indiretta e globale, e una intermedia detta, per correnti.

### Forma Indefinita

Prendiamo un volumetto infinitesimale, in cui entra ed esce fluido ad ogni faccia.

Guardiamo il flusso di massa tra facce parallele/opposte, sviluppando come abbiamo fatto per l'equilibrio, il cambio nella massa nel volumetto ha equazione:
$$\begin{align}
m_{e}-m_{u} &= \underbrace{ \cancel{ \rho u\;dy\;dz\;dt } }_{\substack{\text{Massa entrante}\\\text{infinitesiamale}} }-\underbrace{ \left( \cancel{ \rho u }+\frac{ \partial (\rho u) }{ \partial x }dx  \right)dy\;dz\;dt }_{ \text{Massa uscente infinitesimale} } \;+ \\
&+ \cancel{ \rho v\;dx\;dz\;dt }- \left( \cancel{ \rho v }+\frac{ \partial (\rho v) }{ \partial y }dy  \right)dx\;dz\;dt \;+ \\
&+\cancel{ \rho w\;dx\;dy\;dt }- \left( \cancel{ \rho w }+\frac{ \partial (\rho w) }{ \partial z }dy  \right)dx\;dy\;dt \;\;= \\ \text{Se nullo va} & \text{ bene, se no allora bisogna compensare con un}\\\text{cambio di} & \text{ densità, allora:}\\
&= \frac{ \partial \rho }{ \partial t } \cdot dt\;dW
\end{align}$$
Se $\frac{ \partial \rho }{ \partial t } > 0$ c'è compressione, invece se $\frac{ \partial \rho }{ \partial t } <0$ allora c'è dilatazione.

Semplificando tutto e portandolo alla destra, troviamo,:
$$= \frac{ \partial \rho }{ \partial t }  + \frac{ \partial (\rho u) }{ \partial x } +\frac{ \partial (\rho v) }{ \partial y } +\frac{ \partial (\rho w) }{ \partial z } $$

La divergenza della densità per la velocità ha equazione:
$$div(\rho \underline{v}) = \nabla \cdot(\rho \underline{v}) = \begin{bmatrix}
\frac{ \partial  }{ \partial x }\\\frac{ \partial  }{ \partial y } \\ \frac{ \partial  }{ \partial z } \end{bmatrix}\cdot \begin{bmatrix} \rho u \\ \rho v \\ \rho w\end{bmatrix}  = \frac{ \partial (\rho u) }{ \partial x } +\frac{ \partial (\rho v) }{ \partial y } +\frac{ \partial (\rho w) }{ \partial z } $$
Questo significa che possiamo scrivere la conservazione della massa come:
$$ = \frac{ \partial \rho }{ \partial t } + div(\rho \underline{v}) = 0 $$
Se $div(\rho \underline{v}) \neq 0 \implies \frac{ \partial \rho }{ \partial t } \neq 0$

Se il moto è permanente allora:
$$div(\rho \underline{v})= 0$$
Perché non si può avere alcuna variazione nel tempo.

Se il fluido è imcomprimibil allora:
$$div(\underline{v}) = 0$$
Perché non c'è variazione nella densità.
### Forma Generale della Conservazione della Massa
Come nell'equilibrio statico, andiamo da un volumetto infinitesimale ad un volume finito integrando.

Come appena visto in forma indefinita la conservazione di massa è:
$$\frac{ \partial \rho }{ \partial t } + div(\rho \underline{v}) = 0$$

Integrando abbiamo:
$$\int\limits_{W}^{} \frac{ \partial \rho }{ \partial t }  \, dW +\int\limits_{W}^{} div(\rho \underline{v}) \, dW=0 $$
La prima parte ci dice che se varia la densità varia la massa, invece per seconda parte il teorema della divergenza ci dice che la divergenza di un campo è uguale al flusso nel contorno del volume.

Possiamo riscrivere come:

$$\frac{ \partial M }{ \partial t }  - \int\limits_{A} \rho \underline{v}\cdot \underline{n}  \, dA =0$$
Se cambiamo il nostro volume finito ad un volume impermeabile con un area di uscita e area di entrata per il fluido, possiamo riscrivere questa equazione come:

$$\frac{ \partial M }{ \partial t }  = \underbrace{ \int\limits_{A_{i}}^{} \rho \underline{v}\cdot \underline{n} \, dA }_{ (+)\text{ per definizione} } + \underbrace{ \int\limits_{A_{u}}^{} \rho \underline{v}\cdot \underline{n} \, dA }_{ (-) \text{ per definizione} } + \underbrace{ \int\limits_{A-A_{i}-A_{u}}^{} \rho \underline{v}\cdot \underline{n} \, dA }_{ =0\text{ per definizione} } $$

In parole povere questa equazione ci dice:

Quello che si accumula  = Quello che entra - quello che esce.

Questa equazione ci definisce la portata massica, noi la cambieremo un po' trovare la portata volumetrica.