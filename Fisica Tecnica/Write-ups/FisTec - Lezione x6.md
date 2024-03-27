---
creation_date: 2023-11-16 15:17
tags:
  - fistec 
share: true
---
# Lezione 16 - Sistemi di Riferimento, variazione e generazione

## Esempio Multistrato

Dato una parete a molti strati tra due sistemi di fluidi:

<!Diagramma parete multistrato>

Si ha la portata termica:
$$\begin{align}
\dot{q}=\frac{\Delta T}{\Sigma R}&=\frac{T_{\infty_{1}}-T_{\infty_{2}}}{R_{CV_{1}}+R_{CD_{1}}+R_{CD_{2}}+R_{CD_{3}}+R_{CV_{2}}} \\
&=\frac{T_{\infty_{2}}-T_{\infty_{1}}}{\frac{1}{h_{1}A}+\frac{S_{1}}{k_{1}A}+\frac{S_{2}}{k_{2}A}+\frac{S_{3}}{h_{3}A}+\frac{1}{h_{2}A}} \\
&= U\cdot A \cdot(T_{\infty_{1}}-T_{\infty_{2}}) \\
& \text{U è il coefficiente globale di scambio termica} \\
& \text{è la somma degli inversi delle resistenze termiche} \\
U&= \frac{1}{\frac{1}{h_{1}}+\frac{S_{1}}{k_{1}}+\frac{S_{2}}{k_{2}}+\frac{S_{3}}{k_{3}}+\frac{1}{h_{2}}}
\end{align}$$
Guardando la frontiera tra due strati, vediamo che le superfice di contatto non sono completamente lisce lasciando dell'aria tra i due strati.

<!Diagramma superfice di contatto>

La presenza di queste imperfezioni crea resistenza aggiuntive puntuali che isolano i due strati creando una discontinuità nella linea delle temperatura:

<!Diagramma linea termica con resistenza>

Un esempio simile sono i microchip dei computer a cui aggiungiamo una pasta conduttiva per rimediare queste imperfezioni.

Quando vogliamo isolare i pezzi questa resistenza in più è utile ma invece quando vogliamo condurre è un problema a cui ci sono alcune soluzioni.

Modi per diminuire $R_{CONT}$:

- Spianare le superfici di contatto e lucidare ( lavorare la superfice per diminuire la ruvidità)
- Pasta conduttiva
- Aumentare la pressione

## Analisi Termica di sistema stazionario senza generazione (Laplace) del caso di un tubo

<!Diagramma tubo con dati>

Come visto a regime stazionario e senza generazione $\frac{ \partial T }{ \partial t }=0$

L'equazione di Laplace $\to$ $\nabla^{2}T=0$

$$\nabla^{2}T = \cancel{ \frac{1}{r} }\frac{ \partial  }{ \partial r } \left( r\frac{ \partial T }{ \partial r }  \right)=0\to r\frac{ \partial T }{ \partial r } = c_{1} $$
Ricaviamo una costante di intergrazione perchè sapendo che la derivata di un calore è 0, signfica che integrale di da una costante.

Sappiamo che:
$$\begin{gather}
\text{per }r=r_{1} \to T(r)=T_{S_{1}} \\
\text{per }r= r_{2}\to T(r)=T_{SE}
\end{gather}$$

Integrando la funzione ricavata:

$$\begin{gather}
\int\limits_{}^{}  \, dT =\int\limits_{}^{} \frac{1}{r}c_{1} \, dr \\
\implies T(r)=c_{1}\ln r +c_{2} \:(\text{Soluzione generale})
\end{gather}$$

