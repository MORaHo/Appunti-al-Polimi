---
creation_date: 2023-11-22 22:06
tags:
  - fistec 
share: true
---
# Lezione 17 - Alette, Conduzione a Temperatura Variabile e Convezione

## Alette

Le alette sono pezzi di materiale, di soli metallico, che viene utilizzato per il raffreddamento.

Data la Legge di Newton per la convezione:

$$\dot{q} = hA (T_{s}-T_{\infty})$$
Vediamo che il calore aumenta con l'area del pezzo quindi più area più scambio di calore.

<!Diagramma>

Un aletta può esser rappresentata così:

<!Diagrama alette con superfici curve>

La superfice dell'isoterma è curva perché accanto ai lati il calore è trasmesso di più, però con materiali che conducono di più questa curvatura diminuisce e possiamo dive che cambio lungo piano successivi isotermi.

<!Diagramma piano successivi>

Prendendo una sezione infinitesimale dell'aletta troviamo che:

<!Diagramma sezione infinitesimale>

$$\begin{gather}
\dot{q}_{x}=\dot{q}_{x+dx}+d\dot{q}_{\tiny{CV}}
\end{gather}$$
Con il postulato di Fourier sappiamo $\dot{q}_{x}$:

$$\dot{q}_{x}=-kA_{T}\frac{ \partial T }{ \partial x } $$
Possiamo usare la serie di Taylor e il postulato di Fourier per trovare $\dot{q}_{x+dx}$:
$$\begin{align}
\dot{q}_{x+dx} &= \dot{q}_{x}+ \frac{d\dot{q}}{dx}dx \\
&= -kA_{T}\frac{ dT }{ dx } -kA_{T}  \frac{d^{2}T}{dx^{2}}dx
\end{align}$$
E passiamo che la convezione ha equazione:

$$d \dot{q}_{cv} = h\:dA_{S}\cdot(T-T_{\infty}) = hpdx (T(x)-T_{\infty})$$
Mettendo tutto insieme:

$$\begin{gather}
\cancel{ -kA_{T}\frac{ dT }{ dx }  } = \cancel{ -kA_{T} \frac{ dT }{ dx } } - kA_{T} \frac{d^{2}T}{dx^{2}}\cancel{ dx } + hp(T(x)-T_{\infty})\cancel{ dx } \\
\implies kA_{T} \frac{d^{2}T}{dx^{2}} = hp(T(x)-T_{\infty}) \\
\implies \frac{d^{2}T}{dx^{2}} - \frac{hp}{kA_{T}} [T(x)-T_{\infty}] = 0
\end{gather}$$

I parametri che introduciamo per le alette sono:
- Sovratemperature Aletta
$$\theta(x)=T(x)-T_{\infty} \geq 0$$
Questo valore = 0 se l'aletta è abbastanza lunga tale che $T(x)=T_{\infty}$
- $m^{2} = \frac{hp}{kA_{T}}$

Riscrivendo la equazione trovata:

$$\boxed{ \frac{d^{2}\theta}{dx^{2}}-m^{2}\theta(x)=0 }$$
Integrando questa equazione di secondo ordine troviamo:
$$\theta(x)=c_{1}e^{mx}+c_{2}e^{-mx}$$

Studiando una aletta infinitamente lunga, abbiamo $T(x=L)=T_{\infty}$

$$\implies \theta(x=L)=0 \text{ perchè }T(x=L)=T_{\infty}$$
Alla base dell'aletta cioè per $x=0$ si ha:

$$\begin{gather}
\theta(x=0) = T_{b}-T_{\infty} = \theta_{b} \to \boxed{ c_{2} = \theta_{b} }
\end{gather}$$
Questo significa che abbiamo:
$$\boxed{ \theta(x)=\theta_{b}e^{ -mx } }$$
Questa equazione genera grafico per x:

<!Diagramma teta-x>

Se la temperatura dell'aletta diminuisce a superfici piane, il calore esce perpendicolarmente e in modo esponenzialmente piccolo.

Il calore convettivo emmesso è:
$$\begin{align}
\boxed{ \dot{q}_{a} }= \dot{q}_{b} &= -kA_{T}\frac{ dT }{ dx } \Bigg|_{x=0} \\
&= -kA_{T} \frac{ d\theta }{ dx } \Bigg|_{x=0} \\
&= -kA_{T} \frac{ d(\theta_{b}e^{ -mx }) }{ dx } \Bigg|_{x=0} \\
&= kA_{T}m\theta_{b}e^{ -mx }\Bigg|_{x=0} \\
&= kA_{T}m\theta_{b} \\
&= kA_{T} \sqrt{ \frac{hp}{kA_{T}} } \theta_{b} \\
&= **\sqrt{ hpkA_{T} } \cdot \theta_{b}**
\end{align}$$

