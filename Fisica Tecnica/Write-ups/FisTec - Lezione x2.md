---
creation_date: 2023-10-24 17:39
tags:
  - fistec 
share: true
---
# Lezione 12 - Macchine Termodinamiche

Studiamo il moto stazionario dei fluidi in condotti adiabatici.

I condotti adiabatici che guarderemo sono gli ugelli e i diffusori.

- Ugelli: Entalpia (Pressione) $\to$ Energia Cinetica
- Diffusori: Energia Cinetica $\to$ Entalpia (Pressione)

![](Pasted%20image%2020231029112056.png)
## Analisi di Bilanci Turbojet e poi cambio di proprietà in diffusori e ugelli
### Bilancio di Massa

$$
\begin{align}
\rho \overline{w}A = cost \tag{1}\\
d\rho \overline{w}A + \rho d\overline{w}A + \rho \overline{w}dA = 0 \tag{2}
\end{align}
$$

Equazione di continuità locale:

$\frac{(2)}{(1)} \to \boxed{ \frac{d\rho}{\rho}+\frac{d\overline{w}}{\overline{w}}+\frac{dA}{A}= 0 } \:(*)$

### Bilancio di Energia

$\dot{m}\left( h^{*} + \frac{1}{2}\overline{w}^{2} +\cancel{ gz }\right)_{1} + \cancelto{ 0 \text{ adiabatico} }{ \dot{Q} }-\cancelto{ 0 }{ \dot{L} } = \dot{m}\left( h^{*}+\frac{1}{2}\overline{w}^{2} + \cancel{ gz } \right)_{2}$

Condotti statici non erogano or assorbono lavoro, gli effetti che hanno sui fluidi sono completamente a causa della loro forma.

$h^{*} = \frac{1}{2}\overline{w}^{2} = cost$ e $dh^{*} + \frac{1}{2}\cdot2\cdot \overline{w}\cdot d\overline{w} = 0$

$\boxed{ dh^{*}+\overline{w} \cdot d\overline{w} = 0 } = \underbrace{ dh^{*}=-w \cdot dw }_{ (3) }$
### Bilancio Entropico

$s_{2}^{*} = s_{1}^{*}+\cancelto{ 0 \text{ adiabatico e quasistatico} }{ s^{*}_{IRR} }$
$s_{2}^{*} =s_{1}^{*} \to \boxed{ ds^{*} = 0 }$

$dh^{*} = T\cancelto{ 0 }{ ds^{*} } + v^{*}dP = \underbrace{ v^{*}dP = \frac{dP}{\rho} }_{ (4) }$

Con (3) e (4): $\boxed{ \frac{dP}{\rho} = -\overline{w}d\cdot \overline{w} } \cdot \frac{1}{\overline{w}^{2}} \to \underbrace{ \frac{dP}{\overline{w}^{2}\rho} = - \frac{d\overline{w}}{\overline{w}} }_{ (5) }$

$\frac{d\overline{w}}{\overline{w}} = - \frac{1}{\overline{w}^{2}}\cdot \frac{dP}{\rho}+\frac{dA}{A}=0$
$\to \frac{dA}{A}=\frac{1}{\overline{w}^{2}}\cdot \frac{dP}{\rho}-\frac{d\rho}{\rho} = \frac{d\rho}{\rho}\left[ \frac{1}{\overline{w}^{2}}-\underbrace{ \frac{d\rho}{dP} }_{ (6) } \right] \:(7)$

$\frac{1}{(6)} = \left( \frac{dP}{\rho} \right)_{s} \to \left[ \frac{N}{m^{2}}\cdot \frac{m^{3}}{kg} \right]=\left[ kg \frac{m}{s^{2}}\cdot \frac{m}{kg} \right] = \left[ \frac{m^{2}}{s^{2}} \right] \to$ velocità del suono -> velocità con cui si propagano le piccole perturbazioni.

Quello sopra implica che: $\left( \frac{ dP }{ d\rho } \right)_{s} = c^{2}$ (velocità del suono)$^{2}$

(7) = $\frac{dA}{A} = \frac{dP}{\rho}\left[ \frac{1}{\overline{w}^{2}}-\frac{1}{c^{2}} \right]=\underbrace{ \frac{dP}{\overline{w}^{2}\rho} }_{ \text{(5)} }\left[ 1-\underbrace{ \frac{\overline{w}^{2}}{c^{2}} }_{ (8) } \right]$