Le condizioni di contorno sono:
$$\begin{gather}
T_{S_{1}}=c_{1}\ln r_{1}+c_{1} \:(1) \\
T_{SE}=c_{1}\ln r_{2} +c_{2} \: (2) \\
(2)-(1)\to T_{S_{1}}-T_{SE}=c_{1}\ln \frac{r_{1}}{r_{2}}\to c_{1}=\frac{T_{S_{1}}-T_{SE}}{\ln\left( \frac{r_{1}}{r_{2}} \right)} \\
(1) \to T_{S_{1}} = \frac{T_{S_{1}}-T_{SE}}{\ln\left( \frac{r_{1}}{r_{2}} \right)}\ln r_{1} + c_{2} \to c_{2}=T_{S_{1}}-\frac{T_{S_{1}}-T_{SE}}{\ln\left( \frac{r_{1}}{r_{2}} \right)}\ln(r_{1}) \\
 \\
\text{Tutto messo insieme:} \\
T(r)=\frac{T_{S_{1}}-T_{SE}}{\ln\left( \frac{r_{1}}{r_{2}} \right)}\ln r + T_{S_{1}}-\frac{T_{S_{1}}-T_{SE}}{\ln\left( \frac{r_{1}}{r_{2}} \right)}\ln r_{1} = \boxed{ \frac{T_{S_{1}}-T_{SE}}{\ln\left( \frac{r_{1}}{r_{2}} \right)}\ln\left( \frac{r}{r_{1}} \right)+T_{S_{1}} }
\end{gather}$$

Guardando la sezione A dell'tubo:
<!Diagramma sezione A del tubo>

Troviamo la portata termica:
$$\begin{align}
\dot{q}_{r}&=-kA \frac{ \partial T }{ \partial r }  \\
&=-k\cdot_{2}\pi \cancel{ r }L\left[ \cancel{ \frac{1}{r} } \frac{T_{S_{1}}-T_{SE}}{\ln \frac{r_{1}}{r_{2}}}\right] \\
&= \frac{\frac{T_{S_{1}}-T_{SE}}{\left( \frac{\ln \frac{r_{2}}{r_{1}}}{2\pi kL} \right)}\to\Delta T}{R_{CD}} \\ \\
R_{CD}&=\frac{\ln\left( \frac{r_{2}}{r_{1}} \right)}{2\pi kL} \left[ \frac{K}{W} \right] \\
\text{La }&\text{resistenza convettiva è:} \\
R_{CV} &= \frac{1}{hA}= \frac{1}{h\cdot  2r\pi L}
\end{align}$$

Il circuito rappresentativo del esempio è:

<!Diagramma di circuito rappresentativo>

La portata termica dal liquido all'ambiente è:

$$\dot{q}'_{r}=\frac{T_{F_{1}}-T_{\infty_{2}}}{\frac{1}{h_{1}2\pi r_{1}}+{\frac{\ln \frac{r_{2}}{r_{1}}}{2\pi k}}+\frac{1}{h_{2}\cdot 2\pi r_{2}}}\left[ \frac{W}{m} \right]$$
## Caso della sfera cava

<!Diagramma sfera cava e sezione>

Prendendo un guscio infinitesimale e analizziamo da li:

Dato l'infinitesimale:
$$\begin{gather}
\implies \dot{q}_{r} = \dot{q}_{r+dr} = \text{costante} = -kA\frac{ dT }{ dr } = -k \cdot 4\pi r \frac{ dT }{ dr }  \\
\frac{\dot{q}_{r}}{4\pi}\int\limits_{r_{1}}^{r_{2}}  \, \frac{dr}{r^{2}} = - \int\limits_{T_{S_{1}}}^{T_{S_{2}}} k \, dT \to \frac{\dot{q}_{r}}{4\pi} \left[ -\frac{1}{r} \right]^{r_{2}}_{r_{1}} = -k \left[\stackrel{ }{T}\right]_{T_{S_{1}}}^{T_{S_{2}}} \\
\frac{\dot{q}_{r}}{4r}\left[ \frac{1}{r_{1}}-\frac{1}{r_{2}} \right] = k[T_{S_{1}}-T_{S_{2}}]\to \dot{q}_{r} = \frac{\Delta T}{R_{CD_{sfera}}} \\
= \frac{T_{S_{1}}-T_{S_{2}}}{\frac{\frac{1}{r_{1}}-\frac{1}{r_{2}}}{4\pi k}}
\end{gather}$$

