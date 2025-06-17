---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 6 - Manellismo Ordinario Centrato

Un manellismo è un sistema di biella e manovella.

Un tipi manellismo è:

<!Diagramma manellismo>

Punto di Moto Superiore è il punto di estensione massima e uno dei due punti dove la velocità all'istante è 0.

A è la testa di bielle e B è il piede della biella. La distanza tra i due limiti del piede della biella è della la corsa.

Il sistema in totale ha 1 grado di liberta che possiamo definire con $\alpha$ o $x_{b}$ , quello che useremo per i nostri studi sarà $\alpha$ .

Le traiettorie per il sistema sono:

<!Diagramma traiettorie>

La linea verde è la traiettoria di trascinamento data dalla rotazione di A intorno a O, e la linea viola è la traiettoria del moto relativo data dalla rotazione di B intorno ad A. La linea rosse è la traiettoria del moto assoluto di B.

## Approccio Grafico

Dati: $\overline{OA}_{}$, $\overline{AB}_{}$ , $\dot{\alpha} =w$, e dei numeri che Collina prenderà a caso.

### Velocità

$\vec{v}_{b} = \vec{v}_{a}+\vec{w}_{2}\times(B-A)$

|     | $\vec{v}_{b}$ | $\vec{v}_{a}$       | $\vec{w}_{2}\times(B-A)$ |
| --- | ------------- | ------------------- | ------------------------ |
| M   | ?             | $w\overline{OA}_{}$ | $? w_{2}AB$              |
| D   | $\parallel x$ | $\perp OA$          | $\perp AB$               |

<!Diagramma vettori velocità>

### Accelerazione

$\vec{a}_{b} = \vec{a}_{A}+\vec{\dot{w}}_{2}\times(B-A)-w_{2}^{2}(B-A)$

|     | $\vec{a}_{b}$ | $\vec{a}_{A}$           | $\vec{\dot{w}}_2\times(B-A)$ | -$w_{2}^{2}(B-A)$ |
| --- | ------------- | ----------------------- | ---------------------------- | ----------------- |
| M   | ?             | $w^{2}\overline{OA}_{}$ | ?$\dot{w}_{2}AB$             | $w_{2}^{2}(B-A)$  |
| D   | $\parallel x$ | $A\to O$                | $\perp AB$                   | B-A               |
$\dot{\alpha} = cost = w\implies \dot{w}=0 \implies \vec{a}_{A} = \vec{a}_{An}$

<!Diagramma vettori accelerazioni>

## Studio del manovellismo con i numeri complessi

Prendiamo un sistema di riferimento ad O, non a come abbiamo fatto per le traiettorie, prendendo y come l'asse dei numeri immaginari e x come l'asse dei numeri reali.

### Posizione 

<!Diagramma assi e sistema di riferimento>

$$(B-O) = (A-O)+(B-A)\implies c = ae^{ i\alpha }+be^{ i\beta }$$
In questo caso c non ha angolo perché e sempre sull'asse dei numeri reali.

Gli angoli devono esser presi nello stesso modo per evitare errori, per questo li prendiamo cosi:

<!Diagramma angoli e convenzione>

I valori costanti in questo problema saranno, $\gamma=0$ (angolo di $OB$), a e b, invece le variabili di questo problema sono c, $\alpha$ e $\beta$.

Espandendo per eulero:
$$\begin{gather}
ae^{ i\alpha } = a(\cos\alpha+i\sin\alpha) \\
be^{ i\beta } = b(\cos\beta+i\sin\beta)
\end{gather}$$

Analizzando la posizione:

$$\left\{\begin{align}
c &= a\cos\alpha+b\cos\beta \\
0 &= a\sin\alpha + b\sin\beta
\end{align}\right\}$$

Dalla seconda equazione troviamo una relazione tra $\alpha$ e $\beta$ (la useremo anche più avanti):
$$\sin\beta = -\frac{a}{b}\sin\alpha$$
Da questa possiamo trovare $\cos\beta$ che possiamo poi inserire nella prima equazione:
$$\cos\beta = \pm \sqrt{ 1-\sin ^{2}\beta } = \pm \sqrt{ 1-\left( -\frac{a}{b}\sin\alpha \right)^{2} }$$

Mettendo questo nella prima equazione troviamo una equazione che è solamente dipende di $\alpha$:
$$c= a\cos\alpha+b\sqrt{ 1-\frac{a}{b}\sin ^{2}\alpha }\to c=c(\alpha)$$

In questo caso il $\pm$ non ha effetto perché $\beta$ rimane sempre nel primo e quarto quadrante $\implies \cos\beta >0 \;\forall t$

<!Diagramma beta sempre positivo>

Il grafico di $\alpha$ e c è:

<!Diagramma c vs alfa>

### Velocità

Derivando la equazione che avevamo originalmente ci viene:

$$\left\{\begin{align}
\dot{c} &= -a\sin\alpha \cdot \dot{\alpha}-b\sin\beta \cdot\dot{\beta}\\
0 &= \dot{\alpha}\cdot a\cos\alpha + \dot{\beta}\cdot b\cos\beta
\end{align}\right\}$$

Con estrapolazioni troviamo la equazione che abbiamo trovato all'inizio:
$$\vec{v}_{b} = \vec{v}_{a}+\vec{w}_{2}\times(B-A)$$

Graficamente lo possiamo vedere disegnando i vettori:

<!Diagramma vettori per v_a>

#### Proviamo a togliere $\dot{\beta}$

Nella seconda equazione derivata possiamo isolare $\dot{\beta}$ :
$$\dot{\beta} = - \dot{\alpha} \frac{a\cos\alpha}{b\cos\beta}$$

Mettendo questo nella prima equazione abbiamo:
$$\begin{gather}
\dot{c} = -\dot{\alpha}a\sin\alpha - \left( -\dot{\alpha} \frac{a\cos\alpha}{b\cos\beta} \right)b\sin\beta \\
\implies  \dot{c} = -\dot{\alpha}a\sin\alpha +\dot{\alpha}a\cos\alpha \tan\beta \\
\implies \dot{c} = \dot{\alpha}(-a\sin\alpha+a\cos\alpha \tan\beta) = \dot{\alpha}\Lambda(\alpha)
\end{gather}$$

La equazione $\Lambda$ è la funzione che ci aiuta a riporta la nostra velocità di c ad ogni punto, possiamo dire che è funzione di $\alpha$ anche se c'è $\tan\beta$ perché sappiamo $\beta$ in funzione di $\alpha$ e le equazioni per $\cos\beta$ e $\sin\beta$ da quando abbiamo analizzato la velocità.

Il grafico di $\dot{c}$ rispetto a $\alpha$ è :
<!Diagramma dot{c} vs alfa>

In questo grafico le velocità sono nella posizione giusta.







