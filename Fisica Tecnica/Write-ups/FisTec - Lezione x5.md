---
creation_date: 2023-11-14 21:07
tags:
  - fistec 
share: true
---
# Lezione 15 - Trasmissione di Calore

La trasmissione di calore occorre quando c'è una differenza di temperatura tra due sistemi.

### Metodi di Trasmissione Termica

- Conduzione $\to$ tipico dei solidi
- Convezione
- Radiazione (Irraggiamento)

Nei fluidi non occorre la conduzione perchè occorre anche un flusso di massa lo rende convezione.

## Conduzione (Postulato di Fourier)

La conduzione occorre secondo il postulato di Fourier:

$$\dot{q}_{x}''=-k\frac{ \partial T }{ \partial x }  \left[ \frac{W}{m^{2}} \right]$$
Dove $\dot{q}$ è la portate termica, la x indice la asse lungo cui il flusso sta occorrendo e il " indice che è il calore trasferito per unita di energia, in caso non si sapesse la area della sezione.

<!Diagramma cubo conduzione>

In caso di sapesse la conduzione allora si ha:

$$\dot{q}_{x}=-kA\frac{ \partial T }{ \partial x } [W]$$
A è la area attraverso cui sta occorrendo la trasmissione di temperatura.

k è la conducibilità termica $\left[ \frac{W}{mK} \right]$

## Convezione Termica

Dal latino "convehere" che significa "portare insieme", la convezione implica il movimento di calore mediante un trasporto diffusivo e il trasporto di massa.

<!Diagramma convezione>

Riscaldando $\rho$ diminuisce, per il principio di Archimede l'aria si alza e causa una circolazione della aria.

La convezione occorre secondo le equazioni:
$$\begin{gather}
\dot{q}'' = h(T_{s}-T_{\infty}) \left[ \frac{W}{m^{2}} \right] \\
\dot{q}=hA(T_{s}-T_{\infty}) [W]
\end{gather}$$
In questo caso A è la superfice di contatto, invece h è il coefficiente liminare detto anche coefficiente di scambio termico convettivo.

In questo caso la convezione non ha direzione perché non ha vettore e nel volume circostante.

In assenza di gravità non c'è convezione.

## Radiazione

L'irraggiamento occorre in assenza di massa. Ogni corpo con $T>0K$ erogando energia termia informa di onde elettromagnetiche o fotoni.

L'irraggiamento occorre secondo le leggi di Stephan-Boltzmann

#### Legge per Corpi Neri
$$\begin{gather}
E_{C.N}'' = \sigma T_{CN}^{4} \left[  \frac{W}{m^{2}} \right] \\
E_{CN} = A\sigma\:T_{CN}^{4} [W]
\end{gather}$$
$\sigma = 5,67 \cdot 10^{-8}$ $\left[ \frac{W}{m^{2}K^{4}} \right]$è il costante di Stephan-Boltzmann

> [!note] 
> La energia emessa per irraggiamento dipende solo dalla temperature del corpo, e dall'area della superfice. La temperature del sistema esterno non ha effetto sulla radiazione.

> [!note] Note 2
> Dato il coefficiente alla 4$^{a}$ l'irraggiamento emette la più energia.

#### Legge per Corpi Grigi

I corpi grigi non irraggiano completamente come i corpi neri, perciò per i corpi grigi applichiamo una equazione leggermente diversa:

$$E_{CG}=\mathcal{E}\sigma T^{4} \text{ con } 0\leq\mathcal{E}\leq 1$$
$\mathcal{E}$ è la emissività del corpo grigio.


## Derivazione del Postulato di Fourier

Dati due serbatoi di temperatura con pareti adiabatiche e una barra tra i due serbatoi:
<!Diagramma sistema>

Barra di materiale noto con area della sezione pari ad A.

Sappiamo anche che $P_{1}>P_{2}\implies T_{1}>T_{2}$

Durante esperimenti fu trovato che:

$$\dot{q}\propto \frac{\Delta T}{\Delta x}\cdot A$$
Il costante k lo genera la equivalenza:
$$\dot{q}=-kA\cdot \frac{\Delta T}{\Delta x}$$

<!Diagramma cambio di T>

Con x che cresce troviamo che T diminuisce, questo spiega il meno nella equazione, vogliamo che il calore sia positivo se c'è una differenza di temperatura negativa.

$$\lim_{ \Delta x \to 0 } -k \frac{\Delta T}{\Delta x}A = \boxed{ -kA \frac{ dT }{ dx }  = \dot{q}_{x} }\text{ - Postulato di Fourier}$$
La trasmissione di calore monodimensionale è:
$$\dot{q}_{x}''=\frac{\dot{q}_{x}}{A}=-k\frac{ dT }{ dx } \left[ \frac{W}{m^{2}} \right]$$

