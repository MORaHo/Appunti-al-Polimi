---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 12 - Potenza

La energia cinematica di un sistema è la somma dell'energia cinematica di ogni corpo rigido individuale.

## Energia Cinematica Punto Materiale

Per un punto materiale la energia cinematica ha equazione:
$$E_{c} = \frac{1}{2}mv^{2}$$
## Energia Cinematica per Singolo Corpo Rigido

<!Diagramma corpo rigido>
Sapendo che:
$$\vec{v}_{p} = \vec{v}_{G}+\vec{w}\times(P-G)$$
La energia cinematica del corpo rigido sarà:
$$\begin{align}
E_{c} &= \frac{1}{2} \int\limits_{}^{} [\vec{v}_{G}+\vec{w}\times(P-G)]\cdot[\vec{v}_{G}+\vec{w}\times(P-G)] \rho\, dv = \\
&=\frac{1}{2}\int\limits_{v}^{} \vec{v}_{G}\cdot \vec{v}_{G}\rho \, dv +\frac{1}{2}\int\limits_{v}^{} [\vec{w}\times(P-G)]\cdot[\vec{w}\times(P-G)] \rho\, dv +\frac{1}{2} \int\limits_{v}^{} \vec{v}_{G}\cdot[\vec{w}\times(P-G)] \rho\, dv + \frac{1}{2}\int\limits_{v}^{} [\vec{w}\times(P-G)]\vec{v}_{G}\rho \, dv = \\
&=\frac{1}{2}v_{G}^{2}\int\limits_{v}^{} \rho \, dv + \frac{1}{2}\int\limits_{v}^{} w^{2}|P-G|^{2}\rho \, dv+\frac{1}{2}v_{G}\cdot \left[ \vec{w}\times \int\limits_{v}^{} (P-G)\rho \, dv  \right] + \frac{1}{2}\left[ \vec{w}\times \int\limits_{v}^{} (P-G)\rho \, dv  \right]\cdot \vec{v}_{G}  = \\
&= \frac{1}{2}Mv_{G}^{2}+ \frac{1}{2}w^{2}\underbrace{ \int\limits_{v}^{} |P-G|^{2}\rho \, dv }_{ J_{G} }  = \\
E_{c} &= \frac{1}{2}Mv_{G}^{2}+\frac{1}{2} J_{G}w^{2} \to \text{Teorema di K\"onig}
\end{align}$$

## Bilancio delle Potenze per un sistema a singolo grado di liberta

In base questo è il PLV + D'Alambert in un sistema dinamico e non statico.

$$\underbrace{ \sum_{i}\vec{F}_{i}\cdot\delta \vec{P}_{i} + \sum_{j}\vec{c}_{j}\cdot\delta \vec{\theta}_{i} }_{ \text{Reazioni Attive (Interne e Esterne)} } + \underbrace{ \sum_{k}\vec{F}_{iGk}\cdot\delta \vec{G}_{k} + \sum_{k}\vec{c}_{iGk}\cdot\delta \vec{\theta}_{k} }_{ \text{Inerzia} \to \text{ aggiunto per studio di caso dinamico} } = 0$$

$$\vec{F}_{iGk} = -M_{k} \cdot \vec{a}_{Gk}$$
$$\vec{c}_{iGk} = -J_{Gk}\cdot \vec{\dot{w}}_{k}$$

Prendendo lo spostamento virtuale come lo spostamento effettivo:
$$\delta \vec{P}_{i}\to d\vec{P}_{i}\to \frac{ d\vec{P}_{i} }{ dt } \to \vec{v}_{P_{i}}$$

Cambiamo allora tutti gli spostamenti virtuali con la velocità dato che hanno le stesse caratteristiche, quindi non c'è cambio nei calcoli.

Questo cambio causa un cambio nella nostra equazione da una somma di forza ad una somma di potenza:

$$1^{a}\text{ forma} \left\{\begin{align}
\sum_{i} \vec{F}_{i}\vec{v}_{p_{i}} &+ \sum_{j}\vec{c}_{j}\cdot \vec{w}_{i}U = \sum_{k}M_{k}\vec{a}_{Gk}\cdot \vec{v}_{Gk} + \sum_{k} J_{Gk}\vec{\dot{w}}_{k}\cdot \vec{w}_{k}  \\
&\underbrace{ \Large \Pi_{\normalsize{att}} }_{ \substack{\text{Potenza}\\\text{Attiva}} }\normalsize \:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:" \:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:\:"
 \end{align}\right\}$$

Semplificando:

$$\begin{gather}
\vec{a}_{Gk}\cdot \vec{v}_{Gk} = \frac{ d\vec{v}_{Gk}0 }{ dt } \cdot \vec{v}_{Gk} = \frac{1}{2} \frac{d}{dt} (\vec{v}_{Gk}\cdot \vec{v}_{Gk}) = \frac{1}{2}\left( \frac{ d\vec{v}_{Gk} }{ dt }\cdot \vec{v}_{Gk} + \vec{v}_{Gk} \cdot \frac{ d\vec{v}_{Gk} }{ dt }   \right) = \frac{d}{dt}\left( \frac{1}{2} \vec{v}_{G}^{2} \right) \\
\implies \Large \Pi \normalsize _{att} = \sum_{k}M_{k} \frac{d}{dt}\left( \frac{1}{2}\vec{v}_{G}^{2} \right) + \sum_{k} J_{Gk} \frac{d}{dt} \left( \frac{1}{2}w^{2} \right) = \\
=\sum_{k} \frac{d}{dt} \left( \frac{1}{2} M_{k}v_{Gk}^{2}+\frac{1}{2}J_{Gk}w_{k}^{2} \right)= \\
=\sum_{k} \frac{d}{dt} \underbrace{ E_{ck} }_{ \substack{\text{Energia}\\\text{Cinematica}\\\text{del k-esimo}\\\text{Corpo}} } = \frac{d}{dt}\sum_{k}E_{ck} = \frac{dE_{c}}{dt} \\
\implies \boxed{ \Large \Pi \normalsize _{att} = \frac{dE_{c}}{dt} }
\end{gather}$$


Questo ultima significa che possiamo vedere la potenza come flusso di energia nel tempo


## Esempio

<!Diagramma esempio>

$$\vec{c}\cdot \vec{w} + \vec{F}\cdot \vec{v}_{B} = J_{o}\vec{\dot{w}}\cdot \vec{w} + M_{2}\vec{a}_{G_{2}}\cdot \vec{v}_{G_{2}}+J_{G_{2}}\vec{\dot{w}}_{2}w_{2} + M_{3}\vec{a}_{B}\vec{v}_{B}$$

### Analisi Cinematica delle Velocità:

<!Diagramma analisi delle velocità>

### Analisi Cinematica delle Acclereazioni


| $\vec{a}_{B}$ | =   | $\vec{a}_{At}$            | $\vec{a}_{An}$          | $\vec{\dot{w}}_{2}\times(B-A)$ | $w_{2}^{2}(B-A)$            |
| ------------- | --- | ------------------------- | ----------------------- | ------------------------------ | --------------------------- |
| ?             | =   | $\dot{w}\overline{OA}_{}$ | $w^{2}\overline{OA}_{}$ | $\dot{w}_{2}\overline{OA}_{}$  | $w_{2}^{2}\overline{AB}_{}$ |
| $\parallel x$ | =   | $\perp OA$                | $A\to O$                | $\perp AB$                     | $B\to A$                    |

<!Diagramma somma vettori di accelerazione>

La posizione di $\vec{a}_{G_{2}}$ cambia dipendendo dalla posizione di $G_{2}$


<!Diagrammi sistema con vettori di velocità e accelerazione>

$$\begin{gather}
cw-Fv_{B} = -J_{0}\dot{w}w + M_{2} (-a_{G_{2}}v_{G_{2}x}+a_{G_{2}y}v_{G_{2}y})+J_{G_{2}}\dot{w}_{2}w_{2} - M_{B}a_{B}v_{B} \\
cw-Fw_{B} + J_{0}\dot{w}w+M_{2}a_{G_{2}x}v_{G_{2}x} - M_{2}a_{G_{2}y}v_{G_{2}y} - J_{G_{2}}\dot{w}_{2}w_{2} + M_{B}a_{B}v_{B} = 0
\end{gather}$$

<!Diagramma potenze assorbenti e lavoranti>