Per evitare di fare tutti questi conti ci viene data l'efficienza convettiva del pezzo.

$$\eta_{A} = \frac{\dot{q}_{A}}{\dot{q}_{MAX}} = \frac{\dot{q}_{A}}{hA\cdot\theta_{b}}$$
Se l'aletta fosse tutta isoterma a $T_{b}$, il flusso sarebbe il massimo possible.
Alette di diverse forme hanno efficienze diverse e le possiamo mappare:

<!Diagramma efficienze>

$L_{c}$ è la lunghezza caratteristica cioè il rapporto tra il volume e la superfice esterna. Vediamo anche che la efficienza è affettuata dalla forma, le condizioni di lavoro e il materiale.

## Conduzione in Regime Variabile

Nella conduzione a regime variabile abbiamo

$$\alpha \nabla^{2}T + \frac{\dot{q}'''}{\rho c^{*} }=\frac{ \partial T }{ \partial t } $$
Non useremo questa equazione data la sua complessità, useremo il metodo dei parametri concentrati (RC).

Immaginiamo mettere un pezzo di acciaio caldo in una vasca d'olio:

<!Diagramma acciaio in olio>

Possiamo studiare usando il metodo dei parametri concentrati solo se la temperatura omogenea nel tempo.

<!Diagramma temperatura isoterme>

Dato che la temperatura deve rimanere omogenea nel tempo e diminuisce significa che $\vec{\nabla}T$ è nullo ma $\dot{q}\neq 0$

$$\underbrace{ \dot{q} }_{ \neq 0 } = -kA\vec{\nabla}T = -kA\underbrace{ \left( \frac{ dT }{ dx } +\frac{ dT }{ dy } + \frac{ dT }{ dz } \right) }_{ \to_{0} } $$
L'unico modo perché questo funzioni è se la conducibilità termica $k$ è infinita (o effettivamente molto alta).

Questo significa che:
$$R_{CD_{SOLIDO}} \ll R_{CV_{SOLIDO-FLUIDO}}\to \boxed{ \frac{L_{c}}{k_{s}A}\ll \frac{1}{h_{S-L}A} }$$
Se questa condizione è vera possiamo usare il metodo dei parametri concentrati.

### Metodo dei Parametri Concentrati

Facendo l'analisi energetica abbiamo che:
$$\dot{E}_{ACC} = - \dot{E}_{OUT}$$
Dove $\dot{E}_{ACC}$ è la potenza accumulata dal solido
$$\frac{ dU }{ dt } =-\dot{E}_{OUT}\implies \rho c^{*} V\frac{ dT }{ dt } = -hA_{S}[T(b)-T_{\infty}]$$

Dato che abbiamo $\theta(t)=T(t)-T_{\infty}$
Se $T_{\infty}=$ cost"
$$\begin{gather}
\rho c^{*} V \frac{d\theta}{dt} = -hA_{S}\theta(t) \\
\rho c^{*} \frac{V}{hA_{s}}\cdot \int\limits_{\theta_{i}}^{\theta} \frac{1}{\theta} \, d\theta  = -\int\limits_{t=0}^{t}  \, dt 
\end{gather}$$
Per t = 0 $\to$  $\theta=T_{i}-T_{\infty}=\theta_{i}$
Integrando abbiamo:
$$\frac{\rho c^{*} V}{hA_{s}}\ln\frac{\theta}{\theta_{i}}=-t \to \ln\frac{\theta}{\theta_{i}}=-\frac{t}{\left( \frac{\rho c^{*}V}{hA} \right)}$$
Isolando $\theta$ troviamo che:

$$\boxed{ \theta }=\theta_{i}\exp\left[ -\frac{t}{\left( \frac{\rho c^{*}V}{hA} \right)} \right] = \boxed{ \theta_{i}e^{ -\frac{t}{\tau} } }$$
In forma esplicita abbiamo:
$$\boxed{ \frac{\theta}{\theta_{i}} = \frac{T(t)-T_{\infty}}{T_{i}-T_{\infty}}e^{ -\frac{t}{\tau} } }$$

Queste equazione sono come quelle dell'elettrotecnica dove abbiamo un esponenziale che ci definisce come una variabile varia nel tempo. Anche qui $\tau$ è la costante di tempo è prendiamo $t=\infty$ quando $t>5\tau$

Troviamo $\tau$ con l'equazione:
$$\tau = \underbrace{ \rho c^{*} V }_{ \substack{\text{Capacità di}\\\text{Accumolo -C}} }\cdot \underbrace{ \frac{1}{hA_{s}} }_{ R_{CONV} } = CR$$
Questi due sono i parametri concentrati.

Analizzando $\frac{\theta}{\theta_{i}}$ nel tempo ricaviamo il grafico:
<!Diagramma tau/tau nel tempo>

Il grafico inizia sempre a 1 perché come abbiamo detto prima $T(0)=T_{i}$
La tangente della linea è $\tau$, quindi se per esempio avessimo un $\tau$ più grande il $\frac{\theta}{\theta _{i}}$ diminuirebbe più lentamente di prima.

Dato che $\tau = R_{CV}\cdot C$, meno resistenza significa che $\frac{\theta}{\theta_{i}}$ $\to$ 0 più velocemente, questo è lo stesso capacità. Questo è vero anche per l'opposto $\to$ più alto $\implies$ più lento.

Data la alta conducibilità richiesta dal metodo dei parametri concentrati la linea delle temperatura attraverso un pezzo diventa uguale (o almeno quasi) ad una linea orrizontale:

<!Diagramma linea termica orizzontale>

Dato che la portata calorica data alla conduzione e alla convezione è uguale in tutti e tre i casi significa che il metodo dei parametri concentrati si può usare solo se $T_{S_{1}}=T_{S_{2}}$, cioè è omogeneo.

$$\frac{T_{S_{1}}-T_{S_{2}}}{\frac{L}{kA_{s}}}= \frac{T_{s}-T_{\infty}}{\frac{1}{hA_{s}}}$$

Questa L è lo spessore non la lunghezza caratteristica.

$$\frac{T_{S_{1}}-T_{S_{2}}}{T_{S_{2}}-T_{\infty}}= \frac{\left( \frac{L}{kA_{s}} \right)}{\left( \frac{1}{hA_{s}} \right)} \left( = \frac{R_{CD}}{R_{CV}} \right) = \frac{L}{kA_{S}}\cdot hA_{s} = \frac{hL}{k} = Bi \to \substack{\text{Numero}\\\text{di Biot}}$$

##### Quale deve esser $T_{S_{1}}-T_{S_{2}}$ per usare il metodo dei parametri concentrati?

Per i parametri concentrati$\implies$ T uniforme nel solido $\implies$ $T_{S_{1}}-T_{S_{2}} \ll T_{S}-T_{\infty}\implies \boxed{ Bi <<1 }$ 

La condizione generale per l'uso del metodo dei parametri concentrati è che:

$$\boxed{ Bi \leq 0,1 }$$
Questo significa che il fluido deve esser 10 volte più resistente del materiale che conduce.

$$Bi = \frac{hL_{c}}{k_{s}} \to L_{c} = \frac{V_{s}}{A_{s}}$$

## Convezione Termica

La convezione occorre secondo la legge di Newton: $$\dot{q} = hA(T_{s}-T_{f})$$
<!Diagramma sistema>

Ci sono 2 tipi di convezione:
- Naturale
	- Quando il flusso di massa/moto convettivo si innesca naturalmente
- Forzata
	- Il flusso di massa/moto convettivo è forzato da un agente esterno

Un esempio di convezione naturale è il termosifone:

<!Diagramma termosifone>

La convezione è molto più forte delle conduzione dato il flusso di massa a pari temperatura che permette la trasmissione di calore stabile nel tempo.

Se aggiungiamo un ventola sotto il termosifone (già messa nel diagramma) il moto è principalmente grazie a quello.

La convezione esterna è la convezione da un fluido esterno alla sorgente di calore, questa convezione segue la lette di Newton: 
$$\dot{q}=hA(T_{s}-T_{\infty})$$

Invece la convezione interna è la convezione che occorre ad un fluido interno ad un sistema, l'esempio principale è un tubo:

<!Diagramma tubo convezione interna>

Questa convezione segue le legge:
$$\dot{q}=hA(T_{s}-T_{A})$$
Dato che esiste un gradiente di temperature interne al tubo, usiamo $T_{A}$, la temperature di miscelamento adiabatico, come sostituto per la temperatura del fluido. $T_{A}$ si trova come:
$$=\frac{\int\limits_{S}^{} \rho c^{*} wT \, dS}{\int\limits_{S}^{} \rho c^{*} w \, dS } $$
## Parametri delle convezione

La convezione è la somma del trasporto diffusivo molecolare e il trasporto macroscopico di massa

Il trasporto diffusivo è per esempio la diffusione dell'inchiostro nell'acqua, invece il trasporto macroscopico di massa è per esempio se mischiassimo l'inchiostro dentro all'acqua.

### Trasporto diffusivo di massa $\to$ Legge di Fick

$$\underbrace{ \vec{\Phi}_{M} }_{ \left[ \frac{mol}{m^{2}\cdot s} \right] } = \underbrace{ -\overline{D}_{M} }_{ \underbrace{ \substack{\text{Diffusibilità}\\\text{della specie}} }_{ \left[ \frac{m^{2}}{s} \right] } } \cdot \underbrace{ \vec{\nabla}C_{i} }_{ \underbrace{ \substack{\text{Gradiente}\\\text{della}\\\text{concentrazione}} }_{ \left[ \frac{\frac{mol}{m^{3}}}{m} \right] } }$$

La diffusione nella direzione preferenziale è:
$$\Phi_{Miy}=-D_{Mi}\cdot \frac{ dC }{ dy } $$

### Trasporto diffusivo di Calore $\to$ Legge di Fourier

$$\left[ \frac{W}{m^{2}} \right] \vec{\Phi}_{G} = - \overline{\alpha}_{} \underbrace{ \vec{\nabla} (\rho c^{*} T) }_{ \left[ \frac{kg}{m^{3}}\cdot \frac{J}{kgK}\cdot K\cdot \frac{1}{m} \right] } $$
### Trasporto diffusivo della Quantità di Moto

$$\Phi_{q}=-\nu \cdot\vec{\nabla}(\rho \vec{w})$$
$\nu$ è viscosità cinematica = $\frac{\mu}{\rho}$ dove $\mu$ è la viscosità dinamica.

La equazione per la diffusione nelle direzione preferenziale è:
$$\Phi_{My}=-\mu \left( \frac{ \partial w }{ \partial y }  \right)=-\frac{\mu}{\rho}\cdot \frac{ \partial \rho w }{ \partial y } = - \nu \cdot \frac{ \partial \rho w }{ \partial y }$$

# 

La convezione è effettuata da questi tre parametri e sono la ragione per la diffusione, ogni parametri ha effetto su quanto calore può esser scambiato dal fluido.

## Convezione Forzata/ Termofluidodinamica

Studiamo la termofluidodinamica di un fluido su una lasta piana.

<!Diagramma termofluidodinamica>

Quando un fluido spinto sopra una lasta piana si sviluppa il moto rispetto alla distanza viaggiata attraverso la lastra.

La linea superiore che vediamo è lo spessore strato limite fluidodinamico ed è la linea dove gli effetti di attratito con la superfice scompariscono, la linea se stessa ha fluido che viaggia a $0,99w_{\infty}$, sotto la linea il fluido ha velocità che varia dipendendo dalla distanza dalla superfice.

Il moto del fluido laminare, ma quando lo strato inizia ad espandere entra un periodo di transizione dove dopodiché inizia il moto turbolente. 

### Zona di Moto Lineare

Il profilo della zona lineare aumenta in modo parabolico e internamente la velocità del fluido aumenta in modo parabolico.

<!Diagramma moto laminare>

### Zona Moto Turbolente

La zona di moto turbolente ha un profilo delle velocità un'pò più complesso.

In basso il profilo è parabolico data la presenza di uno sotto-strato laminare che come nella zona laminare ha profilo parabolico. Sopra lo sotto-strato si ha un profilo spianato che rappresenta l'aumento lento della velocità fino alla velocità dello strato limite.

<!Diagramma profilo moto turbolente>

## Numero di Reynolds Re $[adim]$

Il numero di Reynolds rappresenta la relazione tra le forze d'inerzia nel fluido e le forze viscose:

$$Re = \frac{\text{Forze d'inerzia}}{\text{Forza Viscose}} = \frac{\rho wL_{c}}{\mu} = \frac{wL_{c}}{\nu}$$

$\mu$ - viscosità dinamica
$\nu$ - viscosità cinematica

Il numero di Reynolds è grande quando il moto è turbolente ed è piccolo quando il moto è laminare.
($\sim 1$ per transizione)

Il questo caso $L_{c}$ è la lunghezza caratteristica che è la lunghezza viaggiata lungo la piastra cioè $x$, questo spiega perché il moto cambia lungo $x$.

- Per $x$ piccolo
	- Le forze viscose prevalgono sulle forze d'inerzia
	- $\implies$ moto laminare
- Per $x$ grande
	- Le forze d'inerzia prevalgono sulle forze viscose
	- $Re$ elevato $\implies$ moto turbolente