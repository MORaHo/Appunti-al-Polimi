---
creation_date: 2023-10-10
tags:
  - fistec
parent: 
child: 
share: true
---
# Lezione 8 - Rapporti Termodinamici

## Ripasso - Trasformazione isoterma

![](Pasted%20image%2020231018223023.png)

$K_{T} = -\frac{1}{V}(\frac{ \partial V }{ \partial P })_{T}$  per gasi ideali $K_{T} = \frac{1}{P}$ 

$K_{T}$ - coefficiente di comprimibilita' isoterma

$\frac{\alpha_{P}}{K_{T}} = \left( \frac{ \partial P }{ \partial T } \right)_{V} = (\frac{ \partial S }{ \partial V })_{T}$

$v \cdot \alpha_{P} = - \left( \frac{ \partial s }{ \partial P } \right)_{T}$

Tutte le variabile in minuscolo sono in forma molare.

---
Cambio $dP$ e $dV$ in una trasformazione isoterma

$T = T(P,V)U$ allora $dT = \underbrace{ \left( \frac{ \partial T }{ \partial P } \right)_{V} }_{ \frac{K_{T}}{\alpha_{P}}dP \:dP}+ \underbrace{ \frac{v}{v}\left( \frac{ \partial T }{ \partial V } \right)_{P} \:dP }_{ \frac{dP}{v \alpha_{P}} }$ = 0

$\frac{K_{T}}{\alpha_{P}}dP + \frac{1}{v\alpha_{P}}dv = 0$

$dP = -\frac{\cancel{ \alpha_{P} }}{K_{T}} \cdot \frac{1}{v\cancel{ \alpha_{P} }}dv = -\frac{1}{K_{T}} \cdot \frac{dv}{v}$

$\int _{1}^2 dP = P_{2} - P_{1} = - \int _{1}^2 \frac{1}{K_{T}} \frac{dv}{v}$

$dP = -\frac{1}{K_{T}} \cdot \frac{dv}{v}$ per gas ideali $\rightarrow K_{T} = \frac{1}{P}$ 

$\frac{dP}{P} + \frac{dv}{v} = 0$

$\boxed{Pv = cost} \rightarrow$ Legge di Boyle / Legge dell'isoterma dei gas ideali.

![](Pasted%20image%2020231018223056.png)

Lungo queste linee la temperature e' uguale e la linea cambia per T che aumenta.

Sfruttiamo il fatto che e' isotermo per trovare U in funzioni di T e P cosi $\partial T = 0$

$u= u(P,T)$

$$du = \left( \frac{ \partial u }{ \partial P }  \right)_{T}\cdot dP + \left( \frac{ \partial u }{ \partial T }  \right)_{P} \cdot \cancelto{ 0 }{ dT } = \left( \frac{ \partial u }{ \partial P }  \right)_{T} \cdot dP$$
Sappiamo che:

$du = \underbrace{ TdS }_{ \delta Q } - \underbrace{ PdV }_{ \delta L }$

$\left( \frac{ \partial u }{ \partial P } \right)_{T} = T \cdot \left( \frac{ \partial s }{ \partial P } \right)_{T}- P\cdot \underbrace{ \underbrace{ \left( \frac{ \partial v }{ \partial P } \right)_{T} }_{ \text{4 Maxwell} } }_{ v \cdot K_{T} } = - T \underbrace{ \left( \frac{ \partial v }{ \partial T } \right)_{P} }_{ v\cdot\alpha_{P} } + PvK_{T} =$
= $-T v \cdot \alpha_{P} + PvK_{T} = v(PK_{T} - T\alpha_{P}) =$

$du = v(PK_{T} - K\alpha_{P})\cdot dP$

Lasciando per un attimo la energia interna, cerchiamo $ds$

$s = s(P,T) \rightarrow ds = \left( \frac{ \partial s }{ \partial P } \right)_{T}dP + \left( \frac{ \partial s }{ \partial T } \right)_{P}\cdot \cancelto{ 0 }{ dT }$

$ds = \underbrace{ \left( \frac{ \partial s }{ \partial P } \right)_{T} \cdot dP }_{ \text{4 Maxwell} } = - \left( \frac{ \partial v }{ \partial T } \right)_{P} \cdot dP$

$= - v \alpha_{P}\cdot dP$

### Gas Ideali

Prendendo in considerazione i gas ideali

$du = v(PK_{T} - K\alpha_{P})\cdot dP$
$ds = -v\alpha_{P}\cdot dP$

