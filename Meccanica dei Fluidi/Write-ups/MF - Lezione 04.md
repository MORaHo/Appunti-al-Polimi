---
creation_date: 2024-02-11 14:02
tags:
  - MF
share: true
---
# Lezione 4 - Equilibrio Dinamico e il Teorema di Bernoulli

Nella ultima lezione abbiamo visto il la conservazione della massa in due forme, la forma indefinita:
 $$\frac{\partial\rho}{\partial t} +  div(\rho \underline{v})=0$$
Il termine alla sinistra è detto termine di accumulo, invece quello alla destra è detto termine di flusso.

Se siamo in un caso permanente, allora $div(\rho \underline{v})=0$.
Se il fluido è incomprimibile, allora $div(\underline{v})=0$

La forma globale della conservazione della massa ha equazione:
$$\frac{\partial M}{\partial t} = \int\limits_{A}^{} \rho \underline{v}\underline{n} \, dA $$
Per il moto permanente sarà:
$$\int\limits_{A}^{} \rho \underline{v}\cdot \underline{n} \, dA=0 $$
Per il flusso incomprimibile sarà:
$$\rho \underbrace{ \int\limits_{A}^{} \underline{v}\cdot \underline{n} \, dA }_{ \substack{\text{Portata}\\\text{Volumetrica}} }=0 $$
## Forma per correnti

La correnti sono la direzione prevalente del flusso, le linee tracciano la tangenziale dal flusso nello spazio.

La forma delle correnti usa tubi di flusso per determinare la portata del fluido nello spazio.

<!Diagramma tubi di flusso>

I tubi di flusso sono volumi racchiusi da linee di flusso, per come abbiamo definito le linee di flusso, il la velocità nel contorno è sempre tangenziale al contorno del tubo, quindi siamo sicuri che non ci sarà fluido che attraversa il nostro confine.
Questo ci dice che il fluido che entra è solo quello che entra nella area di entrata, e quello che esce è quello che esce dalla area di uscita.

L'asse di riferimento che prendiamo è quella S, che segna la direzione prevalente del flusso.

Per trovare la massa che entra nel volume in dt, possiamo scrivere:
$$\int\limits_{A}^{} \rho \underline{v}\cdot \underline{n} \, dA \to\rho Qdt$$
In questo caso A è l'area di ingresso del tubo.
Abbiamo preso la variabile Q come la portata volumetrica, con equazione $\int\limits_{A}^{} \underline{v}\cdot \underline{n} \, dA$

L'equilibrio della massa per il tubo sarà:
$$\cancel{ \rho Qdt } - \left( \cancel{ \rho Q }+\frac{\partial(\rho Q)}{\partial s}\cancel{ ds } \right)\cancel{ dt } = \frac{\partial(\rho A)}{\partial t}\cancel{ ds\cdot dt }$$

$ds$ è una lunghezza infinitesimale del tubo.
Alla destra prendiamo la derivata dell'area rispetto al tempo perché, area del tubo può cambiare nel corso della tempo, quindi dobbiamo tenerlo a conto

Semplificando l'equazione sarà:
$$\frac{\partial(\rho Q)}{\partial s} + \frac{\partial(\rho A)}{\partial t}=0$$

Nel caso del moto permanente sarà solo:
$$\frac{\partial(\rho Q)}{\partial s}=0$$
Invece nel caso del moto incomprimibile sarà:
$$\frac{\partial Q}{\partial s}+\frac{\partial A}{\partial t}=0$$
Rappresentiamo i fluidi in base alla equazione delle continuità e della conservazione della quantità di moto($\underline{F} = m\underline{a}$)
Abbiamo visto la conservazione della quantità di moto nella statica:
$$\begin{gather}
\rho \underline{f} = \nabla p \\
\underline{G}+\underline{\Pi} = 0
\end{gather}$$
Ora ci tocca trovarla nella cinematica, per riempire il buco che mane con la cinematica.
## Equazione indefinita di equilibrio dinamico

Come sempre nella forma indefinita, prendiamo un volumetto indefinito e ricaviamo l'equilibrio delle forze agenti sul volumetto.

<!Diagramma volumetto>
La forza agente sul cubetto è la risultante della azione di massa e delle forze di superficie.

Definiamo l'azione di massa causata dal generico campo di forze $\underline{f}$ come:
$$\rho \underline{f}dW$$

