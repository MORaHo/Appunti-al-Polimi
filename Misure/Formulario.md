---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---


$$\begin{gather}
\overline{X}_{} = \frac{1}{N}\sum_{i=1}^{N}x_{i} \\
s(x)^{2} =  \frac{1}{N-1} \sum_{i=1}^{N}(x_{i}-\overline{X}_{} )^{2}  =\sqrt{ \text{Variazione} } \\
s(x) = \sigma(x) \text{ se  n>20} \\
u(\overline{X}_{} ) = \frac{s_{x}}{\sqrt{ n }} \\
x= \overline{X} \pm u(\overline{X} ) = \overline{X} \pm \frac{s_{x}}{\sqrt{ n }}  \\
\text{Se incertezza tipo B}\implies n=1 \text{ e uso }\sigma\\
\text{Risoluzione}\implies u(x_{i}) = \frac{r}{2\sqrt{ 3 }} = \frac{2r}{2\sqrt{ 3 }} \\
\text{Incertezza Combinata: } u_{y} = \sqrt{ \sum_{i=1}^{N}\left( \frac{ \partial f }{ \partial x_{i} }  u_{i}\right)^{2}s } \\
u_{e} = k\cdot u(x) \\
95\%\implies k=1,96\text{ per }n=\infty \\
\text{k da n+1 gradi di libertà} \\
u = \frac{\sigma}{\sqrt{ n }} = \frac{s}{\sqrt{ n }}\text{ se }\sigma \text{ non noto}
\end{gather}$$

$$\begin{gather}
V_{letta} = G \frac{V_{o}}{4}\left( \frac{\Delta R_{1}}{R_{1}}-\frac{\Delta R_{2}}{R_{2}} + \frac{\Delta R_{3}}{R_{3}}-\frac{\Delta R_{4}}{R_{4}} \right) \\
V_{letta} = G \frac{V_{o}}{4}k(\mathcal{E}_{1}-\mathcal{E}_{2}+\mathcal{E}_{3}-\mathcal{E}_{4}) \\
+\text{ e }- \text{cambiano a ordine nel ponte} \\ \\
k = 2 \text{ se metallico} \\
k = 100 \text{ se semiconduttore} \\
\mathcal{E}_{i} = \frac{\sigma}{E} \\
\sigma = \frac{F}{A} \text{ o } \frac{M_{fx}}{W_{f}} = \frac{F\cdot x}{W_{f}} \\
\text{Per inserimento parallelo: }\Delta R_{i} = R_{i} - \frac{R_{i}R_{\text{shunt}}}{R_{i}+R_{\text{shunt}}} \\
\text{Se perpendicolare: } \mathcal{E}_{i} = -v\mathcal{E}_{a} \\
\text{Perché estensione laterale causa contrazione longitudinale}\\
S = \frac{V_{letta}}{V_{o}} = \frac{V_{letta}}{x}\to x \text{ variabile indipendente} \\
r_{v} = \frac{GV_{o}}{4}k\:k_{b} r_{\tiny{\mathcal{E}}} \\
\text{In generale: } r_{v} = S\cdot r_{x} \\
r_{v} = \frac{FS_{v}}{2^{N}}
\end{gather}$$

