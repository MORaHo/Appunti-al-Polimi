---
creation_date: 2023-11-25 11:41
tags:
  - fistec 
share: true
---
# Lezione 18 - Convezione

Nella ultima lezione abbiamo visto come si sviluppava lo strato limite fluidodinamico. Esiste un analogo termico che viene chiamato lo strato limite termico:

<!Diagramma strato limite termico>

La temperatura della lastra ha effetto sulla temperatura del fluido che ci scorre sopra, come lo strato limite fluidodinamico la _boundary line_ è la linea dove la differenza nelle temperature del fluido e la lastra è 99% della differenza in temperature tra il fluido esterno e la lastra
## Numero di Prandtl

Il numero di Prandtl rappresenta le relazione tra la diffusibilità molecolare della quantità di moto e la diffusività molecolare del calore:

$$\begin{align}
Pr &= \frac{\text{Diffusività molecolare della Quantità di Moto}}{\text{Diffusività Molecolare del Calore}} \\
&= \frac{\nu}{\overline{\alpha}_{} } \\
&=\frac{\left( \frac{\mu}{\rho} \right)}{\left( \frac{k}{\rho c^{*} } \right)} = \frac{\mu c^{*}}{k}
\end{align}$$
In effetti il numero di Prandtl confronta la velocità con cui si sviluppano lo strato limite termico e lo strato limite fluidodinamico.

Esempi:

- Per i metalli liquidi il denominatore prevale $\implies Pr \sim 0,001$

<!Diagramma metalli liquidi>

Questo significa che lo strato limite termico si sviluppa più velocemente di quello fluidodinamico

- Per acqua o aria, il numero di Prandtl $\sim 1$ e $\sim0,7$ rispettivamente:

<!Diagramma acqua a aria>

I due strati si sviluppano insieme.

- Per gli olii il numero di Prandtl è più vicino a 100000

<!Diagramma olii>

## Numero di Nusselt

Il numero di Nusselt fa un confronto tra la conduzione di un fluido fermo e la convezione dello stesso fluido in moto.

<!Diagramma fluido T-s L>

La conduzione e convezione del fluido hanno equazioni:

$$\dot{q}_{CV} = \frac{T_{s}-T_{\infty}}{\frac{1}{hA}}$$
$$\dot{q}_{CD}=\frac{T_{s}-T_{\infty}}{\frac{L}{kA}}$$
$$\frac{\dot{q}_{CV}}{\dot{q}_{CD}} = \frac{hA(T_{S}-T_{\infty})}{\frac{kA}{L}(T_{s}-T_{\infty})} = \frac{hL}{k_{F}} = Nu \neq Bi$$
Il numero di Nusselt e Biot hanno la stessa equazione ma il numero di Biot usa il $k$ del solido e non del fluido quindi non sono intercambiabili.

Se il liquido è in moto h aumenta la convezione che supera la conduzione.

h non è un valore che possiamo calcolare facilmente data la sua dipendenza da molte variabili quindi per calcolare il Numero di Nusselt using il Teorema di Buckingham

## Teorema di Buckingham 

h è dipendente da troppe variabili quindi usiamo la analisi dimensionale.

$$G_{1} = f(G_{2},\dots,G_{r})$$
r grandezze specifiche legate dalla funzione $f$ non nota.
$$=g(G_{1},\dots,G_{r})\to \text{Forma Implicita}$$
r grandezze fisiche da cui dipendende la funzione f,g

n grandezze fondamentali del sistema di misura scelta come sistema di riferimento, nel nostro caso usiamo SI, da cui prendiamo:

$$M,L,t,T \to n=4$$

Per il teorema di Buckingham:
$$g(G_{1},\dots,G_{r}) = g'(\Pi_{1},\Pi_{2},\dots,\Pi_{r-n})=0$$
Dove $\Pi_{1},\Pi_{2},\dots,\Pi_{r-n}$ sono gruppi adimensionali..

Nel nostro caso la funzione g è la variabile h:

$$h = h(\rho,\mu,c^{*} ,k,\overline{w}_{} ,L)$$
$\overline{w}_{}$ è imposta dall'esterno dato il fatto che stiamo studiando la convezione forzata, invece la lunghezza tiene a conto la geometria del pezzo.

In forma implicità:
$$g(\underbrace{ h,\rho,\mu,c^{*} ,k,\overline{w}_{},L }_{ r=7 } ) \to g'(\Pi_{1},\Pi_{2},\Pi_{3})$$
Abbiamo già visto i 3 gruppi adimensionali che useremo, questi gruppi saranno i numeri di Prandtl,Nusselt and Reynolds.

$$h = A\rho^{b}\mu^{c}{c^{*}}^{d}k^{e}w^{f}L^{g}$$

Le dimensioni a destra e a sinistra di questa equazione devono esser uguali, quindi facciamo l'analisi dimensionale:

