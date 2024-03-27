---
creation_date: 2023-10-28 14:28
tags:
  - cosmac
share: true
---
# Lezione 11 - Stato di Deformazione

## Cerchi di Mohr

[CdM - Lezione x0](CdM%20-%20Lezione%20x0.md)

## Stato di Deformazione

![](Pasted%20image%2020231029214102.png)

Lo sforzo su un pezzo: $\sigma = \frac{F}{A}$ è indipendente dal materiale.

Misuriamo la deformazione del pezzo: $\underbrace{ \mathcal{E} }_{ \text{Deformazione} } = \frac{\Delta l}{l_{i}}[\%]$

La deformazione ingegneristica è uguale in ogni parte del pezzo, invece in realta non è esattamente così.

### Scorrimento

Lo scorrimento è la variazione dell'angolo:

![](Pasted%20image%2020231029214243.png)

$$\begin{gather}
\gamma_{xy}=\frac{\pi}{2}-\alpha=\gamma_{1}-\gamma_{2} \\
\gamma_{1}=\frac{\Delta v}{\Delta x}=\frac{ \partial v }{ \partial x }  \\
\gamma_{2}=\frac{ \partial u }{ \partial y } \\
\gamma_{xy}=\frac{ \partial v }{ \partial x } +\frac{ \partial u }{ \partial y } 
\end{gather}$$
Le equazione hanno paragone in ogni piano.

Abbiamo definito: $\mathcal{E}_{x},\mathcal{E}_{y},\mathcal{E}_{z}.\gamma_{xy},\gamma_{yz}$ e $\gamma_{zx}$

Con questo possiamo creare il tensore di deformazione:

$$\begin{bmatrix}
\mathcal{E}_{x} & \mathcal{E}_{xy} & \mathcal{E}_{xz} \\
\mathcal{E}_{yx} & \mathcal{E}y & \mathcal{E}_{yz} \\
\mathcal{E}_{zx}  & \mathcal{E}_{zy} & \mathcal{E}_{z}
\end{bmatrix}$$

$\mathcal{E}_{xy}=\frac{\gamma_{xy}}{2}=\frac{ \partial v }{ \partial x } \dots$

## Legame Sforzi-Deformazioni

![](Pasted%20image%2020231029214259.png)

Il legame tra lo sforzo e la deformazione in un materiale è definito dal materiale su cui lo sforzo è sottoposto. Il modulo di Young (o modulo di elasticità longitudinale) è dipendente dal materiale, per esempio per l'acciaio, E è 200000 MPa

La deformazione è:
$$\mathcal{E}_{x}=\frac{\sigma_{x}}{E}$$
I materiali hanno un modulo per ogni direzione però in materiali isotropici: $E_{x}=E_{y}=E_{z}=E$

### Contrazione Trasversale
Anche se $\sigma_{y}=0=\sigma_{z}$, $\mathcal{E}\neq 0$

La deformazione in un direzione causa una deformazione trasversale nelle altre due direzioni. La deformazione lungo la esse y con un sforzo sull'asse x è:
$$\begin{gather}
\mathcal{E}_{y}=-\nu\mathcal{E}_{x} \\
\mathcal{E}_{z}=-\nu \mathcal{E}_{x}
\end{gather}$$
$\nu$ è il coefficiente di contrazione trasversale detto anche coefficiente di Poisson che è anche questo dipendente dal materiale. Per esempio, per l'acciaio è 0,3.

La deformazione causata da sforzo è la somma di tutte le deformazioni causate da sforzi.

![](Pasted%20image%2020231029214333.png)

$$\begin{gather}
\mathcal{E}_{x}=\frac{\sigma_{x}}{E}-\frac{\nu \sigma_{y}}{E} \\
\mathcal{E}_{y}=-\frac{\nu \sigma_{x}}{E}+\frac{\sigma_{y}}{E}
\end{gather}$$

Le equazioni per le deformazione in multiple direzioni sono definite dalle equazioni di Hooke:

$$\begin{gather}
\epsilon_{x}=\frac{1}{E}[\sigma_{x}-\nu(\sigma_{y}+\sigma_{z})] \\
\epsilon_{y}=\frac{1}{E}[\sigma_{y}-\nu(\sigma_{x}+\sigma_{z})] \\
\epsilon_{z}=\frac{1}{E}[\sigma_{z}-\nu(\sigma_{x}+\sigma_{y})]
\end{gather}$$

Il modulo di elasticità tangenziale è:
$$G= \frac{E}{2(1+\nu)}$$
