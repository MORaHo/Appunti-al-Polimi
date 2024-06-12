---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 10 - Studio del Baricentro

## Baricentro di Massa/Centro di Momenti Statici

Prendiamo un sistema di punti (un sistema discreto) ognuno con la sua massa:

<!Diagramma sistema di punti di massa>

Le coordinate di questo baricentro sarà:
$$\begin{gather}
x_{\tiny{G}} = \frac{\sum m_{i}x_{i}}{\sum m_{i}} \\
y_{\tiny{G}} = \frac{\sum m_{i}y_{i}}{\sum y_{i}}
\end{gather}$$

### Sistema Continuo

Dato un corpo rigido, un sistema continuo di punti ognuno con la suma massa:

<!Diagramma corpo rigido>

La massa del punto infinitesimale sarà:
$$dm = \rho dv$$
Con $\rho$ che è la densità del materiale al punto del corpo rigido.

In questo sistema continuo le coordinate del baricentro saranno:

$$\begin{gather}
x_{\tiny{G}} = \frac{1}{M}\int\limits_{v}^{} x\rho  \, dv \\
y_{\tiny{G}}  = \frac{1}{M}\int\limits_{v}^{} y\rho \, dv 
\end{gather}$$

Il baricentro di un sistema continuo ha le sue caratteristiche, possiamo prendere il punto in forma vettoriale rispetto ad un riferimento:

$$(G-O) = \frac{1}{M}\int\limits_{}^{} (P-O)\rho \, dv $$
G sarà sempre lo stesso dentro al corpo, non cambia con il movimento rispetto al sistema di riferimento.  Cambia la sua posizione internamente solo se cambia il corpo.

## Momento d'inerzia di massa

Il momento d'inerzia è la resistenza di un corpo alla rotazione intorno ad un punto, interno od esterno.

<!Diagramma vettore r per momento d'inerzia>

Rispetto all'origine abbiamo:
$$J_{o} = \int\limits_{v}^{} r^{2}\rho \, dv = \int\limits_{v}^{} (x^{2}+y^{2})\rho \, dv  $$
Immaginiamo si aver trovare G e mettiamo un sistema di riferimento in tale punto:

<!Diagramma sistema di riferimento in G>

Riscrivendo la equazione del momento trovata rispetto al nuovo punto di riferimento abbiamo:

$$\int\limits_{v}^{} [(x_{\tiny{G}}+x_{1})^{2}+(y_{\tiny{G}}+y_{1})^{2}]\rho \, dv $$
$$=\int\limits_{v}^{} (x_{\tiny{G}}+ y_{\tiny{G}})^{2} \rho\, dv +\int\limits_{v}^{} (x_{1}^{2}+y_{1}^{2})\rho \, dv +\int\limits_{v}^{} 2x_{\tiny{G}}x_{1}\rho \, dv+\int\limits_{v}^{} 2y_{\tiny{G}}y_{1}\rho \, dv = $$
$$=(x_{\tiny{G}}^{2}+y_{\tiny{G}}^{2})\int\limits_{v}^{} \rho \, dv +J_{\tiny{G}}+2x_{\tiny{G}}\int\limits_{v}^{} x_{1}\rho \, dv+2y_{\tiny{G}}\int\limits_{v}^{} y_{1}\rho \, dv  $$
Dove $J_{\tiny{G}}$ è il momento d'inerzia rispetto alla asse che passa per il baricentro perpendicolare al piano.

Dato che: $\int\limits_{v}^{} x_{1}\rho \, dv = x_{G_{1}}M$, in generale $x_{\tiny{G}} = \frac{1}{M}\int\limits_{v}^{} x\rho \, dv$ dato che stiamo guardando il sistema di riferimento del baricentro $x_{\tiny{G}}$ deve esser uguale a 0, questo implica che $\int\limits_{v}^{} x_{1}\rho \, dv$ = 0 perché riportare $x_{G}$ rispetto al sistema del baricentro che è 0 per definizione. Idem lungo y.

Tutto questo significa che:
$$\implies J_{o} = M\overline{\underbrace{ OG }_{ (x_{\tiny{G}}^{2}+y_{\tiny{G}}^{2}) }}_{}^{2}+J_{\tiny{G}} $$
Tale è nota come la legge del trasporto.

Significa che il momento d'inerzia minimo di un sistema è il momento d'inerzia della sua massa quando $x_{\tiny{G}}=x_{1}$ e $y_{\tiny{G}}=y_{1}$

## Esempio 1 - Asse Sottile

<!Diagramma asse sottile>

Prendiamo $m=\frac{M}{L}$, il momento d'inerzia sarà:
$$\begin{gather}
J_{\tiny{G}} = \int\limits_{v}^{} r^{2}\rho \, dv = \int\limits_{-\frac{L}{2}}^{L/2} x^{2}m \, dx =\frac{m}{3}\left| x^{3}\right|_{-\frac{L}{2}} ^{\frac L2} = \frac{m}{3}\left[ \frac{L^{3}}{8} -\left( -\frac{L^{3}}{8} \right) \right] = \\
=\frac{mL^{3}}{12} = \frac{ML^{2}}{12}
\end{gather}$$

Prendendo $J_{\tiny{G}} = M\rho_{\tiny{G}}^{2}$, dove $\rho_{\tiny{G}}$ è il raggio giratore allora:
$$\frac{ML^{2}}{12}=M\rho_{\tiny{G}}^{2}\implies \rho_{\tiny{G}} = \frac{L}{2\sqrt{ 3 }}$$
## Esempio 2 - Corona Circolare a Spessore Costante