$$\begin{gather}
\rho\left[ \frac{kg}{m^{3}} \right] = [ML^{-3}] \to \substack{\text{unità SI che abbiamo}\\\text{detto che avremmo usato prima}} \\
\mu\left[ \frac{kg}{m^{3}} \right] = [ML^{-1}t^{-1}] \\
c^{*} \left[ \frac{J}{kgK} \right] = \left[ \frac{Nm}{kgK} \right] = \left[ \frac{kgm}{s^{2}} \cdot \frac{m}{kgK}\right] = [L^{2}t^{-2}T^{-1}] \\
k = \left[ \frac{W}{mK} \right] = \left[ \frac{J}{s}\cdot \frac{1}{mK} \right] = \left[ mg \frac{m^{2}}{s^{2}} \cdot \frac{1}{smK}\right] = [MLt^{-3}T^{-1}] \\
L = [M] \\
h = \left[ \frac{W}{m^{2}K} \right] = [Mt^{-3}T^{-1}]
\end{gather}$$
Riscrivendo tutto:
$$[Mt^{-3}T^{-1}] = A\cdot M^{b}L^{-3b} \cdot M^{c}L^{-c}t^{-c}\cdot L^{2d}t^{-2d}T^{-d}\cdot M^{e}L^{e}t^{-3e}\cdot L^{f}t^{-f}\cdot L^{g}$$
Analizzando i coefficienti:
$$Mt^{-3}T^{-1} = A M^{b+c+e} \cdot L^{-3b-c+2d+e+f+g}\cdot t^{-c-2d-3e-f}\cdot T^{-d-e}$$

Questi ci da il sistema:

$$\begin{matrix}M\\L\\t\\T\end{matrix} 
\left\{\begin{align}
1 &= b+c+e \implies c= d-b \\
0 &= -3b-c+2d+e+f+g \implies e= 1-d \\
-3 &= -c-2d-3e-f \implies g = b-1 \\
-1 &= -d-e \implies  f =b
\end{align}\right\}$$
$$\implies  h = A \rho^{b} \mu^{d-b}{c^{*} }^{d}k^{1-d}w^{b}L^{b-1}$$
Mettendo tutti gli esponenti uguali insieme:
$$\implies \underbrace{ \frac{hL}{k} }_{ Nu } = A \left( \underbrace{ \frac{\rho wL}{\mu} B }_{ Re }\right)^{b} \cdot \left(\underbrace{  \frac{\mu c^{*} }{k}  }_{ Pr }\right)^{d} \to \boxed{ Nu = ARe^{b}Pr^{d} }$$

$\boxed{ Nu = ARe^{b}Pr^{d} }$ è la correlazione di scambio termico in convezione forzata, tutte le variabili sono ricavate per via esperimentale

## Esempi

### Lastra Piana Isoterma

$$Nu = 0,664 Re_{L}^{0,5}\cdot Pr^{1/3}$$
Il pedice L è la lunghezza caratteristica della lastra

$$Pr \geq 0,6 \text{ Laminare Re} < 5 \cdot 10^{5}$$
Se il moto è turbolente: $\implies Re > 10^{7}$
e $Nu = 0,037Re^{0,8}_{L}Pr^{1/3} \to\: 0,6\leq Pr\leq 60$

### Lastra Piana con Flusso Termico Costante

Laminare: $Nu = 0,9Re^{0,5}Pr^{1/3}$
Turbolente: $Nu = 0,6Re^{0,8}Pr^{1/3}$

Si scambia termico è sempre meglio del turbolente dato il flusso di masa.

> [!note]-
> Ricordarsi le frazioni che i numeri confrontano, e.g. Pr fa il confronto fra il flusso di moto e il flusso di calore
## Convezione Interna nei Tubi

Il tipo di moto che viene esibito da un fluido interno ad un tubo dipende dal punto dallo sviluppo fluidodinamico si incontrano. In tubo con diametro elevato, il fluido  rispetto a due pareti opposte tende a incontrarsi quando si è sviluppata la turbolenza. È lo stesso fluido ma dato che il moto si sviluppa rispetto alle pareti si sviluppano sulla parete sopra e sotto e la zona dove si incontrano è il moto che il fluido mantiene:

<!Diagramma fluido tubo grande>

Se abbiamo un tubo a diametro piccolo il fluido si incontra al punto laminare e continua così:

<!Diagramma tubo piccolo laminare>

### Profilo di Flusso

Il profilo del flusso dipende da a che punto si incontrano, se si incontrato al flusso laminare allora il profilo sarà parabolico:

<!Diagramma profilo laminare>

Invece si incontrano allo stato turbolente si ha il sotto-strato laminare uguale alla lastra e poi si spiana verso il centro, di nuovo come la lastra:

<!Diagramma profilo tubo turbolente>