per i gas ideali $\alpha_{p} = \frac{1}{T}$ e $K_{T} = \frac{1}{P}$

$du = v\left( P \cdot \frac{1}{P} - T \cdot \frac{1}{T} \right)dP = 0$ 
Per i gas ideali in trasformazione isoterma $\implies u =u(T)$

$ds = -\frac{v}{T}dP$ dato che $Pv = RT \rightarrow \frac{v}{T} = \frac{R}{P}$

Allora $ds = - R \cdot \frac{dP}{P}$

In trasformazione isoterma

$\Delta s_{12} = -R\ln \frac{P_{2}}{P_{1}}$
$\Delta S_{12} = -MR^*\ln \frac{P_{2}}{P_{1}}$
Dato che $\underbrace{ P_{1}V_{1}=P_{2}V_{2} }_{ \text{isoterma} \implies cost} \implies \frac{P_{2}}{P_{1}} = \frac{V_{1}}{V_{2}}$

## Trasformazione adiabatica per gas qualsiasi in trasformazione quasi-statica

![](Pasted%20image%2020231018223133.png)

Una trasformazione adiabatica quasi-statica $\rightarrow \delta Q=TdS = 0 \implies \boxed{ S = cost }$

$s= s(P,v) \rightarrow ds = \left( \frac{ \partial s }{ \partial P } \right)_{v} \cdot dP + (\frac{ \partial s }{ \partial v })_{P} \cdot dv = 0$

Usiamo s perche' $ds = 0$ quindi riusciamo a trovare la relazione tra P e $v$.

Prima di Maxwell: $\left( \frac{ \partial P }{ \partial s } \right)_{V} = -\left( \frac{ \partial T }{ \partial v } \right)_{S}$
Terza di Maxwell: $\left( \frac{ \partial T }{ \partial P } \right)_{S} = (\frac{ \partial v }{ \partial S })_{P}$

$\implies -\left( \frac{ \partial v }{ \partial T } \right)_{S}\cdot dP + (\frac{ \partial P }{ \partial T })_{S} \cdot dv = 0$

Prendendo $-\left( \frac{ \partial V }{ \partial T } \right)_{S}$ :

$$-\left( \frac{ \partial v }{ \partial T }  \right)_{S} \stackrel{JACOB}{=} - \frac{ \partial (v,S) }{ \partial (T,S) } \cdot \frac{ \partial (v,T) }{ \partial (v,T) } = - \frac{ \partial (v,S) }{ \partial (v,T) } \cdot \frac{ \partial (v,T) }{ \partial (T,S) } =$$
$= \frac{ \partial (S,v) }{ \partial (T,v) }\cdot \frac{ \partial (v,T) }{ \partial (S,T) }= \underbrace{ \frac{T}{T}\left( \frac{ \partial S }{ \partial T } \right)_{V} }_{ \frac{c_{v}}{T} }\cdot \underbrace{ \left( \frac{ \partial v }{ \partial S } \right)_{T} }_{ \frac{K_{T}}{\alpha_{P}} } = \frac{c_{v}\cdot K_{T}}{T \cdot \alpha_{P}}$

Prendendo ora $\left( \frac{ \partial s }{ \partial v } \right)_{P}$ :

$$\left( \frac{ \partial s }{ \partial v } \right)_{P} = \frac{ \partial (S,P) }{ \partial (v,P) } \cdot \frac{ \partial (T,P) }{ \partial (T,P) }= \frac{ \partial (S,P) }{ \partial (T,P) } \cdot \frac{ \partial (T,P) }{ \partial (v,P) }=$$

$$ = \underbrace{ \left( \frac{ \partial S }{ \partial T }  \right)_{P} \cdot \frac{T}{T} }_{ \frac{c_{p}}{T} } \cdot \underbrace{ \left( \frac{ \partial T }{ \partial v }  \right)_{P} \cdot \frac{v}{v} }_{ \frac{1}{\alpha_{p} \cdot v} } = \frac{c_{p}}{T} \cdot \frac{1}{v\alpha_{p}}$$

$ds = -\left( \frac{ \partial v }{ \partial T } \right)_{S}  + \left( \frac{ \partial P }{ \partial T } \right)_{S} \cdot dv = \frac{c_{V}\cdot K_{T}}{T\cdot \cancel{ \alpha_{p} }}dP + \frac{c_{P}}{Tv \cdot \cancel{ \alpha_{p} }}dv = 0$
$\alpha_{p}$ e' cancellato perche' = 0 ed e' in tutti e due i termini quindi e' possibile cancellarlo.

