---
creation_date: 2024-02-11 14:02
tags:
  - IPOI
share: true
---
$$\begin{align}
\text{Costo} &= \text{PVa }\cdot \text{ Costo/Anno (a rate costanti)} \\
\lambda &= \frac{1}{\text{MTTF}} \left[ \frac{\text{guasti}}{h} \right]\\
R &= e^{ -\lambda t } \\
\text{MTTF} &= \frac{N_{g}(t_{g})^{*} t_{g}}{\sum N_{g}}\\
\text{MTTR}&= \frac{1}{\mu} \text{ (tempo di riparo)} \\
A &= \frac{\mu}{\mu+\lambda}  = \frac{MTTF}{MTTF+MTTR}\\
R_{\text{serie}} &= \prod_{i}R_{i} \\
A_{\text{serie}} &= \prod_{i}A_{i} \\
R_{par} &= 1-\prod_{i}[1-R_{i}] \\
A_{par} &= 1- \prod_{i}[1-A_{i}] \\
\frac{k}{n}&\to \text{somma probabilità del funzionamento di k su n} \\ \\
C &= C_{0}\left( \frac{P}{P_{0}} \right)^{m}
\end{align}$$

Dimensionamento accumulatore:
$$\small{R(t)\to R_{cum}(t)\to P_{med}\to P_{cum}\to\Delta V = P_{cum}(t)-R_{cum}(t)\to V_{serb} = \Delta V_{max}-\Delta V_{min}}$$
$V_{0} = -\Delta V_{max}$

Material Handling:
$$\begin{align}
P\left[ \frac{UdC}{t_{ciclo}} \right] &= \frac{Q\left[ \frac{UdC}{ciclo} \right]}{T_{c}\left[ \frac{t‎‎‎empo}{ciclo} \right]} \\
T_{ciclo} &= T_{var}+T_{fisso} \\
T_{var} &=t_{mov}\text{ orizzontale} + t_{mov}\text{ verticale} \\
T_{fisso} & = \text{tempo curve} + \text{tempo carico/scarico etc.} 
\end{align}
$$
$$
\begin{align}
PM_{car} &= \frac{FU}{T_{ciclo}} \\
N.carr &= \frac{PM_{richiesto}}{PM_{carr}} \\ \\
P &= \frac{Q\cdot V}{d}\to d = \text{dist.media tra pacchi}
\end{align}$$
![|500](IMG_6599.jpg)
![|500](IMG_6600.jpg)

