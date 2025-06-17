---
creation_date: 2023-10-17 20:59
tags:
  - PIE
share: true
---
# Lezione 9 - Corrente Alternata

Richiamiamo che: 

$v(t) = \sqrt{ 2 }\underbrace{ V }_{ \substack{\text{Valore}\\\text{Effettivo}} } \cos(\omega t+\phi_{v}) = \mathrm{Re}(\sqrt{ 2 }V\underbrace{ e^{j\phi_{v}} }_{ \text{Fasore} }e^{j\omega t})$

Il valore medio è uguale alla media quadratica: $\sqrt{ \frac{1}{T} \int _{0}^{T}v(t)^{2} \, dt }$

Il fasore della tensione può scritto anche come $\overline{V} = V e^{j\phi_{v}}$

Questo processo di trasformare un valore dipendente dal tempo in un valore indipendente con i numeri complessi è della la trasformata di Steinitz.

![](Pasted%20image%2020231022150203.png)

$\underbrace{ V = V_{R}+V_{L}+V_{C} }_{ Integro-differenziale \implies complicato }$

La legge di Kirchhoff non cambia la forma, significa che sono anche questo sinosoidali, non cambia $\omega$ sono come prima, ma sfasati.

## Resistenza

$V = \mathrm{Re}(\sqrt{ 2 }\underbrace{ V_{R}e^{i\phi_{v}} }_{ \overline{V} }\cdot e^{j\omega t}) = R \cdot \mathrm{Re}(\sqrt{ 2 }I e^{j\omega t}e^{ j\omega t })$
$\implies \overline{V}_{R} = R \overline{I}$

Non serve cercare sinosoidi, se ne sappiamo uno sappiamo gli altri.

## Induttore $\to$ nella frequenza

$\mathrm{Re}(\sqrt{ 2 }\underbrace{ V_{L}e^{ j\phi_{L} } }_{ \overline{V}_{L} }e^{ j\omega t }) = L \frac{d}{dt}(\mathrm{Re}(\sqrt{ 2 }\underbrace{ Ie^{ j\phi_{L} } }_{ \overline{I} }e^{ j\omega t }))$

$= L\cdot j\omega \cdot \mathrm{Re}(\sqrt{ 2 }\:\overline{I} e^{ j\omega t }) = \overline{V}_{L} = j\omega L\: \overline{I} = j\underbrace{ X_{L} }_{ \substack{\text{Reattanza}\\ \text{Induttiva}\\ [\Omega]} } \overline{I}$

![](Pasted%20image%2020231022150225.png)

Le resistenza rimane uguale, invece la induttanza cambia da esser dipendente dal tempo a esser indipendente dal tempo attraverso i numeri complessi che non variano nel tempo.

## Conduttanza

$\mathrm{Re}(\sqrt{ 2 }\underbrace{ I e^{ j\phi_{I} } }_{ \overline{I} }e^{ j\omega t }) = C \frac{d}{dt}(\mathrm{Re}(\sqrt{ 2 }\underbrace{ V_{C}e^{ j\phi_{V} } }_{ \overline{V}_{C} }e^{ j\omega t }))=$
$\overline{I} = Cj\omega \mathrm{Re}(\sqrt{ 2 }\overline{V}_{C}e^{ j\omega t }) = Cj\omega V_{C}$

![](Pasted%20image%2020231022150832.png)

## Leggi di Ohm

- $\overline{V} = R\overline{I}$
- $\overline{V} = jX_{L}\overline{I} = j\omega L\overline{I} \to X_{L} = \omega L$
- $\overline{V} = -j\underbrace{ X_{C} }_{ \substack{\text{Reattanza}\\\text{Conduttanza}} }\overline{I}=-j\cdot \frac{1}{\omega C}\cdot \overline{I} \to X_{C} = \frac{1}{\omega C} (\text{o } = -\frac{1}{\omega C})$
Per la reattanza conduttanza alcuni mettono il meno dentro altri lo tengono fuori.

## Reti Simboliche Equivalenti

Le reti simboli equivalenti sono le stesse reti ma con i numeri complessi, questo significa che anche se si ricava lo stesso risultato, per il fatto che ci sono i numeri complessi la rete divente per effetto "finta".

![](Pasted%20image%2020231022150853.png)

$\overline{V}= \overline{V}_{R}+\overline{V}_{L}+\overline{V}_{C} = R\overline{I} + jX_{L}I - jX_{C}\overline{I}$

$\implies \overline{V} = (R+ j(X_{L}-X_{C}))\overline{I} \to$ Equazione risolutiva

Diciamo che:

$R+j(X_{L}-X_{C})=\overline{Z} [\Omega]$
$\overline{Z} \to$ Impedenza

### Legge di Ohm Generalizzata

![](Pasted%20image%2020231022150913.png)

$\overline{V} = \overline{Z} \cdot \overline{I}$

$|\overline{Z}| = Z = \sqrt{ R^{2}+(X_{L}-X_{C})^{2} }$

Questo circuito ha comportamento induttivo se $X_{L}<X_{C}$

Invece ha comportamento capacitativo se $X_{C}<X_{L}$

## Funzionamento degli elementi in AC

![](Pasted%20image%2020231022150928.png)

Attraverso non si muove la carica, neanche in AC, ma il cambio nel campo elettrico causa un cambio nel cambio magnetico che significa che con la variazione della tensione la carica all'altro lato è spinta. La induzione magnetica è causata dal cambio nella tensione quindi in corrente continua non occorre. Questo è duale per l'induttore.

L'induttore e condensatore non consumano energia, accumulano energia.

Il condensatore $\to$ accumulano energia nel campo elettrico
L'induttore $\to$ accumulano energia nel campo magnetico

![](Pasted%20image%2020231022150939.png)

---
Con la corrente alternante, invece di studiare la rete nel tempo, la studiamo nei numeri complessi che ci danno un analogo esatto. Riconosciamo però che cambia nel tempo se lo portiamo indietro e che ogni tanto i valori arrivano a 0, cioè si spegne.

---

## Esempio

![](Pasted%20image%2020231022151032.png)

## Leggi e Teoremi

Le leggi e teoremi che abbiamo trattato fin ora valgono ancora, le equazioni dei partitori valgono anche quelle.

Troviamo che $I = \sqrt{ I_{\mathrm{Re}}^{2}+I_{\mathrm{Im}}^{2} }$
e che $\phi_{I} = \arctan\left( \frac{I_{\mathrm{Im}}}{I_{\mathrm{Re}}} \right)$

Il teoremi di Thevenin e Norton valgono ancora

Per Thevenin:

![](Pasted%20image%2020231022151055.png)

In regime alternato, la energia si accumula negli induttori e condensatori, per ciò il sistema deve erogare più potenza per compensare per quella accumulata. 

