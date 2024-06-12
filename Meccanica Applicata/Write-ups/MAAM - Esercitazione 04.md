---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Esercitazione 4 -

## Esercizio Ultima Volta

Se mettiamo il sistema traslante a $O_{2}$ allora abbiamo traiettoria per ogni movimento che è:
<!Diagramma sistema traslante>

Se mettiamo un sistema diverso, rotante e mobile a $O_{1}$ allora abbiamo traiettorie come:
<!Diagramma sistema rotante mobile>

Facendo le tabelle delle velocità e accelerazioni con i vettori per sistema traslante:

##### Velocità:


|     | $\vec{v}_{p}^{ASS}$ | $\vec{v}_{p}^{TRA,T}$ | $\vec{v}_{p}^{TRA,T}$ | $\vec{v}_{p}^{REL}$ |
| --- | ------------------- | --------------------- | --------------------- | ------------------- |
| M   | ?                   | $v_{c}$               | $w_{1}O_{1}O_{3}$     | $w_{2}O_{2}P$       |
| D   | ?                   | ORIZZ                 | $\perp O_{1}O_{3}$    | $\perp O_{2}P$      |
<!Diagramma vettori velocità>

##### Accelerazione:


|     | $\vec{a}_{p}^{ASS}$ | $\vec{a}_{pn}^{TRA,T}$ | $\vec{a}_{pt}^{TRA,T}$ | $\vec{a}_{pn}^{TRA,R}$                 | $\vec{a}_{pt}^{TRA,R}$  | $\vec{a}_{pn}^{REL}$           | $\vec{a}_{pt}^{REL}$ | $\vec{a}_{p}^{CO}$      |
| --- | ------------------- | ---------------------- | ---------------------- | -------------------------------------- | ----------------------- | ------------------------------ | -------------------- | ----------------------- |
| M   | ?                   | =0                     | $a_{c}$                | $w_{1}^{2}O_{1}O_{3}$                  | $\dot{w}_{1}O_{1}O_{3}$ | $w_{2}^{2}O_{3}P$              | $\dot{w}_{2}O_{3}P$  | =0                      |
| D   | ?                   | Rettilineo             | ORIZZ                  | $\parallel O_{1}O_{2}$$O_{3}\to O_{1}$ | $\perp O_{1}O_{3}$      | $\parallel O_{3}P$$P\to O_{3}$ | $\perp O_{3}P$       | Riferimento è traslante |

<!Diagramma accelerazioni>

## Cambio di Riferimento

Dato il sistema:

<!Diagramma sistema e dati>

### Riferimento Traslante
Mettendo il sistema traslante a $O_{2}$, le traiettorie del sistema sono:

<!Diagramma traiettorie>


| $\vec{v}_{p}^{ASS}$ | $\vec{v}_{p}^{REL}$ | $\vec{v}_{p}^{TRA}$ |
| ------------------- | ------------------- | ------------------- |
| ?                   | $w_{2}L_{2}$        | $w_{1}L_{1}$        |
| ?                   | $\perp O_{1}O_{2}$  | $\perp O_{2}P$      |

<!Diagramma vettori velocità>


| $\vec{a}_{p}^{ASS}$ | $\vec{a}_{pn}^{TRA}$   | $\vec{a}_{pt}^{TRA}$ | $\vec{a}_{pt}^{REL}$ | $\vec{a}_{pn}^{REL}$ | $\vec{a}_{p}^{CO}$ |
| ------------------- | ---------------------- | -------------------- | -------------------- | -------------------- | ------------------ |
| ?                   | $w_{1}^{2}L_{1}$       | $\dot{w}_{1}=0$      | $w_{2}^{2}O_{2}P$    | $\dot{w}_{2}=0$      | 0                  |
| ?                   | $\parallel O_{1}O_{2}$ | X                    | $\parallel O_{2}P$   | X                    | Rif. Traslante     |

<!Diagramma accelerazioni>

### Riferimento Rotante

<!Diagramma riferimento rotante>

Tracciando le traiettorie causate da ogni moto, troviamo:

<!Diagramma traiettorie tracciate>


|     | $v_{p}^{ASS}$ | $\vec{v}_{p}^{TRA}$  | $\vec{v}_{p}^{REL}$ |
| --- | ------------- | -------------------- | ------------------- |
| M   | ?             | $w_{1}(L_{1}+L_{2})$ | $w_{21}L_{2}$       |
| D   | ?             | $\perp O_{1}P$       | $\perp O_{2}P$      |
<!Diagramma vettori velocità>


