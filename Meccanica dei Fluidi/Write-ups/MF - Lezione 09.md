---
creation_date: 2024-02-11 14:02
tags:
  - MF
share: true
---
# Lezione 9 - Moto Turbolento

Oggi completiamo il modello. Abbiamo ricavato la forma indefinita, ci serve la forma globale del moto turbolento.

Per ricavare la forma globale, integriamo nel tempo le equazioni globali, queste sono le formule che abbiamo già integrato nello spazio.  Come nella forma indefinita la equazione della accelerazione è quella che ci darà più problemi.

La equazione di continuità globale per fluidi incomprimibile è:
$$\int\limits_{A}^{} \underline{v}\cdot \underline{n} \, dA = 0 $$
La equazione dell'equilibrio dinamico per Navier-Stokes è:
$$\underline{G}+\underline{\Pi}_{p}+\underline{I}+\underline{M}+\underline{T}=0$$
In questa equazione $\underline{M}$ è il termine non lineare.

L'integrale nel tempo della equazione della continuità è:
$$\frac{1}{T}\int\limits_{T}^{} \int\limits_{A}^{} (\underline{v}_{m}+\underline{v}') \cdot \underline{n }\, dA  \, dt \underbrace{ = }_{ \text{Liebniz} } \int\limits_{A}^{} \frac{1}{T}\int\limits_{T}^{} (\underline{v}_{m}+\underline{v}')\cdot \underline{n} \, dt  \, dA = \int\limits_{A}^{} \underline{v}_{m}\cdot \underline{n} \, dA = 0   $$

