---
creation_date: 2024-02-11 14:02
tags:
  - MANI
share: true
---
# Lezione 04 - Metodi Iterativi

Abbiamo il sistema lineare:
$$Ax = b$$
Possiamo scrivere uno schema generale dell'iterazione come:
$$x^{(k+1)} = Bx^{(k)}+g\;;\;\text{per }k\geq 0$$
$B$ e $g$ nono possono esser qualsiasi, serve che siano consistenti, cioè $x = Bx+g$

Possiamo trovare che:
$$\begin{align}
e^{(k+1)} = Be^{ ^{(k)} } \\
e^{(k)} = Be^{ (k-1) } \\
|e^{ (k) }| = |Be^{ ^{(k-1)} }|
\end{align}$$

Ci sono vari modi per trovare la norma di una matrice, un metodo è la norma 2, detta anche norma spettrale:
$$A\in\mathbb{R}^{n\times n}\to|A|_{2} = \sqrt{ \lambda_{max}(A^{T}A) }$$
Se $A$ è simmetrica ($A^{T}=A$) allora: $$|A|_{2} = \sqrt{ \lambda_{max}(A^{2}) } = \sqrt{ [\lambda_{max}(A)]^{2} } = \lambda_{max}(A)$$
### Proprietà della compatibilità

Abbiamo definito l'errore come:
$$|e^{(k)}|  = |Be^{(k-1)}|$$
Se i tipi di norma che prendiamo sono opportune è possibile che la norma della matrice del vettore siano compatibili, quindi si può scrivere:
$$|Be^{(k-1)}| \leq|B|_{2}\cdot|e^{ ^{(k-1)} }|$$
In un altra approssimazione possiamo scrivere:
$$|B|_{2}|\cdot e^{ ^{(k-1)} }| \simeq \rho(B) \cdot|e^{ (k-1) }|$$

Notiamo $\rho(B)$ come il raggio spettrale di B, come troviamo questa relazione è di un livello più alto che non guarderemo.

Come definito prima:
$$\rho(B) = \lambda_{max}(B)$$
Cioè il massimo degli autovalori in modulo.

Questa relazione con il raggio spettrale ci permette di scrivere che:
$$\begin{align}
|e^{ (k) }|&\leq \rho(B) \cdot|e^{ (k-1) }| \\
|e^{ (k-1) }|&\leq \rho(B) \cdot|e^{ (k-2) }| \\
|e^{ (k-2) }|&\leq \rho(B) \cdot|e^{ (k-3) }| \\
&\;\;\vdots
\end{align}$$
Da qui allora possiamo scrivere:
$$|e^{ (k) }|\leq \rho(B) \cdot|e^{ (k-1) }| \leq \rho(B)^{2} \cdot|e^{ (k-2) }| \leq \rho(B)^{3} \cdot|e^{ (k-3) }| \leq \dots$$
$$\implies |e^{ (k) }|\leq \rho(B)^{k} \cdot|e^{ (0) }|$$
La condizione per la convergenza allora sarà che: $\rho(B) <1$

Questo significa allora che anche un errore grande può esser corretto.
Note bene: Se non c'è consistenza tutto questo non si può fare perché la relazione passo per passo non vale più.

### Teorema

Si consideri lo schema:
$$x^{(k+1)} = Bx^{(k)}+g$$
e si supponga che sia <u>consistente</u>.
Allora lo schema è <u>convergente</u> $\forall x^{(0)} \in\mathbb{R}^{n} \iff\rho(B) <1$

Più $\rho(B)$ è piccolo, più la convergenza è rapida.


Tra le opzioni di schemi che possiamo usare per determinare la soluzione ad un sistema, se possibile scegliamo lo schema con $\rho(B)$ più piccolo.

$\rho(B)$ è anche utile come condizione di arresto in base a quanto è abbattuto.

### Trovare il numero minimo di iterazioni

La condizione di arresto in base alla errore è:
$$\frac{|e^{ (k,min) }|}{|e^{(0)}|}  \leq[\rho(B)]^{K_{min}} < \text{TOL}$$
Quello che controlliamo è la condizione alla destra.
Possiamo trovare il numero minimo di iterazioni come:
$$K_{min} = \log_{\rho(B)}TOL$$
Avendo visto l'errore andiamo a costruire una famiglia intera di schemi.

## Metodi di Richardson

