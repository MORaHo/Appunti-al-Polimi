---
creation_date: 2023-10-21 11:21
tags:
  - cosmac
share: true
---
# Lezioni 8 e 9 - Introduzione all concetto di Sforzo

Queste lezioni sono connesse e la Vergani a spiegato in modo orribile quindi proverò a spiegare e sintetizzare in caso debba esser letto nel futuro.

Senza lo sforzo non possiamo capire se forze sono eccessive o no. Come abbiamo studiato a metallurgia, ogni material ha una capacità di sforzi a cui può esser sottoposto mantenendo un comportamento elastico.

## Definizioni di Sforzo

### Sforzo Normale Medio

Lo sforzo <u>normale</u> medio è trovato con la equazione:

$$\overline{\sigma} = \frac{N}{A} $$
Dove:
- $\overline{\sigma}$ è lo sforzo
- N è la forza normale
- A è la sezione su cui lo sforzo 
### Definizione di Sforzo

<!Diagramma sforzo>

Lo sforzo è la forza a cui un elemento infinitesimale è sottoposto. In quando parliamo di sforzi che escono dall'elemento e sottopongono l'elemento a trazione.

Quando la sezione non è continua, lo sforzo cambia un'pò di profilo, aumentando alle parti più esterne.

<!Diagramma cambio sezione>

Invece con un momento flettente:

<!Diagramma sforzo flettente>

Con il momento flettente si crea una diagonale di sforzi che cambiano lungo la sezione.

### Sforzo Assiale

<!Diagramma diversi sforzi>

No sforzo assiale è lo stesso dello sforzo normale. Si trovano sforzi assiali portando gli effetti delle azioni normali su un punto.

$$\overline{\sigma}(x) = \lim_{ \Delta A \to 0 } \frac{\Delta N}{\Delta A} = \text{sforzo puntuale}$$

Le deformazioni della sezione è quello possiamo misurare, invece lo sforzo non è misurabile è solo ricavabile rispetto alle forze assiali o la deformazione.

Gli sforzi assiali sono generati dalle forze assiale e dai momenti flettenti.

### Sforzo Tangenziale ($\tau$)

<!Diagramma sforzo tangenziale>

Gli sforzi tangenziali sono sforzi che seguono un piano, sono tangenziali al piano.

## Nomenclatura degli sforzi

Gli sforzi normali si scrivono con il sottoscritto che definisce la asse a cui sono paralleli.

Invece gli sforzi tangenziali sono hanno come sottoscritto due lettere, la prima è il piano a cui sono tangenziali e la seconda è la asse a cui sono paralleli.

## Stato di Sforzo

Lo stato di sforzo è la somma di tutti gli sforzi normali e tangenziali che agiscono su un punto di infinitesimale. La rappresentazione di questo punto è un <u>cubetto</u> con lati infinitesimali:

<!Diagramma cubetto>

Inoltre il <u>tensore</u> è la matrice rappresentative di tutti gli sforzi agenti sul punto.

Tensore:

$$\begin{bmatrix}
\sigma_x & \tau_{xy} & \tau_{xz} \\
\tau_{yx} & \sigma_{y} & \tau_{yz} \\
\tau_{zx} & \tau_{zy} & \sigma_{z}
\end{bmatrix}$$
La prima linea sono tutti gli sforzi che agiscono sulla faccia normale all'asse x, la seconda linea sono tutti le sforzi agenti sulla faccia normale all'asse y e la ultima linea sono tutti gli sforzi agenti sulla faccia normale all'asse z.

### Convenzione di Segno

Se un sforzo ha la stessa direzione e verso del versore dell'asse su cui agisce allora è positivo.

<!Diagramma slide 20>
### Troppi sforzi

Guardando allo stato di sforzo vediamo che ci sono 9 componenti di sforzo, 3 normali e 6 tangenziali.

Non ha molto senso dati i 6 gradi di libertà, per l'equilibrio alla rotazione troviamo che:
$$\begin{gather}
\tau_{xy}=\tau_{yx}\\
\tau_{zx}= \tau_{xz}\\
\tau_{yz}=\tau_{zy}
\end{gather}$$
Questo riduce gli sforzi di 3 a un totale di 6 che uguaglia i nostri gradi di libertà.

## Stato Piano di Sforzo

Come detto nelle ultime lezione, in ingegneria proviamo il più possibile a portare i nostri problemi in 2D perché ci riduce il numero di calcoli.

<!Diagramma piano di sforzo>

### Equilibrio di Traslazione

Sul stato piano di sforzo possiamo fare equilibri per capire trovare stati equilibrio che saranno utili più tardi. Il risultato dello stato di equilibrio di rotazione lo abbiamo visto prima con la uguaglianza degli sforzi tangenziali.

<!Diagramma equilibrio di traslazione e calcoli>

Alla fine dei calcoli troviamo che:

$$\sigma_{x}(x+dx,y)-\sigma_{x}(x,y)=\frac{ \partial \sigma }{ \partial x }dx $$
e con altre equazioni, ricaviamo:

$$\left\{ \begin{align}
\frac{ \partial \sigma_{x} }{ \partial x }+\frac{ \partial \tau_{yx} }{ \partial y } + f_{x} &= 0   \\
\frac{ \partial \sigma_{y} }{ \partial y }+\frac{ \partial \tau_{xy} }{ \partial x } + f_{y} &= 0 
\end{align} \right\}$$

Come risultato dell'equivalenza degli sforzi tangenziali, troviamo che il tensore dello sforzo è simmetrico.

## Sforzi su Piani Orientati

### Tetraedro di Cauchy

<!Diagramma Tetraedro di Cauchy>