Il vettore $\underline{G}$ è:
$$\underline{G} \to \frac{1}{T}\int\limits_{T}^{} \int\limits_{W}^{} \rho(\underline{f}_{m}+\underline{f}') \, dW  \, dt \underbrace{ \to }_{ \substack{\text{stesso}\\\text{procedimento}} }  \int\limits_{W}^{} \rho \underline{f}_{m} \, dW $$
Il resto dei vettori sono:
$$\begin{gather}
\underline{\Pi}_{p} \to \frac{1}{T}\int\limits_{T}^{} \int\limits_{A}^{} (p_{m}+p') \underline{n}\, dA  \, dt  = \int\limits_{A}^{} p_{m}\cdot \underline{n} \, dA  \\
\underline{I} \to \frac{1}{T} \int\limits_{T}^{} \int\limits_{W}^{} \frac{ \partial (\rho \underline{v}) }{ \partial t }  \, dW  \, dt  \to -\int\limits_{W}^{} \frac{ \partial (\rho \underline{v}_{m}) }{ \partial t }  \, dW 
\end{gather}$$
Abbiamo applicato Liebniz con T e t perché come abbiamo vsti sono due cose diverse.
$$\underline{T} \to -\frac{1}{T} \int\limits_{T}^{} \int\limits_{A}^{} \mu \frac{ \partial (\underline{v}) }{ \partial n }  \, dA  \, dt = -\int\limits_{A}^{} \frac{ \partial (\underline{v}_{m}) }{ \partial n }  \, dA  $$

Il $\underline{M}$ è:
$$\begin{align}
\frac{1}{T}\int\limits_{T}^{} \int\limits_{A}^{} \rho \cdot \underline{v} \cdot \underline{v}_{n}  \, dA  \, dt &= \rho \int\limits_{A}^{} \frac{1}{T} \int\limits_{T}^{} (\underline{v}_{m}+\underline{v}')(\underline{v}_{nm}+\underline{v}_{n}') \, dx \, dA   \\
&= \rho \int\limits_{A}^{} \frac{1}{T} \int\limits_{T}^{} (\underline{v}_{m} \underline{v}_{nm}+\underline{v}_{m}\underline{v}_{n}'+\underline{v}'\underline{v}_{nm}+\underline{v'}\underline{v}'_{n}) \, dt \, dA \\
&= \underbrace{ \rho \int\limits_{A}^{} \underline{v}_{m}\underline{v}_{nm} \, dA }_{ \underline{M}_{m} } + \underbrace{ \rho \int\limits_{A}^{} (\underline{v'}\underline{v}_{n}') \, dA }_{ \underline{M}' }   
\end{align}$$
$\underline{v}_{n} = \underline{v}\cdot \underline{n}$ $\to$ componente della velocità secondo la direzione del scelta.
$\underline{M}_{m}$ prende la stessa forma di $\underline{M}$, mentre $\underline{M}'$ è l'integrale di prodotti di fluttuazione.

Per la non linearità le fluttuazioni non si spengono, quindi è per come abbiamo preso la media che è apparso $\underline{M}'$.

Mettendo tutto insieme troviamo che la equazione dell'equilibrio dinamico per il moto turbolento ha equazione:
$$\underline{G}_{m}+\underline{\Pi}_{pm}+\underline{I}_{m}+\underline{T}_{m}+\underline{M}_{m}+\underline{M}'=0$$
## Flusso in condotto nel caso turbolento

Come abbiamo visto il flusso in condotto ha certi profili:
<!Diagramma flusso senza turbolenza>

Abbiamo visto che:
$$\tau_{parete} = \gamma  \frac{D}{4}J$$
$$\tau(r) = \gamma  \frac{r}{2}J = \mu \frac{ \partial u }{ \partial r } $$

Il moto turbolento non è lineare come abbiamo visto, possiamo usare il moto turbolento medio che è lineare per vedere se queste relazioni rimangono valide.

Rimane uguale la prima equazioni in cui lo sforzo di attrito alla parte diventa una media temporale e il cadente energetico anche lui diventa una media temporale.

Vediamo che rimane uguale se aggiungiamo i termini di fluttuazione al volume di controllo della condotta:
<!Diagramma termini aggiunti alla condotta>

Il termine di fluttuazione $\underline{M}'$ è:
$$\int\limits_{A}^{} \rho(\underline{v}'u')_{m} \, dA $$
$\underline{M}_{1}' = \underline{M}_{2}'$ perché sezione per sezione le fluttuazioni saranno le stesse.
$\underline{M}_{3}'=0$ per la condizione di aderenza.

### Tubo di corrente con turbolenza

Per ricavare la formula dipendente dal raggio, prendiamo come l'ultima volta un tubo di corrente e ora aggiungiamo i termini della fluttuazione:
<!Diagramma tubo di corrente>

$\underline{M}_{3}'$ in questo caso non lo possiamo eliminare perché nel caso turbolento il flusso non è CGV, la velocità però è lo stesso orizzontale, ci sono lo stesso fluttuazioni che penetrano il contorno che non possiamo eliminare, ci rimane $\underline{M}_{3}'$.

Abbiamo che:
$$\begin{gather}
(p_{1}-p_{2})A = -\tau_{v}p_{w}L+\rho(u'v'_{r})_{m}p_{w}L \\
\underbrace{ \frac{p_{1}-p_{2}}{L} \frac{A}{p_{w}} }_{ \gamma  \frac{r}{2}J = \tau }= -\tau_{v}+\rho(u'v'_{r})_{m} \\
\tau = \tau_{v}+\tau_{t}
\end{gather}$$

Vediamo che lo sforzo di attrito è in parte dato dalla viscosità come abbiamo visto nel caso non turbolento e in parte dalla turbolenza. La cosa interessante è che lo sforzo totale e lo stesso lineare.

Troviamo la funzione rispetto al raggio come:
$$\tau(r) = \gamma  \frac{r}{2}J = -\mu \frac{ \partial u }{ \partial r } +\rho(u'v')_{m}$$

Graficamente il suo andamento è:
<!Diagramma sforzo di attrito>

Più è turbolento il moto più proporzione delle resistenza prende $\tau_{t}$.

Abbiamo anche aggiunto il profilo della velocità. Questo non lo possiamo ricavare matematicamente perché ci sono troppe incognite, ma ricavandolo sperimentalmente troviamo che è più piatta al centro, questo è perché date le fluttuazioni, la parti ai lati più lente riescono ad interagire con le parti più veloci al centro, questo causa un abbattimento al centro visto che ai lati dobbiamo lo stesso aderire alla condizione di aderenza.

Abbiamo allora il nostro diagrammo completo del moto turbolento in condotta:
<!Diagramma moto turbolento in condotta>


## Laminare o Turbolento

La condizione per cui il moto è turbolento è quando il numero di Reynolds e maggiore o minore di 2000.

Il numero di Reynolds ha equazione:
$$Re = \frac{\rho uD}{\mu }= \frac{uD}{\nu}$$

Se è minore di 2000 è laminare se è maggiore è turbolento.

Guarderemo la cadute di carico lungo le condotte e in certi casi (nella prossima lezione)

 Generalmente vogliamo trovare la funzione $J(Q)$. 
 Introduciamo la equazione di Darcy-Weisbach:
 $$J = \frac{\lambda U^{2}}{2gD}$$
Dove $\lambda$ è il carico di resistenza/friction factor.