Per i tubi:
$$\begin{gather}
Re\leq 2300 \text{ Moto Laminare} \\
2300 \leq Re \leq 4000 \text{ Transizione} \\
Re \geq 4000 \text{ Turbolente}
\end{gather}$$
La equazione per il numero di Reynolds nei tubi è:
$$Re = \frac{\rho w_{m}D}{\mu}$$
Dato che:
$$ \dot{m} = \rho wS\implies w = \frac{\dot{m}}{\rho S}=\frac{\dot{m}}{\rho \frac{\pi D^{2}}{4}} = \frac{4\dot{m}}{\rho \pi D^{2}}$$

Messo insieme:
$$Re = \rho \cdot 4 \frac{\dot{m}}{\rho \pi D^{2}}\cdot \frac{D}{\mu} = \frac{4\dot{m}}{\mu \pi D}$$

### Trovare il punto dove si incontrano

#### Flusso Laminare

<!Diagramma incontro laminare>

Per il flusso laminare il punto dove si incontrano è:
$$x_{i}=0,05 ReD$$
Invece il punto dove gli strati limiti termici incontrano è:
$$x_{i,t} = 0,05ReDPr$$
Nel diagramma sopra Pr = 1 quindi tutti e due i strati limiti si incontrano nello stesso punto.

#### Flusso Turbolente

<!Diagramma turbolente>

Per il flusso turbolente diciamo che ci sono incontrati quando:
$$x_{i}=10D$$
E:
$$x_{t}= 10D$$

### Correlazione Dittus-Böelter

$$Nu = 0,023 Re^{0,8}Pr^{n}$$
n = 0,3 per fluidi in raffreddamento
n = 0,4 per fluidi in riscaldamento

Questa correlazione è valida per:
$0,7 \leq Pr \leq 160$
$Re \geq 10000$

## Convezione Naturale

La convezione naturale è innescata naturalmente dalla densità del fluido.

<!Diagramma convezione naturale>

$$\begin{align}
F_{GALL} &= \rho_{F}gV_{CORPO} \\
F_{NETTA} &= F_{PESO} - F_{GALL} \\
&= \rho_{c}gV_{c}- \rho_{F}gV_{IMMERSO} \\
&= (\rho_{c}-\rho_{F})gV_{EMERGENTE}
\end{align}$$

Analizzando $d\rho$:

Le caratteristiche del fluido sono $\rho,\mu,c^{*},k$

$$\begin{gather}
\alpha_{P} = \frac{1}{v^{*} }\left( \frac{ \partial v^{*}  }{ \partial T }  \right)_{P} \to \text{ cambio di }v^{*} \text{ con } \partial T \\
v^{*}  = \frac{1}{\rho} = \rho^{-1} \\
\alpha_{p} = \rho \left( \frac{ \partial \rho^{-1} }{ \partial T }  \right)_{P} = \rho \cdot \rho^{-2} \left( \frac{ \partial \rho }{ \partial T }  \right)_{P} = \frac{1}{\rho} \left( \frac{ d\rho }{ dT }  \right)_{P} \to d\rho = dT\rho\alpha_{p}
\end{gather}$$
$\alpha_{p}$ è la dilatazione isobara dalla [Lezione 8](FisTec%20-%20Lezione%208.md)

<!Diagramma convezione naturale>
Se metto la sorgente di calore la convezione non innesca perché non si genera un gradiente di densità che innesca il flusso di massa
### Numero di Grashof

Il numero di Grashof misura la proporzione tra la forze di gallaggiamento e le forze viscose.

$$Nu = AGr^{b}Pr^{c}$$
$$Nu = \frac{hL}{k} = \underbrace{ \left( \frac{g\rho^{2}\alpha_{p}(T_{c}-T_{F})}{\mu^{2}}L^{3} \right)^{b} }_{ Gr^{b} }\cdot \underbrace{ \left( \frac{\mu c^{*}}{k_{F}} \right)^{c} }_{ Pr^{c} }$$
La velocità della massa data dal flusso causata dalla convezione naturale è:

$$w_{NAT}= \frac{g\rho\alpha_{p}(T_{c}-T_{F})^{2}L^{2}}{\mu}\implies  Gr = \frac{\rho w_{NAT}L}{\mu}$$

Dato che $Re$ era uguale a $\frac{\rho wL}{\mu}$, è la stessa espressione ma la velocità è quella generata naturalmente non quella imposta da qualsiasi oggetto stia forzando la circolazione.

### Numero di Rayleigh

Il numero di Rayleigh è la proporzione tra le forze di galleggiamento e le forze di attrito viscoso:
$$Ra = \frac{\text{Forze di Galleggiamento}}{\text{Forze di Attrito Viscoso}}=GrPr$$
$$\implies Nu = A\cdot Ra^{b}$$

La espressione per il numero di Rayleigh è:

$$Ra=  \frac{g\rho\alpha_{p}(T_{c}-T_{F})L^{2}}{\mu\alpha}$$

Dove $\alpha = \frac{k}{\rho c}$ è l diffusibilità termica 
Invece $\alpha_{p}$ era il coefficiente di dilatazione isobara dalla [lezione 8](FisTec%20-%20Lezione%208.md).