Chiamiamo A la faccia normale a $\hat{n}$
$A_{x}$ la faccia normale all'asse x con $\Delta A_{x} = \Delta A\cos\alpha = i\Delta A$
$A_{y}$ la faccia normale all'asse y con $\Delta A_{y} = \Delta A\cos\beta = l\Delta A$
$A_{z}$ la faccia normale all'asse z con $\Delta A_{z} = \Delta A\cos\gamma = m\Delta A$
Queste facce sono sia la proiezzione di $\Delta A$ su ogni piano o i piano componenti dietro al tetraedro che non vediamo.

Dove $\alpha$,$\beta$ e $\gamma$ sono gli angoli tra $\hat{n}$ e ogni asse.

Una qualsiasi forza agisce sulla faccia A generando uno sforzo normale e uno sforzo tangenziale

### Equilibrio nel punto

S è in equilibrio con le parti di $\sigma_{n}$ e generano queste equazioni:

$S_{x}= \sigma_{x}i+\tau_{yx}l + \tau_{zx}m$
$S_{y} = i\tau_{xy}+l\sigma_{y}+m\tau_{zy}$
$S_{z}=i\tau_{xz}+l\tau_{yz}+m\sigma_{z}$

Lo sforzo normale alla faccia è:
$\sigma_{n} = iS_{x}+lS_{y}+mS_{z}$

Invece lo sforzo tangenziale trovato con l'equazione:

$\tau_{n}=\sqrt{ |\overline{S}|^{2}-\sigma_{n}^{2} }$

## Sforzi Principali

Data una struttura sottoposta a sforzi, gli stati principali sono gli sforzi, che posti in certe direzioni, creano una struttura equivalente a quella inizia ma prima di sforzi tangenziali.

I tre sforzi principali: $\sigma_{1},\sigma_{2}$ e $\sigma_{3}$ sono gli sforzi che cancellano gli sforzi tangenziali creando una struttura semplificata.

### Convezione

In generale diamo il nome $\sigma_{1}$ allo sforzo principale più grande e $\sigma_{3}$ allo sforzo più piccolo così abbiamo:
$\sigma_{1}>\sigma_{2}>\sigma_{3}$

### Calcolo degli Sforzi

<!Diagramma>

Dato S sforzo su $\Delta A$:
$S_{x} = \sigma_p \cdot i$
$S_y = \sigma_p \cdot l$
$S_z = \sigma_p \cdot m$

Abbiamo che:

$\sigma_p \cdot i = \sigma_{x}\cdot i + \tau_{yx}\cdot l + \tau_{zx}\cdot m$
$\sigma_p \cdot l = \tau_{xy}\cdot i + \sigma_y\cdot l + \tau_{zy}\cdot m$
$\sigma_p \cdot m = \tau_{xy}\cdot i + \tau_{yz}\cdot l + \sigma_z\cdot m$

Per trovare i valore di $\sigma_p$ che cancellano questi stati di equilibrio, cambiamo in una matrice e sottraiamo la matrice identita che ha $\sigma_p$ come valori. Trovando i valore di $\sigma_p$ che rendono nullo il determinante della matrice stiamo trovando gli autovalori della matrice, cioè $\sigma_p$ sono gli autovalori della matrice, che permettono la creazione di una matrice diagonale con i soli autovalori, senza sforzi tangenziali.

<u>Guardiamo</u>:

$(\sigma-\sigma_p \cdot I)\hat{n} = 0$

$$\det \begin{bmatrix}
(\sigma_x-\sigma_{p}) & \tau_{yx} & \tau_{zx} \\
\tau_{xy} & (\sigma_{y}-\sigma_{p}) & \tau_{zy} \\
\tau_{xz} & \tau_{yz} & (\sigma_{z}-\sigma_{p})
\end{bmatrix} = 0$$

Il polinomio rappresentativo: $\sigma_{p}^{3}-I_{1}\sigma_{p}^{2}+I_{2}\sigma_{p}+I_{3}=0$
$I_{1},I_{2}$ e $I_{3}$ sono invarianti.

Troviamo:
$I_{1} = \sigma_{x}+\sigma_{y}+\sigma_{z}$
$I_{2} = \sigma_x\sigma_{y}+\sigma_{x}\sigma_{z}+\sigma_{z}\sigma_{y}-\tau_{xy}^{2}-\tau_{yz}^{2}-\tau_{zx}^{2}$
$I_{3}=\sigma_{x}\sigma_{y}\sigma_{z}+2\tau_{xy}\tau_{xz}\tau_{yz}-\sigma_{x}\tau_{yz}^{2}-\sigma_{y}\tau_{xz}^{2}-\sigma_{z}\tau_{yz}^{2}$

Se riprendiamo la matrice con i, l e m, e imponiamo $\sigma_{p}$ come $\sigma_{1}$, troviamo un sistema omogeneo le cui incognite i, l e m ci danno l'angolo di $\sigma_{1}$ rispetto ad ogni asse per cui si cancellano gli sforzi tangenziali. Se facciamo lo stesso processo anche $\sigma_{2}$ e $\sigma_{3}$ allora riusciamo a ricavare un sistema equivalente a quello iniziale ma semplificato.

## Esempio

<!Diagramma esempio>

## Appunti scritti dopo la lezione

Il punto di trovare gli sforzi principali è di trovare $\hat{n}$ tale che di cancellino tutti gli sforzi tangenziali.

Troviamo gli sforzi primari con il tensore, imponiamo $\sigma_{p}$ come tali sforzi per trovare i, l e m per ogni sforzo e per conseguenza ogni angolo associato.

Spiegato meglio in: [CdM - Esercitazione 7](CdM%20-%20Esercitazione%207.md)


