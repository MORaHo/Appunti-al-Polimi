---
creation_date: 2023-10-05 09:55
tags:
  - fistec
parent: 
child: 
share: true
---
# Lezione 7 - Relazioni e Coefficienti Misurabili

Se non esplicitamente scritto, il sistema sara' chiuso, semplificato e semplice

L'obbietivo di questa classe e' di misurare i coefficienti: c$_{v}$ e c$_{p}$ , per le relazioni fondamentali

$U = U(S,V,N_{i}) \rightarrow U = U(S,V)$ dato che il contorno e' chiuso.
$S = S(U,V,N_{i}) \rightarrow S = S(U,V)$

<!Diagramma grafici>
![](Pasted%20image%2020231007214906.png)
## $c_{v}$ e $c_{p}$

Dato un sistema rigido, con tutte tranne 1 parete adiabatica

<!Diagramma sistema>
![](Pasted%20image%2020231007214926.png)
Il calore specifico a volume costante: $c_{v} = \frac{1}{N}\left( \frac{\delta Q}{dT} \right)_{V} \left[ \frac{J}{mol K} \right]$
Il calore massico a volume costante: $c_{v} = \frac{1}{M}\left(\frac{\delta Q}{dT}\right)_{V} \left[ \frac{J}{kg K} \right]$

La equazione di stato per $c_{v}$ e' $c_{v} = c_{v}(T,P)$

Dato il primo principio della termodinamica: $dU = \underbrace{ TdS }_{ \delta Q } - \cancelto{ 0 }{ PdV } + \cancelto{ 0 }{ \mu dN }$
Le due parti vengono cancellate perche' il processo occorre a dV costante ed e' chiuso e non reagente quindi $dN_{i}$ = 0.

$dU = TdS = \delta Q$
$c_{v} = \frac{1}{N} (\frac{dU}{dT})_{V} \rightarrow dU = Nc_{v}dT$, in forma massica $dU = Mc_{v}^*dT$
Si ha che $dS = \frac{\delta Q_{v}}{T}$
Scambiando per trovare dS rispetto al coefficiente: $c_{v} = \frac{1}{N}\left( \frac{TdS}{dT} \right)_{V} \rightarrow dS = Nc_{v} \frac{dT}{T} \left[ \frac{J}{K} \right]$ in forma massica si ha $dS = Mc_{v}^* \frac{dT}{T} \left[ \frac{J}{K} \right]$

Per i gas ideali:
$c_{v}$ dipende solo da come e' fatta la molecole di gas

Cioe:

