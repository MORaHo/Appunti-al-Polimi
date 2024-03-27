---
creation_date: 2023-10-19 15:23
tags:
  - PIE
share: true
---
# Lezione 10 - Reti AC

## Ripasso

Le reti AC possono essere risolte in modo analogo alle reti DC. Rimpiazzando la rete con una rete simbolica che utilizza i numeri complessi.

$v= \sqrt{ 2 }V\cos(\omega t+\phi_{\tiny{V}}) = Re(\sqrt{ 2 }\underbrace{ Ve^{ j\phi_{\tiny{V}} } }_{ \overline{V} }e^{ j\omega t }) \to \overline{V}$
$i = \sqrt{ 2 }I\cos(\omega t+\phi_{\tiny{I}}) = Re(\sqrt{ 2 }\underbrace{ Ie^{ j\phi_{\tiny{I}} } }_{ \overline{I} }e^{ j\omega t }) \to \overline{I}$

I e V sono i valori effetti $\sqrt{ \frac{1}{T}\int _{\tiny{0}}^{T}i(t)^{2} \, dt }$ e $\sqrt{ \frac{1}{T}\int _{\tiny{0}}^{T}v(t)^{2} \, dt }$

![](Pasted%20image%2020231022183129.png)

$X_{\tiny{L}} = \omega L \to$ Reattanza Induttiva
$X_{\tiny{C}} = \frac{1}{\omega C} \to$ Reattanza Capacitativa

$\overline{Z} = R+j(X_{\tiny{L}}-X_{\tiny{C}}) \to$ Impedenza

![](Pasted%20image%2020231022183204.png)

Le leggi sono lo stesso applicabili:

$LKT \to \sum_{\tiny{k=0}}^{n} \overline{v}_{k} = 0$
$LKC \to \sum_{\tiny{k=0}}^{n}\overline{I}_{k}= 0$
Legge di $\Omega \to \overline{V}_{k}= \overline{I}_{k}\overline{Z}_{\tiny{R}}$ 

### Thevenin

![](Pasted%20image%2020231022183221.png)

### Norton

![](Pasted%20image%2020231022183243.png)

### Millman

![](Pasted%20image%2020231022183300.png)

## Corrente AC

L'uso dei numeri complessi è completamente analitico non c'è paragone fisico.

Per scrivere la equazione bisogna avere il coseno non il seno, e sempre il valore efficace.

$\sin(x)= \cos\left( x-\frac{\pi}{2} \right)$

## Fase dei Condensatori e Induttori

![](Pasted%20image%2020231022183326.png)

Se non è specificato allora f = 50Hz e $\omega = 2\pi f$

![](Pasted%20image%2020231022183343.png)

### Caso Induttore

$\overline{V} = \overline{Z} \cdot \overline{I}$ e $\overline{Z} = R + jX_{\tiny{L}} = Z \cdot e^{ j\phi_{\tiny{_{\tiny{V}}}} }$

$\overline{I} = \frac{\overline{V}}{\overline{Z}}$

Troviamo che $\boxed{ Z = \sqrt{ R^{2}+X^{2} } }$ e $\boxed{ \phi = \arctan \frac{X}{C} }$
Z è diverso da $\overline{Z}$ perché Z è il modulo di $\overline{Z}$.

![](Pasted%20image%2020231022183415.png)

$\overline{I} = I e^{ j\phi_{\tiny{I}} } = \frac{Ve^{ j\phi_{\tiny{V}} }}{Ze^{ j\phi }} = \frac{V}{Z}e^{ \phi_{\tiny{V}}-\phi }$

Se resistenza con induttore $\overline{I}$ è in ritardo rispetto a $\overline{I}$

Nel grafico si vede che $\phi_{\tiny{I}} = \phi_{\tiny{V}}-\phi$ , vediamo allora che $\overline{I}$ è in ritardo di $\phi$ rispetto a $\overline{V}$.

### Caso Conduttore

![](Pasted%20image%2020231022183429.png)

Dato che $\phi < 0$ e $\overline{I} = \frac{V}{Z}e^{ j(\phi_{\tiny{V}}-\phi) }$ l'angolo aumenta, signifca che con il condensatore ha corrente che è in anticipo rispetto alla tensione.

I due elementi hanno $\phi$ di tensione diversa.

![](Pasted%20image%2020231022183447.png)

Avendo preso $\phi_{\tiny{V}}$ come 0, la somma di R e la reattanza del corrispondente elemento, genera Z che è la diagonale.
### Caso Limite

![](Pasted%20image%2020231022183504.png)

Il $\phi$ massimo è di 90 gradi, se il circuito ha solo una condensatore allora è 90 gradi in anticipo e invece se ha solo un induttore è 90 gradi in ritardo. Aggiungendo una resistenza si avvicina a $\overline{V}$. Quindi quando vogliamo calcolare il ritardo o anticipo tra V e I dobbiamo tenere a conto tutti gli elementi e considerare il fatto che nei numeri complessi tutti gli elementi sono vettori e dobbiamo fare la somma come visto alla fine dell'ultima lezione.

> [!note] Angolo induttore, condensatore $\phi_{\tiny{V}}$
> L'angolo tra $\phi_{\tiny{V}}$ e un induttore o condensatore sarà sempre 90. Quello che cambia l'angolo $\phi$ di $\overline{Z}$ è sono le resistenze che portano l'elemento più vicino a $\phi_{\tiny{V}}$. È una somma vettoriale di numeri complessi come visto alla fine dell'ultima lezione.

