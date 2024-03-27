---
creation_date: 2023-11-18 14:41
tags:
  - cosmac
share: true
---
# Esercitazione 10

## Criterio di Resistenza

Analizzando come un materiale agisce sono sforzi troviamo che i materiali agiscono in due modi, fragil e duttile.

Ogni materiale a uno sforzo ammissibile, a tale sforzo i due tipi di materiali diversi agiscono in modo diverso, i materiali duttili iniziano a deformarsi e invece i materiali fragili di rompono.

Per ogni stato di sforzo vogliamo trovare un singolo sforzo che è equivalente, o il più possibile, allo stato di sforzo del sistema intero. In essenza vogliamo che:

$$\sigma_{eq}<\sigma_{amm}=\frac{\sigma_{lim}}{\eta}$$
I valore $\eta$ è il valore di sicurezza per ogni materiale, questo ci da un margine di errore e sicurezza tale che non abbiamo problemi nel trasferire le nostra idee dalla progettazione al mondo reale.

In generale i materiali duttili sono progettati con un $\eta \simeq 1,2$ e invece i materiali fragili $\simeq 3$

Per trovare $\sigma_{eq}$ abbiamo criteri e metodi per approssimarlo.

### Criterio di Guest-Tresca

<!Diagramma guest-tresca>

Nella formulazione originale di usava $\tau^{*}$ che lo sforzo tangenziale equivalente ma noi usiamo lo sforzo assiale equivalente.

$\tau^{*} = \frac{\sigma_{I}-\sigma_{III}}{2} \leq \frac{R_{s}}{2}\cdot \frac{1}{\eta}$
Questo ci da uno sforzo equivalente di guest-tresca pari a:

$$\boxed{ \sigma_{GT}^{*} = \sigma_{I}-\sigma_{III} \leq \frac{R_{s}}{\eta} }$$

### Criterio di Von Mises

Il criterio di Von Mises invece ci da uno sforzo equivalente pari a:

$$\boxed{ \sigma_{VM}^{*} = \sqrt{ \sigma _{I}^{2}+\sigma_{II}^{2}+\sigma_{III}^{2}-\sigma_{I}\sigma_{III} - \sigma_{I}\sigma_{II} - \sigma_{II}\sigma_{III} } \leq \frac{R_{s}}{\eta} }$$

Dato un sistema con sforzi tangenziali e assiali troviamo che:

<!Diagramma sforzi>

$$\begin{gather}
\sigma_{I} = \frac{\sigma}{2}+\sqrt{ \left( \frac{\sigma}{2} \right)^{2} + \tau^{2} } \\
\sigma_{II}=0 \\
\sigma_{III} = \frac{\sigma}{2} - \sqrt{ \left( \frac{\sigma}{2} \right)^{2}+\tau^{2} }
\end{gather}$$

Mettendo i valori negli sforzi equivalenti troviamo:

$$\begin{gather}
\sigma_{VM}^{*} =\sqrt{ \sigma^{2}+3\tau^{2} } \\
\sigma_{GT}^{*} =\sqrt{ \sigma^{2} + 4\tau^{2}}
\end{gather}$$
Troviamo che guest-tresca è più conservativo, questo significa che ci dara $\eta$ più basso, però dalla simulazioni troviamo che Von Mises è più vicino alla realtà.

### Criterio Galileo-Rankine-Navier

Questo criterio è utilizzato per i matierli fragili

<!Diagramma fragili>

Per i materiali fragili abbiamo una rottura quando:

$$\begin{gather}
|\sigma_{III}| \leq \frac{R_{c}}{\eta} \\
\text{o } |\sigma_{I}| \leq \frac{R_{t}}{\eta}
\end{gather}$$
per i materiali fragili vogliamo $\eta \simeq 3$

Lo sforzo equivalente è:
$$\sigma_{GEN}^{*} \leq \frac{R_{m}}{\eta}$$
## Esercizio 1

### Sub-esercizio 1

### Sub-esercizio 2

### Sub-esercizio 3

### Sub-esercizio 4

## Esercizio 2

## Esercizio 3