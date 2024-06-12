---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 16 - Avviamento

## Transitorio di Avviamento

<!Diagramma MTU>

Pendiamo un moto che funziona secondo il grafico:

<!Diagramma grafico di funzionamento>

Cioè la sua funzione è:
$$C_{m} = C_{o}\left( 1-\frac{w_{m}}{w_{o}} \right)$$
Prendiamo anche $C_{u} = cost$ e $J_{eq} = \eta J_{m}+\tau^{2}J_{u}$

La accelerazione angolare ha equazione:

$$\dot{w}_{m} = \frac{\eta C_{m}(w_{m})-\tau C_{u}}{J_{eq}}$$
Dobbiamo risolvere il sistema differenzia per trovare la velocità angolare in funzione del tempo.

Cercando la accelerazione all'avviamento, dobbiamo riscivere, costituendo $C_{m}$ con l'equazione all inizio:

$$\dot{w}_{m} = \frac{\eta C_{o}}{J_{eq}}-\frac{\eta C_{o}}{J_{eq}}\cdot \frac{w_{m}}{w_{o}}-\frac{\tau C_{u}}{J_{eq}}$$

Portiamo tutti i termini dipendenti della del tempo alla sinistra e quelli costanti alla destra:

$$\dot{w}_{m} + \underbrace{ \frac{\eta C_{o}}{J_{eq}w_{o}} }_{ A }w_{m} = \underbrace{ \frac{\eta C_{o}-\tau C_{u}}{J_{eq}} }_{ B }$$
$$\to \dot{w}_{m}+Aw_{m}=B$$
Abbiamo trovato una differenziale di primo ordine, possiamo allora risolverla come un problema di Cauchy cercando un'integrale generale e un'integrale particolare.

$$w_{m}(t) = w_{Go}(t) + w_{p}$$

### Integrale Particolare

La integrale particolare è il valore finale della funzione per t$\to$ $\infty$

$w_{p} = \overline{w}_{}$ è costante $\implies$ $\dot{w}_{p}=0\implies \dot{w}_{m}=0$

$$0+A\overline{w}_{}=B \to \overline{w}_{} = \frac{B}{A} = \frac{\eta C_{o}-\tau C_{u}}{J_{eq}} \cdot \frac{J_{eq}}{\eta C_{o}}w_{o}=
$$
$$=w_{o}\left( 1-\frac{\tau C_{u}}{\eta C_{o}} \right)$$

L'integrale particolare in effetti è la velocità del sistema a regime. Potevamo trovarlo da diagramma di funzionamento trovando la velocità di regime:

<!Diagramma di funzionamento per trovare le velocità di regime>

$$\frac{\eta C_{o}-\tau C_{u}}{\overline{w}_{} } = \frac{\eta C_{o}}{w_{o}}$$

### Integrale Generale (omogenea associata)

Da Eulero sappiamo:

$$w_{_{Go}} = Ce^{ \lambda t }; \dot{w}_{_{Go}} = \lambda Ce^{ \lambda t }$$
$$\to\lambda Ce^{ \lambda t }+ACe^{ \lambda t }=0$$
$$\to(\lambda+A)Ce^{ \lambda t }=0\implies \lambda=-A = \frac{1}{\tau_{o}}$$
$$\tau_{o} \to \text{costante di tempo del sistema} = \frac{J_{eq}w_{o}}{\eta C_{o}} = \frac{[kgm^{2}rads^{-1}]}{[kgms^{-2}m]}$$

Troviamo C imponendo le condizioni iniziali del sistema, cioè: $w_{m}(0)=0$

$$\implies 0=\underbrace{ Ce^{ ^{-t/\tau_{_{_0}}} } }_{ w_{_{Go}} }+\underbrace{ \overline{w}_{} }_{ w_{p} } \implies C =-\overline{w}_{}; w_{m}(t) = -\overline{w}_{}e^{ -t/\tau }+\overline{w}_{}    $$

$\implies w_{m}(t) = \overline{w}_{}(1-e^{ -t/\tau })$

Questo andamento è rappresentato graficamente come:
<!Diagramma andamento grafico>

La costante del tempo ha equazione:
$$\tau_{o} = \frac{J_{eq}}{\eta C_{o}}w_{o}$$