Come sempre abbiamo:
$$Ax = b$$
Prendiamo arbitrariamente $\alpha_{k} \in \mathbb{R}$, parametro di accelerazione, che verrà utilizzato per velocizzare la convergenza.
$$\alpha_{k}Ax = \alpha_{k}b$$

Riscriviamo e facciamo delle manipolazioni algebriche.

Per prima prendiamo una matrice $P\in\mathbb{R}^{n\times n}$, questa matrice è della precondizionatore, e deve esser invertibile e facile(spiegato dopo).

Scriviamo allora:
$$\alpha_{k}A = P-P+\alpha_{k}A$$
$$Px -(P-\alpha_{k}A)x = \alpha_{k}b$$
$$Px = (P-\alpha_{k}A)+\alpha_{k}b$$
Prendiamo allora arbitrariamente che la x alla sinistra della k+1-esima iterazione e che le x alla destra siano della k-esima iterazione.

Inserendo questi indici:
$$\begin{align}
Px^{(k+1)} &= (P-\alpha_{k}A)x^{(k)}+\alpha_{k}b \\
Px^{(k+1)} &= Px^{(k)}+\alpha_{k}b-\alpha_{k}Ax^{(k)}
\end{align}$$
Moltiplicando per $P^{-1}$:
$$x^{(k+1)} = x^{(k)} + \alpha_{k}P^{-1}(\underbrace{ b-Ax^{(k)} }_{ r^{(k)} })$$
$r^{(k)}$ è il resto, cioè quello che rimane quando togliamo la soluzione e la nostra approssimazione.

$$\boxed{ x^{(k+1)} = x^{(k)} + \alpha_{k}P^{-1}r^{(k)} }$$
Questa è la forma più nota del metodo di Richardson.

Definiamo $P^{-1}r^{(k)} =z^{(k)}$ come il residuo precondizionato. Allora:
$$x^{(k+1)} = x^{(k)} + \alpha_{k}z^{(k)}\;;\;k\geq 0$$

Definiamo uno schema di Richardson come stazionario se $\alpha_{k} = cost\;\forall k$, invece è detto dinamico se $\alpha_{k} \neq cost\;\forall k$.

Se vogliamo riscriverlo nella forma $x^{(k+1)} = Bx^{(k)}+g$, allora partendo da:
$$x^{(k+1)} = x^{(k)}-\alpha_{k}P^{-1}Ax^{(k)}+\alpha_{k}P^{-1}b$$
$$x^{(k+1)} = (\underbrace{ I-\alpha_{k}P^{-1}A }_{ B_{_{\alpha_{k}}} })x^{(k)}+\underbrace{ \alpha_{k}P^{-1}b }_{ g_{\alpha_{k}} }$$

### Consistenza del metodo Richardson

Visto che siamo iniziati dalla posizione:
$$Px = Px+\alpha_{k}b-\alpha_{k}Ax$$
Che è un sistema consistente, significa che quando andiamo ad aggiungere la iterazione, il sistema di Richardson sarà per come è costruito un sistema consistente.
$$Px^{(k+1)} = Px^{(k)} + \alpha_{k}b - \alpha_{k}Ax^{(k)}$$
Se viene chiesto all'esame possiamo dire che è consistente per costruzione senza dare un spiegazione.

## Determinazione di P e $\alpha$ se 

### Proposizione: Caso Stazionario

Siano A e P [sdp](sdp.md). Allora Richardson stazionario converge $\forall x^{(0)} \in\mathbb{R}^{n} \iff 0<\alpha< \frac{2}{\lambda_{max}(P^{-1}A)}$ 