$c_{v} = \frac{1}{2}$(# gdl rototraslazionali) R

### GdL Rototraslazioni

#### Legge di Mayer

$$c_{v} = $$

$$c_{p} = c_{v} + R$$
#### Gas Monoatomici (He,Ne,Ar,...)

<!Diagramma coordinate>
![](Pasted%20image%2020231007215317.png)
$c_{v} = \frac{3}{2}R$ e per la <u>Legge di Mayer</u>: $c_{p} = \frac{5}{2}R$

In forma massica si ha: $c_{v}^* = \frac{3}{2} R^* [\frac{J}{mol K}]$  e $c_{p}^* = \frac{5}{2}R^*$

#### Gas Biatomico o poliatomico allineato ($H_{2},O_{2},N_{2},CO_{2}$)

<!Diagramma coordinate con legge di Mayer>
![](Pasted%20image%2020231007215333.png)
#### Poliatomici non Allineati ($NH_{3}$)

<!Diagramma coordinate con legge di Mayer>
![](Pasted%20image%2020231007215352.png)
## Altri Coefficienti ($\alpha_{P}$)

<!Diagramma cilindro>
![](Pasted%20image%2020231007215419.png)
Dato un cilindro adiabatico su tutte le pareti eccetto una

$c_{p} = \frac{1}{N}\left( \frac{\delta Q_{p}}{dT}\right)_{P}$ , in forma massica $c_{p} = \frac{1}{M}\left( \frac{\delta Q_{p}}{dT}\right)_{P}$

L'entalpia ha equazione H = U + PV, ricavata facendo la trasformazione di Legendre sulla equazione di stato di U, trasformando V in -P.

$\begin{align}dH &= dU + PdV + VdP \\ &= \underbrace{ TdS - \cancel{ PdV } }_{ dU } + \cancel{ PdV } + \underbrace{ \cancelto{ 0 }{ VdP } }_{ P = cost }\\&= TdS = \delta Q\end{align}$

Si ha che $c_{p} = \frac{1}{N}\left( \frac{dH}{dT} \right)_{P} \rightarrow dH = Nc_{p}dT$ , e in forma massica: $dH = Mc_{p}^*dT$
$c_{p} = c_{p}(P,T)$
$c_{p} = \frac{1}{N}\left( \frac{TdS}{dT} \right)_{P} \rightarrow dS = Nc_{p} \frac{dT}{T}$ , e in forma massica: $dS = Mc_{p}^* \frac{dT}{T}$
### Coefficiente di Dilatazione Isobaro

$\alpha_{P} = \frac{1}{V} (\frac{ \partial V }{ \partial T })_{P} [K^{-1}]$

Il volume molare $v = \frac{V}{N} \left[ \frac{m^3}{mol} \right]$ e il volume massico $v^* = \frac{V}{M} = \frac{1}{\rho} \left[ \frac{m^3}{kg} \right]$ 

Si trova che $\alpha_{P} = \frac{1}{v}\left( \frac{ \partial v }{ \partial T } \right)_{P}$ , in forma massica si ha: $\begin{align}\alpha_{P} &= \frac{1}{v^*}\left( \frac{ \partial v^* }{ \partial T } \right)_{P} = \rho\left( \frac{ \partial \rho^{-1} }{ \partial T } \right)_{P}\\&= -\rho\rho^{-2}\left( \frac{ \partial \rho }{ \partial T } \right)_{P} = -\frac{1}{\rho}\left( \frac{ \partial \rho }{ \partial T } \right)_{P}\end{align}$
Questa ultime equazione ha senso perche' se si pensa della che la densita' diminuisce con $\partial T$, quindi il (-) e' giusto. E invece il volume massico aumenta con $\partial T$ quindi ha senso anche quello.

### $\alpha_{P}$ per i gas ideali

$$\begin{align}
PV &= nRT \\
Pv &= RT \\
\alpha_{P} &= \underbrace{ \frac{1}{v} }_{ \frac{1}{v} = \frac{P}{RT} } (\underbrace{  \frac{ \partial v }{ \partial T } }_{ \frac{ \partial v }{ \partial T }  = \frac{R}{P} })_{P} = \frac{P}{RT} \cdot \frac{R}{P} = \frac{1}{T} [K^{-1}]
\end{align}$$
Nei gas ideali il coefficiente di dilatazione isobaro e' dipendente solamente dalla temperatura.

## Legge di Mayer generalizzata

### Jacobiana

Si il nostro sistema un sistema con m funzioni: $u,v,\dots,w$ e n variabili $x,y,\dots,z$

Se m = n allora:

$$\frac{ \partial (u,v,\dots,w) }{ \partial (x,y,\dots,z) } = \left\{ \underbrace{ \begin{bmatrix}
\frac{ \partial u }{ \partial x } & \frac{ \partial u }{ \partial y } & \dots & \frac{ \partial u }{ \partial z }  \\
\frac{ \partial v }{ \partial x }  & \frac{ \partial v }{ \partial y }  & \dots & \frac{ \partial v }{ \partial z }  \\
\vdots & \vdots & \ddots & \vdots \\
\frac{ \partial w }{ \partial x }  & \frac{ \partial w }{ \partial y }  & \dots & \frac{ \partial w }{ \partial z } 
\end{bmatrix} }_{ \text{n colonne} } \right\} \text{m righe} $$

#### Proprieta' dai differenziali

##### Proprieta' 1

$$\frac{ \partial (u,v) }{ \partial (x,y) } = \frac{ \partial (u,v) }{ \partial (x,y) } \cdot \frac{ \partial (r,s) }{ \partial (r,s) }$$
$r$ e $s$ sono variabili ausiliari come T e P

##### Proprieta' 2

$$\frac{ \partial (u,v) }{ \partial (x,y) } = - \frac{ \partial (v,u) }{ \partial (x,y) } = - \frac{ \partial (u,v) }{ \partial (y,x) } = \frac{ \partial (v,u) }{ \partial (y,x) } $$
##### Proprieta' 3
$$\frac{ \partial (u,y) }{ \partial (x,y) } = \left( \frac{ \partial u }{ \partial x }  \right)_{y}$$
### Calcolo della Legge per 1 mole o kg di gas ideale

$$c_{v} = \left( \frac{\delta Q}{dT} \right)_{V} = T\left( \frac{dS}{dT} \right)_{T} \underbrace{ = }_{ PROP\:3 } T \frac{ \partial (S,v) }{ \partial (T,v) } \cdot \frac{ \partial (T,P) }{ \partial (T,P) } = $$
$$ = T\frac{ \partial (S,v) }{ \partial (T,P) }\cdot \frac{ \partial (T,P) }{ \partial (T,v) } = T \frac{ \partial (S,V) }{ \partial (T,P) } \cdot \frac{ \partial (P,T) }{ \partial (v,T) }  $$
Si ha che:

$$c_{v} = T \frac{ \partial (S,v) }{ \partial (T,P) } \cdot \underbrace{ \left( \frac{ \partial P }{ \partial v } \right)_{T} }_{ \frac{-1}{K_{T}\cdot v} } $$
Il coefficiente di comprimibilita' isoterma $K_{T}$ e' definito:
$$K_{T} = -\frac{1}{v}\left( \frac{ \partial v }{ \partial P }  \right)_{T}$$
Tornando a $c_{v}$ si ha che:
$$c_{v} = -T \cdot \frac{1}{v\cdot K_{T}}\frac{ \partial (S,v) }{ \partial (T,P) } $$
Usando la matrice jacobiana:
$$\frac{ \partial (S,v) }{ \partial (T,P) } = \det\begin{bmatrix}
	\left( \frac{ \partial S }{ \partial T }  \right)_{P} & \left( \frac{ \partial S }{ \partial P }  \right)_{T} \\
    \left( \frac{ \partial V }{ \partial T } \right)_{P} & \left( \frac{ \partial V }{ \partial P }  \right)_{T}
\end{bmatrix} = \left( \frac{ \partial S }{ \partial T }  \right)_{P} \cdot \left( \frac{ \partial v }{ \partial P }  \right)_{T} - \left( \frac{ \partial S }{ \partial P } \right)_{T} \cdot \left( \frac{ \partial v }{ \partial T }  \right)_{P} $$
$$= \underbrace{ \frac{T}{T}\left( \frac{ \partial S }{ \partial T }  \right)_{P} }_{ \frac{c_{p}}{T} } \cdot \underbrace{ \frac{v}{v}\left( \frac{ \partial v }{ \partial P }  \right)_{T} }_{ -v \cdot K_{T} } - \left[ \underbrace{ -\frac{v}{v}\left( \frac{ \partial v }{ \partial T }  \right)_{P} }_{ -v \cdot \alpha_{P} } \cdot \underbrace{ \frac{v}{v}\left( \frac{ \partial v }{ \partial T }  \right)_{P} }_{ v \cdot \alpha_{P} } \right]$$
Portando tutto insieme si trova che:
$$\frac{ \partial (S,v) }{ \partial (T,P) } = -\frac{c_{P}K_{T}v}{T} + v^2\alpha^2_{P}$$
Trovando $c_{v}$:
$$c_{v} = -\frac{T}{v\cdot K_{T}}\left[ -\frac{c_{P}\cdot K_{T}\cdot v}{T} + v^2\cdot \alpha^2_{P} \right] = c_{p} - \frac{T\cdot v\cdot \alpha^2_{p}}{K_{T}}$$
Questo equazione ha senso perche' $c_v = c_{p} - R$ .

Per i gas ideali:
$\alpha_{P} = \frac{1}{T}$ e $K_{T} = \frac{1}{P}$

Sostituendo:
$$c_{v} = c_{p} - \frac{v\cdot T\cdot P}{T^2} = c_{p} - \frac{v}{P \cdot T} = c_{p} - R$$
Dove $v = \frac{V}{N}$

## Entropia nei gas ideali

<!Diagramma sistema>
![](Pasted%20image%2020231007215444.png)
Il lavoro del gas ideal e' nullo perche' sta lavorando contro nulla.

$\Delta U = Q - L = 0$ perche' il sistema composto e' isolato.

Anche se $T$ rimane costante il gas ha variazioni in $P$ e $V$.

$\Delta U_{GAS} = 0 \implies U = \text{cost}$ e $T_{GAS} = \text{cost}$
$U_{\substack{\text{GAS}\\\text{ IDEALE}}} = U(T)$

$dU = Nc_{v}dT$ in ogni caso per i casi ideali
$H = U + PV$
Dato che per 1 mole di gas $PV = nRT$, $H = U + RT$

$dH = dU + RT = c_{v}dT + RdT = c_{p}dT$ per 1 mole
$$\left\{\begin{align}
dU &= Mc^*_{v}dT\\
dH &= Mc^*_{p}dT
\end{align}\right\} \text{solo per gas ideali, sempre} $$
Ogni altra sostanza che non e' gas ideale, ha leggi per processi isobare e isocoriche.

### $\Delta S$ di gas ideali in coordinate diverse (P,T) , (P,V) e (V,T)

#### $\Delta S$ Coordinate (V,T)

$$dU = TdS - PdV \rightarrow dS = \frac{dU}{T} + \frac{P}{T}dV$$
Dato che $dU = Nc_{v}dT$ e $\frac{P}{T}=\frac{NR}{V}$

Integrando:
$$\int_{i}^f dS = Nc_{v}\int _{i}^f \frac{dT}{T} + NR\int _{i}^f \frac{dV}{V} \longrightarrow \Delta S_{i-f} = Nc_{v}\ln\left( \frac{T_{f}}{T_{i}} \right) + NR\ln \frac{V_{f}}{V_{i}}  $$

In forma massica:
$$\boxed{\Delta S_{if} = Mc^*_{v}\ln \frac{T_{f}}{T_{i}} + MR^*\ln \frac{V_{f}}{V_{i}}}$$
#### $\Delta S$ Coordinate (P,V)

$$PV = MR^*T \:\:\:➀$$
$$PdV + VdP = MR^*dT \:\:\:②$$
$$\frac{②}{➀} \implies \frac{dV}{V} + \frac{dP}{P} = \frac{dT}{T}$$
Con questa ultima equazione, possiamo fare cambi di variabili.
$$dS = Mc^*_{v}\left( \frac{dV}{V}+ \frac{dP}{P} \right) + MR^*\frac{dV}{V} = $$
$$ = Mc^*_{v} \frac{dP}{P} + M(c^*_{v}+R^*) \frac{dV}{V}$$
Integrando si trova che in forma massica:
$$\boxed{\Delta S = Mc^*\ln \frac{P_{f}}{P_{i}}+Mc^*_{p}\ln \frac{V_{f}}{V_{i}}}$$
#### $\Delta S$ Coordinate (T,P)

$$\frac{dV}{V} = \frac{dT}{T} - \frac{dP}{P}$$
$$\begin{align}
dS &= Mc^*_{v} \frac{dT}{T} + MR^* \left( \frac{dT}{T}-\frac{dP}{P} \right) \\
&= M(c^*_{v}+R^*) \frac{dT}{T} - MR^* \frac{dP}{P} \\
&= Mc^*_{p}\ln \frac{T_{f}}{T_{i}} - MR^*\ln \frac{P_{f}}{P_{i}}
\end{align}$$
$$\boxed{\Delta S = Mc^*_{p}\ln \frac{T_{f}}{T_{i}} - MR^*\ln \frac{P_{f}}{P_{i}}}$$

Tutte queste equazioni equivalgono, quello che e' consigliato e' di usare quella che elimina almeno una parte della equazione attraverso il fatto che la variabile non cambia.

## $K_{T}$ per gas ideali

<!Diagramma processo isotermo-reversibile>
![](Pasted%20image%2020231007215520.png)
Se il sistema e' in un serbatoio termico, la temperatura resta costante nel lungo termince anche se $dP$ e $dV \neq 0$

$$K_{T} = -\frac{1}{v}\left( \frac{ \partial v }{ \partial P }  \right)_{T}$$
Cioe' $K_{T} = K_{T}(T,P)$

Dato: $Pv = RT  \longrightarrow v = \frac{RT}{P} = RTP^{-1}$
$$\left( \frac{ \partial v }{ \partial P }  \right)_{T} = -RTP^{-2}$$
Mettendo tutto insieme:
$$K_{T} = \frac{1}{v} \frac{RT}{P^2} = \frac{P}{P^2} = \frac{1}{P} \left[ \frac{1}{Pa} \right]$$


## Relazione tra $\alpha_{p}$ e $K_{T}$

Solo per gas ideali:
$\alpha_{P} = \frac{1}{T}$
$K_{T} = \frac{1}{P}$

$$\frac{\alpha_{P}}{K_{T}} = \frac{1}{v}\left( \frac{ \partial v }{ \partial T }  \right)_{P} \left[ -v\left( \frac{ \partial P }{ \partial v }  \right)_{T} \right] = -\frac{ \partial (v,P) }{ \partial (T,P) } \cdot \frac{ \partial (P,T) }{ \partial (v,T) } = \frac{ \partial (P,v) }{ \partial (P,T) } \cdot \frac{ \partial (P,T) }{ \partial (T,v) } $$
Secondo la $II^a$ Relazione di Maxwell:
$$\left( \frac{ \partial P }{ \partial T }  \right)_{v} = \left( \frac{ \partial S }{ \partial v }  \right)_{T}$$
Allora:

$v \cdot \alpha_{p} = v \cdot \frac{1}{v}\left( \frac{ \partial v }{ \partial T } \right)_{P} = (\frac{ \partial v }{ \partial T })_{P}$

E secondo la $IV^a$ Relazione di Maxwell:
$$\left( \frac{ \partial v }{ \partial T }  \right)_{P} = - \left( \frac{ \partial S }{ \partial P }  \right)_{T} \text{ quindi } v\cdot \alpha_{P} = -\left( \frac{ \partial S }{ \partial P }  \right)_{T}$$