<!Diagramma corona circolare>

Una sezione della corona sarà: $\rho dv = \rho \underbrace{ hdr\cdot rd\theta }_{ dv }$
Allora:
$$\begin{gather}
J_{\tiny{G}} = \int\limits_{v}^{} r^{2}\rho \, dv - \int\limits_{R_{1}}^{R_{2}} \int\limits_{0}^{2\pi} hr^{2}\rho r \, dr  \, d\theta = \rho h\int\limits_{R_{1}}^{R_{2}} r^{3} \, dr \int\limits_{0}^{2\pi}  \, d\theta = \\
= \rho h\int\limits_{R_{1}}^{R_{2}} r^{3} \, dr\cdot 2\pi  = \rho h\cdot2\pi\left| \frac{r^{4}}{4}\right|_{R_{1}}^{R_{2}} = ph2\pi \cdot \frac{R_{2}^{4}-R_{1}^{4}}{4} = \rho h\pi(R_{2}^{2}-R_{1}^{2})\cdot \frac{R_{1}^{2}+R_{2}^{2}}{2}   \\
\implies M\cdot \frac{R_{1}^{2}+R_{2}^{2}}{2} = J_{\tiny{G}}
\end{gather}$$


### Casi Estremi

<!Diagramma casi estremi di Corona Circolare e calcoli>

## Dinamica del punto (Richiamo)

L'equazione della forza che poniamo su un corpo rigido è:
$\vec{R} = M\vec{a}$ questo può esser riscritto come, $\vec{R}-M\vec{a} = 0$.
Possiamo definire le forze generate dall'inerzia del corpo come:
$\vec{F}_{in}=-M\vec{a}$

Riscrivendo allora abbiamo:
$$\vec{R}+\vec{F}_{in}=0$$
Il sistema è stabile quando le forze vincolari e le forze d'inerzia si cancellano.

La forza d'inerzia $\vec{F}_{in}$ non c'è reazione opposta quindi non è una forza vera ma in generale è usabile come forza e perciò la usiamo come tale.

## Azioni d'inerzia agenti su un corpo rigido

La forza d'inerzia si oppongono sempre a qualsiasi forza viene posta su un corpo rigido.

<!Diagramma reazione ad accelerazione>

Prendiamo allora:
$$\vec{F}_{i\tiny{G}} = -\int\limits_{v}^{} \vec{a}_{p}\underbrace{ \rho \, dv }_{ dm } = \int\limits_{v}^{} \underbrace{ (\vec{a}_{\tiny{G}}+\vec{\dot{w}}\times(P-G)-w^{2}(P-G)) }_{ \vec{a}_{p} }\rho \, dv  $$

Dividendo abbiamo:
$$\begin{gather}
\vec{F}_{i\tiny{G}} = -\vec{a}_{\tiny{G}}\int\limits_{}^{}\rho  \, dvU - \vec{\dot{w}}\times \underbrace{ \int\limits_{v}^{} (P-G)\rho \, dv }_{ M(G-G)=0 } + w^{2}\underbrace{ \int\limits_{v}^{} (P-G)\rho \, dv }_{ \text{idem} } =   \\
=-M\vec{a}_{\tiny{G}}
\end{gather}$$
Quest'ultima equazione, $\vec{F}_{i\tiny{G}} = -M\vec{a}_{\tiny{G}}$, significa che ogni punto del corpo agisce e subisce le stessa forze e accelerazioni che il baricentro del corpo.

### Momento delle Azioni d'Inerzia

<!Diagramma momento delle azioni>

La coppia d'inerzia generata a G ha equazione:
$$\begin{align}
\vec{c}_{i\tiny{G}} &= \int\limits_{v}^{} (P-G)\times(-\vec{a}_{p})\rho \, dv= \\
&= -\int\limits_{v}^{} (P-G)\times(\vec{a}_{\tiny{G}}+\vec{\dot{w}}\times(P-G)-\vec{w}^{2}(P-G))\rho \, dv \\
&\implies \vec{c}_{i\tiny{G}} = -\left( \underbrace{ \int\limits_{}^{}(P-G)\rho  \, dv  }_{ M(G-G) } \right) \times \vec{a}_{\tiny{G}} - \int\limits_{v}^{} \underbrace{ (P-G)\times(\vec{\dot{w}}\times(P-G) }_{ (P-G)^{2}\cdot \dot{w}\hat{k} })\rho \, dv + w^{2}\int\limits_{v}^{} \underbrace{ (P-G)\times(P-G) }_{ \text{Nullo perchè parallelo} }\rho \, dv \\ 
 &=-\int\limits_{v}^{} (P-G)^{2}\dot{w} \hat{k}\rho\, dv 
\end{align}$$
$$\vec{c}_{i\tiny{G}} = \vec{\dot{w}} \int\limits_{}^{} \left|P-G\right|^{2} \rho dv = -\underbrace{ J_{\tiny{G}} }_{ (P-G)^{2}M }\vec{\dot{w}}  $$

$J_{\tiny{G}}$  è $(P-G)^{2}\cdot M$ come abbiamo visto prima.

<!Diagramma stati di sforzo>

Questi due sono equipollenti, ma gli stati di sforzo sono diversi.

Un equipollenza simile è:
<!Diagramma equipollenza asta>