## Resistenze

|               | $R_{CD}$ $[K/W]$                                 | $R_{CD}$ specifiche                      | $R_{CV} [K/W]$ | $R_{CV}$ specifiche |
| ------------- | ------------------------------------------------ | ---------------------------------------- | ------------------------- | ------------------- |
| Parete Piana  | $\frac{S}{kA}$                                   | $\frac{S}{k} [\frac{m^{2}K}{W}] \text{ per } \dot{q}''$                            | $\frac{1}{hA}$            | $\frac{1}{h}[\frac{m^{2}K}{W}]$       |
| Cilindro Cavo | $\frac{\ln \frac{r_{E}}{r_{I}}}{2\pi kL}$        | $\frac{\ln \frac{r_{E}}{r_{I}}}{2\pi k}[\frac{mK}{W}] \text{ per } \dot{q}'$ | $\frac{1}{2\pi rLh}$      | $\frac{1}{2\pi rh}[\frac{mK}{W}]$ |
| Sfera Cava    | $\frac{\frac{1}{r_{I}}-\frac{1}{r_{E}}}{4\pi k}$ | Non Esiste                               | $\frac{1}{4\pi r^{2}h}$   | Non Esiste          |


## Raggio Critico di Isolamento

Il problema del raggio critico di isolamento è un problema che abbiamo con tubi che vogliamo isolare, questi tubi di solito hanno diametro piccolo. Dal raggio 0 al raggio critico l'isolamento diminuisce e dopo questo raggio aumenta.

<!Diagramma tubo con isolamento>

$$\begin{align}
R_{TOT} &= \underbrace{ R_{CV_{1}} }_{ \text{Interno} }+\underbrace{ R_{CDT} }_{ \text{Tubo} }+\underbrace{ R_{CDIS} }_{ \text{Isolamento} } + \underbrace{ R_{CVE} }_{ Esterno } = \\
&= \frac{1}{h_{I}\cdot_{2}\pi r_{I}} + \frac{\ln \frac{r_{E}}{r_{I}}}{2\pi k_{1}} + \frac{\ln \frac{r_{IS}}{r_{E}}}{2\pi k_{IS}} + \frac{1}{h_{E}\cdot 2\pi r_{IS}}
\end{align}$$

Si creano due grafici di resistenza e portata termica rispetto al raggio:

<!Diagramma R e q rispetto a r>

$$\begin{gather}
\frac{dR_{TOT}}{dr_{IS}} = \frac{1}{r_{IS}\cdot 2\pi k_{IS}} - \frac{1}{r^{2}_{IS}\cdot 2\pi h_{E}}=0 \\
\to h_{E}r_{IS}-k_{IS}=0 \to \boxed{ r_{IS}=\frac{k_{IS}}{h_{E}}=r_{CRIS} }
\end{gather}$$

## Sistema Stazionari con Generazione

