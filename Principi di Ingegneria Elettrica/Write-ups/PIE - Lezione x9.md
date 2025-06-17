---
creation_date: 2023-11-28 20:19
tags:
  - PIE
share: true
---
# Lezione 19

## Ripasso

$$\begin{align}
\text{Legge di Kirchhoff delle Tensioni Magnetiche}\to&\sum_{i}^{n} U_{n} = \sum_{i}^{n}N_{i}I_{i}\\
\text{Legge di Kirchhoff delle Correnti Magnetiche}\to& \sum\varphi_{k}=0 \to \varphi = \int\limits_{S}^{} \vec{B}\cdot \vec{n} \, dS \\
\text{Legge di Ohm Magnetica} \to& U_{k} = \theta_{k}\varphi_{_{k}} 
\end{align}$$

Se prendiamo un circuito magnetico com per esempio:

<!Diagramma circuito magnetico con 2 bovine>

È possibile disegnare un circuito elettrico analogo:

<!Diagramma circuito elettrico analogo>

Abbiamo equazione per la resistenza:
$$\theta_{i}=\frac{1}{\mu_{o}}\cdot \frac{\delta_{i}}{A_{Fe}}$$
Invece il lavoro ricavato è:
$$W = \frac{1}{2}Li^{2}$$

## Induttanza - Definizione

$$\boxed{ L = \frac{\Psi}{i}=\frac{N\varphi}{i} }\to \Psi \text{ è detto flusso concetanato}$$

Guardando una bovina il flusso concatenato è il flusso totale che è generato nella bovina.
<!Diagramma bovina>
Con $\varphi = \int\limits_{B}^{} \vec{B} \hat{n} \, dS$

## Autoinduttanze

La autoinduttanze è la induttanza della bovina con ogni altra bovina "spenta" cioè:
$$L_{11}=\frac{\Psi_{1}}{i_{1}}$$
$$L_{22}= \frac{\Psi_{2}}{i_{2}}$$

### Mutue Induttanze

Quando teniamo solo una bovina accesa il flusso generato da quella bovina passa attraverso le altre bovine generando della induttanza e corrente, questa induttanza è chiamata induttanza mutua ed ha equazione:

$$\begin{gather}
L_{12} = \frac{\Psi_{1}}{i_{2}}\Bigg|_{i_{1}=0} \\
L_{21} = \frac{\Psi_{2}}{i_{1}}\Bigg|_{i_{2}=0}
\end{gather}$$

Il flusso totale ha equazione:

$$\left\{\begin{gather}
\Psi_{1TOT} = L_{11}i_{1}+L_{12}i_{2} \\
\Psi_{2TOT} = L_{21}i_{1}+L_{22}i_{2}
\end{gather}\right\}$$

## Legge di Faraday e le sue conseguenze

Il flusso passante per una bovina non genera un corrente ma in verità genera un tensione e:

<!Diagramma e con flusso bovina>

La legge di Lenz ci da che:
$$e = -\frac{d\Psi}{dt}$$
Questo ci dice che la tensione generata genera un flusso opposto a quello che la ha generata ergo il sistema prova sempre a ritornare a 0.

Come una resistenza dove si può applicare $v=Ri$ solo quando le frecce hanno le direzioni giuste, possiamo usare questa equazione solo quando $e$ ha la direzione giusta:

<!Diagramma e con direzione giusta>

La legge di Faraday generale invece prende la $e$ nella direzione opposta detta $e^{*}$ che in elettrotecnica è dato il simbolo $e$ perché è più utile dell'$e$ vero.

$$e^{*} =-e=\frac{d\Psi}{dt}$$
<!Diagramma con e*>

### Legge di Faraday per sistema a singola bovina

Si ha:
$$\begin{gather}
\Psi = Li \\
e = \frac{d\overbrace{Li}^{\Psi_{TOT}}}{dt} = L\frac{di}{dt} \\
e =  \frac{d\Psi_{TOT}}{dt} \to e \text{ è detta forza elettromotrice}
\end{gather}$$


Da qui possiamo ricavare la equazione per il lavoro:

$$\begin{gather}
e= \frac{d\Psi_{TOT}}{dt} \\
\int\limits_{}^{} i \, d\Psi = \int\limits_{}^{} e \cdot i\, dt = \Delta W' \\
\implies \boxed{ W } = \int\limits_{}^{} i \, d\Psi  = \int\limits_{}^{} i \, d(Li) = \int\limits_{}^{} L\cdot i \, di = \boxed{ \frac{1}{2}Li^{2} } 
\end{gather}$$

Dato un circuito semplice:

<!Diagramma circuito ultimo cartaceo>

