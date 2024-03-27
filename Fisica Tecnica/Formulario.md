---
creation_date: 2023-11-15 09:32
tags:
  - fistec 
share: true
---
 
$$\begin{gather}
PV= nRT \to \frac{P}{\rho}=R^{*} T\\
\Delta S = S^{\leftarrow}+S_{irr} \\
\text{Reversibile}\implies S_{irr}=0  \\
\text{Adiabatico}\implies S^{\leftarrow}=0\\
Pv^{\gamma}=cost \to Adiabatico\\ \\
x^{*} = (1-\chi)x_{\small{LS}}^{*} + \chi x_{\small{VS}}^{*}  \\
\chi = \frac{x^{*} -x_{\small{LS}^{*} }}{x_{\small{VS}}^{*} -x_{\small{LS}}^{*} } \\
h_{\small{L_{sat}}^{*} } = h^{*} _{\small{LS}}+v_{\small{LS}}(P-P_{\small{SAT}}) \\
h^{*} _{L} = c_{\small{L}}(T_{L}-T_{o})\\
s^{*} = c\ln \frac{T_{\small{L}}}{T_{o}}\\ \\
\dot{m} = \rho \overline{w}_{}A   \\
\overline{w}_{2} = \overline{w}_{1} \frac{A_{1}}{A_{2}} \\ \\
s_{i}=s_{o} + c \ln \frac{T_{i}}{T_{o}}  \\
\dot{L}^{\leftarrow} = \dot{M}(h_{2}-h_{1})\stackrel{G.P}{=} \dot{M}c_{p}(T_{2}-T_{1})\\
\dot{E}_{M}=\dot{m}\left( h^{*} +gz+\frac{1}{2}\overline{w}_{}^{2}  \right)+\dot{Q}^{\leftarrow}-\dot{L}^{\to}\\
\frac{ dE }{ dt } = \sum\dot{M}_{in}h_{in}-\sum\dot{M}_{out}h_{out}+\dot{Q}^{\leftarrow}-\dot{L}^{\to} \stackrel{S.S}{=} 0 \\
\frac{ dS }{ dt } = \sum\dot{M}_{in}s_{in}-\sum\dot{M}_{out}s_{out} + \dot{S}^{\leftarrow} + \dot{S}_{irr} \stackrel{S.S}{=} 0 \\
\Delta h  \stackrel{G.P}{=} c_{p}^{*} \Delta T \\
\text{Ugello: }\dot{M}(h_{4}-h_{5}) = \frac{\dot{M}w_{5}^{2}}{2} \\
c = \sqrt{ \frac{\gamma P}{\rho}} = \sqrt{ \gamma R^{*} T } \\
X_{cr} = X_{1}\left( \frac{2}{1+\gamma} \right)
\end{gather}$$
$$\begin{align}
\Delta U &\stackrel{G.P}{=} Mc_{v}^{*} (T_{fin}-T_{in}) \\
&= Mc(T_{fin}-T_{in})\to \substack{\text{per liquidi}\\\text{e solidi}} \\ \\

\Delta S &\stackrel{G.P}{=} M\left( c^*_{v}\ln \frac{T_{2}}{T_{1}} + R^*\ln \frac{V_{2}}{V_{1}} \right) \\
 &= M\left( c^*_{p}\ln \frac{V_{2}}{V_{1}}+c^*_{v}\ln \frac{P_{2}}{P_{1}} \right) \\
 &= M\left( c^*_{p}\ln \frac{T_{2}}{T_{1}}-R^*\ln \frac{P_{2}}{P_{1}} \right) 
\end{align}$$

$$\begin{gather}
\dot{q} = \frac{\Delta T}{\sum R}
\end{gather}$$
|  | $R_{CD}$ $[K/W]$ | $R_{CD} \small{\text{ specifiche}}$ | $R_{CV} [K/W]$ | $R_{CV}\small{\text{ specifiche}}$ |
| ---- | ---- | ---- | ---- | ---- |
| Parete Piana | $\frac{S}{kA}$ | $\frac{S}{k} [\frac{m^{2}K}{W}] \text{ per } \dot{q}''$ | $\frac{1}{hA}$ | $\frac{1}{h}[\frac{m^{2}K}{W}]$ |
| Cilindro Cavo | $\frac{\ln \frac{r_{E}}{r_{I}}}{2\pi kL}$ | $\frac{\ln \frac{r_{E}}{r_{I}}}{2\pi k}[\frac{mK}{W}] \text{ per } \dot{q}'$ | $\frac{1}{2\pi rLh}$ | $\frac{1}{2\pi rh}[\frac{mK}{W}]$ |
| Sfera Cava | $\frac{r_{e}-r_{i}}{4\pi r_{e}r_{i} k}$ | N/A | $\frac{1}{4\pi r^{2}h}$ | N/A |