Se aumenta $J_{eq}$ la costante del tempo aumenta, quindi il sistema ci mette più tempo ad arrivare alla velocità di regime. Invece se la coppia d'avviamento aumenta allora ci mette meno tempo ad arriva alla velocità di regime.

## Avviamento con innesto a frizione.

<!Diagramma MTU con trasmissione a frizione>

### Usura

In questi sistema abbiamo due pezzi che girano una causando frizione (trazione) sull'altro per portarlo alla sua velocità, questo strisciamento causa una usura sui due pezzi.

<!Diagramma volume di usura>

Prendendo il volume di usura con una forza nota, troviamo il volume come:
$$v_{w} = k_{w}\cdot L_{DISS}$$

Dove $v_{w}$ è il volume di usura/wear, e $k_{w}$ è ol coefficiente dimensione.

$$v_{w} = k_{w}f_{d}N\Delta s$$
In questo caso prendiamo che uno non si usura, tipicamente va bene se uno si usura molto di più dell'altro come per esempio la guarnizione del freno.

Se guardiamo la sezione del sistema di trasmissione che usiamo, considerando anche la usura troviamo:
<!Diagramma sezione del sistema con usura>

Per calcolare la pressione prendiamo una fetta infinitesima ad un raggio qualsiasi.

Troviamo che:
$$\underbrace{ dA\cdot\Delta h }_{ v_{w} } = k_{w}\underbrace{ (f_{d}p)dA }_{ dL_{diss} }\underbrace{ r\Delta\theta }_{ \Delta s }\to p = \frac{\Delta h}{k_{w}\cdot f_{D}\cdot\Delta\theta}\cdot \frac{1}{r} = \frac{k'}{r}$$

Proviamo allora una mappa delle pressioni in base al raggio che è:
<!Diagramma collina delle pressioni>

La ragione per cui abbiamo un anello di materiale invece di un disco intero è perché con le pressioni così alte servirebbe un materiale con $R_{m}$ molto alto per raggiungerle se no il pezzo si rompe, e per i guadagni minimi non è utile aumentare il materiale.

### Calcolo $C_{f}$ (coppia trasmissibile dalla frizione)

N = risultate delle pressione =
$$N = \int\limits_{R_{1}}^{R_{2}} \int\limits_{0}^{2\pi} \underbrace{ p }_{ p(r) = \frac{k'}{r} } \cdot r \, d\theta  \, dr = \int\limits_{R_{1}}^{R_{2}} \frac{k'}{r} r \, dr \cdot \int\limits_{0}^{2\pi} \, d\theta = 2\pi k' \int\limits_{R_{1}}^{R_{2}}  \, dr = 2\pi k'(R_{2}-R_{1})  $$

$C_{f}$ è la coppia tramssibile dalla frizone

Sulla stessa fetta infinitesimale:

$$C_{f} = \int\limits_{R_{1}}^{R_{2}} \int\limits_{0}^{2\pi} f_{d}pr \, d\theta  \, dr \cdot r = \int\limits_{R_{1}}^{R_{2}} \int\limits_{0}^{2\pi} f_{d} \frac{k'}{r}r^{2} \, dr  \, d\theta = $$
$$=f_{d}k' \int\limits_{R_{1}}^{R_{2}} r \, dr \int\limits_{0}^{2\pi}  \, d\theta = 2\pi f_{d}k' | \frac{r^{2}}{2}|_{R_{1}}^{R_{2}} = 2\pi k'f_{d} \frac{R_{2}^{2}-R_{1}^{2}}{2} = 2\pi k'f_{d} \frac{R_{1}+R_{2}}{2}(R_{2}-R_{1}) $$

Mettendo le equazioni per $C_{f}$ e N insieme:
$$C_{f} =2\pi\underbrace{ \left( \frac{N}{2\pi (R_{2}-R_{1})} \right) }_{ k' } f_{d} \frac{R_{1}+R_{2}}{2} (R_{2}-R_{1}) = Nf_{d} \frac{R_{1}+R_{2}}{2}$$

## Trasmissione di Avviamento ($C_{f}$)

<!Diagramma sistema MTU>

Prendiamo per ipotesi $C_{m} = cost$ e $C_{u} = cost$

$C_{f}$ è gradino = $Nf_{d}R_{medio}$

Avrà andamento nel tempo così:
<!Diagramma gradino di C_f>

### Fase 1

Nella fase 1 abbiamo il motore che sta accelerando alla velocità di regime, prima che la trasmissione abbi contatto.

$w_{m}=0$
$C_{m}w_{m}-C_{f}(w_{m}-w_{u}) = J_{m}\dot{w}_{m}w_{m}$

$\dot{w}_{m} = \frac{C_{m}}{J_{m}} =\text{cost}$

Troviamo che:
$C_{f}>C_{m}>C_{u}$
Se no ci sarebbe slittamento

### Fase 2

Il sistema diventa a 2 gradi di libertà con lo strisciamento tra i due sistema non un legame cinematico. Questa mancanza di legame cinematico significa che i due sistema sono ancora indipendenti quindi bisognia scrivere una equazione cinematica per ognuno.

Sistema lato motore:
$$C_{m}\cancel{ w_{m} }-C_{f}\cancel{ w_{m} }= J_{m}\dot{w}_{m}\cancel{ w_{m} } \to \dot{w}_{m} = \frac{C_{m}-C_{f}}{J_{m}}$$

Sistema lato utilizzatore:
$$C_{f}w_{u} - C_{u}w_{u}=J_{u}\dot{w}_{u}w_{u} \to \dot{w}_{u} = \frac{C_{f}-C_{u}}{J_{u}}$$
<!Diagramma sistemi con legami separati>

La velocità a qualsiasi tempo nella fase 2 sarà:
$$w_{m} = \overline{w}_{}+\dot{w}_{m}t $$
Invece l'utilizzatore avrà equazione:
$$w_{u} = 0+\dot{w}_{u}t$$
Visto che inizia da 0.

Appena $w_{m}=w_{u}$ finisce la seconda fase.

Troviamo il tempo quando questo occorre come:
$$\overline{w}_{} + \dot{w}_{m}t = \dot{w}_{u}t \to \overline{t}_{} = \frac{\overline{w}_{}}{\dot{w}_{u}-\dot{w}_{m}}   $$

### Fase 3

In questa fase è finito lo strisciamento, i due lati della trasmissione ora hanno adesione è ruotano alla stessa velocità

$$w = w_{m}=w_{u}$$

La accelerazione sarà una accelerazione intermedia tra le due prima del fine della fase 2 e avrà equazione:
$$\dot{w} = \frac{C_{m}-C_{u}}{J_{m}+J_{u}}$$

Mettendo tutto insieme creiamo il grafico delle velocità nel tempo:
<!Diagramma velocità nel tempo>

Se immaginiamo che il sistema fosse stato come nella fase 3 dall'inizio, cioè senza frizione, sappiamo che accelererebbe come nella fase 3, quindi possiamo tracciare la linea nella fase 3 fino ad incrociare la asse del tempo per trovare quando avrebbe dovuto iniziare ad accelerare per arrivare alla stessa velocità allo stesso momento. Vediamo che avrebbe dovuto iniziare prima, quindi durerebbe più a lungo, ma con la frizione il sistema dovrà pagare una tassa in termini di energia.

### Energia Dissipata

La energia dissipata è la tassa che il sistema con la frizione dovrà pagare per permettere una accelerazione così alta.

Ha equazione:
$$E_{diss} = \int\limits_{0}^{\overline{t}_{} } \Pi_{diss}  \, dt = \int\limits_{0}^{\overline{t}_{} } C_{f}(w_{m}-w_{u}) \, dt = C_{f}\int\limits_{0}^{\overline{t}_{} } (w_{m}-w_{u}) \, dt   $$
$$E_{diss} = C_{f}\frac{\overline{w} \overline{t}_{}}{2} $$

Questa energia dissipata genera calore che cambia la temperatura, quindi possiamo tracciare la temperatura in base all'innesco.

<!Diagramma temperatura ad inneschi>

Possiamo tracciare il coefficiente di trazione e temperatura:

<!Diagramma trazione e temperatura>

Troviamo che con l'aumento della temperatura diminuisce la trazione, ma questo dipende dal materiale in questo caso sono i freni e guarnizioni.