|     | $\vec{a}_{p}^{ASS}$ | $\vec{a}_{pn}^{TRA}$     | $\vec{a}_{pt}^{TRA}$ | $\vec{a}_{pn}^{REL}$ | $\vec{a}_{pt}^{REL}$ | $\vec{a}_{p}^{CO}$                 |
| --- | ------------------- | ------------------------ | -------------------- | -------------------- | -------------------- | ---------------------------------- |
| M   | ?                   | $w_{1}^{2}(L_{1}+L_{2})$ | $\dot{w}_{1} = 0$    | $w_{21}^{2}L_{2}$    | $\dot{w}_{21}=0$     | $2w_{1}w_{21}L_{2}$                |
| D   | ?                   | $\parallel O_{1}P$       | X                    | $\parallel O_{2}P$   | X                    | $\parallel O_{2}P$<br>$O_{2}\to P$ |
<!Diagramma accelerazione>

Troviamo che la velocità e accelerazione assoluta sono uguali nei due sistema, il cambio di sistema cambia i vettori che compongono il vettore assoluto, dato che il sistema non cambia, ma come lo analizziamo cambia ha senso che non potrebbe cambiare il risultato finale ma i passi che ci portano a quel risultato si.

## Vincolo di Rotolamento

Il moto dato dal vincolo di rotolamento è la combinazione della rotazione e della traslazione del pezzo rotante:

<!Diagramma sistema>

### Punto E
Il punto di contatto E ha la sua traiettoria relative e di trascinamento:

<!Diagramma traiettorie>

In questo caso il punto E è fermo perché la combinazione ci deve portare esser fermo.

|     | $\vec{v}_{E}^{ASS}$ | $\vec{v}_{E}^{REL}$ | $\vec{v}_{E}^{TrA}$ |
| --- | ------------------- | ------------------- | ------------------- |
| M   | ?                   | $wR$                | $v_{c} = wR$        |
| D   | ?                   | $\perp CE$          | ORIZZ               |

I vettori di velocità del punto E ci fanno vedere che è fermo:

<!Diagramma vettori velocità>


|     | $\vec{a}_{E}^{ASS}$ | $\vec{a}_{En}^{TRA}$ | $\vec{a}_{Et}^{TRA}$ | $\vec{a}_{En}T^{REL}$      | $\vec{a}_{Et}^{REL}$ |
| --- | ------------------- | -------------------- | -------------------- | -------------------------- | -------------------- |
| M   | ?                   | =0                   | $a_{c}(=\dot{w}R)$   | $w^{2}R$                   | $\dot{w}R$           |
| D   | ?                   | Rettilineo           | ORIZZ                | $\parallel CE$<br>$E\to C$ | $\perp CE$           |
<!Diagramma vettori accelerazione>

Se E rimane li, non può avere neanche $\vec{a }_{t}\neq 0$ perché striscerebbe nel prossimo istante.

### Punto A

Tracciamo le traiettorie del punto A:

<!Diagramma traiettorie punto A>

E le tabelle:

|     | $v_{A}^{ASS}$ | $\vec{v}_{A}^{TRA}$  | $\vec{v}_{A}^{REL}$ |
| --- | ------------- | -------------------- | ------------------- |
| M   | ?             | $w_{1}(L_{1}+L_{2})$ | $w_{21}L_{2}$       |
| D   | ?             | $\perp O_{1}P$       | $\perp O_{2}P$      |

|     | $\vec{a}_{A}^{ASS}$ | $\vec{a}_{An}^{TRA}$ | $\vec{a}_{At}^{TRA}$ | $\vec{a}_{An}T^{REL}$      | $\vec{a}_{At}^{REL}$ |
| --- | ------------------- | -------------------- | -------------------- | -------------------------- | -------------------- |
| M   | ?                   | =0                   | $a_{c}(=\dot{w}R)$   | $w^{2}R$                   | $\dot{w}R$           |
| D   | ?                   | Rettilineo           | ORIZZ                | $\parallel AC$<br>$A\to C$ | $\perp AC$           |

<!Diagramma vettori>

Con questi vettori troviamo che per il disco il punto E è CIR. Ma CIR non significa che il vincolo di contatto equivale ad una cerniera, vediamo la differenza perché con una cerniera il sistema di riferimento non può traslare.

<!Diagramma contatto cerniera>

Il due sistemi sono identici per le velocità
Ma le accelerazioni fanno vedere la differenza tra il vincolo di contatto e cerniera.
Le accelerazioni ci rivelano che i sistemi non sono uguali, sistemi uguali hanno accelerazioni uguali.

## Rotolamento su piano curvilineo

<!Diagramma rotolamento curvilineo>

$$\begin{gather}
v_{c} = wr \\
a_{ct} = \dot{w}r \\
a_{cn} = \frac{v_{c}^{2}}{R-r} = w^{2} \frac{r^{2}}{R-r} \\
\end{gather}$$

$$\begin{gather}
\Omega = w \frac{r}{R-r} \implies \Omega(R-r) = wr \\
\dot{\Omega}(R-r) = \dot{w}r \implies  \dot{\Omega} = \dot{w} \frac{r}{R-r}
\end{gather}$$

Questo può esser utilizzato per studiare i cambi planetari:

<!Diagramma cambio planetare>

Possiamo studiare i riduttori di velocità come questo qui.


