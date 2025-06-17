---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Esercitazione 5 - 

## Sistemi di rotolamento

Dato sistemi con disco che rotola su piano retto, concavo e convesso:

<!Diagramma rotolamento e accelerazione assoluta>

Troviamo che rispetto al rotolamento sul piano dritto, la accelerazione assoluta al punto E sul piano concavo è maggiore e la accelerazione assoluta al punto E sul piano convesso è minore.

Tutti e 3 i sistemi hanno in comune:

- se $\sigma$ è fermo $\implies \vec{v}_{e}=0$ e $\vec{a}_{e}^{ASS}$ ha componente normale, se no tangenziale
- $\vec{v}$ ad ogni punto, sono tutte uguali.

### Dimostrazione Matematica

Dati:
- $R = 0,6m$
- $r = 0,2m$
- $w = 5 \frac{rad}{s}$
- $\dot{w} = 20 \frac{rad}{s^{2}}$

#### Rettilineo

$\vec{a}_{e}^{ASS}$ rettilineo $\to \vec{a}_{e}^{ASS} = w^{2}r = 5 \frac{m}{s^{2}}$

#### Concavo

<!Diagramma sistema concavo>

$$\begin{gather}
\Omega(R-r) = wr \\
\dot{\Omega}(R-r) = \dot{w}r \\
\dot{w}r= \vec{a}_{ct}^{ASS}
\end{gather}$$
Le traiettorie assolute e relative del punto E sono:

<!Diagramma traiettorie del punto E>


|     | $\vec{a}_{e}^{ASS}$ | $\vec{a}_{En}^{REL}$       | $\vec{a}_{Et}^{REL}$ | $\vec{a}_{En}^{TRA}$    | $\vec{a}_{Et}^{TRA}$ | $\vec{a}_{E}^{CO}$       |
| --- | ------------------- | -------------------------- | -------------------- | ----------------------- | -------------------- | ------------------------ |
| M   | ?                   | $w^{2}r$                   | $\dot{w}r$           | $\Omega^{2}(R-r)$       | $\dot{\Omega}(R-r)$  | =0                       |
| D   | ?                   | $\parallel EC$<br>$E\to C$ | $\perp EC$           | $\parallel C_{\sigma}E$ | $\perp C_{\sigma}E$  | Riferimento<br>Traslante |

<!Diagramma somma vettori accelerazione concaso>

#### Convesso

<!Diagramma sistema convesso>

Le traiettorie assolute e relative del punto E sono:

<!Diagramma traiettorie del punto E>


|     | $\vec{a}_{e}^{ASS}$ | $\vec{a}_{En}^{REL}$       | $\vec{a}_{Et}^{REL}$ | $\vec{a}_{En}^{TRA}$                | $\vec{a}_{Et}^{TRA}$ | $\vec{a}_{E}^{CO}$       |
| --- | ------------------- | -------------------------- | -------------------- | ----------------------------------- | -------------------- | ------------------------ |
| M   | ?                   | $w^{2}r$                   | $\dot{w}r$           | $\Omega^{2}(R+r)$                   | $\dot{\Omega}(R+r)$  | =0                       |
| D   | ?                   | $\parallel CE$<br>$E\to C$ | $\perp CE$           | $\parallel CE$<br>$E\to C_{\sigma}$ | $\perp CE$           | Riferimento<br>Traslante |
<!Diagramma somma vettori accelerazione convesso>

## Esercizio - Velocità Rotazionali Relative

<!Diagramma ruota su asta>

Dati:
- Asta OAB ha $\Omega = 5 \frac{rad}{s}$
- Disco ha raggio r = $0,2m$
- w = 10 rad/s

La velocità rotazione w che ci è stata data è quella relativa, ci viene chiesto di trovare: $\vec{v}_{c}^{ASS}$, $\vec{a}_{c}^{ASS}$ e $\vec{w}^{ASS}$

Velocità:


|     | $\vec{v}_{c}^{ASS}$ | $\vec{v}_{c}^{REL}$ | $\vec{v}_{c}^{TRA}$ |
| --- | ------------------- | ------------------- | ------------------- |
| M   | ?                   | $\vec{w}^{REL}r$    | $\Omega 4r$         |
| D   | ?                   | $\parallel OC$      | $\perp OC$          |

<!Diagramma vettori di velocità>

Accelerazioni:


|     | $\vec{a}_{c}^{ASS}$ | $\vec{a}_{cn}^{REL}$ | $\vec{a}_{ct}^{REL}$ | $\vec{a}_{cn}^{TRA}$       | $\vec{a}_{ct}^{TRA}$ | $\vec{a}_{c}^{CO}$    |
| --- | ------------------- | -------------------- | -------------------- | -------------------------- | -------------------- | --------------------- |
| M   | ?                   | X                    | =0                   | $\Omega^{2}\cdot 4r$       | =0                   | $2\Omega v_{c}^{REL}$ |
| D   | ?                   | Rettilinea           | $\dot{w}^{REL}=0$    | $\parallel CO$<br>$C\to O$ | $\dot{\Omega} = 0$   | $\perp OC$            |

<!Diagramma somma vettori di accelerazione>

Velocità di Rotazione Assoluta:

$$\begin{gather}
\vec{w}^{ASS} = \vec{w}^{REL} + \underbrace{ \vec{w}^{TRA} }_{ \Omega } = -10 \frac{rad}{s} + 5 \frac{rad}{s} = -5 \frac{rad}{s}
\end{gather}$$

## Esercizio disco su piattaforma rotante

<!Diagramma esercizio>

Dati:
- $v_{c}^{REL}$ = $2 \frac{m}{s}$ (cost)
- R = 0,1m
- $w = 10 \frac{rad}{s}$ (cost)

Dobbiamo trovare: $\vec{v}_{p}^{ASS}$, $\vec{a}_{p}^{ASS}$ e $\vec{w}_{\text{disco}}^{ASS}$

Troviamo:
$$\begin{gather}
w_{\text{disco}}^{REL} = \frac{\vec{v_{c}}}{R} = \frac{2}{.1} = 20 \frac{rad}{s} \\
\vec{v}_{p} = 2w_{\text{disco}}R \\
\vec{a}_{p} = w^{2}r = 20^{2}\cdot.1 = 40 \frac{m}{s^{2}}
\end{gather}$$
<!Diagramma vettori su disco su piano>

Non abbiamo finito, siamo rimasti li.




