---
creation_date: 2023-12-19 16:16
tags:
  - PIE
share: true
---

$$\begin{align}
V &= IR \\
p &= vi  \\
W_{C} &= \frac{1}{2}CV^{2}\\
R_{eq,serie } &= \sum R_{k} \\
R_{eq,\parallel} &= \left( \sum \frac{1}{R_{_{k}}} \right)^{-1} \\
V_{i} &= \frac{R_{i}}{\sum R}V_{tot} \\
V_{m} &= \frac{\sum A}{\sum \frac{1}{R}} \\
V &= \frac{V_{max}}{\sqrt{ 2 }}  \\
v(t) &= \sqrt{ 2 }V\cdot \cos(wt+\varphi_{v})\\
v(t) &= Re(\sqrt{ 2 }Ve^{ j\phi }e^{ jwt }) = Re(\sqrt{ 2 }\overline{V}_{} e^{ jwt }) \\
\overline{V}_{} &= Ve^{ j\varphi_{v} }=R\overline{I}_{}   \\
\overline{I}_{} &= Ie^{ j\varphi_{i} }\\
\overline{V}_{L} &= jwL\overline{I}_{} = jX_{L}\overline{I}_{}  \\
\overline{V}_{C} &= -\frac{j\overline{I}_{}}{wC} = -jX_{C}C      \\
w &= 2\pi f\\
\overline{Z} &= R + j(X_{L}-X_{C}) \\
Z &= |\overline{Z}_{} | = \sqrt{ R^{2}+(X_{L}-X_{C})^{2} } \\
\varphi_{I} &= \arctan \left( \frac{I_{im}}{I_{Re}} \right) \\
\overline{V}_{} &= \overline{Z}_{}\overline{I}_{}    \\
\varphi_{I}&=\varphi_{V}-\varphi  \\
\cos \varphi &= \frac{P}{VI}\\
P &= VI \cos \varphi \\
\overline{A}_{} &= \overline{V}_{}\cdot \underline{I} =\frac{V^{2}}{\underline{Z}}=\overline{Z}_{}I^{2} = P+jQ \\
A &= \sqrt{ P^{2}+Q^{2} } = VI  \\
P &= VI\cos \varphi \\
Q &= VI \sin \varphi \\
P &= \frac{V^{2}}{R} = RI^{2} \\
Q &= XI^{2}+V \\
C &= \frac{Q_{carico}-P \cdot \tan(\arccos(0,9))}{w\cdot V_{g}^{2}} \\
\overline{Z}_{Y}&=\frac{\overline{Z}_{△}}{3}  \\
\text{Wattmetro} &= Re(\overline{V}_{} \cdot  \underline{I}) \\
\varphi &= \arctan \frac{Q_{tot}}{P_{tot}} \\
C_{△rif}&=\frac{C_{Yrif}}{3}\\
x(t)&=(x(0^{+})-x(\infty))\cdot e^{ -\frac{t}{\tau} }+x(\infty) \\
\tau &= R_{eq}C \\
\tau &= \frac{L}{R_{eq}} \\
 \\
\frac{B}{\mu}\cdot l &= NI \\
H\cdot l &= U = NI \\
\varphi &= BA \\
U &= \theta \cdot \varphi \\
\theta &= \frac{1}{\mu} \frac{l}{A} \\
W &= \frac{1}{2}Li^{2} \\
L &= \frac{N\varphi}{i} = \frac{N^{2}}{\theta} \\
L_{m} &= \frac{N_{2}\varphi_{2}}{I_{1}} = \frac{N_{1}\varphi_{1}}{I_{2}} = \frac{N_{1}N_{2}}{2\theta_{eq2}}\\
W &= \frac{1}{2}L_{11}i_{1}+L_{m}i_{1}i_{2}+\frac{1}{2}L_{22}i_{2}^{2}  \\
F &= \frac{\varphi^{2}}{2\mu_{o}A_{Fe}} = -\frac{B^{2}}{2\mu_{o}}A_{Fe} \\
\frac{v_{1}}{v_{2}} &= \frac{N_{1}}{N_{2}} = \frac{i_{2}}{i_{1}} = K \\
A_{n} &= V_{1n}I_{1n} =V_{2n}I_{2n} \\
R_{1} &= R_{2}K^{2} \\
e &= Blu \\
F &= Bli \\
e_{tot} &= Blw2RN \\
T_{tot} &= Bli_{2}RN
\end{align}$$
$$\begin{gather}
i_{0\%} = \frac{I_{10}}{I_{1n}}\cdot 100\% \\
P_{0\%} = \frac{P_{0}}{A_{n}}\cdot 100\% \\
Q_{0\%} = \frac{Q_{0}}{A_{n}}\cdot100\% \\
R_{Fe} = \frac{V_{1n}^{2}}{P_{0}} \\
X_{Fe} = \frac{V_{1n}^{2}}{Q_{0}} \\
V_{cc\%} = \frac{V_{cc2}}{V_{2n}}\cdot100 \\
P_{cc\%} = \frac{P_{cc}}{A_{n}}\cdot 100\% \\
Q_{cc\%} = \frac{Q_{cc}}{A_{n}}\cdot 100\% \\
R_{cc} = \frac{P_{cc}}{I_{2n}^{2}} \\
X_{cc} = \frac{Q_{cc}}{I_{2n}^{2}} \\
\cos(\varphi_{0}) = \frac{P_{0}}{V_{1n}I_{10}} \\
\cos(\varphi_{cc}) = \frac{P_{cc}}{V_{cc2}I_{2n}}
\end{gather}$$

$$\begin{gather}
\mu_{0} = 1.2566×10^{-6}
\end{gather}$$

### Inserzione Aaron

$$\boxed{ \begin{align} 
P_{tot} &= W_{1}+W_{2}\\
&=\mathbb{R}e((\overline{E}_{1} -\overline{E}_{3} )\cdot  \underline{I}_{1})+\mathbb{R}e((\overline{E}_{2} -\overline{E}_{3} )\cdot  \underline{I}_{2}) \\
&= \mathbb{R}e(\overline{E}_{1}\cdot  \underline{I}_{1} +\overline{E}_{2}\cdot  \underline{I}_{2}+ \overline{E}_{3}(-\underline{I}_{1}-\underline{I}_{2})  ) \\
\text{Per}&\text{ LKC sempre} \implies  \overline{I}_{1}+\overline{I}_{2}+\overline{I}_{3}=0\implies \overline{I}_{3}=-\overline{I}_{1}-\overline{I}_{2} \\
&\implies P_{TOT}=\mathbb{R}e(\overline{E}_{1} \cdot  \underline{I}_{1}+\overline{E}_{2} \cdot  \underline{I}_{2}+\overline{E}_{3}\cdot  \underline{I}_{3} )      
\end{align} }$$

### A regime

1. @$t=0^{-}$ calcola $v_{c}(0^{-})$ o $x(0^{-})$
	1. $v_{c}(0^{-})=0$
2. $x(0^{+})$ o $v_{c}(0^{-})=v_{c}(0^{+})$
3. $x(\infty)$ e $v_{c}(\infty)=RA$
4. $\tau$ con generatori Thevenin