La forza di superficie sulla faccia con versore opposto a x, sarà:
$$\underline{\phi}_{x}dydz$$
Invece la forza agente sulla faccia opposta sarà:
$$-\left( \underline{\phi}_{x}+\frac{\partial \underline{\phi}_{x}}{\partial x}dx \right)dydz$$

La formula della risultante delle forze allora sarà:
$$\begin{align}
\underline{\phi}_{x}dydz-\left( \underline{\phi}_{x}+\frac{\partial \underline{\phi}_{x}}{\partial x}dx \right)dydz&+ \\
\underline{\phi}_{y}dxdz-\left( \underline{\phi}_{y}+\frac{\partial \underline{\phi}_{y}}{\partial y}dy \right)dxdz&+ \\
\underline{\phi}_{x}dxdy-\left( \underline{\phi}_{z}+\frac{\partial \underline{\phi}_{z}}{\partial z}dz \right)dxdy&= \\
&= \rho \underline{a}dW
\end{align}$$
Dopo delle semplificazioni possiamo scrivere:
$$\rho(\underline{f}-\underline{a}) = \frac{\partial \underline{\phi}_{x}}{\partial x}+\frac{\partial \underline{\phi}_{y}}{\partial y} + \frac{\partial \underline{\phi}_{z}}{\partial z}$$
Questo significa che il fluido accelererà in base alle forze agenti sulla superficie.

Possiamo riscrivere questa equazione come:
$$\rho(\underline{f}-\underline{a}) = div(\underline{\underline{\phi}})$$
Dove $\underline{\underline{\phi}}$ è il tensore degli sforzi che abbiamo visto nella statica.
Infatti se $\underline{v}$ e $\underline{a}$ = 0, con $\underline{\underline{\phi}}=p \underline{\underline{I}}$, allora l'equazione sarà $\rho \underline{f} = grad(p)$, cioè l'equazione che abbiamo visto nella statica. Il caso statico allora è compreso nella dinamica.

## Soluzioni di sistemi fluidodinamici

Con tutto quello che abbiamo scritto, non è possibile risolvere un sistema fluidodinamico, questo è perché con la equazione della continuità, l'equilibrio dinamico e un equazione di stato delle densità(un'equazione che ci dice la densità ad ogni punto nello spazio), abbiamo un totale di 5 equazioni, l'equilibrio vale 3 perché è una equazione vettoriale quindi c'è un equazione per ogni direzione.

Le incognite invece sono 10, 1 densità, 3 della velocità e 6 del tensore degli sforzi.

Questi sistemi allora sono irrisolvibili. Per risolverli ci inventiamo un'altra equazione di legame tra la sforzo e la velocità, detto legame costitutivo.

Questo legame dipende dal fluido e deve esser adatto a rappresentare il comportamento del fluido.

In questa classe guardiamo 2 legami costitutivi:
- Fluido perfetto/ideale
- Fluido Stokesiano-Newtoniano

I due tipi di soluzioni ci dicono cose diverse e ci portano a soluzioni diverse, più o meno aderenti alla realtà.

Il fluido stokesiano-newtoniano lo guardiamo un'altra volta, invece oggi ci focalizziamo sul fluido ideale
## Fluido Ideale/Perfetto

Il fluido ideale è detto ideale, perché è infatti ideale, non esiste un fluido ideale in realtà.

Nei fluidi ideali diciamo che non ci importano gli attriti e le forze aggiuntive, risente solo della pressione come un fluido statico.

Il nostro tensore degli sforzi sarà:
$$\underline{\underline{\phi}} = p \underline{\underline{I}}$$
Questo significa che le nostre incognite vanno da 10 a 5, che con il fatto che abbiamo solo 5 equazioni, rende il sistema risolvibile.

L'equazione della continuità e il legame di stato saranno gli stessi, invece la continuità del sistema cambierà ad esser:
$$\rho(\underline{f}-\underline{a}) = grad(p)\to \text{Equazione di Eulero}$$
### Teorema di Bernoulli

Prediamo le traiettorie di un fluido e ci focalizziamo su una, mettendo un sistema di riferimento sulla traiettoria con l'asse s tangente ad essa.

<!Diagramma traiettorie di Bernoulli>

