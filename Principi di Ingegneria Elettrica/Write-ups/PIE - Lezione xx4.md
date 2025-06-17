---
creation_date: 2023-12-14 17:54
tags:
  - PIE
share: true
---
# Lezione 24 - 

L'idea principale di macchine elettriche è di creare cambi nel fluss per generare forze magneto motrici.

## Macchine Elettriche in corrente continua

La struttura di una macchina elettrica in corrente continue è di un rotore con bielle e uno statore con calamite.

<!Diagramma statore e rotore>

In più dettaglio troviamo tutte le forze e campi magnetici:

<!Diagramma statore e rotore con più dettaglio>

Guardando ad un cavo in più dettaglio troviamo le tensione e coppia:

<!Diagramma con cavo specifico>

$$\begin{gather}
F= Bli \\
e = Blu = BlwR\implies e_{TOT} = Blw2RN \\
T = Bli2R \implies T_{tot} = Bli2RN
\end{gather}$$

Troviamo che:

$$\begin{gather}
e_{tot} = kw\to \text{ per controllare la velocità controlliamo } e \\
T_{tot} = ki \to \text{per controllare le coppie controlliamo i}
\end{gather}$$

Con i generatori allora troviamo una equivalente tra la potenza elettrica è la potenza meccanica:
$$\underbrace{ ei }_{ P_{\text{el}} } = kw \cdot \frac{T}{w} = \underbrace{ Tw }_{ P_{\text{mecc}} }$$

Le macchine elettriche hanno rendimenti molto alta, per rimediare le minime perdite nel nostro modello mettiamo una resistenza:

<!Diagramma macchina elettrica con resistenza>

A equipotenza troviamo una correlazione tra la coppia e la velocità di rotazione:

<!Diagramma coppia e rotazione>

Possiamo diminuire $T_{AVV}$ aggiungendo resistenze:

<!Diagramma T-w con più resistenze aggiunte>

Aggiungendo resistenze non cambiamo $w_{o}$, invece se agiamo sulla tensione troviamo un grafico che è:

<!Diagramma tensione>

Ci sono 3 tipi di macchine in alternata:

1. Sincrono
	1. Frequenza di alimentazione
	2. ($w_{m} = w_{alim}$)$\to$ brushless a magnetici permanenti
2. Asincrono
	1. ($w_{m}<w_{alim}$)
3. Macchine Speciali
	1. Tutto quello non è asincrono o sincrono e.g. stepper motors

Se sul rotore poniamo 3 bielle tutte sfasate di 120 gradi da l'un l'altra, e facciamo passare corrente alternata in trifase troviamo che generiamo sono un polo nord e 1 polo sud:

<!Diagramma bielle e poli>

Questo modello è come sono costruiti i motori sincroni, è l'unico modo per cui possa continuare a girare è se girano alla stessa velocità.

Nell'modello asicrono invece non poniamo bovine sul rotore ma anche sullo statore:

<!Diagramma modello asincrono>

Si crea un situazione analoga del sincrono però le bovine devono esser alimentate un'pò più lentamente.

I sincroni hanno bisogno di aumentare la loro velocità di rotazione lentamente perchè se no si rompono invece gli asincroni non perchè non hanno magneti permanenti all'esterno ma invece bovine.

Il diagramma delle caratterizzazione degli asincroni è:

<!Diagramma asincroni>

Gli asincroni sono dappertutto, invece i sincroni sono usati generalmente per la automazione per il loro peso minore.

I sincroni possono esser DC e AC, cambia solo il metodo di controllo.