Solo per i materiali omogenei ed isotropi:

$$\vec{\dot{q}} = -k\cdot  \vec{\nabla }T =-k\left( \frac{ \partial T }{ \partial x } \hat{i}+\frac{ \partial T }{ \partial y } \hat{j}+\frac{ \partial T }{ \partial z } \hat{k} \right)$$
Un esempio di materiale isotropo è materiale laminato.

### k - Conducibilità Termica

La conducibilità termica è connessa alla conducibilità elettrica

$$k = k_{e^{-}}+k_{\underbrace{ Fo }_{ Fononi }}$$
I fononi sono il quanto di trasferimento di energia termica, come i fotoni ma i fotoni sono della luminosità. I fononi sono dati dalla struttura del materiale.

<!Diagramma>

#### Diffusibilità Termica: $\alpha$

$$\alpha=\frac{k}{\rho c^{*} }\left[ \frac{m^{2}}{s} \right]= \frac{\substack{\text{Capacità di conduzione di}\\\text{calore di materiale}}}{\substack{\text{Capacità di Accumulare}}}$$

## Equazione generale della conduzione

<!Diagramma cubo con +d-direzione>

Il bilancio delle energia ci da:

$$\underbrace{ \dot{E}_{IN}+\dot{E}_{OUT} }_{ \substack{\text{Quello abbiamo}\\\text{consideriato fino}\\\text{ad ora}\to \dot{E}_{IN}-\dot{E}_{OUT}=0} }+\dot{E}_{GEN}=\underbrace{ \dot{E}_{ACC} }_{ \substack{\text{Potere}\\\text{Accumulato}} }$$

$\dot{E}_{GEN}$ è la energia generate internamento al cubo (e.g corrente che scorre attraverso il pezzo)