Le scelta ottimale di $\alpha$, quello che massimizza la velocità di convergenza, è: 
$$\alpha_{opt} = \frac{2}{\lambda_{max}(P^{-1}A)+\lambda_{min}(P^{-1}A)}$$
Inoltre:
$$|e^{ {(k)} }|_{A} \leq \underbrace{ \left( \frac{K(P^{-1}A)-1}{K(P^{-1}A)+1} \right)^{k} }_{ \stackrel{\text{Fattore di convergenza}}{\text{k $\to$ \# di condizionamento}} }|e^{ ^{(k)} }|_{A}$$
Dove $|w|_{A} = \sqrt{ w^{T}Aw }\;;\;w\in\mathbb{R}^{n}$.
Questo tipo di norma tiene traccia del problema che stiamo risolvendo

#### Dimostrazione della convergenza

Per verificare la prima parte della proposizione, dobbiamo verificare la convergenza. Sappiamo che è convergente se il sistema è consistente e se $\rho(B_{\alpha})<1$. È consistente per costruzione allora dobbiamo verificare che $\rho(B_{\alpha})<1$.

Sapiamo che: $B_{\alpha} = I-\alpha P^{-1}A$

Per $\lambda_{i} \in\mathbb{R}^{n}$ autovalori di $P^{-1}A$
Scriviamo che: $\lambda_{1} \geq \lambda_{2} \geq \dots \geq\lambda_{n}$

Prendiamo $\mu_{i}$ come gli autovalori di $B_{\alpha}$. Questi autovalori avranno equazione: $\mu_{i} = 1- \alpha\lambda_{i}$

Per confermare la convergenza dobbiamo chiedere che $|1-\alpha\lambda_{i}|<1 \;\forall i \implies\rho(B_{\alpha})<1$

Questo è uguale a:
$$-1<1-\alpha\lambda_{i}<1$$
Dato che A e P sono [sdp](sdp.md), sappiamo che tutti gli $\lambda_{i}$ sono $>0$, allora anche $\alpha>0$. Troviamo anche che $\alpha\lambda_{i}<2$.

Riscrivendo abbiamo che: 
$$\alpha< \frac{2}{\lambda_{i}}$$
Affinché valga $\forall i$, la condizione più restrittiva è $\lambda_{i} = \lambda_{max}$, perché se vale per $\lambda_{max}$ vale $\forall\lambda_{i}$:
$$\alpha < \frac{2}{\lambda_{max}(P^{-1}A)}$$
Mettendo insieme questa ultima condizione e la condizione $\alpha>0$, verifica la condizione che $\rho(B_{\alpha})<1$, quindi la convergenza è verificata.

#### $\alpha_{opt}$ caso stazionario

Trovare $\alpha_{opt}$ $\implies$ trovare l'$\alpha$ tra $0<\alpha< \frac{2}{\lambda_{max}}$ che minimizza il raggio spettrale, cioè l'$\alpha$ che minimizza il massimo autovalore.

Supponiamo che:
$\lambda_{1}, \lambda_{2},\lambda_{3}$ autovalori di $P^{-1}A$ con $\lambda_{1}\geq \lambda_{2}  \geq \lambda_{3}$ che significa $\frac{1}{\lambda_{1}} \leq \frac{1}{\lambda_{2}} \leq \frac{1}{\lambda_{3}}$

Ci ricordiamo la definizione che abbiamo posto prime che: $\mu_{i} = |1-\alpha\lambda_{i}|$

Mappando graficamente ogni autovalore $\mu_{i}$ in base al valore $\alpha$, troviamo:
<!Diagramma autovalori in base ad alpha>

Dobbiamo trovare $\alpha$ dove il valore massimo è il più basso possibile. Troviamo che questo punto è all'intersezione tra $\frac{1}{\lambda_{3}}$ e $\frac{1}{\lambda_{1}}$.

Cerchiamo $\mu_{i}$ massimo minimo tale per minimizzare $\rho(B)$.

L'$\alpha$ all'intersezione allora sarà l'$\alpha_{opt}$.
Troviamo che:
$$\alpha_{opt} = \frac{2}{\lambda_{1}+\lambda_{3}}$$
In forma più generale si può scrivere:
$$\alpha_{opt} = \frac{2}{\lambda_{max}+\lambda_{min}}$$
Dato che $\rho(B_{\alpha opt})$ è definito come l'autovalore $\mu$ più grande, vogliamo ridurre il valore il minimo possibile per trovarlo, allora sarà:
$$\rho(B_{\alpha opt}) = 1-\alpha_{opt}\lambda_{min} = 1- \frac{2}{\lambda _{max}+\lambda_{min}}\lambda _{min} = \frac{\lambda _{max}-\lambda _{min}}{\lambda_{max}+\lambda_{min}}$$

### Proposizione: Caso Dinamico

Siano $A$ e $P$ [sdp](sdp.md). Allora Richardson dinamico converge $$\forall x^{(0)} \in\mathbb{R}^{n} \implies \alpha_{k,opt} = \frac{[z^{(k)}]^{T}r^{k}}{[z^{(k)}]^{T}Az^{(k)}}\;;\;k\geq 0$$
> [!note]-
> Converge per ogni vettore iniziale con $\alpha_{k,opt}$, se non lo usiamo allora non è garantito che convergerà per ogni vettore iniziale.

Inolte:
$$|e^{(k)}|_{A} \leq \left( \frac{K(P^{-1}A)+1}{K(P^{-1}A)+1} \right)^{k}|e^{ ^{(0)} }|_{A}$$

L'$\alpha_{k,opt}$ è ricavato attraverso il metodo del gradiente precondizionato, questo ha delle complicazioni quindi per salvar tempo, dimostriamo il metodo del gradiente generico (dove P è spento, cioè con P = I).

Quando il precodizionatore è spento:
$$\alpha_{k,opt} = \frac{[r^{(k)}]^{T}r^{(k)}}{[r^{(k)}]^{T}Ar^{(k)}}$$
Che è quello che andremo a dimostrare.

#### Dimostrazione di $\alpha_{k,opt}$ per Richardson Dinamico

Sappiamo che $x^{(k+1)} = x^{(k)}+\alpha_{k}r^{(k)}$.
Ricordiamo che A è [sdp](sdp.md).

Risolvere $Ax=b \underbrace{ \iff }_{ \text{se A è sdp} } \text{minimizzare } Q(x) = \frac{1}{2}x^{T}Ax-x^{T}b$

> [!note]- Questo mi ha aiutato a capire perché
> https://math.stackexchange.com/questions/4322010/why-solving-ax-b-is-equivalent-to-minimize-frac12xtax-btx-over-x
> In più $\nabla Q(x) = Ax-b$, quindi quando $\nabla Q(x)$ = 0 $\implies Ax-b= 0 \implies Ax = b$


La parte alla destra è detta forma quadratica e geometricamente è rappresentata da una parabola, questo si può vedere perché x viene moltiplicato due volte con i parametri di x creando la parabole mentre $bx^{T}$ sposta la parabola. Quindi minimizzando effettivamente troviamo il minimo della parabola.

Questo metodo allora è un metodo dove ad ogni passo valutiamo la nostra posizione rispetto alla posizione in cui vogliamo esser e controlliamo cambiamo direzione alla direzione che ha gradiente maggior per permetterci di raggiungere il minimo più velocemente.

In forma matematica possiamo scrivere:
$$x^{(k+1) } = x^{(k)} + \gamma_{k}d^{(k)}$$
In questa equazione $d^{(k)}$ è la direzione di spostamento, questa direzione è la più rapida per raggiungere il minimo e ad ogni iterazione la ricalcoliamo per controllare che stiamo andando nella direzione migliore.
Troviamo questo valore con l'equazione:
$$d^{(k)} = -\nabla Q(x^{(k)}) = b-Ax^{(k)} = r^{(k)}$$
Vediamo allora che la direzione tattica è quella del residuo.

Per trovare la magnitudine di $\gamma_{k}$ dobbiamo trovare dove Q inizia a tornare in su, per massimizzare l'effetto del passo.
Possiamo scrivere che:
$$Q(x^{(k)}+\gamma_{k}r^{(k)} ) = \widetilde{Q}(\gamma_{k})$$
È trovare dove:
$$\frac{ d\widetilde{Q} }{ d\gamma_{k} }=0$$

La funzione completa è:
$$\underbrace{ \frac{1}{2}(x^{(k)}+\gamma_{k}r^{(k)})A(x^{(k)}+\gamma_{k}r^{(k)}) - (x^{(k)}+\gamma_{k}r^{(k)})^{T}b }_{ Q(x^{(k)}+\gamma_{k}r^{(k)}) } = \widetilde{Q}(\gamma_{k})$$

La derivata sarà:
$$\frac{d\widetilde{Q}}{d\gamma_{k}} = [r^{(k)}]^{T}Ax^{(k)}+\gamma_{k}[r^{(k)}]^{T}Ar^{(k)}-[r^{(k)}]^{T}b = 0$$

Isolando $\gamma_{k}$ troviamo:
$$\gamma_{k}= \frac{[r^{(k)}]^{T}b-[r^{(k)}]^{T}Ax^{(k)}}{[r^{(k)}]^{T}Ar^{(k)}} = \frac{[r^{(k)}]^{T}\cdot \overbrace{b-Ax^{(k)}}^{r^{(k)}}}{[r^{(k)}]^{T}Ar^{(k)}} = \frac{[r^{(k)}]^{T}r^{(k)}}{[r^{(k)}]^{T}Ar^{(k)}}$$

Abbiamo trovare allora il valore di $\alpha_{k,opt}$, questo è l'unico valore che garantisce la convergenza $\forall x^{(0)}$ nel caso dinamico.