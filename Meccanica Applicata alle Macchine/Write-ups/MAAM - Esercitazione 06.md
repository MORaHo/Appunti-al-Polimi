---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Esercitazione 6 - 

Guardando un sistema a camma con punto di riferimento traslante sul piattello:

<!Diagramma sistema>


| $\vec{v}_{c}^{ASS}$ | $\vec{v}_{c}^{REL}$          | $\vec{v}_{c}^{TRA}$ |
| ------------------- | ---------------------------- | ------------------- |
| $wOC$               | ?                            | ?                   |
| $\perp OC$          | $\parallel$ Rif<br>Piattello | VERT.               |

| $\vec{a}_{c}^{ASS}$        | $\vec{a}_{c}^{REL}$ | $\vec{a}_{c}^{TRA}$ |
| -------------------------- | ------------------- | ------------------- |
| $w^{2}OC$                  | ?                   | ?                   |
| $\parallel OC$<br>$C\to O$ | Rif.<br>Piattello   | VERT.               |

<!Diagramma somma vettori>

Riguardando problemi del oratorio un momento

<!Diagrammi problemi>

I vettori che troviamo saranno la somma dei vettori interni al disco e vettori che sono generati dal movimento del disco e il sistema di riferimento se stesso

Un disco a solo contatto di rotolamento ha vettori come:

<!Diagramma vettori disco a solo rotolamento>

## Problema 1

Mettiamo disco su un cuneo e con il centro vincolato a terra con un carello:

<!Diagramma problema>

La velocità del punto E sarà:


|     | $\vec{v}_{E}^{ASS}$ | $\vec{v}_{E}^{REL}$ | $\vec{v}_{E}^{TRA}$ |
| --- | ------------------- | ------------------- | ------------------- |
| M   | ?                   | $wR$                | ?                   |
| D   | ORIZZ.              | $\perp CE$          | VERT.               |
<!Diagramma vettori velocità>

Quando abbiamo due incognite, prendiamo direzioni opportune per la risoluzione del problema.

Tanzi ha sbagliato nel calcolo della accelerazione e per ciò ci ha insegnato un nuovo metodo di semplificazione.

## Metodo di Separazione

Il metodo di separazione è un metodo per semplificare i sistemi di corpi, separiamo i corpi in modo opportuno tale che lo della accelerazione e per ciò ci ha trovare quello che vogliamo più semplifcamente.

### Velocità and Accelerazione del Punto C

Per imparare il sistema ha iniziato con il punto C perché il risultato è più intuitivo.

<!Diagramma separazione nel punto C>

La velocità è:

Facciamo la equazione delle velocità dai due punti di riferimento diversi
$$\vec{v}_{c}^{ASS(OSS\: 1)} = \underbrace{ \vec{v}_{c}^{ASS(OSS\:2)} }_{ \vec{v}_{c}^{REL}+\vec{v}_{c}^{TRA} }$$

|     | $\vec{v}_{c}^{ASS}$ | $\vec{v}_c^{REL}$  | $\vec{v}_{c}^{TRA}$ |
| --- | ------------------- | ------------------ | ------------------- |
| M   | ?                   | $wR$               | ?                   |
| D   | VERT.               | $\parallel \gamma$ | $\parallel \sigma$  |

<!Diagramma somma vettori velocità>

Come prima facciamo la equazione:

$$\vec{a}_{c}^{ASS(S_{1})} = \vec{a}_{c}^{REL} + \vec{a}_{c}^{TRA}$$


|     | $\vec{a}_{c}^{ASS}$ | $\vec{a}_{ct}^{REL}$ | $\vec{a}_{ct}^{TRA}$ |
| --- | ------------------- | -------------------- | -------------------- |
| M   | ?                   | $\dot{w}R$           | ?                    |
| D   | VERT.               | $\parallel \gamma$   | $\parallel \sigma$   |
<!Diagramma vettori accelerazione>

### Ritornando al punto C

Dividiamo in due sistemi opportuni:

<!Diagramma separazione in due sistema opportuni>

Facciamo la equazione delle velocità:


| $\vec{v}_{Ed}^{REL(OSS\:1)}$ | $\vec{v}_{Ed}^{TRA(OSS\:1)}$ | $\vec{v}_{Ed}^{REL(OSS\:2)}$ | $\vec{v}_{Ed}^{TRA(OSS\:2)}$ |
| ---------------------------- | ---------------------------- | ---------------------------- | ---------------------------- |
| $wR$                         | ?                            | =0                           | ?                            |
| $\perp CE_{d}$               | VERT.                        | Punta di<br>Cuspide          | ORIZZ.                       |

<!Diagramma somma di vettori velocita punto Ed>

La equazione della accelerazione è:
$$\vec{a}_{E_{d}}^{ASS(S_{1})} = \vec{a}_{E_{d}}^{ASS(S_{2})}$$

La tabella delle velocità è:


| $\vec{a}_{E_{d},n}^{REL(S_{1})}$   | $\vec{a}_{E_{d},t}^{REL(S_{1})}$ | $\vec{a}_{E_{d},n}^{TRA(S_{1})}$ | $\vec{a}_{E_{d},t}^{TRA(S_{1})}$ | $\vec{a}_{E_{d},n}^{REL(S_{2})}$ | $\vec{a}_{E_{d},t}^{REL(S_{2})}$ | $\vec{a}_{E_{d},n}^{TRA(S_{2})}$ | $\vec{a}_{E_{d},t}^{TRA(S_{2})}$ |
| ---------------------------------- | -------------------------------- | -------------------------------- | -------------------------------- | -------------------------------- | -------------------------------- | -------------------------------- | -------------------------------- |
| $w^{2}R$                           | $\dot{w}R$                       | X                                | ?                                | $w^{2}R$                         | X                                | X                                | ?                                |
| $\parallel CE_{d}$<br>$E_{d}\to C$ | $\perp CE_d$                     | Rettilineo                       | VERT.                            | $\perp\gamma$                    | Cuspide                          | Rettilineo                       | ORIZZ.                           |




