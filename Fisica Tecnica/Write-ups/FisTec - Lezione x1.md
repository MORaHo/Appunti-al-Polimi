---
creation_date: 2023-10-19 19:05
tags:
  - fistec 
share: true
---
# Lezione 11 - Sistemi Aperti

## Sistemi Aperti

Molti dispositivi termici posser esser modellati con sistemi aperti.

Oltre l'equilibrio di energia, dobbiamo fare anche un equilibrio della massa.

Come viene schematizzato un sistema aperto:

![](Pasted%20image%2020231022222938.png)

Consideriamo pareti rigide, perché consideriamo sistemi meccanici.

### Notazione

$\dot{m}$ = portata massica $\to \left[ \frac{kg}{s} \right] = \frac{dm}{dt}$
$\dot{Q}$ = potenza termica
$\dot{L_{\tiny{E}}}\to$ potenza meccanica d'elica

Consideriamo regime stazionario quindi per qualsiasi X grandezza termodinamica(che include S) abbiamo che $\frac{dX}{dt}=0X$

Prendiamo la stessa convezione del calore e il lavoro per le potenza:
![](Pasted%20image%2020231022223013.png)

### Bilancio di Massa

Per ogni sistema aperto abbiamo che:

$\frac{dM_{\tiny{VC}}}{dt}=0 \to M_{\tiny{VC}}=\cos t$

VC -> volume di controllo

Se si cambiano le portate, si cambia la massa che fluisce ma non la massa totale del sistema:

$\dot{m_{1}}=\dot{m_{2}}=\dot{m}$

se $\overline{w} \leftarrow$ velocità media sulla sezione

$\underbrace{ \dot{m_{1}} }_{ \rho_{1}\cdot \overline{w_{1}}\cdot A_{1} }=\underbrace{ \dot{m_{2}} }_{ \rho_{2}\cdot \overline{w_{2}}\cdot A_{2} }=\dot{m}$

#### Casi Particolari

##### Caso 1

Se il fluido è incomprimibile $\to \rho$ = cost

Se il liquido (o gas e vapore $\overline{w} \ll w_{\tiny{SOUND}}$) e $\Delta P$ e $\Delta T$ limitate

Allora: $\rho_{1} = \rho_{2} \implies \overline{w_{1}}A_{1}=\overline{w_{2}}A_{2}$

$\overline{w_{2}}=\overline{w_{1}}\cdot \frac{A_{1}}{A_{2}}$

Allora ci sono due casi per la velocità dipendendo da $A_{1}$ e $A_{2}$:

![](Pasted%20image%2020231022223037.png)

La velocità agisce in modo opposto da $d\overline{w}$, se $d\overline{w}$ > 0 allora dP < 0 invece se $d\overline{w}$ < 0 allora dP > 0. Questo è perché vogliamo la densità stia costante.
##### Caso 2

Se il fluido è comprimibile e $A_{1} = A_{2} = A$

$\implies \rho_{1}\overline{w_{1}} = \rho_{2}\overline{w_{2}} \to \overline{w_{2}} = \overline{w_{1}}\cdot \frac{\rho_{1}}{\rho_{2}}$

### Bilancio di Energia

$$\frac{dE_{\tiny{TOT}}}{dt} = 0 \implies  \dot{E_{1}}=\dot{E_{2}}$$

$$\frac{dE_{\tiny{TOT}}}{dt} = \dot{E_{\tiny{TOT}}} = \dot{E_{\tiny{M}}}+\dot{E_{\tiny{Q}}}+\dot{E_{\tiny{L}}}$$

Gli elementi sono:

$\dot{E_{\tiny{M}}}$ : Cambio di energia meccanica (energia interna+$E_{\tiny{P}}+E_{\tiny{C}}$)

- $\dot{E_{\tiny{M1}}} = \dot{m}\left( u^{*}+gz+\frac{1}{2}\overline{w}^{2} \right)_1$
- $\dot{E_{\tiny{M2}}} = \dot{m}\left( u^{*}+gz+\frac{1}{2}\overline{w}^{2} \right)_2$