$$\begin{gather}
\dot{q}(x) = \dot{q}'''x-kc_{1}\\
T(x)=-\frac{\dot{q}'''}{2k}(L^{2}-x^{2}) +c_{1}x+c_{2} \\
\dot{q}(r) = \frac{\dot{q}'''r}{2}-\frac{kc_{1}}{r} \\
T(r) = -\frac{\dot{q}'''}{4k}r^{2}+c_{1}\ln(r)+c_{2}\\
\theta = \theta_{i}\cdot e^{ \frac{-t}{\tau} }\\
\tau = \frac{\rho c^{*} V}{hA_{s}}\\
Bi = \frac{hL}{k_{s}}\leq 0,1 \\
t_{fin} = -\frac{Mc}{hA}\ln\left( \frac{T_{fin}-T_{\infty}}{T_{in}-T_{\infty}} \right)\\
Re = \frac{wL_{c}}{\nu} = \frac{\rho wL_{c}}{\mu} \\
\text{Per tubi:} Re = \frac{\rho w_{m}D}{\mu} = \frac{4\dot{m}}{\mu rD} \\
Pr = \frac{\mu c^{*}}{k} \\
Nu = \frac{hL}{k_{F}} \\
x_{i}=0,05Re\, D\\
x_{t}=0,05Re\, D\, Pr \\
x_{iT}=10D \\
Gr = \frac{\rho w_{\small{NAT}}L}{\mu} \\
T\cdot\lambda_{\small{MAX}}= 2898 \\
\tau+\alpha+\rho =1 \\
\dot{Q}_{12} = \frac{\sigma(T_{1}^{4}-T_{2}^{4})}{\frac{1-\varepsilon_{1}}{A_{1}\varepsilon_{1}}+\frac{1}{A_{1}F_{12}}+\frac{1-\varepsilon_{2}}{A_{2}\varepsilon_{2}}}  \\
F_{12}A_{1}=F_{21}A_{2}\\
\dot{Q} = UA_{s}\Delta T_{m,\ln} \\
\Delta T_{m,\ln} = \frac{\Delta T_{1}-\Delta T_{2}}{\ln\left( \frac{\Delta T_{1}}{\Delta T_{2}} \right)}
\end{gather}$$

Costanti:
$$\begin{gather}
R = 8,314 kJ\cdot K^{-1}kmol^{-1}\\
\text{Stephan-Bolzmann - }\sigma = 5,67\times10^{-8} \, W\cdot m^{-2}K^{-4} \\
M_{m,aria} = 28,96 \:kg\cdot kmol^{-1} \\
\text{r di aqua} = 335 kJ\cdot kg^{-1}
\end{gather}$$




$$
\begin{gather}
\eta_{diesel}= 1 - c_{v}(T_{4}-T_{1})/c_{p}(T_{3}-T_{2})\\
\eta_{joule}=  1- 1/\beta^{\frac{\gamma-1}{\gamma}} \to \beta = P_{max}/P_{min}\\
\eta_{\tiny{R}} = 1-L_{\small{\text{turb}}}/Q_{e} \\
\varepsilon_{} = Q_{\small{\text{voluto}}}/{L_{net}}
\end{gather}
$$


|  |  |  |  |  |  |  |  |  |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
|  |  |  |  |  |  |  |  |  |
|  |  |  |  |  |  |  |  |  |
|  |  |  |  |  |  |  |  |  |
|  |  |  |  |  |  |  |  |  |
|  |  |  |  |  |  |  |  |  |
|  |  |  |  |  |  |  |  |  |
|  |  |  |  |  |  |  |  |  |
