---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 04 - 

Prima di fare un esercizio aiutare passare un'attimo come a vedere come passa.

## Continuazione esercizio ultima volta

<!Diagramma esercizio>

CIR si trova sulla perpendicolare alla direzione della velocità $\vec{v}$ di un punto. Mettendo insieme le perpendicolari troviamo il CIR del sistema.

K è ente cinematico, un punto che non esiste ed e diverso ma completa un definizione matematica.

Le coordinate di K sono:
$$\begin{gather}
x_{k} = L(1-\cos\theta) \\
y_{k} = L\sin\theta
\end{gather}$$
La traiettoria di K in questo caso è un quarto di cerchio.

### Velocità

$$\begin{gather}
\vec{v}_{a} = \vec{w}\times(A-K) \\
\mid \vec{v}_{a}\mid = \dot{\theta}L\sin\theta \\
\dot{\theta} = \frac{v_{a}}{L\sin\theta} \\
\vec{v}_{b} = \vec{w}\times(B-K) \\
\mid \vec{v}_{b}\mid = \dot{\theta}L\cos\theta \\
v_{b} = \frac{v_{a}}{L\sin\theta}\cdot \cos\theta = \frac{v_{a}}{\tan\theta}
\end{gather}$$

Le stesse cose che abbiamo trovato con vettori l'ultima volta, ma con algebra 

### Accelerazione

Prendiamo per ipotesi: $\vec{a}_{A} = 0$


|     | $\vec{a}_{b}$ | $\vec{a}_{a}$ | $\vec{\dot{w}}\times(B-A)$ | $-w^{2}(B-A)$        |
| --- | ------------- | ------------- | -------------------------- | -------------------- |
| M   | ?             | 0             | $\ddot{\theta}L$           | $-\dot{\theta}^{2}L$ |
| D   | $\parallel y$ | $\parallel x$ | $\perp AB$                 | $\parallel AB$       |

<!Diagramma diagramma vettori>

Troviamo $\vec{a}_{b}$ :
$$\begin{gather}
\dot{\theta}^{2}L  = a_{b}\sin\theta \\
a_{b} = \frac{\dot{\theta}^{2}L}{\sin\theta} \\
\dot{\theta} = \frac{v_{a}}{L\sin\theta} \\
a_{b} = \left( \frac{v_{a}}{L\sin\theta} \right)^{2} \cdot \frac{L}{\sin\theta} = \frac{v_{a}^{2}}{L\sin ^{3}\theta}
\end{gather}$$

La accelerazione varia dipendendo dalla configurazione, la accelerazione assoluta non cambia, solo i vettori che la compongono.

È molto facile creare moto non uniforme da moto uniforme.

Invece la soluzione vettoriale:

$$\begin{gather}
\vec{a}_{b} = \vec{a}_{a} + \vec{\dot{w}}\times(B-A) - w^{2}(B-A) \\
a_{b}\hat{j} = a_{a}\hat{i} - \ddot{\theta}L\sin\theta \hat{i} + \ddot{\theta}L\cos\theta \hat{j} - \dot{\theta}^{2}L\cos\theta \hat{i} - \dot{\theta}^{2}L\sin\theta \hat{j}
\end{gather}$$

Separando per i componenti:
$$\hat{i}) 0 = a_{a} - \ddot{\theta}L\sin\theta - \dot{\theta}^{2}L\cos\theta$$
$$\hat{j}) a_{b} = \ddot{\theta}L\cos\theta - \dot{\theta}^{2}L\sin\theta$$
Come la velocità trova la accelerazione.

## Vincolo di Contatto e Vincolo di Rotolamento

### Vincolo di Contatto

<!Diagramma vincolo di contatto>

P è il punto di contato, rimangono a contatto e possono strisciare, possono rimanere in contatto se i due hanno la stessa velocità lungo la tangenziale al contatto.

### Vincolo di Rotolamento

<!Diagramma rotolamento>

Per il rotolamento serve che le due velocità all'istante siano uguali.

#### Disco in Rotolamento su piano rettilineo

