---
creation_date: 2023-12-02 14:50
tags:
  - fistec 
share: true
---
# Lezione 20 - Macchine Termiche

## Scambiatori di Calori

Ci sono tipi diversi di scambiatori, hanno usi e metodi diversi di scambiamento, per la progettazione dobbiamo scegliere lo scambiatore giusto.

Uno scambiatore che abbiamo già visto è il condensatore che agisce tra fluido e fluido:

<!Diagramma condensatore>

### Scambiatore a doppio tubo

In questo caso ci sono due tubi uno dentro l'altro e il fluido che fluisce dentro e intorno a quello intero

<!Diagramma doppio tubo>

Lo scambio di calore dipende alla equivalenza della direzione del flusso, se fluiscono in controcorrente il grafico delle temperature in funzione della posizione è:
<!Diagramma temperature nel tempo controcorrente>

Invece se hanno direzione equicorrente hanno grafico:

<!Diagramma equicorrente di temperatura nel tempo>

A parità di temperature iniziali e fluidi, il contro-corrente è più efficiente/ serve meno area di scambio per avere lo stesso cambio di temperatura.

### Scambiatori Compatti

Gli scambiatori compatti sono scambiatori di calore con un elevato rapporto tra la superficie di scambio e il volume dello scambiatore. Questi scambiatori sono usati in casi di limite di spazio.

Il rapporto è rappresentato da $\beta$:
- radiatori ($\beta=100 \frac{m^{2}}{m^{3}}$)
- turbine ($\beta=6000$)
- rigeneratori per motori Stirling ($\beta=15000$)
- polmoni ($\beta=20000$)

#### Tipi di Scambiatori Compatti:

##### Tubi e Aletta

<!Diagramma tubi e alette>

In questo scambiatore il calore passa dai tubi alle alette, il fluido freddo passa tangente alle alette prendendo il calore.

##### Mantello e Tubi

Questo è usato in casi industriali dove la dimensione dello scambiatore non importa molto:

<!Diagramma mantello e tubo>

In questo caso il fluido caldo passa per tubi interni, forzato a circolare intorno ai diaframmi, e invece il fluido freddo passa per i tubi esterni direttamente prendendo calore dai tubi caldi.

##### Scambiatore a piastre e telaio

<!Diagramma a piastre e telaio>

## Coefficiente di Scambio Termico

Prendendo  un doppio tubo come esempio, abbiamo 2 trasferimenti di calore per convezione e 1 per conduzione:

<!Diagramma doppio tubo>

La resistenza totale è:

$$R_{tot}=\frac{1}{h_{1}A_{1}}+ \frac{\ln\left( \frac{D_{0}}{D_{1}} \right)}{2\pi kL}+\frac{1}{h_{0}A_{0}}$$

La portate di calore è:

$$\dot{q}=\frac{\Delta T}{R_{tot}}=UA\Delta T$$
Dove U è il coefficiente di scambio

Se $A_{1}\approx A_{0}\approx A_{s}$:

$$\implies \frac{1}{U} \approx \frac{1}{h_{1}}+\frac{1}{h_{0}}$$

Se: $h_{1}\gg h_{0} \implies \frac{\frac{1}{U}\approx_{1}}{h_{0}}$
Invece se: $h_{0} \gg h_{1} \implies \frac{1}{U}\approx \frac{1}{h_{1}}$

Il fluido che scambia il calore peggio limita lo scambio termico.

## Fattore di Sporcamento

Durante l'uso degli scambiatori di calore si iniziano a depositare polveri o impurità nei fluidi caldi. Col tempo questi depositi di impurità aumenta in dimensione e sviluppano resistenze alla trasferta di calore attraverso loro. Il fattore di sporcamento occorre anche per la corrosione.

Riguardando la resistenza nel caso del doppio tubi aggiungendo la resistenza per lo sporcamento si trova:
$$R_{tot}=\frac{1}{h_{1}A_{1}}+\frac{R_{F_{1}}}{A_{1}}+\frac{\ln\left( \frac{D_{0}}{D_{1}} \right)}{2\pi kL}+\frac{R_{F_{0}}}{A_{0}}+\frac{1}{h_{0}A_{0}}$$

## Analisi Degli Scambiatori di Calore

### Caso 1) Conosciamo T e $\dot{m}$

Conoscendo $\dot{m},T_{LL},T_{CM},T_{F_{i}},T_{FU}$, vogliamo determinare il tipo di scambiatore, il valore di U (con $R_{F_{1}}$) e A (la superficie di scambio)