$\dot{E_{\tiny{Q}}}= \dot{Q} \:\:[W]$

$\dot{E_{\tiny{L}}}=\underbrace{ \dot{E_{\tiny{LE}}} }_{ \substack{\text{Lavoro}\\\text{d'elica}} }+\underbrace{ \dot{E_{\tiny{LP}}} }_{ \substack{\text{Lavoro}\\\text{di}\\\text{Pulsione}} }$

Il lavoro di pulsione è il lavoro per mettere la massa nel volume di controllo e tirare fuori la massa dal volume di controllo.

#### $\dot{E}_{\tiny{LP}}$

![](Pasted%20image%2020231022214423.png)

Manteniamo la pressione finche $V_{\tiny{M}}=0$

Allora: 
$$\boxed{ L_{\tiny{P1}} } = -\int _{\tiny{V-V_{\tiny{M}}}}^{V}P \, dV = -P[V-(V+V_{\tiny{M}})]=\boxed{ PV_{\tiny{M}} }$$
Mettiamo il negativo perché il lavoro di pulsione è positivo entrante, e stiamo usando la equazione per il lavoro meccanica che è positivo uscente.

$$\dot{E_{\tiny{LP}}}=\dot{L_{\tiny{P}}}=\dot{m}Pv^{*}$$
$$\dot{m}\left( u^{*}+gz+\frac{1}{2}\overline{w}^{2}  \right)_{1}+\dot{m}P_{1}v_{\tiny{1}}^{*} +\dot{Q}-\dot{L_{\tiny{E}}} = \dot{m}\left( u^{*} +gz + \frac{1}{2}\overline{w}^{2}  \right)_{2}+\dot{m}P_{2}v_{2}^{*} \:\: [W]$$

$$\dot{m}\left( u^{*} +Pv^{*} +gz+\frac{1}{2}\overline{w}^{2}  \right)_{1}+\dot{Q}-\dot{L_{\tiny{E}}}=\dot{m}\left( u^{*} +Pv^{*} gz+\frac{1}{2}\overline{w}^{2}  \right)_{2}$$

Sappiamo che $u^{*} + Pv^{*} = h^{*}$, quindi:

$$\dot{m}\left( h^{*} +gz+\frac{1}{2}\overline{w}^{2}  \right)_{1}+\underbrace{ \dot{Q}-\dot{L_{\tiny{E}}} }_{ netti } = \dot{m}\left( h^{*} +gz+\frac{1}{2}\overline{w}^{2}  \right)_{2}\:\: [W]$$

Alta $h^{*}$ significa alta P e alta $v^{*}$
Invece bassa $h^{*}$ significa bassa P e bassa $v^{*}$

Patrimonio energetico:

- per sistema chiuso: U
- per sistema aperto: $h^{*}$

$$h_{1}^{*} +gz_{1}+\frac{1}{2}\overline{w_{1}^{2}}+\frac{\dot{Q}}{\dot{m}}-\frac{\dot{L_{\tiny{E}}}}{\dot{m}}=h_{2}^{*} +gz_{2}+\frac{1}{2}\overline{w_{2}^{2}} \:\: \left[ \frac{J}{kg} \right]  $$
### Bilancio Entropico

Sappiamo fare il bilancio entropico soolo per sistema isolati

$$\Delta S_{\tiny{TOT}}=\sum_{\tiny{i}}\Delta S_{\tiny{i}}=S_{\tiny{IRR}}\geq 0$$
Per sistema composto da i sottosistemi ed isolato.

Esiste $\Delta S_{\tiny{\text{gen}}}\implies$ogni sistema reale è irreversibile.

Se vogliamo isolare il nostro sistema dobbiamo isolarlo dagli effetti degli scambi di massa, cioè scambio energetici. Aggiungiamo sottosistemi per isolarlo.

![](Pasted%20image%2020231022223106.png)

Ora abbiamo un sistema composto da volume di controllo e 2 serbatoi di massa, non entra più massa dall'ambiente solo dai serbatoi che hanno una massa totale fissa.

Aggiungiamo i serbatoi di temperatura per isolare il volume di controlli e controllando il calore.

Usiamo i serbatoi di lavoro ideali per isolare dall'lavoro  esterne, perché non scambiamo più lavoro con l'ambiente.

$$\begin{align}
\Delta  \dot{S}_{\tiny{TOT}} &= \underbrace{ \Delta  \dot{S}_{\tiny{\delta M1,2}} }_{ \substack{\text{Serbatoi}\\\text{di massa}\\\text{1 e 2}} } + \Delta  \dot{S}_{\tiny{V.C.}}+\sum_{\tiny{i=1}}^{n}\Delta  \dot{S}_{\tiny{Q_{\tiny{i}}}} + \sum_{\tiny{j=1}}^{m} \cancelto{ \substack{0 \text{perché}\\\text{ideali}} }{ \Delta  \dot{S}_{\tiny{LEj}} } = \dot{S}_{\tiny{IRR}} \geq 0 \\ \\
&= \underbrace{ -\dot{m}s_{1}^{*}  }_{ \substack{\text{Serbatoio}\\\text{di massa 1}} } + \underbrace{ \dot{m} s_{2}^{*}  }_{ \substack{\text{Serbatoio}\\\text{di massa 2}} } + \underbrace{ 0 }_{ \substack{\text{perché}\\\text{regime}\\\text{stazionario}} } - \underbrace{ \sum_{i-1}^{n} \frac{\dot{Q}_{\tiny{i}}}{T_{\tiny{i}}} }_{ \substack{\text{(-) perché}\\\text{entropia}\\\text{di ogni}\\\text{serbatoio}\\\text{di calore}} } = S_{\tiny{IRR}} \geq 0 
\end{align}$$

^189f18
Se il sistema è adiabatico:

$\dot{Q}_{i} = 0 \implies  \dot{m}(s_{2}^{*}-s_{1}^{*}) = \dot{S}_{\tiny{IRR}} \geq 0 \implies \boxed{ s_{2}^{*} \geq s_{1}^{*} }$

## Macchine Idrauliche: Turbine e Pompe

![](Pasted%20image%2020231022223130.png)

### Bilancio Energetico

$$\cancel{ h_{1}^{*}  } + gz_{1} + \frac{1}{2}\overline{w_1^{2}} + \frac{\cancelto{ 0 }{ \dot{Q} }}{\dot{m}} - \frac{\dot{L_{\tiny{E}}}}{\dot{m}} = \cancel{ h_{2}^{*} } + gz_{2} +\frac{1}{2}\overline{w_{2}^{2}}  $$
$\dot{Q}$ con l'ambiente è trascurabile ed è lo stesso
$$dh^{*} = \cancelto{ 0 }{ du } + \underbrace{ \cancelto{ \approx0 }{ Pdv } }_{ \substack{\text{L'acqua è}\\\text{Incomprimibile}} } + \cancelto{ \approx 0 }{ vdP } = 0 \implies h_{1}^{*}  = h_{2}^{*} $$
$du$ viene cancellato perché la derivazione di u = u(s,v)

$\cancelto{ 0 }{ du } = \dots \underbrace{ \cancelto{ 0 }{ dv } }_{ Incomprimibile } + \dots \underbrace{ \cancelto{ 0 }{ ds } }_{ Adiabatico }$

ds = 0 perché Q = 0 $\implies S^{F} = 0$ e fluido ideale $S_{\tiny{IRR}} = 0$

$\dot{L}_{\tiny{T}} = \dot{m}g(z_{1}-z_{2})$

Di nota $\underbrace{ L_{\tiny{P}} }_{ pompe } = -mg(z_{1}-z_{2})$

--
### Tipi di Macchine Termodinamiche 
Ci sono diversi tipi di macchine termiche, la turbine a gas e vapore e compressione. Quelle a gas e compressione sono usate nella aeronautica e quelle a vapore sono usate nelle centrali termoelettriche.

### $\Delta e^{*}_{\tiny{p}}$
Se prendiamo un gas come l'aria standard

$c_{\tiny{p}}^{*} \simeq 1 \frac{kj}{kg}$ con $\Delta T = 10^oC$

$\rightarrow \boxed{ \Delta h^{*} = c^{*}_{\tiny{p}}\Delta T } = 1\cdot 10 = 10 \frac{kJ}{kg} = 10000 \frac{J}{kg}$

$\Delta e_{\tiny{p}}^{*} = g\Delta z = \Delta h^{*} = 10000 \frac{J}{kg} \rightarrow \Delta z ? \rightarrow \Delta z = \frac{\Delta e_{\tiny{p}}^{*}(=\Delta h^{*})}{g}$

$\Delta z = 1000m$, questa differenza tra $\Delta e_{\tiny{p}}^{*}$ e $\Delta h^{*}$ è abbastanza che $\Delta e_{\tiny{p}}^{*}$ è trascurabile.

Per avere una differenza di energia usuale all'entalpia di un cambio di 10 gradi, servono 1000m. Quando molti processi cambiano T di centinaia di gradi, significa che ci vorrebbero più kilometri che possibile per esser significativo, quindi lo trascuriamo.

### $\overline{w}$

$\Delta e^{*}_{\tiny{p}} = \frac{1}{2}\overline{w_{2}^{2}} - \frac{1}{2}\overline{w_{1}^{2}} = \Delta h^{*} = 10000 \frac{J}{kg} \rightarrow \Delta w ?$

Poniamo $w_{1} \simeq 0 \frac{m}{s}$ allora $w_{2} = \sqrt{ 2^{*}10000 } = 140 \frac{m}{s} = \frac{500km}{h}$

Questa velocità è troppo per la maggior parte dei sistemi dinamici.

Anche $\Delta e^{*}_{\tiny{p}}$ può esser trascurata rispetto all'entalpia

### Bilancio Energetico con Trascurazioni

$$\boxed{ \dot{m} h_{1}^{*} + \dot{Q} - \dot{L}_{\tiny{E}} = \dot{m}h_{2}^{*} }$$

Se dispositivo è adiabatico allora:
$$\dot{m}h_{1}^{*}  - \dot{L}_{\tiny{E}} = \dot{m}h_{2}^{*} \implies  \boxed{ \dot{L_{\tiny{E}}} = \dot{m}(h_{1}^{*} -h_{2}^{*} ) }$$

Il bilancio entropico riporta $\boxed{s_{2}^{*}\geq s_{1}^{*}}$

### Turbine a gas o vapore

Nelle turbine a gas o vapore, conosco:

![](Pasted%20image%2020231022223146.png)

Conosciamo:
$T_{1},P_{1}$ e $P_{2}$
Sappiamo che:
$\dot{L}_{\tiny{T}}=\dot{m}(\underbrace{ h_{1}^{*}-h_{2}^{*} }_{ \substack{\text{Molto importante}\\\text{deve esser massimzzato}\\\text{per massimizzare }\dot{L}_{\tiny{T}}} })$

2$_{is} \to$ stato 2 isoentropico $\to$ punto di max $L_{\tiny{T}}$

$2,2',2''$ trasformazione reali, vogliamo che vadino il più vicino possibile a 2$_{is}$

Stadiamo $h_{2}^{*}$ sulla isobara $P_{2}$ al variare della temperatura.

$$\left( \frac{ \partial h^{*}  }{ \partial s^{*}  }  \right)_{\tiny{P=P_{2}}} >0 $$
$$\begin{gather}
dh^{*} =Tds^{*} +v^{*} dP\\
\left( \frac{ \partial h^{*}  }{ \partial s^{*}  }  \right)_{\tiny{P}} = T\cancelto{ 1 }{ \left( \frac{ \partial s^{*}  }{ \partial s^{*}  }  \right) } + v^{*}  \left( \frac{ \cancelto{ 0 }{ \partial P } }{ \partial s }  \right)_{\tiny{P}} = T > 0\\
\implies h_{2}^{*} \text{ aumenta all'aumentare di }s^{*}  \to \dot{L}_{\tiny{T}} = \dot{m}(h_{1}^{*} -h_{2}^{*} )\text{ Diminuisce}
\end{gather}$$

#### Rendimento Isoentropico

$$\eta_{is} = \frac{\dot{L}_{\tiny{T}}}{\dot{L_{\tiny{Tis}}}} = \frac{\text{reali}}{\text{isoentropico}} = \frac{\dot{m}(h_{1}^{*} -h_{2}^{*} )}{\dot{m}(h_{1}^{*} -h^{*} _{\tiny{2is}})} \leq 1$$

per le turbina gas (non vapore, perché per quelli servono le tabelle) se gas ideale

$\boxed{ \Delta h^{*} = c_{\tiny{P}}^{*}\Delta T }$
Quest'ultima equazione viene dalla lezione 7 o 8 in una forma diversa: $\Delta H = mc_{\tiny{p}}^{*}\Delta T$
Dividendo per la massa abbiamo troviamo: $\Delta h^{*} = c^{*}_{\tiny{p}}\Delta T$

$\eta_{\tiny{IS}} = \frac{T_{1}-T_{2}}{T_{1}-T_{2is}}$

### Compressori

![](Pasted%20image%2020231022223211.png)

Conosciamo $T_{1},P_{1},P_{2}$

$\dot{L_c} = \dot{m}(h_{1}^{*}-h_{2}^{*}) <0$

$s_{2}^{*}\geq s_{1}^{*}$

$h_{2}^{*}$ continua ad aumentare per l'aumento di $s^{*}$, quindi serve sempre più lavoro.

$\left( \frac{ \partial h^{*} }{ \partial s } \right)_{\tiny{P}} = T>0$ all'uamentare di $s_{2}^{*}$ (irreversibiltà) $h_{2}^{*}$ aumenta.

$|\dot{L}_{\tiny{C}} = |-\dot{m}(h_{1}^{*}-h_{2}^{*})|$ aumenta

Più irreversibile più aumenta T.

Il rendimento irreversibile è:
$\eta_{is} = \frac{\dot{L}_{Cis}}{\dot{L}_{\tiny{C}}} = \frac{\cancel{ \dot{m} }(h_{1}^{*}-h_{2}^{*})}{\cancel{ \dot{m} }(h_{1}^{*}-h_{2}^{*})}\leq 1$

dove $\dot{L}_{\tiny{C}}$ è il lavoro di compressione reale.

### Laminazione Isoentalpica

![](Pasted%20image%2020231022223247.png)

Il sistema ha pareti adiabatiche.

Il bilancio di energia ci da:

$$h_{1}^{*} +\frac{1}{2}\overline{w_{1}^{2}} + gz_{1} + \frac{\dot{Q}}{\dot{m}}-\frac{\dot{L}}{\dot{m}} = h_{2}^{*} +gz_{2}+\frac{1}{2}\overline{w_{2}^{2}}$$

Tra 1 e 2 non ci sono stati di equilibrio quindi con 1 e 2 abbastanza lontani dall'restringimento possiamo prendere stati di equilibrio e fare l'equilibrio

Come segnalato nel nome troviamo che:
$h_{1}^{*}=h_{2}^{*}$ e $\boxed{s_{2}^{*}\geq s_{1}^{*}}$

$dh^{*} = Tds^{*} + v^{*}dP \to \Delta h_{12}^{*} = \int _{1}^{2}T \, ds^{*}+\int _{1}^{2}v^{*} \, dP = 0$

Questo significa che:

$\int _{1}^{2}\underbrace{ T }_{ >0 } \,\underbrace{  ds^{*}  }_{ \substack{>0\\\text{perché}\\s_{2}^{*}>s_{1}^{*}} }= -\int _{1}^{2}\underbrace{ v^{*} }_{ >0 } \, dP \implies dP <0$

Dato dP < 0 allora $P_{2}<P_{1}$

$\delta = \left( \frac{ \partial T }{ \partial P } \right)_{h} >0 \implies dT < 0$ perché dP < 0.

Passando per il laminatore la pressione e temperatura diminuiscono.

