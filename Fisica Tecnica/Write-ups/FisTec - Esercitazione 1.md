---
creation_date: 2023-09-13 16:06
tags:
  - fistec
parent: 
child: 
share: false
---
# Esercitazione 1 - Ripasso Concetti di Base

Data: 21-09-23

Esercitatore: Damiano Fustinoni
Email: damiano.fustinoni@polimi.it
Ricerca: www.thermolab.polimi.it

Libri consigliati: 
- Cengel Termodinamica e Trasmissione di Calore
- Cengel, Cimbala, Turner - Elementi di fisica tecnica
- Incropera, DeWitt

SOCRATIVE - FUSTINONI

Roba<mark style="background: #ADCCFFA6;"> evidenziata </mark>e' importante e dovrebbe esser considerata per il <mark style="background: #D2B3FFA6;">formulario</mark>
## Grandezze e sistema internazionale

- Lunghezza $[m]$
- Masa $[kg]$
- Tempo $[s]$
- Temperatura $[K]$ - > $T[^oC] = T[K] + 273,15$ e $T[^oC] = \frac{5}{9}(T[^oF] + 32)$
- Superfice di una sfera = $4\pi r^2$
- Volume sfera = $\frac{4}{3}\pi r^3$
- $1l = 1dm^3 = 0,01m^3$
### Grandezze Cinematiche

- velocita: $v = \frac{l}{t} = \frac{m}{s}$
- Accelerazione: $a = \frac{v}{s} = \frac{m}{s^2} = \frac{dv}{dt}$
- $g_o = 9,80665 \rightarrow$ $g_o = 9,81 \frac{m}{s^2}$ <mark style="background: #C9CD65;">importante</mark>

Densita': $\rho = \frac{[M]}{[V]} = \frac{[kg]}{[m^3]} \rightarrow \rho_{H_2O} \frac{kg}{m^3}$
Volume massico: $v^* = \frac{[V]}{[M]} \rightarrow \frac{m^3}{kg} \rightarrow \frac{1}{\rho}$

### Portate

Portata volumetrica: $\frac{dV}{dt} = \frac{[V]}{[t]} \rightarrow \frac{[m^3]}{[s]} \rightarrow [\dot{V}]$
Portata massica: $\frac{dM}{dt} = \frac{M}{t} \rightarrow \frac{kg}{s} \rightarrow [\dot{M}]$

## Grandezze Derivata

- Quantita' di moto: $\Gamma = [M][v] \rightarrow \frac{kgm}{s}$ 
- Forza $[M][a] \rightarrow kg \frac{m}{s^2} \rightarrow [N]$
- Forza peso = $F_p = [M][g]$, questa e' la forza generata da una massa.

L'energia si paga in J. 

Potenza = P $\rightarrow [W] = \frac{[J]}{[s]}$
kWh = $[\frac{J}{s}]\cdot[s] = [J]$

Metti sempre le grandezze perche' aiutano. Se si pensa di avere una risposta sbagliata e non hai tempo si puo' scrivere "x unita' ma probabilmente ha error/e' sbagliato"

## Lavoro

L = $\int_1^2 Fds \rightarrow L = F\Delta s \rightarrow [N][m] \rightarrow [J]$

Energia Cinetica $\rightarrow E_k = \frac{1}{2}mv^2 \rightarrow [M] \cdot \frac{[L]^2}{[t]^2} = [F][L] = [J]$

Lavoro ed energia ha la stessa ma non significa che se qualcosa ha energia puo' fare lavoro.

Energia Potenziale $\rightarrow E_p = mgh = \frac{[M][L]}{[t]^2}[L] \rightarrow [J]$
Energia Elastica $\rightarrow E_{el} = \frac{1}{2}k_{el}x^2 \rightarrow \frac{[F]}{[L]}[L]^2 \rightarrow [J]$

Potenza = $\frac{[Lavoro]}{[t]} \rightarrow \frac{[J]}{[s]} = [W] Watt$
P = $[F]\cdot [v] \rightarrow \frac{[N][m]}{[s]} = \frac{[J]}{[s]} = W$

$1\underbrace{\underbrace{kW}_{\text{Potenza}}h}_{\text{Energia}}$ = 1 $\frac{kJ}{s}\cdot 3600s = 3600kJ = 3,6MJ$
$[Q] \rightarrow \Delta U = Q^\underbrace{\leftarrow}_{\text{entrante}} - L^\underbrace{\rightarrow}_{\text{uscente}}$

1 cal = 4,1868

## Pressione

$[P] = \frac{[F]}{[A]} = \frac{[F]}{[L][L]} \rightarrow \frac{N}{m^2} = Pa \rightarrow$ Pascal

<mark style="background: #C9CD65;">1atm = 101325 Pa = 760mmHg</mark>
<mark style="background: #C9CD65;">$1bar = 10^5$ Pa</mark>

Cambiando la forma della formula della pressione si trova:

Pressione = $\frac{F_p}{\text{Area}} = \frac{\underbrace{\rho \cdot \underbrace{\text{Area} \cdot h}_{\text{Volume}}}_{\text{Massa}} \cdot g}{\text{Area}}$ = $\rho g h \rightarrow \frac{[kg]}{m^3} \cdot \frac{m}{s} \rightarrow \frac{N}{m^2}$ 

La ragione perche' Torricelli uso' il mercurio invece dell'acqua e' perche occupava meno volume per creare un'atmosfera di una 1atm.

$h_{H_2O} = \frac{\rho_{Hg}}{\rho_{H_2O}} \cdot h_{Hg} = 10,32m \approx 1atm$ , sarebbero serviti 10000L di acqua per creare un atmosfera.

Per trovare la distanza che il sangue puo' viaggiare:

Pressione cistolica $\rightsquigarrow$ 120mmHg

P$_{\text{SANGUE}} = \rho_{\text{SANGUE}} gh$
$\rho_{\text{SANGUE}} \approx 1000 kg/m^2$ 
h = $\frac{P}{\rho g} = \frac{120mmHg \cdot \frac{101325 Pa}{760mmHg}}{1057\frac{kg}{m^3} \cdot 9,81\frac{m}{s^2}} = 1,55m$

Esercizio 1)

M = 3kg
g$_\text{LUNA} = 1,6m/s^2$
h = 3,7m


L'obbiettivo di portare la massa alla porta del lander lunare, quale e' la potenza del motore se la velocita' di movimento e' 2km/h.
?W$_{\text{MOTORE}}$

v = 2km/h = 0,56m/s
L = mgh

W$_{\text{MOTORE}}$ = $\frac{mgh}{t} =$ $\frac{mgh}{\frac{h}{v}}$ = 2,688 W

Un altro modo e' di usare l'equazione W = F$_p \cdot$ v, che da la stessa risposta.

SOCRATIVE RIMANE APERTO per l'uso.