<!Diagramma rotolazione su piano>

Il vincolo di rotolamento aggiunge 2 gradi di vincoli, non permette il movimento in verticale e il disco non può slittare.

Lo spostamento di s è trovato con $s = R\theta$ disegnato come:

<!Diagramma spostamento>

##### Velocità e accelerazione del punto C

$$\vec{v}_{c} = \frac{ds}{dt}\hat{i} = R\dot{\theta}\hat{i}$$
$$\vec{a}_{c} = \frac{d\vec{v}_{s}}{dt} = R\ddot{\theta}\hat{i} = \vec{a}_{ct} (\text{non c'è }\vec{a}_{n}) $$

##### Velocità e accelerazione di P $\neq$ C

La velocità ad ogni punto è la somma della velocità di traslazione (quella che appena calcolato, visto che applica ad ogni punto), più la velocità al punto generata dalla rotazione.

<!Diagramma velocità traslazione>

<!Diagramma velocità rotazione>

Sappiamo che il punto a contatto con il piano può avere velocità diversa da 0, se no il disco starebbe slittando.

Vedendo la somma di questi due vettori troviamo un triangolo di velocità che aumenta più lontano dal punto di contatto:

<!Diagramma triangolo di velocità>

$$\begin{gather}
\vec{v}_{p} = \vec{v}_{c} + \vec{w}\times(P-C) = R\dot{\theta}\hat{i}+R\dot{\theta}\hat{i} = 2R\theta \hat{i}
\end{gather}$$

Data la velocità 0 al punto notiamo anche che il punto di contatto è il CIR del disco quindi possiamo trovare la velocità di ogni punto come la velocità di rotazione rispetto alla distanza dal punto, nel caso del punto P:
$$\begin{gather}
\vec{v}_{p} = \vec{w}\times(P-K) \\
\vec{v}_{p} = \dot{\theta}2R\hat{i}
\end{gather}$$

La velocità di ogni punto del rotolamento è funzione della sua distanza dal punto di contatto, ogni punto della circonferenza diventerà punto di contatto e rotazione.

L'ente cinematica (il corpo) si muoverà come il suo centro.

#### Accelerazioni

$$\begin{align}
\vec{a}_{p} &= \vec{a}_{c} + \vec{\dot{w}}\times(P-C) - w^{2}\times(P-C) \\
&= \ddot{\theta}R\hat{i} + \ddot{\theta}R\hat{i} - \dot{\theta}^{2}R\hat{j} = \underbrace{ 2R\ddot{\theta}\hat{i} }_{ a_{ct} } - \underbrace{ \dot{\theta}^{2}R\hat{j} }_{ a_{cn} }
\end{align}$$

Con questa equazione troviamo che la velocità di un punto alla circonferenza del disco si sviluppa come una cicloide:

<!Diagramma cicloide>

Possiamo allora trovare il raggio della cicloide con $a_{pn}$ :
$$\begin{gather}
a_{pn} = \frac{v_{p}^{2}}{\rho_{c}} = \frac{(2R\dot{\theta})^{2}}{\rho} \\
\rho_{c} = \frac{4R^{2}\dot{\theta}^{2}}{\dot{\theta}^{2}R} = 4R
\end{gather}$$

### Studio del CIR dell'accelerazione

Dato un disco di può rotolamento
<!Diagramma disco>

Troviamo la accelerazione del punto di contatto:

$$\begin{align}
\vec{a}_{k} &= \vec{a}_{c} + \vec{\dot{w}}\times(K-C)-w^{2}(K-C) \\
&=R\ddot{\theta}\hat{i}-R\ddot{\theta}\hat{i}+\dot{\theta}^{2}R\hat{j} = R\dot{\theta}^{2}\hat{j}
\end{align}$$

Come prima vediamo che esce un cicloide:

<!Diagramma cicloide>

In questa cicloide la velocità diventa 0, ma la accelerazione non si annulla mai, quindi non esiste CIR della accelerazione.

Sullo stesso corpo esistono traiettorie, diverse per la sovrapposizione dei moti. Non si può applicare CIR