Guardando (8) vediamo che M numero di Mach si calcola con $M = \frac{w}{c}$

- se M > 1 $\to$ moto supersonico
- se M < 1 $\to$ subsonico

$\frac{dA}{A} = \frac{dP}{\overline{w}^{2}\rho}[1-M^{2}]= -\frac{d\overline{w}}{\overline{w}}[1-M^{2}]$

### se M < 1 - Moto Subsonico

$dA \propto dP \propto - d\overline{w}$

se A aumenta $\to$ divergente $\to$ aumenta P e diminuisce $\overline{w}$
se A diminuisce $\to$ convergente $\to$ diminuisce P e aumenta $\overline{w}$

#### Diffusore

![](Pasted%20image%2020231029112112.png)

Sia A che P stanno aumentando.

#### Ugello

![](Pasted%20image%2020231029112126.png)

### se M > 1 - Moto Supersonico

$dA \propto -dP\propto d\overline{w}$

se A aumenta, P diminuisce e $\overline{w}$ aumenta
$\to$ divergente $\to$ ugello

se A diminuisce, P aumenta, e $\overline{w}$ diminuisce

#### Diagrammi diffusore e ugello per M<1 e M>1

![](Pasted%20image%2020231029112143.png)

## Fluidi Incomprimibili

$c = \sqrt{\left( \frac{ dP }{ d\rho } \right)_{s} }\to \infty$ per fluido incomprimibile

## Calcolo di c per aria come gas ideale

ARIA -> GAS IDEALE BIATOMICO con $M_{m} = 28,96 \frac{kg}{kmol}$

$ds^{*} = c_{v}^{*} \frac{dP}{P}+c_{p}^{*} \frac{dv^{*}}{v^{*}} = 0$
Dato: $\rho = \frac{1}{v^{*}}$ e $\gamma = \frac{c_{p}^{*}}{c_{v}^{*}}$ che $= 1,4$ per aria

$c_{v}^{*} \frac{dP}{P}=-c_{p}^{*} \frac{dv^{*}}{v^{*}} \to \frac{dP}{P} = -\gamma \cdot\rho \cdot d\rho^{-1}=\gamma \cdot\rho_{1}\cdot \frac{1}{\rho^{2}}d\rho$
$\to \frac{d\rho}{\rho} = \gamma  \frac{d\rho}{\rho} \to \boxed{ \frac{dP}{\rho}=\gamma  \frac{P}{\rho} }$

$c = \sqrt{ \left( \frac{ dP }{ d\rho } \right)_{s} } = \sqrt{ \gamma \cdot \frac{P}{\rho} }$

Con $\frac{P}{\rho}=R^{*}T$ allora $c = \sqrt{ \gamma \cdot R^{*}\cdot T }$

Questo significa che c è funzione di sole $\gamma$ e T.

Per aria a 25$^{o}$C = 298.15K

$c = \sqrt{ 1.4\cdot \frac{8314,5}{28,96}\cdot 298.15 } \simeq 346,18 \frac{m}{s}\cdot 3,6 = 1246 \frac{km}{h}$

<u>Abbiamo finito i sistemi aperti</u>

## Macchine Termodinamiche

Le macchine termodinamiche sono un modello per tutti i sistemi che convertono Q in L.

<u>Tipi di Macchine Termodinamiche</u>:

- Macchine Termodinamiche Motrici (MTM)
  Modello per rappresentare sistemi che convertono con continuità calore in lavoro (centrali termoelettriche, motori a combustione elettrica)
- Macchine Termodinamiche Opertrici (MTO)
	- Frigoriferi
	- Pompe di Calore
	Trasferimento di Calore da Serbatoio a bassa T verso serbatoio ad alta T

### MTM
![](Pasted%20image%2020231029112201.png)

#### Bilanci per (M)

$\Delta U_{M} = Q-L$

$\Delta U_{M} = Q_{M}-Q_{C}-W = 0 \to W=Q_{H}-Q_{C}$

$$\begin{align}
\Delta S_{TOT} &= \Delta S_{H}+\Delta S_{C}+\cancelto{ 0 }{ \Delta S_{M} } + \Delta S_{SL} = S_{IRR} \geq 0 \\
&= - \frac{Q_{H}}{T_{H}}+\frac{Q_{C}}{T_{C}}+0+0 = S_{IRR} \geq 0 \\
\end{align}$$

