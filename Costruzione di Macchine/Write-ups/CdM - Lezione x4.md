---
creation_date: 2023-11-18 16:16
tags:
  - cosmac
share: true
---
# Lezione 14 - Taglio e Momento Torcente

## Taglio

L'azione di taglio è un azione normale che causa scorrimento fra due sezioni.

Nelle ultime due lezioni abbiamo visto che: $$T=-\frac{dM}{dx}$$se $M = cost$ allora $T=0$

L'azione di taglio genera uno sforzo tangenziale uniforme lungo la faccia della sezione.

<!Diagramma sforzo tangenziale distribuito>

Prendendo un pezzo della trave, troviamo che il taglio genera sforzi tangenziali normali e paralleli a y

<!Diagramma stato di sforzo e cubo>

Il taglio genera momento flettente e per risultato la asse genera un momento flettente uguale e opposto, questi due momenti generano sforzi assiali :

<!Diagrammai distribuzioni>

Il momento flettente generato dal taglio, lo sforzo tangenziale a il momento flettente equilibrante della trave, possono esser messi in equilibrio e la forze generate ogn'uno trovato.

<!Diagramma sezione con le forze>

$F_{1}$ e $F_{3}$ sono momenti flettenti quindi gli sforzi generati da questi momenti, invece $F_{2}$ è la forza generata da $\tau$, l'equilibrio si ha con:

$$\begin{gather}
F_{2}=F_{3}-F_{1} \\
\tau bdx=\int\limits_{A(y_{1})}^{} \frac{(M+dM)y}{J}\, dA - \int\limits_{A(y_{1})}^{} \frac{My}{J} \, dA  
\end{gather}$$
Da questo equilibrio si ricava la formula di Jouranski:
$$\tau=\frac{TS(y_{1})}{J_{zz}b}$$
Questa equazione ci permette di ricavare la distribuzione degli sforzi tangenziali causati dal taglio che è:

<!Diagramma distribuzione sforzi tangenziali, non è giusto il disegno devono esser normali a x, lungo z>

Si trovare che lo sforzo tangenziale medio ha valore:

$$\tau_{media}=\frac{T}{A}$$
Invece il valore massimo dello sforzo tangenziale per la sezione rettangolare è:

$$\boxed{ \tau_{max}=\frac{3}{2} \frac{T}{A} }$$
Invece il valore massimo dello sforzo per la sezione circolare è:
$$\boxed{ \tau_{max}=\frac{4}{3} \frac{T}{A} }$$

## Torsione

La torsione è un momento che agisco lungo l'asse della trave.

I movimenti infinitesimali:

<!Diagramma infinitesimali>

Da questi movimenti troviamo:

$$\begin{gather}
\gamma dx=Rd\varphi \to \gamma=R \frac{d\varphi}{dx} \to \frac{d\varphi}{dx} \text{è l'angoli di torsione unitario} \\
\text{Gli sforzi tangenziali generati dal momento torcente sono:} \\
\tau = \underbrace{ G }_{ \substack{\text{Modulo di}\\\text{Rigidità}} }\gamma = \underbrace{ G }_{ \cos t }R\underbrace{ \varphi }_{ \text{cost} }
\end{gather}$$
Questa ultima equazione implica che gli sforzi sono più forti sulla superfice del pezzo in confronto al centro del pezzo:

<!Diagramma distribuzione sforzi tangenziali torcenti>

Il momento torcente ha equazione:

$$M_{t}=\int\limits_{A}^{} \tau \cdot r  \, dA = \int\limits_{A}^{} Gr\varphi r \, dA = \int\limits_{A}^{} G\varphi r^{2} \, dA = G\varphi \int\limits_{A}^{} r^{2} \, dA =G\varphi J_{p}  $$

Dato che $M_{t} = G\varphi J_{p}$ e $\tau = G\varphi r$ troviamo che:
$$\boxed{ \tau_{max}= \tau(r=R)= \frac{M_{t}R}{J_{p}} = \frac{16M_{t}}{\pi d^{3}} }$$