Facciamo anche 2 ipotesi iniziali:
1. Fluido perfetto
2. Il sistema di riferimento è posto tale che $\underline{v} = (v,0,0)$, con v sull'asse s.

Proiettando Eulero lungo le 3 assi del sistema di riferimento, scriviamo 3 equazioni:
$$\begin{gather}
\rho\left( f_{s}-\frac{ dv }{ dt }  \right) = \frac{ \partial \rho }{ \partial s }  \\
\rho\left( f_{n} - \frac{v^{2}}{R}  \right) = \frac{ \partial \rho }{ \partial n }  \\
\rho(f_{b}) = \frac{ \partial \rho }{ \partial b } 
\end{gather}$$
La equazione lungo n ha la accelerazione centripeta di cui dobbiamo ancora considerare.

Prendendo la prima equazione e sviluppandola:
$$\rho\left( f_{s}-\left( \frac{ \partial v }{ \partial t } +v\frac{ \partial v }{ \partial s } +0\frac{ \partial v }{ \partial n } +0\frac{ \partial v }{ \partial b }  \right) \right) = \frac{ \partial \rho }{ \partial s } $$
Abbiamo espanso la derivata della velocità che abbiamo detto è spazio-tempo dipendente. Abbiamo preso lungo s quindi tutte le derivate erano di v invece dei componenti v in ogni direzione.

Prima di continuare fissiamo più ipotesi:
3. Fluido pesante $\implies \underline{f} = -g \,grad(z)$
4. Moto permanente $\implies \frac{ \partial  }{ \partial t }=0 \implies \frac{ \partial v }{ \partial t }=0$
5. Fluido incomprimibile $\implies \rho = 0$

Il numero di ipotesi ci il teorema di Bernoulli, richiedendo molte ipotesi, non è generale.

Semplificando con le nuove ipotesi troviamo:
$$\rho\left( -g\frac{ \partial z }{ \partial s } -\frac{g}{g}\frac{\partial}{\partial s}\left( \frac{v^{2}}{2} \right) \right) = \frac{ \partial p }{ \partial s } $$
$$-\rho g\left( \frac{ \partial z }{ \partial s } +\frac{\partial}{\partial s}\left( \frac{v^{2}}{2g} \right) \right) = \frac{ \partial p }{ \partial s } \cdot \frac{1}{\rho g} = \frac{\partial}{\partial s}\left( \frac{p}{\rho g} \right)$$
Infine arriviamo al teorema di Bernoulli che è:
$$\frac{\partial}{\partial s}\left( z+\frac{p}{\rho g}+\frac{v^{2}}{2g} \right)=0$$
$z\to$ quota geodetica
$\frac{p}{\gamma} \to$ altezza piezometrica
$\frac{v^{2}}{2g} \to$ altezza cinematica

La somma di queste altezza è detto il carico totale, e il teorema di Bernoulli ci dice che sarà costante nel fluido.
$$H = z+\frac{p}{\gamma}+\frac{v^{2}}{2g}= \text{cost}$$

<!Diagramma carico totale>

Il teorema di Bernoulli ci dice che il carico totale sarà costante, indipendentemente della quota geodetica, non ci dice niente pero della altezza piezometrica, quella può prendere qualsiasi forma in base alla velocità.

Se prendiamo il teorema di Bernoulli come una somma di energia, che è una cosa che possiamo fare, troviamo che essendo il carico totale costante implica che anche la energia rimane costante, cioè un fluido ideale non dissipa energia.

Possiamo vedere il carico $H$ in modo energetico come:
$$\frac{\text{energia}}{\text{peso}}$$
Allora possiamo vedere Bernoulli come una somma di componenti energetiche derivata da diverse parti.

### Corrente Lineare/Gradualmente Variata

Le correnti lineari sono correnti che sono rette parallele rispetto a l'un l'altra.

<!Diagramma correnti parallele>