$dP = -\frac{\cancel{ T }}{c_{v} \cdot K_{T}} \cdot \frac{c_{p}.}{\cancel{ T } \cdot v}dv = - \frac{c_{p}}{c_{v}}\cdot \frac{1}{K_{T}} \frac{dv}{v}$

Per i gas ideali: $\rightarrow \frac{c_{p}}{c_v} = k = \gamma$

- gas monoatomico  = 5/3 = $1,\bar{66}$
- gas biatomico = 7/5 = 1,4
- poliatomico non allineati = 4/3 = $1,\bar{3}$

$\frac{1}{K_{T}} = P \rightarrow dP = -\gamma\frac{ Pdv}{v}$

$\frac{dP}{P} + \gamma\frac{ dv}{v} = 0 \implies \boxed{Pv^\gamma = cost}$

![](Pasted%20image%2020231018223226.png)

## Isoenergetico

![](Pasted%20image%2020231018223249.png)

$dU = \delta Q - \delta L = TdS - Pdv = 0$

$dU = 0 \implies \delta Q = \delta L \rightarrow TdS = Pdv$
 
$T = T(u,v) \rightarrow$ perche' uno dei due $\rightarrow 0$

$dT = \left( \frac{ \partial T }{ \partial u } \right)_{v} \cancelto{ 0 }{ du } + (\frac{ \partial T }{ \partial v })_{u} dv$
$dt = (\frac{ \partial T }{ \partial v })_{u}dv$

$$\left( \frac{ \partial T }{ \partial v } \right)_{u} = \frac{ \partial (T,u) }{ \partial (v,u) }\cdot \frac{ \partial (v,T) }{ \partial (v,T) } = -\frac{ \partial (u,T) }{ \partial (v,T) }\cdot \frac{ \partial (T,v) }{ \partial (u,v) }= - \left( \frac{ \partial u }{ \partial v } \right)_{T} \cdot \left( \frac{ \partial T }{ \partial u } \right)_{v} = \frac{\left( \frac{ \partial u }{ \partial v } \right)_{T}}{\left( \frac{ \partial u }{ \partial T } \right)_{v}}$$

Sappiamo che $du = TdS - Pdv$, sostituiamo $\partial u$ con questo.

$$= -\frac{\stackrel{\frac{\alpha_{p}}{K_{T}}}{T\left( \frac{ \partial S }{ \partial v }  \right)_{T}} - P\cancelto{ 1 }{ \left( \frac{ \partial v }{ \partial v }  \right) }_{T}}{\underbrace{ T\left( \frac{ \partial S }{ \partial T }  \right)_{v} }_{ c_{v} }-P\cancelto{ 0 }{ \left( \frac{ \partial v }{ \partial T }  \right) }_{v}}  = P-\frac{T\left( \frac{ \partial S }{ \partial v }  \right)_{T}}{c_{v}}=\frac{P-T \frac{\alpha_{p}}{K_{T}}}{c_{v}}$$
$dT = (\frac{ \partial T }{ \partial v })_{u}dv = \frac{P-T \frac{\alpha_{p}}{K_{T}}}{c_{v}}dv$

Per i gas ideali:

$u = u(T) \implies$ dato isoenergetico $dT = 0$
$T= T(u)$
$h=h(T)$

Gas ideali $\implies \alpha_{p} = \frac{1}{T}$ e $K_{T} = \frac{1}{P}$
$\implies dT = \frac{\cancel{ P-T \cdot \frac{P}{T} }}{c_{v}}dv = 0$

Questo significa che l'espansione libera di un gas ideale $\implies dT = 0$

## Processo Isoentropico (H = cost) e Coefficiente di Joule-Thompson

Il coefficiente che troveremo ora e' per un sistema chiuso.

![](Pasted%20image%2020231018223329.png)

Coefficiente di Joule-Thompson $\delta = \left( \frac{ \partial t }{ \partial P } \right)_{H} = (\frac{\Delta T}{\Delta P})_{H}$

Dal diagramma:

$L_{1}= \int ^0_{V_{1}} P_{1}dV = -P_{1}V_{1}$
Lavoro per spostare 1 singolo mole di gas da sinistra a destra.

$L_{2} = \int _{0}^{V_{2}} P_{2}dV = P_{2} V_{2}$

$L_{TOT} = L_{1} + L_{2} = -P_{1}V_{1} + P_{2}V_{2}$

