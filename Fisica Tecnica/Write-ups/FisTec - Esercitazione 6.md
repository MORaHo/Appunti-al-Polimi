---
creation_date: 2023-10-31 20:52
tags:
  - fistec 
share: true
---
# Esercitazione 6 - Sistemi Aperti

## Esercizio 1

<!Diagramma esercizio 1>

## Esercizio 2

<!Diagramma esercizio 2>

## Esercizio 3 - Miscelatore di Acqua Calda (i.e. rubinetto)

<!Diagramma esercizio 3>

### Da Ricordare

> [!note] Importante per liquidi incomprimibili
> Per liquidi incomprimibili:
> $$s_{1}=s_{0}+c\cdot \ln\left( \frac{T_{i}}{T_{o}} \right)$$

## Esercitazione 4 - Compressore

<!Diagramma esercizio 4>

### Da Ricordare

> [!note] Importante per compressori
> $$\dot{L}^{\leftarrow} = \dot{M}(h_{2}-h_{1})\stackrel{G.P.}{=}\dot{M}c_{p}(T_{2}-T_{1})$$

## Esercizio 5 - Turbina

<!Diagramma esercizio 5>

### Da Ricordare

> [!note] Importante per turbine
> $$\dot{L}_{rev}=\dot{M}(h_{1}-h_{23})\stackrel{G.P.}{=}\dot{M}c_{p}(T_{1}-T_{2s})$$

## Esercizio 6

<!Diagramma esercizio 6>

## Macchine Termodinamiche

### MTM

<!Diagramma MTM>
$$\begin{gather}
\boxed{ Q_{H}=L+Q_{C} } \\
\eta_{\tiny{CARNOT}} = 1- \frac{T_{c}}{T_{H}} \\
\eta=\frac{\text{Effetto Utile}}{\text{Spesa}}=\underbrace{ \frac{L}{Q_{H}} }_{ \text{Per MTM, il lavoro è la parte utile} } \\
\eta=\frac{Q_{H}-Q_{C}}{Q_{H}}\text{ e }\eta_{2}=\frac{\eta}{\eta_{c}} \\
\Delta S^{z}=\Delta S^{H} + \cancelto{ 0 }{ \Delta S^{M} } + \Delta S^{C} = \cancelto{ 0 }{ \Delta S^{\leftarrow} } + S_{IRR} \\
\Delta S^{z}=-\frac{Q_{H}}{T_{H}}+\frac{Q_{c}}{T_{c}} = S_{irr}
\end{gather}$$
### MTO

<!Diagramma MTO>

$$\begin{gather}
Q_{H}=L+Q_{C} \\
\Delta S^{z}=\Delta S^{H}+\cancelto{ 0 }{ \Delta S^{M} } + \Delta S_{C}=\cancelto{ 0 }{ S^{z\leftarrow} }+S_{irr} \\
\Delta S^{z}=\frac{Q_{H}}{T_{H}}-\frac{Q_{c}}{T_{c}} = S_{irr}
\end{gather}$$
#### Tip di Macchine MTO

- Macchine per cui $Q_{C}$ è utile: frigorifero o aria condizionata
- Macchine per cui $Q_{H}$ è utile: pompe di calore

1. Raffreddare l'ambiente a T inferiore $\to$ frigorifero
$$COP_{F} = \frac{T_{c}}{T_{H}-T_{c}}$$
2. Riscaldare un ambiente a T superiore $\to$  pompa di calore
$$COP_{PdC}=\frac{Q_{H}}{L}\text{, idealimente: }COP_{PdC\: ID} = \frac{T_{H}}{T_{H}-T_{c}}$$