Riprendendo le due equazioni che non abbiamo sviluppato:
$$\rho\left( -g\frac{ \partial z }{ \partial n } -\cancelto{ 0 }{ \frac{v^{2}}{R} } \right)=\frac{ \partial p }{ \partial n } $$
$$\rho\left( -g\frac{ \partial z }{ \partial b }  \right) = \frac{ \partial p }{ \partial b } $$
Sviluppando con gli stessi passi:
$$\frac{\partial}{\partial n}\left( z+\frac{p}{\gamma} \right)=0$$
$$\frac{\partial}{\partial b}\left( z+\frac{p}{\gamma} \right)=0$$
Queste due equazioni tutte e due implicando che:
$$z+\frac{p}{\gamma}=\text{cost}(n,b)$$
Cioè che sulla sezione delle correnti parallele, la somma della altezza piezometrica e la quota geodetica è costante, cioè che è lineare in funzione di z. Questa relazione è la stessa della legge di Stevino e è molto particolare dato che occorre solo in un caso di un sistema molto particolare, cioè quello ideale.

In parole migliori, se una corrente è lineare, la distribuzione delle pressioni è idrostatica e lineare.

### Venturimentro

Immaginiamo un tubo che restringe e poi ri-espande. Possiamo disegnare il carico totale e la lineare piezometrica per i punti dove la area è costante, dove l'area non è costante le linee di corrente non sono lineari quindi non possiamo inferire niente dell'andamento di punto in punto della velocità e perciò della linea piezometrica, quindi la lasciamo tratteggiata. In più sappiamo che al punto minimo le correnti, per un istante infinitesimale devono esser 

<!Diagramma tubo cambiante>

Prendiamo Q, la portata volumetrica come:
$$Q = \int\limits_{A}^{} \underbrace{ u }_{ \underline{v}\cdot \underline{n} } \, dA  = vA$$
La continuità delle correnti per fluidi incomprimibili è:
$$\frac{ \partial Q }{ \partial s } + \frac{ \partial A }{ \partial t } = 0$$
$$\frac{ \partial (vA) }{ \partial s } =0$$

Queste due equazioni valgono per ogni punto del sistema. Quando l'area non cambia avremo:
$$\frac{ \partial v }{ \partial s } =0$$
Questo implica che per le sezioni dove A non cambia, la velocità sarà la stessa e per ciò: $\frac{v^{2}}{2g}$ sarà anche lui costante.

Un venturimetro funziona per calcolare la portata volumetrica in base alla pressione. Il venturimetro allora è composto da due piezometri posti uno nella sezione ad area costante e uno nella sezione di area minima, dove sappiamo trovare v.

<!Diagramma venturimetro>

Questi piezometri faranno vedere il PCI del fluido in moto, e dato che sono lineari possiamo derivata la pressione in ogni punto della pressione.

Il venturimetro agisce con un piezometro differenziale perché il dislivello sarà dalla differenza della pressioni a cui il fluido si trova nei due punti.
Infatti il PCI segue la linea piezometrica che abbiamo definito punto la lunghezza del tubo. Sapendo le aree e sapendo che al punto minimo è lineare possiamo calcolare la velocità e definire la linea piezometrica.

Data la differenza delle pressioni ed il conseguente dislivello possiamo calcolare la portata volumetrica, questo è perché

$$\begin{gather}
H = z+\frac{p}{\gamma}+\frac{v^{2}}{2g}=\text{cost} \\
\implies \left( z+\frac{p}{\gamma} \right)_{1}+\frac{v_{1}^{2}}{2g} = \left( z+\frac{p}{\gamma} \right)_{2} + \frac{v_{2}^{2}}{2g} \\
\left( z+\frac{p}{\gamma} \right)_{1}-\left( z+\frac{p}{\gamma} \right)_{2} = \frac{v_{2}^{2}}{2g}-\frac{v_{1}^{2}}{2g} = \frac{Q^{2}}{2gA_{2}^{2}}-\frac{Q^{2}}{2gA_{1}^{2}} = \frac{Q^{2}}{2g}\left( \frac{1}{A_{2}^{2}}-\frac{1}{A_{1}^{2}} \right)
\end{gather}$$

Sapendo che Q = vA, il cambio nell'area ha causato un cambio nella velocità, causando un cambio nella quota piezometrica.

Usando un manometro differenziale invece del venturimetro, possiamo scrivere:
$$\left( z+\frac{p}{\gamma} \right)_{1}-\left( z+\frac{p}{\gamma} \right)_{2} = \Delta  \frac{\gamma_{M}-\gamma}{\gamma} = \frac{Q^{2}}{2g}\left( \frac{1}{A_{2}^{2}}-\frac{1}{A_{1}^{2}} \right)$$
Possiamo allora definire la portata volumetrica dal dislivello e dal cambio nella area che ha causato il dislivello.