Prendendo lo scambio tra 2 fluidi, 1 caldo e 1 freddo:

$$\begin{align}
\dot{Q} &= \dot{m}_{c}c_{pc}^{*} (T_{ci}-T_{cu}) = C_{c}(T_{ci}-T_{cu})\\
&= \dot{m}_{F}c_{Fp}^{*} (T_{fu}-T_{fi})=C_{F}(T_{Fu}-T_{F_{i}})
\end{align}$$

$C = \dot{m}c_{p}^{*}$

Se C sono uguali, allora $\Delta T$ sono ugualio

Se un fluido va da liquido a vapore:
$\dot{Q}=\dot{m}h_{FG}$ deve esser considerato, e può causare un $\Delta T$ per questa ragione si usa la $\dot{Q}$ invece di $\Delta T$

Con il flusso controcorrente, troviamo questi grafici in base alla relazione tra $C_{c}$ e $C_{f}$

<!Diagrammi T in funzione dello spazio in contro-corrente>

#### Differenza Termica Media Logistica

Con questo metodo possiamo trovare $\dot{Q}$ per lo scambiatore che dobbiamo scegliere

$$\begin{gather}
\delta \dot{Q} = -\dot{m}_{h}c_{ph}dT_{h} \\
\delta \dot{Q}=\dot{m}_{c}c_{pc}dT_{c} \\
\implies dT_{h}=-\frac{\delta \dot{Q}}{\dot{m}_{h}c_{ph}} \\
\implies dT_{c}=-\frac{\delta \dot{Q}}{\dot{m}_{h}c_{ph}} \\
dT_{h}-dT_{c} = d(T_{h}-T_{c}) = -\delta \dot{Q}\left( \frac{1}{\dot{m}_{h}c_{ph}}+\frac{1}{\dot{m}_{c}c_{pc}} \right) (1) \\
\delta \dot{Q}=U(T_{h}-T_{c})dA_{s} \\
	\frac{d(T_{h}-T_{c})}{T_{h}-T_{c}} = -UdA_{s}\left( \frac{1}{\dot{m}_{h}c_{ph}}+\frac{1}{\dot{m}_{c}c_{pc}} \right)(2) \\ \\
\text{Sostituendo (2) in (1) ricaviamo: }\\
\ln\left( \frac{T_{h,out}-T_{c,out}}{T_{h,in}-T_{c,in}} \right) = -UA_{s} \left( \frac{1}{\dot{m}_{h}c_{ph}}+\frac{1}{\dot{m_{c}}c_{pc}} \right) \\
\text{Abbiamo allora che:} \\
\dot{Q}=UA_{s}\Delta T_{lm} \\
\Delta T_{lm} = \frac{\Delta T_{1}-\Delta T_{2}}{\ln\left( \frac{\Delta T_{1}}{\Delta T_{2}} \right)}
\end{gather}$$

$$\Delta T_{1}=T_{c,in}-T_{F,in}$$
$$\Delta T_{2}=T_{c,out}-T_{F,out}$$
Troviamo che a pari T iniziali e U serve meno A:
$$\Delta T_{lmCC}>\Delta T_{lmEC}$$
CC$\to$ controcorrente
EC$\to$ equicorrente
### Caso 2) $\mathcal{E}-NTU$

Conosco caratteristiche scambiatore, conosco $\dot{m}_{c}$,$\dot{m}_{f}$.$T_{ci}$ e $T_{Fi}$

Dobbiamo calcolare $\dot{Q}$ e $T_{cu}$ e $T_{fu}$

#### Metodo $\mathcal{E}$-NTU

$\mathcal{E} = \frac{\dot{Q}}{\dot{Q}_{MAX}}= \frac{\text{Poratata di Calore Vera}}{\text{Portata di Calore Massimo}}$

$$\begin{gather}
\dot{Q} = C_{c}(T)(T_{c,out}-T_{c,in})=C_{h}(T_{h,in}-T_{h,out}) \\
\Delta T_{MAX} = T_{h,in}-T_{c,in} \\
\dot{Q}_{max} = C_{min}\Delta T_{max} = C_{min}(T_{h,in}-T_{c,in}) \\
\text{Numero di Unità Termiche: } NTU = \frac{UA_{s}}{C_{min}}=\frac{UA_{s}}{(\dot{m}c_{p})_{min}}
\end{gather}$$
più grande è NTU, più è grande lo scambiatore

Rapporto di capacità: $c = \frac{C_{min}}{C_{max}}$

Di solito si ferma  a NTU = 3.

Vediamo nei grafici che controcorrente ha sempre $\mathcal{E}$ più grande