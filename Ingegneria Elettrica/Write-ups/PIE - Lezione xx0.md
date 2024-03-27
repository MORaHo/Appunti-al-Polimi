---
creation_date: 2023-11-29 21:16
tags:
  - PIE
share: true
---
# Lezione 20

## Ripasso

<!Diagramma singola distanza>

$$W = \frac{1}{2}L_{11}i_{1}^{2}+\frac{1}{2}L_{22}i_{2}^{2}+L_{m}i_{1}i_{2}$$
$$L_{m}=L_{21}=L_{12}$$

$$\left\{\begin{gather}
\Psi_{1}=L_{11}i_{1}+L_{m}i_{2} \\
\Psi_{2}=L_{22}i_{2} +L_{m}i_{1}
\end{gather}\right\}$$
## Continuazione

Come abbiamo detto nella lezione dove abbiamo introdotto le variabili di stato, la variabile di stato per le induzioni è il flusso non la corrente, con la induttanza costante si ha che sono proporzioni quindi agiscono nello stesso modo quindi la corrente può esser usata.

$$\begin{gather}
iv = \frac{id\Psi}{dt} \\
\int\limits_{}^{} iv \, dt = \int\limits_{}^{} i \, d\Psi = \int\limits_{}^{} \frac{\Psi}{L} \, d\Psi  = \frac{1}{2} \frac{\Psi^{2}}{L} = W(\Psi)  
\end{gather}$$
Questa è energia di un sistema in funzione del flusso, l'altra era invece rispetto la corrente

Per il calcolo delle forze in azione agli traferri, non possiamo usare la energia ma dobbiamo usare la co-energia:

$$\text{Coenergia}\to W^{*}(i)=\Psi i-W(\Psi) = \frac{1}{2}\Psi i$$

<!Diagramma energia e coenergia>

## Forza nel traferro

Dato un circuito come:

<!Diagramma circuito per forza>

Abbiamo la equazione:
$$\begin{gather}
\underbrace{ P_{eleH}\cdot dtU }_{ L_{ele} } - \underbrace{ Fdx }_{ L_{mecc} } =dW (\Psi,x) \\
=vidt - Fdx = d\Psi \cdot i - Fdx \\
\text{Per Faraday: } vdt = d\Psi
\end{gather}$$
Per Faraday scegliamo sempre il flusso positivo questi significa che vogliamo il flusso > 0.

Trovando la derivata parziale:

$$\begin{gather}
\frac{ \partial W }{ \partial \Psi } d\Psi + \frac{ \partial W }{ \partial x } dx = id\Psi + Fdx  \\
\implies  \frac{ \partial W }{ \partial \Psi } = i  \text{ e, } F = -\frac{ \partial W }{ \partial x } \\
\end{gather}$$

Dato il circuito magnetico e circuito magnetico rappresentativo:

<!Diagramma circuito magnetico>

Si ha:
$$\begin{gather}
\Psi=N\varphi \\
L = \frac{\Psi}{i}=\frac{N^{2}}{\theta}=\frac{\frac{N^{2}}{x}}{\mu_{o}A_{Fe}} = \frac{\mu_{o}A_{Fe}N^{2}}{x} \\
\implies W = \frac{\frac{1}{2}\Psi^{2}}{L}=\frac{1}{2} \frac{\Psi}{N^{2}\mu_{o}A_{Fe}}
\end{gather}$$

La forza generata al traferro è:
$$\begin{gather}
F = -\frac{ \partial W }{ \partial x } = -\frac{1}{2 } \frac{\varphi^{2}}{\mu_{o}A_{Fe}}x = \frac{1}{2} \frac{N^{2}\Psi^{2}}{N^{2}\mu_{o}A_{Fe}} = \frac{1}{2} \frac{\varphi^{2}}{\mu_{o}A_{Fe}} \\
\implies \boxed{ F = \frac{\varphi^{2}}{2\mu_{o}A_{Fe}} }
\end{gather}$$
Dato che $\varphi = \vec{B}\cdot A_{Fe}$

$$\implies \boxed{ F=- \frac{B^{2}}{2\mu_{o}}A_{Fe} }$$
Questa equazione ha negativ data la direzione di aumento di x che abbiamo preso, la forza attira e se in questo caso non fosse negativo sarebbe repulsiva.

Per diminuire le forze magnetiche possiamo aggiungere un materiale paramagnetico invece dell'aria in mezzo.

In generale si usa la forma con $B$ ma per i nostri problemi possiamo diminuire i calcoli usando la forma con $\varphi$

La pressione magnetica è:
$$\sigma = \text{Pressione Magnetica} = \frac{B^{2}}{2\mu_{o}} = \frac{1}{2\cdot10^{-6}} = \frac{500000N}{m^{2}}\simeq \frac{500kN}{m^{2}} \implies 50 \frac{ton}{m^{2}}$$

---

## Circuito con più traferri
<!Diagramma circuiti con traferri>

$$\begin{gather}
\varphi_{1} \to B_{1}=\frac{\varphi_{1}}{A} \\
\varphi_{2} \to B_{2}=\frac{\varphi_{2}}{A} \\
\varphi_{3} \to B_{3} = \frac{\varphi_{3}}{A} \\
\implies  F = \frac{B_{1}^{2}}{2\mu_{o}}A+\frac{B_{2}^{2}}{2\mu_{o}}A + \frac{B_{3}^{2}}{2\mu_{o}}A
\end{gather}$$

Esiste un analogo alla forza magnetica con la forza elettrica, la pressione elettrica è:

$$\sigma = \frac{\mathcal{E}_{o}^{2}E^{2}}{2\mathcal{E}_{o}} = \frac{\mathcal{E}_{o}E^{2}}{2}$$
<!Diagramma condensatore>

La pressione magnetica è molto, molto bassa e con l'aria servirebbero 1000V/mm per causare un arco di corrente, questo significa che ha molta utilità per noi e ce la possiamo dimenticare.
## Trasformatori

<!Diagramma trasformatore>

Dato un pezzo di ferro continuo con 2 bovine. Spegniamo una bovina e alla seconda attacchiamo un generatore di tensione variabile nel tempo, questo causa una secondo induzione mutua che causa il flusso di corrente nella bovina spenta, se attachiamo una resistenza riusciamo abbiamo una tensione anche nella bovina spenta.

Troviamo che:

$$\begin{align}
v_{1} &= \frac{d\Psi_{1}}{dt}\to \Psi_{1}=\int\limits_{}^{} v \, dt \\
& = N_{1} \frac{d\varphi}{dt} 
\end{align}$$

La tensione due invece è:

$$v_{2} = \frac{d\Psi_{2}}{dt} =\frac{N_{2}d\varphi}{dt}\implies  \boxed{ \frac{v_{1}}{v_{2}}=\frac{N_{1}}{N_{2}} }$$

Questo è il concetto principale dei trasformatori, aumentiamo la tensione inducendo una tensione maggiore una spira attorciata allo stesso pezzo di ferro ma con un numero diverso di spire.

<!Diagramma trasformatore>

Cambiando il numero di spira possiamo aumentare e diminuire la tensione abbiamo che:

$$\frac{v_{1}}{v_{2}}=\frac{i_{2}}{i_{1}}=\frac{N_{1}}{N_{2}}\implies v_{1}i_{1}=v_{2}i_{2}$$
I trasformatori hanno perdite molto basse quindi è molto conveniente usarlo invece di qualsiasi altro metodo che potremmo usare.