Se la impedenza è causata completamente da resistenza $\overline{I}$ e $\overline{V}$ sono in fase.

Se V e I hanno angolo più grande di 90, è un generatore.
## Esempio

$$\left\{\begin{gather}
v=\sqrt{ 2 }\cdot V\cos\left( \omega t-\frac{3}{2} \pi\right)\\
i = \sqrt{ 2 }\cdot I \cos\left( \omega t+\frac{\pi}{3} \right)
\end{gather}\right\} p = vi$$
- Ogni tango p = 0
- ogni tanto la potenza va dal generatore all'utilizzatore
- Ogni tanto la potenza va dall'utilizzatore al generatore (se l'utilizzatore ha capacità di accumulare energia).

--- 

## Potenza in AC

![](Pasted%20image%2020231022183531.png)

Dato questo circuito:

$v = \sqrt{ 2 }V\cos(\omega t+\phi_{\tiny{V}})$
$i = \sqrt{ 2 }I \cos(\omega t+\underbrace{ \phi_{\tiny{V}}-\phi }_{ \phi_{\tiny{I}} })$

Allora:

$p = vi = 2VI \cos(\underbrace{ \omega t+\phi_{\tiny{V}} }_{ \alpha })\cos(\underbrace{ \omega t+\phi_{\tiny{V}}-\phi }_{ \beta })$

La rappresentazione grafica di questa equazione è:

![](Pasted%20image%2020231022183553.png)

Vediamo che la potenza (la linea verde) ha valore medio più grande di 0. Troviamo anche che la potenza ha la pulsazione che è il doppio della pulsazione di V e I.

La potenza media più grande di 0, è della la potenza attiva e è un valore che non cambia nel tempo, questa è anche detta potenza dissipata che è quella che eroga il circuito. La area della potenza sotto e sopra la media sono uguali, perciò la energia è conservata.

Tornando alla equazione per la potenza e applicando la formula di Werner, troviamo che:

$p = 2VI (\frac{1}{2}(\cos(\underbrace{ \omega t+2\phi_{\tiny{V}}-\phi }_{ \alpha+\beta }))+\cos(\underbrace{ \phi }_{ \alpha-\beta })) = VI\cos(2\omega t+2\phi_{\tiny{V}}-\phi)+\underbrace{ VI\cos(\phi) }_{ \substack{\text{Potenza}\\\text{Attiva}\\- P [\Omega]} }$

La potenza arriva $\boxed{ P = \underbrace{ \frac{1}{T}\int _{\tiny{0}}^{T}p \, dt }_{ \text{Valore Medio} } = VI\cos \phi } \:\:[W]$

La ampiezza di p è VI, questa è la massima oscillazione rispetto al valore medio e la chiamiamo potenza apparente A o S. Le unità di misura della potenza apparante è $[VA]$ che anche se è uguale a $\Omega$ non facciamo la equivalenza per mantenere la separazione in testa.

Ogni impianto deve esser dimensionato per sopporta la potenza apparente, perché anche se non c'è per la maggior parte del tempo la potenza arriva lo stesso a quel punto.

![](Pasted%20image%2020231022183619.png)

Questo è il diagramma di prima ma per un circuito con un solo resistore.

Anche per la resistenza variano V,I e P, ma la potenza non è mai negativa. Il resistore non ha abilità di accumulare energia quindi non resistuisce mai l'energia al generatore.

<u>Se I e V sono completamente sfasati allora l'elemento è un generatore</u>.

![](Pasted%20image%2020231022183658.png)

Vediamo che per un resistore la potenza assorbità è sempre positiva, invece per il generatore:

![](Pasted%20image%2020231022183716.png)

Per il generatore dobbiamo prendere la corrente in direzione opposta alla convezione. Vediamo che la potenza assorbita è meno di 0 quindi la potenza generata è più grande di 0.

Per gli elementi resistivi $\phi$ può variare solo tra 0 e 90.

Con gli induttori e condensatori ci sono potenze negative che iniziano ad apparire.

### Come si misurano?

Prendendo l'equazione dal circuito con <u>resistenza e induttore e basta</u>. Copriremo il condensatore nella prossima lezione.

Da:
$p = VI \cos \phi + VI \cos(\underbrace{ 2\omega t+2\phi_{\tiny{V}} }_{ \alpha }-\underbrace{ \phi }_{ \beta })$

Spezziamo facendo la $\underbrace{ \text{sottrazione del coseno} }_{ \cos(\alpha-\beta) =\cos\alpha \cos\beta+\sin\alpha \sin\beta}$ e ricaviamo:

= $\underbrace{ VI \cos \phi+VI\cos \phi \cos(2\omega t+\phi_{\tiny{V}}) }_{ \text{Resistenza} }+\underbrace{ VI\sin \phi+\sin(2\omega t+2\phi_{\tiny{V}}) }_{ \text{Induttore} }$


Ricaviamo da questa equazione:

La potenza attiva: $P = VI\cos \phi$
E la potenza reattiva: $Q = VI\sin \phi$

La potenza attiva è la media della potenza che è erogata dai generatori, invece la potenza reattiva è il valore massimo della potenza che è mandata indietro quando la potenza è negativa.

La potenza attiva è la potenza che si ricava in realtà, invece la potenza attiva è la porte complessa della potenza che ci dice la potenza che ritorna indietro.

![](Pasted%20image%2020231019180542.png)
In questo caso S ha preso il posto di Z. Q è lungo l'asse dei numeri immaginari e P è lungo l'asse dei numeri reali.