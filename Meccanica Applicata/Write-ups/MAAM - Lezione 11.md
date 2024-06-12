---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 11 - Equilibrio Meccanico dei Sistema di Corpi Rigidi

## Equazioni di Equilibrio Dinamico per il singolo corpo rigido

Si hanno:
$$\vec{R}+\vec{F}_{iG} = 0$$
Queste sono le reazioni vincolari e forza sul baricentro del corpo rigido, che ci generano 2 equazioni.

La dinamica  è uguale alla statica con la sola differenza che teniamo a conto l'inerzia dei corpi.

## Equazione dell'Equilibrio dei Momenti

$$\vec{M}_{o}+\vec{c}_{iG} + (G-O)\times \vec{F}_{iG} = 0$$

Anche questo genera una equazione data una incognita.

Queste due equazioni che generano 3 equazioni sono necessarie e sufficienti per definire l'equilibrio dinamico del corpo rigido. Questo fa anche senso perché possiamo usare le 3 equazioni generate per descrivere ognuno dei 3 gradi di libertà del corpo.

## Equazioni di Equilibrio Dinamico per sistema di corpi rigidi

In base questa è una somma delle equazioni di ogni corpi rigido.

$$\left\{\begin{align}
&\vec{R}+\sum_{k}^{N_{c}}\vec{F}_{iGk} = 0 \\
&\underbrace{ \vec{M}_{0} }_{ \substack{\text{Coppie}\\\text{Esterne}\\\text{a sistema}} } + \sum_{k}^{N_{c}}\vec{c}_{iGk} + \sum_{k}^{N_{c}}(\underbrace{ G_{k} }_{ \substack{\text{Baricentro}\\\text{Corpo}} }-O)\times \vec{F}_{iGk}=0
\end{align}\right\}$$

La prima genera due equazioni scalari, invece la seconda ne genera una come prima.

$\vec{R}$ sono le forze esterne al sistema non quelle che agiscono tra gli elementi del sistema.

Nel caso di un sistema di corpi rigidi pero questi due equilibri non sono sufficienti per descrivere un equilibrio dinamico, pero sappiamo che la presenza di equilbrio dinamico implica la esistenza di questi due equilbri.

Su un sistema o corpo si può scrivere solo 3 equilibri linearmente indipendenti. Non si può creare un secondo momento linearmente indipendente.

## Studio di un sistema dinamico

Ci sono 2.5 modi per fare lo studio

## 1$^{o}$ modo - Studio cinetostatico

Dati:
- geometria $\to$ parametri inerziali ($M_{k},J_{Gk},G_{k}$)
- Azioni agenti (tranne "alcune" (spiegato dopo))
- Cinematica $\to$ posizione, velocità, accelerazione

Con lo studio cinetostatico:

- Troviamo le azioni attive incognite $\to$ dimensionamente azionante (quelle che non sono "alcune")
- Reazioni vincolari $\to$ dimensionamento vincoli
- Cinetostatico è ad un singolo punto, ma è possibile.

## 2$^{o}$ modo - Studio di Simulazione

Farlo per l'arco intero con un programma (quindi non lo usiamo durante l'esame)

Dati:
- geometria, parametri <u>iniziali</u>
- <u>tutte</u> le azioni attive (anche in funzione del tempo)
- posizione, velocità e accelerazioni <u>iniziali</u> (nel caso che cambiano)

Attraverso lo studio di simulazione troviamo:

- Movimento, evoluzione delle posizione, velocità e accelerazione nel tempo e le reazioni vincolari

## Esempio

<!Diagramma esempio con dati>

$c_{1}$ è esterno al sistema complessivo, invece $c_{2}$ è interno.

Interno ed esterno è in base su che caso stiamo scrivendo l'equazione, se contassimo anche la terra nel sistema cinematico allora anche $c_{1}$ sarebbe interno.

### Studio Accelerazione dei baricentri

<!Diagramma studio accelerazione>

$$\begin{gather}
a_{G_{1}t} = \frac{l}{2}\dot{w_{1}} \\
a_{G_{1}n} = w_{1}^{2} \frac{l}{2} \\
\vec{a}_{G_{2}} = \vec{a}_{At}+\vec{a}_{An} + \vec{\dot{w}}_{2}\times(G_{2}-A)-w_{2}^{2}(G-A)
\end{gather}$$

Scriviamo $\vec{a}_{G_{2}}$ così perché la traiettoria è ignota.

In riferimento assoluto:
$$\begin{gather}
a_{At} = l\dot{w}_{1} \\
a_{An} = lw_{1}^{2} \\
\mid \vec{\dot{w}}_{2}\times(G_{2}-A)\mid = \frac{\dot{w}_{2}l}{2} \\
\mid-w^{2}(G_{2}-A)\mid = w_{2}^{2} \frac{l}{2}
\end{gather}$$

Possiamo separare $\vec{a}_{G_{2}}$ nei due componenti coassici:

$$\begin{gather}
a_{G_{2}x} = -a_{An}\cos\alpha -a_{At}\sin\alpha -\frac{\dot{w}_{2}l}{2}\sin\beta - w_{2}^{2} \frac{l}{2}\cos\beta \\
a_{G_{2}y} = -a_{An}\sin\alpha +a_{t}\cos\alpha +\dot{w}_{2} \frac{l}{2}\cos\beta - w_{2}^{2} \frac{l}{2}\sin\beta
\end{gather}$$
Di solito $w^{2}>\dot{w}$ quindi assumiamo tutte e due negative (solo per questo esempio)

<!Diagrammi con vettori accelerazioni>

Le incognite in questo caso sono $c_{1},c_{2},\phi_{ox}$ e $\phi_{oy}$

Un consiglio dal professore per la prossima parte è di scrivere cosa e in che cosa si sta scrivendo.

$M_{0} (tutto)$ +$\text{\^)}$ :$$c_{1}-_{iG_{1}}+G_{iG_{1}t} \frac{l}{2} - c_{iG_{2}}-F_{iG_{1}x}\left( l\sin\alpha+\frac{l}{2}\sin\beta \right)+F_{iG_{2}y}\left( l\cos\alpha+\frac{l}{2}\cos\beta \right)-F_{x}(l\sin\alpha+l\sin\beta)-F_{y}(l\cos\alpha+l\cos\beta)$$

<!Diagramma forza interne>

$M_{A} (\text{braccio 2})$ +$\text{\^)}$ :
$$c_{2}-c_{iG_{2}}-F_{iG_{2}x} \frac{l}{2}\sin\beta + F_{iG_{2}y} \frac{l}{2}\cos\beta+F_{x}l\sin\beta-F_{y}l\cos\beta =0$$

$R_{x}\text{(tutto)}: \phi_{ox}+F_{iG_{1}t}\sin\alpha+F_{iG_{2}}\cos\alpha+F_{iG_{2}x}+F_{iG_{2}x}+F_{x}=0$$R_{y}\text{(tutto)}: \phi_{oy}-F_{iG_{1}t}\cos\alpha+F_{iG_{1}n}\sin\alpha+F_{iG_{2}y}-F_{y}=0$

Abbiamo trovato 4 incognite e 4 equazioni.



