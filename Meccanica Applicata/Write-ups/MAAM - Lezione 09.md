---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 9 - Potenziale ed Equilibrio

Definiamo le forze conservative come le forze dove:
$$\oint\vec{F}\cdot ds = 0$$
Questo significa che data la linea:
<!Diagramma linea con forza>

Il lavoro sarà:
$$L_{1,2} = \int\limits_{\Gamma}^{} \vec{F}\cdot ds = \int\limits_{\Gamma}^{} F_{x}dx+F_{y} \, dy = \int\limits_{\Gamma}^{} dL \,  $$
Dato che il lavoro ha definizione:
$$dL= dU(x,y)$$
$$dU = \frac{ \partial U }{ \partial x } dx+\frac{ \partial U }{ \partial y } dy \implies dL = F_{x}dx+F_{y}dy$$
Se F è conservativo allora si ha che:
$$\frac{ \partial U }{ \partial x } =F_{x}\text{ e }\frac{ \partial U }{ \partial y } =F_{y}$$

### PLV in presenza di forze conservative

Se sappiamo che $\delta L = 0$, allora abbiamo che:
$$\delta L_{NC}+\delta L_{c} = 0$$

Presa q come la variabile indipendente del sistema a 1gdl, allora:
$$Q_{NC}\delta q+\sum_{j}\vec{F}_{cj}\cdot\delta \vec{P}_{j}=0$$
Separando:
$$=Q_{NC}\delta q+\sum_{j}F_{cxj}\delta x_{j}+F_{cyj}\delta y_{j}=$$
Dato che abbiamo un elemento di forze conservative:
$$=Q_{NC}\delta q+\left( \sum_{j}\frac{ \partial U_{j} }{ \partial x }\cdot \frac{ dx_{j} }{ dq } + \frac{ \partial U_{j} }{ \partial y } \cdot \frac{ dy_{j} }{ dq }    \right)\delta q = 0 = Q_{NC}\delta q+\sum_{j}\frac{ dU_{j} }{ dq } \delta q$$
$$\implies dU(x(q),y(q)) = \left( \frac{ \partial U }{ \partial x } \cdot \frac{ dx }{ dq } +\frac{ \partial U }{ \partial y } \cdot \frac{ dy }{ dq }  \right)\delta q$$

Definita U(x,y) come la funzione potenziale del sistema:
$$\sum U_{j} \implies \frac{dU}{dq} = \sum_{j}\frac{ dU_{j} }{ dq } \implies \left( Q_{NC}+\frac{ dU }{ dq }  \right)\delta q = 0\implies Q_{NC} = -\frac{ dU }{ dq }  $$

Defininiamo V come energia potenziale tale che:
$$V = -U\implies Q_{NC} = \frac{dV}{dq}$$
U è la energia che abbiamo trasferito accumulata, descrive il lavoro della forza e ed la energia accumulata nel campo di tali forze.

V invece è l'energia spesa per aumentare l'energia.

## Esempio usando manovellismo e molla

<!Diagramma esempio>

La energia potenziale gravitazionale è data dalla differenza nell'altezza che diamo al sistema:

<!Diagramma energia gravitazionale>

Quindi $V = mg\Delta h$

La energia potenziale elastica è quella accumulata nel cambio della lunghezza di una molla:

<!Diagramma energia elastica>
Vedendo il diagramma della forze e lunghezza troviamo allora che la energia potenziale è: $V = \frac{1}{2}k\Delta l^{2}$

> [!note]- Spostamento Virtuale
>  Lo spostamento virtuale non è la velocità ma ha caratteristiche simili come la somma vettoriale, è lo spostamento infinitesimale.


Per questi tipi di sistemi vogliamo trovare punti di equilibrio della posizione del sistema.

Prendiamo:$\frac{ dV }{ dq }=0; q= \alpha; \frac{ dV }{ d\alpha } = 0$

$V = Mg\Delta h + \frac{1}{2}k\Delta l^{2}$

<!Diagramma calcoli>

$$\begin{gather}
l = OA = AB \\
\Delta h = -l\sin\alpha - 0 \\
\Delta l = OB = 2l\sin\alpha
\end{gather}$$

La parte più difficile di questi esercizi è connettere la variabili reali a quella indipendente.

Sostituendo:
$$V = -Mgl\sin\alpha+\frac{1}{2}k(2l\sin\alpha)^{2} = -Mgl\sin\alpha + \frac{1}{2}\cdot4\cdot kl^{2}\sin ^{2}\alpha = V(\alpha)$$

La velocità di cambio della energia potenziale è:
$$\frac{ dV }{ d\alpha }  = -Mgl\cos\alpha +4kl^{2}\sin\alpha \cos\alpha = 0 = (-Mgl+4kl^{2}\sin\alpha)\cos\alpha$$

#### Analisi punti di equilibrio

<!Diagramma posizioni di equilibrio>

Basato sui due lati di questa velocità, cioè se $Mgl$ è più grande di $4kl^{2}\sin\alpha$ o l'altro verso, determina quanti punti di equilibrio esistono per il sistema, è interamente possibile che non ci siamo punti di equilibrio per il sistema. In questo caso quanti valori di $\alpha$ sono punti di equilibrio dipende dalla dimensione di Mg.

## Stabilità

I punti di equilibrio possono esser stabili o instabili.

#### Stabile

<!Diagramma stabile>
Un sistema stabile è un sistema dove applicando un perturbazione il sistema rimane dei pressi della posizione di equilibrio, quindi il sistema è detto che resiste le perturbazioni.
#### Instabile
<!Diagramma instabile>

Un sistema instabile invece è un sistema che con un perturbazione tende ad una nuova posizione, tale è vero anche con perturbazioni infinitesimali.

## Esempio

<!Diagramma esempio e calcoli>

Questo si può analizzare a diversi valori di k e $\alpha$, troviamo che se un sistema può trovare un stato di energia alla stessa $\alpha$ seguirà la linea con meno energia, poi aumentando o diminuendo $\alpha$ si trovano punti di contatto e tali punti li definiamo come punti di equilibrio.

<!Diagramma linee e frecce>

Il modo più facile per stabilire se un punto di equilibrio è stabile o no è usando la accelerazione della energia potenziale rispetto a q nel punto, se tale accelerazione è positiva il punto è di equilibrio stabile, invece se la accelerazione è negativa allora il punto sarà di equilibrio instabile.
<!Diagramma accelerazione per stabilità>

Per quest'ultimo esempio:

$$\frac{ d^{2}V }{ d\alpha^{2} }  = -2P\cos\alpha + 4k_{\theta}$$

Abbiamo determinato che $\alpha = 0$ è punto di equilibrio quindi se la accelerazione al punto è positiva allora è stabile:

$$I) \frac{ d^{2}V }{ d\alpha^{2} }\mid_{\alpha=0} = -2Pl+4k_{\theta}>0$$
Quindi solo se $4k_{\theta}>2Pl$ allora il punto è di equilibrio stabile.