$-\frac{Q_{H}}{T_{H}}+\frac{Q_{C}}{T_{C}}= S_{IRR} \to Q_{C} = \underbrace{ \boxed{ Q_{H}\cdot \frac{T_{C}}{T_{H}} } }_{ Q_{CMIN} } + \underbrace{ \boxed{ T_{C}S_{IRR} } }_{ Q_{CAGGIUNGITVO} }$

$W = Q_{H} - Q_{C}= Q_{H}-Q_{H}\cdot \frac{T_{C}}{T_{H}}-T\cdot S_{IRR} = \underbrace{ \boxed{ Q_{H}\left( \underbrace{ 1-\frac{T_{C}}{T_{H}} }_{ \eta_{c} = \substack{\text{Rendimento}\\\text{di Carnot} }} \right) } }_{ W_{MAX} }-\underbrace{ T_{c}S_{IRR} }_{ W_{preso} }$


$W = W_{MAX}-W_{perso}= \eta_{\tiny{C}}\cdot Q_{H}-T_{C}\cdot S_{IRR}$

Se il processo è reversibile:

$S_{IRR} = 0 \implies W = W_{MAX} = Q_{H}\cdot \eta_{\tiny{C}} \to Q_{C} = Q_{CMIN} = Q_{H}\cdot \frac{T_{C}}{T_{H}}$

#### RIESCO A CONVERTIRE $Q_{H}$ INTERAMENTE IN W?

$\eta_{\tiny{C}}= 1- \frac{T_{C}}{T_{H}}= 1$

Questo è vero se è vera una delle due seguenti condizioni:

- $T_{c} \to 0$
- $T_{H} \to \infty$

$T_{H}$ è limitato dal processo di combustione e resistenza meccanica dei materiali, invece $T_{C}$ è limitato dalla natura del serbatoio freddo. Quindi sempre $\eta_{\tiny{C}} < 1$

#### Rendimento di Primo Principio

$$\eta_{\tiny{I}} = \frac{\text{Effetto Utile}}{\text{Spesa}} = \frac{W}{Q_{H}} = \frac{Q_{H}\left( 1-\frac{T_{C}}{T_{H}} \right)-T_{c}\cdot S_{IRR}}{Q_{H}}=$$
$$= \left( 1-\frac{T_{C}}{T_{H}} \right) -\frac{T_{C}\cdot S_{IRR}}{Q_{H}} = \eta_{\tiny{C}}-\frac{T_{c}\cdot S_{IRR}}{Q_{H}}$$

$$\eta_{\tiny{I}} = \eta_{\tiny{\text{MAX}}} \text{ quando } S_{IRR}=0$$
$$\eta_{\tiny{I}} < \eta_{\tiny{C}} = 1-\frac{T_{c}}{T_{H}} < 1$$
#### Rendimento di Secondo Principio

$$\eta_{\tiny{II}} = \frac{\eta_{\tiny{I} reale}}{\eta_{\tiny{I} ideale}} = \frac{\frac{W_{reale}}{Q_{H}}}{\frac{W_{ideale}}{Q_{H}}} = \frac{W_{re}}{W_{id}} \leq 1$$

= 1 se $\eta_{\tiny{I}}= \eta_{\tiny{C}}$ cioè se $S_{irr}= 0$

### MTO

![](Pasted%20image%2020231029112221.png)

Abbiamo cambiato la direzione delle frecce perché il calore lo mandiamo dalla parte fredda alla parte calda.

Per il frigorifero $Q_{C}$ è il calore utile perché vogliamo togliere il calore dallo spazio, invece per la pompa di calore, $Q_{H}$ é il calore utile perché vogliamo mettere il calore nello spazio caldo.

#### Bilanci

$\Delta U_{M} = Q_{C}-Q_{H}+W = 0 \to \underbrace{ W = Q_{H}-Q_{C} }_{ (9) }$
$$\begin{align}
\Delta S_{\tiny{TOT}} &= \Delta S_{H}+\Delta S_{C}+\cancelto{ 0 }{ \Delta S_{M} } + \cancelto{ 0 }{ \Delta S_{L} } = S_{IRR} \geq 0\\
&= \frac{Q_{H}}{T_{H}}-\frac{Q_{C}}{T_{C}} = S_{IRR} \geq 0 \to \underbrace{ \boxed{ Q_{C} = Q_{H} \cdot \frac{T_{C}}{T_{H}} - T_{C}\cdot S_{IRR} } }_{ (10) }
\end{align}$$
Con (9) e (10): $W = Q_{H}-Q_{H}\cdot \frac{T_{C}}{T_{H}}+T_{C}\cdot S_{IRR}$