$$\nabla^{2}T + \frac{\dot{q}'''}{k}=0$$
$\dot{q}'''$ è la portata di calore per pezzo di valore, può esser generato dalla corrente o altri metodi di generazione di potenza.

Data una parete piana con una potenza termica generata internamente:

<!Diagramma generazione interna>

$T_{S_{1}}$ e $T_{S_{2}}$ sono omogenee du ogni area normale a x tale che $\dot{q}$ fluisca lungo x:
$\nabla^{2}T = \frac{ \partial^{2} T }{ \partial x^{2} }$ dato che fluisce lungo x
$$\begin{gather}
\frac{ \partial^{2} T }{ \partial x^{2} } + \frac{\dot{q}'''}{k} = 0 \to \int\limits_{}^{}  \, d^{2}T = -\int\limits_{}^{} \frac{\dot{q}'''}{k} \, dx^{2}  =  \\
= \int\limits_{}^{}  \, dT = \int\limits_{}^{} -\frac{\dot{q}'''}{k}x \, dx +c_{1} dx = \\
=T(x)=-\frac{\dot{q}'''}{2k}x^{2}+c_{1}x+c_{2}
\end{gather}$$
Date le condizioni di contorno:

$$\begin{gather}
T(x=-L) = T_{S_{1}}\to T_{S_{1}}=-\frac{\dot{q}'''}{2k}L^{2}-c_{1}L + c_{2} \:\:(1) \\
T(x=L) = T_{S_{2}} \to T_{S_{2}} = - \frac{\dot{q}'''}{2k}L^{2}+c_{1}L+c_{2}\:\: (2) \\
(1)-(2) \to T_{S_{1}}-T_{S_{2}} = -2c_{1}L \implies  c_{1} = -\frac{T_{S_{1}}-T_{S_{2}}}{2L} \\
(1) \to T_{S_{1}} = -\frac{\dot{q}'''}{2k}L^{2}+\frac{T_{S_{1}}-T_{S_{2}}}{2L}\cdot L+c_{2} \\
\to c_{2}= T_{S_{1}} + \frac{\dot{q}'''}{2k}L^{2} - \frac{T_{S_{1}}-T_{S_{2}}}{2} = \frac{\dot{q}'''}{2k}L^{2}+\frac{T_{S_{1}}-T_{S_{2}}}{2}
\end{gather}$$
Riportando tutto a $T(x)$:

$$\begin{gather}
T(x) = -\frac{\dot{q}'''}{2k}x^{2} - \frac{T_{S_{1}}-T_{S_{2}}}{2L}x + \frac{\dot{q}'''}{2k}L^{2}+\frac{T_{S_{1}}+T_{S_{2}}}{2} = \\
\boxed{ T(x)= \frac{\dot{q}'''}{2k}(L^{2}-x^{2}) - \frac{T_{S_{1}}-T_{S_{2}}}{2L}x + \frac{T_{S_{1}}+T_{S_{2}}}{2} }
\end{gather}$$