$\Delta U_{TOT} = U_{2} - U_{1} = \cancelto{ 0 }{ Q_{12} } - \underbrace{ L_{12} }_{ L_{TOT} } \implies U_{2}-U_{1} = -(P_{1}V_{1}+P_{2}V_{2})$
$\underbrace{ U_{2} + P_{2}V_{2} }_{ H_{2} }= \underbrace{ U_{1}+ P_{1}V_{1} }_{ H_{1} } \implies H_{1}=H_{2}$

![](Pasted%20image%2020231018223346.png)

Se si prendono due punti abbastanza lontani $H_{1} = H_{2}$

$\delta = (\frac{\Delta T}{\Delta P})_{H} \lesseqgtr 0$

$\delta$ e' importante nella refrigazione.

- se $\delta > 0$ e $\underbrace{ dP < 0 }_{ \text{espansione} } \implies dT < 0$ raffreddamento
- se $\delta = 0 \: \forall dP \implies dT = 0$ (gas ideali)
- se $\delta < 0$ e $dP < 0 \implies dT > 0$ Riscaldamento
### Ricavare $\delta$

$$\delta = \left( \frac{ \partial T }{ \partial P } \right)_{h} \stackrel{JACOB}{=} \frac{ \partial (T,h) }{ \partial (P,h) }\cdot \frac{ \partial (T,P) }{ \partial (T,P) } = \frac{ \partial (T,h) }{ \partial (T,P) } \cdot \frac{ \partial (T,P) }{ \partial (P,h) } = - \frac{ \partial (h,T) }{ \partial (P,T) } \cdot \frac{ \partial (T,P) }{ \partial (h,P) } =$$
$$= -\left( \frac{ \partial h }{ \partial P }  \right)_{T}\cdot \left( \frac{ \partial T }{ \partial h }  \right)_{P} = -\frac{\left( \frac{ \partial h }{ \partial P }  \right)_{T}}{\left( \frac{ \partial h }{ \partial T }  \right)_{P}}$$
Sappiamo che $dh = TdS + vdP$ e come prima sostituiamo

$$\delta = - \frac{ \stackrel{\text{4 Maxwell}}{T\left( \frac{ \partial S }{ \partial P } \right)_{T}} + V\cancelto{ 1 }{ \left( \frac{ \partial P }{ \partial P } \right) }_{T}}{\underbrace{ T\left( \frac{ \partial S }{ \partial T } \right)_{p} }_{ c_{p} } + v\cancelto{ 0 }{ \left( \frac{ \partial P }{ \partial T } \right) }_{P}} = - \frac{\cancelto{ v \cdot \alpha_{p} }{ T\left( \frac{ \partial v }{ \partial T }  \right)_{P} }+v}{c_{p}}$$

$\delta = \frac{Tv \cdot \alpha_{p}-v}{c_{p}}$

Troviamo che $\delta$ e' dipendente da T e P come:

$\delta(T,P),c_{v}(T,P),c_{p}(T,P),\alpha_{p}(T,P),K_{T}(T,P)$

Tutti dipendenti di T e P

#### Per i gas ideali

$\alpha_{p} = \frac{1}{T} \implies S=\frac{\left( T \cdot \frac{1}{T} v- v \right)}{c_{p}}= 0 \implies H = H(T)$

$\delta = 0 $ se isoentropica e gas ideale, come detto prima.
se H = cost allora $dT =0$

![](Pasted%20image%2020231018223414.png)

Ogni fluido ha una curva, se si vuole usare come refrigerogeno si vuole stare a sinistra della curva.

## Trasformazioni Politropiche

Requisiti:

1. GAS IDEALE
2. QUASI-STATICA

$PV^n = cost$
$n$ indice della politropica

$n = \frac{c_{x}-c_{p}}{c_{x}-c_{v}}$
$c_{x} = \frac{1}{N}\left( \frac{\delta Q}{dT} \right)_{x}$
$x$ e' una qualsiasi variabile termodinamica
### Esempio trasformazioni

#### Isoterma (dT = 0)

$c_{x} = c_{T} \rightarrow \infty \implies n = 1$ e quindi PV = cost, uguale a come abbiamo visto prima.

$dU = Mc_{v}^*dT = 0$
$dU = \delta Q - \delta L = 0 \implies \delta Q = \delta L$
$dH = Mc^*_{p}dT = 0$

#### Isobara

P = cost e dP = 0

$c_{x} = c_{p} \rightarrow n = 0$ e quindi P = cost

#### Isocora

V = cost e dV = 0

$c_{x}= c_{v} \rightarrow n = \infty$

#### Adiabatica

S = cost

$n = \gamma$