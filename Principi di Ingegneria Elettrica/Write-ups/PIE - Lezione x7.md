---
creation_date: 2023-11-21 20:59
tags:
  - PIE
share: true
---
# Lezione 17 - Transitori e Macchine Elettriche

## Ripasso

Con i transitori di prima ordine analizziamo come cambia un sistema tra $t=0^{+}$ e $\infty$

Una qualsiasi variabile (anche quelle di non stato) hanno equazione:
$$x(t)=(x(0^{+})-x(\infty))\cdot e^{ -\frac{t}{\tau} }+x(\infty)$$
A $t=\infty$ la variabile è in regime DC

A $t=0^{+}$ imponendo le variabili di stato:

Induttore:
<!Diagramma induttore>
E condensatore:
<!Diagramma condensatore>

A $t=0^{-}$ di ha come a $t=\infty$ un circuito a regime DC, le variabili di stato a $t=0^{+}$ sono uguali a quando $t=0^{-}$.

Per l'induttore sia ha $\tau=\frac{L}{R_{eq}}$, invece per i condensatori di ha $\tau = R_{eq}C$.
Dove $R_{eq}$ è la resistenza "vista" dal induttore con Thevenin.
## Transitori di Condensatore

Dato un circuito in parallelo con condensatori:
<!Diagramma circuito con condensatore>

Sappiamo che:$$i_{c}=C \frac{dv_{c}}{dt}\text{ e }i_{R}=\frac{V_{R}}{R}$$
Quindi:
$$\implies A= \frac{1}{R}v_{c}+C \frac{dv_{c}}{dt}$$
Questo è simile all'induttore dove era $E = Ri + L \frac{di}{dt}$

La equazione di primo ordine è composta da parte omogenea e parte particolare tale che:
$$v_{c}(t)=v_{co}(t)+v_{cp}(t)$$

Troviamo la soluzione particolare ponendo $t=\infty$

<!Diagramma t=  infty>

Troviamo che: $$v_{cp}(t)=v_{c}(\infty)=\frac{R}{A}$$
Ritornando alla equazione di primo ordine abbiamo che:
$$v_{c}(t)=Be^{ -\lambda t }+RA = Be^{ -\frac{t}{\tau} }+RA$$

Da prima abbiamo che:
$$A = \frac{1}{R}v_{c}+C \frac{dv_{c}}{dt}\implies 0 = \frac{1}{R}+C\lambda \implies  -\lambda - -\frac{1}{RC}\implies \tau = RC$$
Tutto questo:$$\implies  v_{c}(t) = Be^{ -\frac{t}{RC} }+RA$$
Calcolando per B, poniamo $t=0$:
$$0 = B + RA \implies B = -RA$$
Tutto messo insieme:
$$\implies v_{c}=-RAe^{ -\frac{t}{RC} }+RA$$
> [!note] 
> Questa equazione è per il caso specifico, si usa la equazione esplicita per ogni altro caso.
> 
### Procedure per variabili:

1. @$t=0^{-}$ calcola $v_{c}(0^{-})$ o $x(0^{-})$
	1. $v_{c}(0^{-})=0$
2. $x(0^{+})$ o $v_{c}(0^{-})=v_{c}(0^{+})$
3. $x(\infty)$ e $v_{c}(\infty)=RA$
4. $\tau$ con generatori Thevenin

Mettere i valori in:

$$x(t)=(x(0^{+})+x(\infty))e^{ -\frac{t}{\tau} }+x(\infty)$$

Diagramma per ogni passo:

<!Diagrammi per ogni passo alla destra>

## Macchine Elettriche/Circutio Magnetici

Un trasformatore semplice è disegnato così:

<!Diagramma trasformatore semplice>

Nell'elettromagnetismo esistono campi magnetici e campi elettrici:

$$\begin{gather}
\vec{B}= \mu  \vec{H} \\
\vec{D}=\mathcal{E}  \vec{E} \\
\end{gather}$$
- $\vec{H}$ - campo magnetico $\left[ \frac{A}{m} \right]$
- $\vec{B}$ - campo di induzione magnetica $[T]$
- $\vec{E}$ - campo elettrico
- $\vec{D}$ - campo di induzione dielettrica
- $\mu$ - permeabilità magnetica
- $\mu_{0}$ - $4\pi \cdot10^{-7} \left[ \frac{H}{m} \right]$
- $\mathcal{E}$ - permeabilità dielettrica

La velocità della luca è definita come:
$$c= \frac{1}{\sqrt{ \mu\mathcal{E} }}$$

### Tipi di Materiali

I materiali magnetici sono classificati in 3 classi diverse in base alla conducibilità del campo magnetico rispetto al nullo. Queste classi sono paramagnetici, diamagnetici e ferromagnetici.

<!Diagramma curve B-H di materiali diversi>

#### Paramagnetici

I materiali paramagnetici sono materiali che conducono il campo magnetico meglio del nullo. Guardando la rappresentazione Faraday, vediamo che il materiali paramagnetico concentra il campo magnetico:

<!Diagramma faraday paramagnetici>

#### Diamagnetici

I materiali diamagnetici conducono il campo magnetico peggio del vuoto, secondo la rappresentazione sembra che spinga via il campo, questo in realtà è perchè il campo è condotto meglio dall'aria circostante quindi diverge per permeare meglio.

<!Diagramma diamagnetico>

#### Ferromagnetici

I materiali ferromagnetici sono i materiali a base ferro, questi materiali conducono $1000-10000$ volte meglio del vuoto. La conduzione migliore è tale fino al punto di saturazione $\sim 1,5T$, e dopo tale punto ritorna a condurre come il vuoto. Dopo il punto di saturazione è meglio creare macchine elettriche con l'aria (pesa meno)

<!Diagramma ferromagnetici>

### Curva di Isteresi Magnetica

Quando sottoposti a campi magnetici elevati e poi tolti da tali campi, i materiali ferromagnetici esibiscono un comportamento di isteresi che ci spiega delle proprietà dei ferromagnetici.

<!Diagramma curva di isteresi magnetica>

I punto di intersezione con l'asse B è detta la induzione residua, questa è la induzione magnetica restante in un materiali ferromagnetico e è la ragione per la esistenza delle calamite.

> [!note] 
> Noi resteremo nel campo lineare prima dell'inizio della isteresi perchè servono modelli più complicati per analizzare queste parti
#### Curva di Calamite

<!Diagramma curva di calamite>

Questa curva è utile per analizzare le calamite ma non la useremo

### Materiali Isolanti

Non esistono isolanti magnetici, inizieremo senza considerare l'aria e poi la considereremo perché anche l'aria conduce campi magnetici anche se solo 1000 meno ha lo stesso effetto.