La portata termica è:
$$\begin{gather}
\dot{q}_{x}=-kA\frac{ dT }{ dx } = -kA\left[ -\frac{2\dot{q}'''}{2k}x +\frac{T_{S_{2}}-T_{S_{1}}}{2L}\right]= \dot{q}'''\cdot x\cdot A+\frac{T_{S_{1}}-T_{S_{2}}}{2L}kA \\
\to \boxed{ \dot{q}_{x} = \dot{q}_{x}'''\cdot x\cdot A+\frac{T_{S_{1}}-T_{S_{2}}}{2L} }
\end{gather}$$

#### Cosa Succede se $T_{S_{1}}=T_{S_{2}}=T_{S}$

La equazione di $T(x)$ trovata prima con i valori $T_{S_{1}}=T_{S_{2}}$:
$$T(x)= \frac{\dot{q}'''}{2k}(L^{2}-x^{2})+T_{S}$$
Abbiamo che:
$\dot{q}_{x}=\dot{q}'''\cdot x\cdot A$ e $\dot{q}_{x}''=\dot{q}'''\cdot x$

Dato che $T(x)$ ha una curva parabolica che ha tangente nulla al centro dal pezzo, significa che $T_{max}$ sarà nel mezzo:

<!Diagramma parabola centrata>

La equazione per $T_{max}$ è:
$$T_{max} = T_{S}+\frac{\dot{q}'''}{2k}L^{2}$$

La curva in basso è la portata termica.
#### Caso se $T_{S_{1}}>T_{S_{2}}$:

<!Diagramma curva a sinistra>

Nel caso che $T_{S_{1}}>T_{S_{2}}$ il picco della parabola è spostato a sinistra perché è la somma della differenza tra le temperature più quella generata internamente, che causa una parabola spostata. La curva del calore è in basso.
Il calore è più alla sinistra perché la differenza in temperatura a $T_{max}$ è bassa. 
#### Caso se $T_{S_{1}}<T_{S_{2}}$:

<!Diagramma curva a destra>

Nel caso che $T_{S_{1}}<T_{S_{2}}$ il picco della parabola è spostato a destra perché è la somma della differenza tra le temperature più quella generata internamente, che causa una parabola spostata. La curva del calore è in basso.
Il calore è più alla destra perché la differenza in temperatura a $T_{max}$ è bassa.
### Se volessi $T(x)$ in $T_{\infty}$ e h quando $T_{S_{1}}=T_{S_{2}}$:

$$\dot{E}_{GEN} = \dot{E}_{OUT} \leftarrow \text{Regime Stazionario}$$
$$\begin{gather}
\dot{q}'''\cdot L= h(T_{S}-T_{\infty}) \\
T_{S}= T_{\infty} + \frac{\dot{q}'''\cdot L}{h} \\
\text{Prendendo T(x) da prima:} \\
T(x)=\frac{\dot{q}'''}{2k}(L^{2}-x^{2}) + T_{\infty} + \frac{\dot{q}'''L}{h}
\end{gather}$$

## Sistema Cilindro stazionario con generazione

<!Diagramma cilindrico per generazione>

Poisson per i Cilindri è:

$$\begin{gather}
\frac{1}{r}\frac{ \partial  }{ \partial r } \left( r\frac{ \partial T }{ \partial r }  \right)+\frac{\dot{q}'''}{k}=0\to \int\limits_{}^{}  \, d\left( r\frac{ dT }{ dr } \right) = \int\limits_{}^{} -\frac{\dot{q}'''}{k} \, r\:dr \\
r\frac{ dT }{ dr } = -\frac{\dot{q}'''}{2k}r^{2}+c_{1} \\
\int\limits_{}^{}  \, dT = \int\limits_{}^{} -\frac{\dot{q}'''}{2k}rdr + \frac{c_{1}}{r} \, dr \\
T(r) = -\frac{\dot{q}'''}{4k}r^{2}+c_{1}hr+c^{2} \\ 
\end{gather}$$
Se $T_{S_{1}}=T_{S_{2}}$ allora sappiamo che $\dot{q}_{r}(r=0) = 0$ e che $T(r=r_{o})= T_{S}$

Le condizioni di contorno sono:

$$\begin{gather}
-k\left[ -\frac{\dot{q}'''}{4k}-2r+\frac{c_{1}}{r} \right] = 0 \implies c_{1}=0 \\
T_{S} = -\frac{\dot{q}'''}{4k}r_{o}^{2}+c_{2} \to c_{2}=T_{S}+ \frac{\dot{q}'''}{4k}r_{o}^{2}
\end{gather}$$
Troviamo $T(r)$:
$$\begin{gather}
T(r)=-\frac{\dot{q}'''}{4k}r^{2}+\frac{\dot{q}'''}{4k}r_{o}^{2}+T_{S}=\frac{\dot{q}'''}{4k}(r_{o}^{2}-r^{2})+T_{S} \\
T_{MAX} = T(r=0) = T_{S}+\frac{\dot{q}'''}{4k}r_{o}^{2} \to \substack{\text{Più aumenta r del cilindro}\\\text{più alto è }T_{MAX}}
\end{gather}$$
La portata termica:
$$\begin{gather}
\boxed{ \dot{q}_{r} }=-kA\frac{ dT }{ dr } =-k\cdot 2\pi rL \left[ -\frac{2\dot{q}'''}{4k}r \right] = \boxed{ \dot{q}'''\cdot \pi r^{2}L } \\
\dot{q}'_{r} = -k \frac{ \partial T }{ \partial r } = \frac{\dot{q}'''}{2}r^{2}
\end{gather}$$