$$\begin{gather}
\dot{E}_{IN}=\dot{q}_{x}+\dot{q}_{y}+\dot{q}_{z} \\
\dot{E}_{OUT}=\dot{q}_{x+dx}+\dot{q}_{y+dy}+\dot{q}_{z+dz} \\
\dot{E}_{GEN}=\underbrace{ \dot{q}''' }_{ \left[ \frac{W}{m^{3}} \right] }dV=\dot{q}''' dxdydz \\
\dot{E}_{ACC} = \frac{dU}{dT}=\rho c^{*} \frac{ dT }{ dt } \cdot dxdydz
\end{gather}$$
Scomponendo gli elementi di $\dot{E}_{OUT}$ con le serie di Taylor ricaviamo:

$$\begin{gather}
\dot{q}_{x+dx}=\dot{q}_{x}+\frac{ \partial \dot{q}_{x} }{ \partial x } dx \\
\dot{q}_{y+dy}=\dot{q}_{y}+\frac{ \partial  \dot{q}_{y} }{ \partial y } dy \\
\dot{q}_{z+dz}=\dot{q}_{z}+\frac{ \partial  \dot{q}_{z} }{ \partial z } dz
\end{gather}$$
Facendo la somma troviamo:
$$\underbrace{ \cancel{ \dot{q}_{x}+\dot{q}_{y}+\dot{q}_{z} }_{ \dot{E}_{IN} } } - \left[ \underbrace{ \cancel{ \dot{q}_{x} }+\frac{ \partial  \dot{q}_{x} }{ \partial x }dx + \cancel{ \dot{q}_{y} }+\frac{ \partial  \dot{q}_{y} }{ \partial y } dy + \cancel{ \dot{q}_{z} }+ \frac{ \partial  \dot{q}_{z} }{ \partial z }dz  }_{ \dot{E}_{OUT} }\right]+\dot{q}'''dxdydz=\rho c^{*} \frac{ dT }{ dt } dxdydz$$

### Ricaviamo Postulato di Fourier

$$\begin{gather}
\dot{q}_{x}=-kA\frac{ dT }{ dx } \\
\text{Derivando in x: }\frac{ \partial  \dot{q}_{x} }{ \partial x }dx = -k\underbrace{ A }_{ dA } \frac{ \partial^{2} T }{ \partial x^{2} }dx = - k \frac{ \partial^{2} T }{ \partial x^{2} } dxdydz    \\
\text{Derivando in y: }\frac{ \partial  \dot{q}_{y} }{ \partial y }dy = -k\underbrace{ A }_{ dA } \frac{ \partial^{2} T }{ \partial y^{2} }dx = - k \frac{ \partial^{2} T }{ \partial y^{2} } dxdydz  \\
\text{Derivando in z: }\frac{ \partial  \dot{q}_{z} }{ \partial z }dz = -k\underbrace{ A }_{ dA } \frac{ \partial^{2} T }{ \partial z^{2} }dx = - k \frac{ \partial^{2} T }{ \partial z^{2} } dxdydz
\end{gather}$$
Rimpiazzando nella equazione sopra di $\dot{E}_{OUT}$:
$$\begin{gather}
-k\left[ \underbrace{ \frac{ \partial^{2} T }{ \partial x^{2} } +\frac{ \partial^{2} T }{ \partial y^{2} } +\frac{ \partial^{2} T }{ \partial z^{2} } }_{ \nabla^{2}T }  \right]\cancel{ dxdydz }+\dot{q}'''\cancel{ dxdydz }=\rho c^{*} \frac{ \partial T }{ \partial t }  \\
-k \nabla^{2}T + \dot{q}''' = \rho c^{*} \frac{ \partial T }{ \partial t }  \\
\implies \underbrace{ \frac{k}{\rho c^{*} } }_{ \alpha }\nabla^{2}T + \frac{\dot{q}'''}{\rho c^{*} } = \frac{ \partial T }{ \partial t } \to \underbrace{ \boxed{ \alpha \nabla^{2}T + \frac{\dot{q}'''}{\rho c^{*} } = \frac{ \partial T }{ \partial t } }  }_{ \substack{\text{Equazione definitiva di}\\\text{variazione di T nel tempo}\\\text{nelle 3 direzioni}} }
\end{gather}$$

$\nabla^{2}T$ è la laplaciana di T.

#### Laplaciano in Diversi sistemi

##### Sistema di Riferimento rettangolare

$$\nabla^{2}T=\frac{ \partial^{2} T }{ \partial x^{2} } +\frac{ \partial^{2} T }{ \partial y^{2} } +\frac{ \partial^{2} T }{ \partial z^{2} } $$

##### Sistema Cilindrico

$$\nabla^{2}T=\frac{1}{r} \frac{ \partial  }{ \partial r }\left( r\cdot\frac{ \partial T }{ \partial r }  \right)$$
##### Coordinate Sferiche

$$\nabla^{2}T = \frac{1}{r^{2}} \frac{ \partial }{ \partial r } \left( r^{2} \cdot \frac{ \partial T }{ \partial r }  \right) $$

## Casi di Tipi di Sistemi

Per la equazione definitiva:

$$\alpha \nabla^{2}T + \frac{\dot{q}'''}{\rho c^{*} }=\frac{ \partial T }{ \partial t } $$
Ci sono 3 casi di tipi di sistemi:

### Regime Stazionario Senza Generazione

Un sistema a regime stazionario è un sistema dove le temperature ad ogni punto non cambiano nel tempo, significa che i calori non cambiano. Un sistema senza generazione è un sistema dove non c'è generazione di energia interna al pezzo.

$$\text{Equazione di Laplace:  } \boxed{ \nabla^{2}T=0 }$$

### Regime Variabile senza generazione

Un sistema a regime variabile è un sistema dove la temperatura ad un punto cambia nel tempo.

È descritto da:
$$\text{Equazione di Fourier: }\boxed{ \alpha \nabla^{2}T=\frac{ \partial T }{ \partial t } } $$

### Regime Stazionario con Generazione

Un sistema con generazione ha portare di calore all'interno del pezzo, è descritto da:

$$\text{Equazione di Poisson: }\boxed{ k\nabla^{2}T+\dot{q}'''=0 }$$

## Tipi di Condizioni di Contorno

Ci sono 3 tipi di condizioni di contorno per la conduzione e convezione.

### 1$^{o}$ Tipo di Dirichlet

La condizione di Dirichlet richiede che sappiamo la temperatura ad un punto del contorno.

<!Diagramma tipo di Dirichlet>

### 2$^{o}$ Tipo di Neumann

<!Diagramma tipo di Neumann>

La condizione di contorno di Neumann richiede che definiamo la portata termica alle frontiere.

$$\dot{q}''_{x}\Bigg|_{x=0} = -k \frac{ \partial T }{ \partial x } $$

#### Caso della parete adiabatica

<!Diagramma parete adiabatica>

Su una parete adiabatica la portata termica è nulla.
La linea termica è nulla alla parete adiabatica

$$\begin{gather}
\dot{q}''_{x}=0=-k \frac{ \partial T }{ \partial x } \left[ \frac{W}{m^{2}} \right] \\
\dot{q}_{x}=0=-kA \frac{ \partial T }{ \partial x } [W]
\end{gather}$$
### 3$^{o}$ Tipo di Condizione

Il 3$^{o}$ tipo di condizione di contorno è tra contorni che hanno interazione tra solido e fluido. In questo caso bisogna definire solo h e $T_{\infty}$ del fluido dato che la portate termica è definita quei due calori in aggiunta alla temperatura della superfice su cui c'è interazione.

$$\dot{q}_{x}=-kA\cdot \frac{ \partial T }{ \partial x } =h(T_{S}-T_{\infty})$$

È non è lineare perché $\dot{q}_{x}$ è più grande più ci si avvicina alla superfice.


### Riassunto

1. Imporre temperatura
2. Imponendo portata di calore
3. Tipo di scambio termico (attraverso convezione)

## Esempio Regime Stazionario ($\frac{ \partial T }{ \partial t }=0$)

<!Diagrmma esempio>

Supponiamo flusso monodimensionale lungo x $\to$ la area normale a x ha la stessa temperatura.

Il sistema stazionario significa che:
$$\begin{gather}
\nabla^{2}T=0 \\
\text{Monodimensionale significa: }\frac{ \partial^{2} T }{ \partial x^{2} } =0 
\end{gather}$$
Intengrando e poi trovando i costanti:

$$\begin{gather}
T(x)=c_{1}x+c_{2} \\
\text{Condizioni al contorno: } \\
- T(x=0) = T_{S_{1}} \to T_{S_{1}}=c_{2} \implies c_{2}=T_{S_{1}} \\
- T(x=S) = T_{S_{2}} \to T_{S_{2}} = c_{1}\cdot S + T_{S_{1}} \to c_{1}=\frac{T_{S_{2}}-T_{S_{1}}}{S} \\
\implies T(x) = T_{S_{1}}-\frac{T_{S_{1}}-T_{S_{2}}}{S}\cdot x
\end{gather}$$
### Postulato di Fourier

Nel caso che non sia nota la superfice:
$$\dot{q}_{x}'' = -k \frac{ \partial T(x) }{ \partial x } =-k\left[ -\frac{T_{S_{1}}-T_{S_{2}}}{S} \right] = \frac{T_{S_{1}}-T_{S_{2}}}{\frac{S}{K}}\left[ \frac{W}{m^{2}} \right]$$
Invece nel caso che la area della superfice sia nota:
$$\dot{q}_{x}=-kA\frac{ \partial T(x) }{ \partial x } = -kA \left[ -\frac{T_{S_{1}}-T_{S_{2}}}{S} \right]=\frac{T_{S_{1}}-T_{S_{2}}}{\frac{S}{kA}}[W]$$
Questa parte solo è detta resistenza termica per conduzione ed è come la resistenza elettrica nei circuito. Dato questo analogo, in molti casi costruiremo un circuito rappresentativo.

Si può schematizzare come:

<!Diagramma circuito>

$$\begin{gather}
\dot{q}=\frac{T_{S_{1}}-T_{S_{2}}}{R_{CD}} \\
R_{CD}=\frac{S}{kA}\left[ \frac{K}{W} \right] \text{ -analogo a $\to$ } R_{E}=\frac{\rho L}{S}
\end{gather}$$

Nella convezione invece:
$$\dot{q}_{CV_{1}}=h_{1}A(T_{\infty_{1}}-T_{S_{1}})= \frac{T_{\infty_{1}}-T_{S_{1}}}{\underbrace{ \frac{1}{h_{1}\cdot A} }_{ R_{CV_{1}} }}$$
$$\dot{q}_{CV_{2}}=h_{2}A(T_{S_{2}}-T_{\infty_{2}})=\frac{T_{S_{2}}-T_{\infty_{2}}}{\underbrace{ \frac{1}{h_{2}A} }_{ R_{CV_{2}} }}$$
In circuito intero è:

<!Diagramma circuito intero>

se $h_{1}$ aumenta $T_{\infty_{1}}$ e $T_{S_{1}}$ si allontanano (e opposto)
se $k$ aumenta $T_{S_{1}}$ e $T_{S_{2}}$ si avvicina

Se A è nota:

$$\dot{q}=\frac{T_{\infty_{1}}-T_{\infty_{2}}}{\frac{1}{h_{1}A}+\frac{S}{kA}+\frac{1}{h_{2}A}}$$

Invece se A non è nota:

$$\dot{q}''=\frac{T_{\infty_{1}}-T_{\infty_{2}}}{\frac{1}{h_{1}}+\frac{S}{k}+\frac{1}{h_{2}}}$$
Dove:
$$\begin{gather}
R_{CV_{1}}'' = \frac{1}{h_{1}}\left[ \frac{m^{2}K}{W} \right] \\
R_{CV_{2}}'' = \frac{1}{h_{2}} \left[ \frac{m^{2}K}{W} \right] \\
R_{CD}'' = \frac{S}{K} \left[ \frac{m^{2}K}{W} \right]
\end{gather}$$