$W = \underbrace{ \boxed{ Q_{H}\left( 1-\frac{T_{C}}{T_{H}} \right) } }_{ \substack{\text{W minimo se}\\\text{lavoro reversibile} }}+\underbrace{ \boxed{ T_{C}\cdot S_{IRR} } }_{ \substack{\text{W aggiuntivo}\\\text{dovto alla}\\\text{irreversibilità}} }$

$W = Q_{H}\cdot \eta_{\tiny{C}}+T_{C}\cdot S_{IRR} = W_{MIN}+W_{AGG}$

#### Efficienza Frigorifera di Primo Principio

$$
\begin{align}
\mathcal{E}_{FI} &= \frac{\text{Efficienza Utile}}{\text{Spesa}} = \frac{Q_{C}}{W}=\frac{\left( \left[ Q_{H}\cdot \frac{T_{C}}{T_{H}}-T_{C}\cdot S_{IRR} \right] \cdot \frac{T_{H}}{Q_{H}}\right)}{\left[ Q_{H}\left( 1-\frac{T_{C}}{T_{H}} \right)+T_{C}\cdot S_{IRR} \right]\cdot \frac{T_{H}}{Q_{H}}} \\ \\
&= \frac{T_{C} - \frac{T_{C}\cdot T_{H}\cdot S_{IRR}}{Q_{H}}}{T_{H}-T_{C}+\frac{T_{C}\cdot T_{H}\cdot S_{IRR}}{Q_{H}}}
\end{align}
$$

se $S_{IRR} = 0$ $\boxed{ \mathcal{E}_{FI} = \frac{T_{C}}{T_{H}-T_{C}} }$

Fisso $T_{H}$ a 300K, Temperatura Ambiente

se $T_{C}$ = 300 K $\to \mathcal{E}_{FI} \to \infty$
se $T_{C}$ = 260 K $\to \mathcal{E}_{FI} = \frac{26}{4}=6,5$
se $T_{C}$ = 100 K $\to \mathcal{E}_{FI} = \frac{1}{2} = 0,5$

Possiamo creare i grafico:

![](Pasted%20image%2020231029112244.png)

$\mathcal{E}_{FI} \to \infty$ per $T_{C} \to T_{H}$ per frigorifero ideale.

#### Efficienza per Pompa di Calore(PdC) di Primo Principio

$$\mathcal{E}_{PdC I} = \frac{Q_{H}}{W}= \frac{Q_{H}\cdot \frac{1}{Q_{H}}}{\left[ Q_{H}\left( 1-\frac{T_{C}}{T_{H}} \right)+T_{C}\cdot S_{IRR} \right]\cdot \frac{1}{Q_{H}}} = \frac{1}{\frac{T_{H}-T_{C}}{T_{H}}-\frac{T_{C}\cdot S_{IRR}}{Q_{H}}}$$

se $S_{IRR} = 0$

$\boxed{ \mathcal{E}_{PdC I} = \frac{T_{H}}{T_{H}-T_{C}} }$

se $T_{H} = T_{C} \to \mathcal{E}_{PdC I} \to \infty$

FISSO $T_{H} = 295K$ ($T_{AMB}$ da riscaldare)
se $T_{C}$ = 298K $\to \mathcal{E}_{PdC I} = \frac{295}{7} = 42,\dots$
se $T_{C}$ = 100K $\to \mathcal{E}_{PdC I} = \frac{295}{195} = 1,51$

##### Limite per Tc che scende

![](Pasted%20image%2020231029112301.png)

Per $T_{C}$ che tende a 0, la efficienza è limitata a 1 per la pompa di calore.
#### Efficienza di Secondo Principio
$$
\begin{gather}
\mathcal{E}_{F \:II} = \frac{\mathcal{E}_{I \:Re}}{\mathcal{E}_{I\: id}} = \frac{\frac{Q_{C}}{W}}{\frac{Q_{C}}{W_{id}}} = \frac{W_{id}}{W} \leq 1\\
\mathcal{E}_{PdC \:II} = \frac{\mathcal{E}_{I\: Re}}{\mathcal{E}_{I\: id}} = \frac{\frac{Q_{H}}{W}}{\frac{Q_{H}}{W_{id}}} = \frac{W_{id}}{W} \leq 1
\end{gather}
$$