$$\begin{gather}
\varphi = \frac{Ni}{\theta_{o}} \implies \Psi = N\varphi = \frac{N^{2}i}{\theta_{o}} \\
L = \frac{\Psi}{i} = \frac{\frac{N^{2}i}{\theta_{o}}}{i} = \frac{N^{2}}{\theta_{o}}
\end{gather}$$
## Sistema a Due Bovine Accese

Prendiamo $\Psi_{TOT}=L_{11}i_{1}+L_{12}i_{2}$.

Il circuito ci da questo flusso:

<!Diagramma circuito con 2 bovine>

L'autoinduzzione ha equazione:
$$\begin{gather}
L_{11} = \frac{\Psi_{1}}{i_{1}} \\
\varphi_{1} = \frac{N_{1}i_{1}}{\theta_{1}+(\theta_{2}//\theta_{3})} \\
\implies L_{11} = \frac{N_{1}\varphi_{1}}{i_{1}} = \frac{N_{1}^{2}}{\theta_{1}+(\theta_{2}//\theta_{3})}
\end{gather}$$
Invece la induzione mutua è:
$$\begin{gather}
L_{21} = \frac{\Psi_{2}}{i_{1}}\Bigg|_{i_{2}=0} \\
\varphi_{2}= \frac{N_{2}i_{2}}{\theta_{1}+(\theta_{2}//\theta_{3})} \cdot \frac{\theta_{3}}{\theta_{3}+\theta_{2}} \\
L_{21} = \frac{N_{2}N_{1}}{\theta_{1}+(\theta_{2}//\theta_{3})}\cdot \frac{\theta_{3}}{\theta_{3}+\theta_{2}}
\end{gather}$$
In generale le autoinduttanze hanno il numero di spire stesse alla seconda invece la induttanze mutue hanno al numeratore il prodotto del numero delle 2 spire.

### Uguaglianza di $L_{12}$ e $L_{21}$

$L_{12}$ e $L_{21}$ sono sempre,sempre uguali per tutti i sistemi che noi considereremo.

#### Dimostrazione

Dato il diagramma del lavoro in base alla corrente 1 e la corrente 2:
<!Diagramma lavoro>

Abbiamo:

$$\begin{gather}
\Psi_{1TOT} = L_{11}i_{1} + L_{12}i_{2} \\
\Psi_{2TOT} = L_{21}i_{1} + L_{22}i_{2} \\
 \\
W = \int\limits_{l}^{} (i_{1}\cdot d\Psi_{1} + i_{2} d\Psi_{2}) \, \\
 = \int\limits_{}^{} (i_{1}d(L_{11}i_{1}+L_{12}i_{2}))+i_{2}d(L_{21}i_{1}+L_{22}i_{2}) \, \\
= \int\limits_{P}^{} L_{11}i_{1} di_{1} + L_{12}i_{1}di_{2} + L_{21}i_{2}di_{2}+L_{22}i_{2}di_{2}\,   
\end{gather}$$

Seguendo il percorso P lungo $i_{1}$ e poi lungo $i_{2}$ abbiamo:

$$= \frac{1}{2}L_{11}i_{1}^{2}+L_{12}i_{1}i_{2}+\frac{1}{2}L_{22}i_{2}^{2} = W$$
Invece seguendo il percorso P lungo $i_{2}$ e poi $i_{1}$ abbiamo:
$$= \frac{1}{2}L_{22}i_{2}^{2}+\frac{1}{2}L_{11}i_{1}^{2}+L_{21}i_{1}i_{2}=W^{*} $$

Dato che il campo è conservativo implica che questi due valori per il lavoro devono esser uguali:

$$L_{12}=L_{21} = L_{m}\to \text{Induttanza mutua}$$
La equazione del lavoro è:
$$\boxed{ W = \frac{1}{2}L_{11}i_{1}+L_{m}i_{1}i_{2}+\frac{1}{2}L_{22}i_{2}^{2} }$$

$L_{m}i_{1}i_{2}$ è la energia accumulata
## Somma del Flusso

Prendiamo un circuito magnetico così:
<!Diagramma circuito elettrico e magnetico>

Se le due bovine generano flusso nella stessa direzione si ha:
$$\varphi = \frac{N_{1}I_{1}+N_{2}I_{2}}{2\theta}$$
Se invece le due bovine generano flusso in direzione opposte si ha:
$$\varphi = \frac{N_{1}I_{1}-N_{2}I_{2}}{2\theta}$$

In generale possiamo scegliere la direzione del flusso che ci facilita di più i calcoli, contassegnamo con $\bullet$
i lati dove le correnti devono entrare per generare flusso nella stessa direzione.

Se scegliamo $\varphi$ nella stessa direzione è più facile usare l'equazione di W e $L_{m}i_{1}i_{2}$ è positivo, quindi il sistema accumula energia.

Se invece prendiamo in senso opposto è possibile che $L_{m}i_{1}i_{2} \lesseqgtr 0$ quindi potrebbe accumulare energia ma potrebbe anche non accumulare energia.







