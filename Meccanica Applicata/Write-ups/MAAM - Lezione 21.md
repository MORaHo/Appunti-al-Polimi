---
creation_date: 2024-02-11 14:02
tags:
  - MAAM
share: true
---
# Lezione 21 - Conclusione Vibrazioni

## Forzamento Inerziale

Prendiamo un sistema con una massa rotante (agente come forzante) posto su una massa che è sospeso da molla e smorzatore.
<!Diagramma sistema>


Data la massima x e trasmissibilità possiamo progettare M.

Prendiamo per primo un diagramma delle forze su M:
<!Diagramma delle forze>

La equazione del sistema allora sarà:
$$(M+m)\ddot{x}+r\dot{x} + kx = \underbrace{ m\mathcal{E}\Omega^{2} }_{ F_{o} }\cos(\Omega t)$$

Abbiamo solo coseno perché stiamo guardando solo la asse verticale e perché abbiamo una manicotto per bloccare le vibrazioni in orizzontale.

Non contiamo la forza peso perché diciamo che partiamo dalla posizione di equilibrio statico

La vibrazione massima sarà:
$$X_{o} = \frac{F_{o}}{k}H(a) = \frac{m\mathcal{E}\Omega^{2}}{k}H(a)$$

Vogliamo rendere adimensionale per avere una mappa del funzionamento adimensionale cosi possiamo cambiare i parametri e sapere immediatametne il comportamento del sistema.

$$\begin{gather}
X_{o} = \frac{M+m}{k} \cdot \frac{m}{M+m} \mathcal{E}\Omega^{2}H(a) = \frac{\mathcal{E}\Omega^{2}H(a)}{\omega_{o}^{2}} \\
x_{o} = \frac{m}{M+m}\mathcal{E} \frac{\Omega^{2}}{w_{o}^{2}}H(a)\\
\beta = \frac{X_{o}}{\mathcal{E}} \frac{M+m}{m} = \frac{a^{2}}{\sqrt{ (1-a^{2})^{2}+(2ha)^{2} }}
\end{gather}$$

Il diagramma di beta rispetto ad a sarà:
<!Diagramma beta rispetto ad a>

Possiamo cambiare M per cambiare $X_{o}$.

## Combinazione di Elementi Elastici

### Parallelo

<!Diagrammi in parallelo>

$$\begin{gather}
F_{et} = \sum F_{es} = \sum k_{s}\Delta l \\
F_{et}  = \Delta l\cdot \sum k_{s} \\
k\Delta l = \Delta l\sum k_{s} \\
k = \sum k_{s}
\end{gather}$$

### Serie

<!Diagramma molle in serie>

$$k = \frac{k_{1}\cdot k_{2}}{k_{1}+k_{2}} \to \frac{1}{k} = \sum \frac{1}{k_{s}}$$

Prima inizia a schiacciarsi sotto e poi inizia a schiacciarsi sopra

Quindi la rigidezza sarà:
<!Diagramma rigidezza>

La linea rossa è il sistema se trattassimo il parallelo come una sola molla, prima di un certo $\Delta p$ è più rigido del sistema vero e dopo è meno rigido del sistema vero.


## Uso dei grafici $\beta-a$

<!Diagrammi beta e trasmissibilità>

Data un trasmissibilità possiamo trovare il valore di a giusto, poi da li possiamo trovare il valore a per trovare il valore beta giusto.

Da li:
$$\overline{\beta}_{}  = \frac{X_{max}}{\mathcal{E}}\cdot \frac{M+m}{m}$$
$$M_{f}+M_{mach} = \frac{m\mathcal{E}\overline{\beta}_{}}{X_{max}} -m$$
Possiamo trovare allora il peso delle fondamenta.

## Sistema biella con contrappeso rotante

### Espressione semplificata del moto del piede di biella

<!Diagramma biella>

La coordinate della testa sono:
$$\left\{\begin{align}
c &= a\cos\alpha + b\cos\beta \\
0 &= a\sin\alpha + b\sin\beta
\end{align}\right\}$$
$$\sin\beta = -\frac{a}{b} \sin\alpha \to c= a\cos\alpha+b\sqrt{ 1-\left( -\frac{a}{b}\sin\alpha \right)^{2} }$$

$$\left( \frac{a}{b}\sin\alpha \right)^{2} \approx 10^{-1}\ll 1$$

Prendiamo $\mathcal{E}$ come:

$$\mathcal{E} = \left( \frac{a}{b} \right)^{2}\sin ^{2}\alpha \to\mathcal{E}\ll 1$$

Facendo allora:
$$\sqrt{ 1-\mathcal{E} } = (1-\mathcal{E})^{1/2}$$
La serie di Taylor è:
$$f(\mathcal{E}) \overbrace{=}^{\mathcal{E}=0} f(0) + f'(\mathcal{E})\cdot \mathcal{E} + \dots$$
Abbiamo detto che $\mathcal{E}\ll 1$ quindi per semplificare questo passo abbiamo detto che $\mathcal{E}=0$

Allora la equazione sarà:
$$=1+\frac{1}{2}(1-\mathcal{E})^{-1/2}\cdot(-1)\Big|_{\mathcal{E}=0}\cdot\mathcal{E} + \dots \cong 1-\frac{\mathcal{E}}{2}$$

La posizione c del carrello rispetto all'angolo $\alpha$ sarà:
$$c(\alpha) = a\cos \alpha+b\left( \underbrace{ 1-\frac{1}{2}\left( \frac{a}{b} \right)^{2}\sin ^{2}\alpha }_{ \sqrt{ 1-\mathcal{E} } = 1-\frac{\mathcal{E}}{2} } \right) \overset{\lambda=\frac{a}{b}}{=} a\cos\alpha+b-\frac{1}{2}a\lambda^{2} \sin ^{2}\alpha$$

La velocità dello stesso punto sarà:
$$\dot{c}(\alpha) = -\dot{\alpha}a\sin(\alpha)-\frac{1}{2}a\lambda 2\sin(\alpha) \cos(\alpha)\:\dot{\alpha} =-\dot{\alpha}a\sin\alpha-\frac{\dot{\alpha}a\lambda}{2}\sin2\alpha$$

Considerando $\dot{\alpha}=\text{cost}$ cioè $\ddot{\alpha}=0$, accelerazione è:
$$\ddot{c}(\alpha) = -\dot{\alpha}^{2}a\cos\alpha -\frac{\dot{\alpha}a\lambda}{2}\cos2\alpha \cdot2\dot{\alpha}=-\dot{\alpha}^{2}a\cos\alpha-\dot{\alpha}^{2}a\lambda \cos 2\alpha$$

I grafico della velocità è:

<!Diagramma velocità>

Invece quello della accelerazione è:
<!Diagramma accelerazione>

Abbiamo trovato la somma dei componenti che abbiamo calcolato li componessero.

### Analisi del sistema di corpi

Diciamo che la biella è composta da due masse in A e B:

<!Diagramma asse in A e B>

La biella avrà baricentro tra i due:

<!Diagramma biella vera con baricentro>

Diciamo che:
$$m_{A}+m_{B} = m_{\text{biella}}$$
La somma dei momenti intorno al baricentro sarà:
$$-m_{A}l_{A}+m_{B}l_{B}=0$$

Questi due sono criteri di equivalenza tra il sistema semplificato ed il sistema vero, un criterio che non possiamo prendere la equivalenza delle inerzie rotazionali perché:
$$m_{A}l_{A}^{2}+m_{B}l_{B}^{2} \neq J_{_{G}}$$

### Analisi del sistema con massa rotante e massa su testa di biella

I diagrammi delle forze saranno:

<!Diagrammi delle forze nel sistema>

Le forze lungo l'asse verticale sono:
$$\underline{{\overline{m} \dot{\alpha}^{2}a\cos\alpha}}+\overline{m}_{}\dot{\alpha}^{2}a\lambda \cos 2\alpha+\underline{m_{A}a \dot{\alpha}^{2}\cos\alpha}+\underline{m_{1} \overline{OG_{1}}_{}\dot{\alpha} \cos\alpha}- \underline{m_{c}\mathcal{E}_{c}\dot{\alpha}^{2}\cos\alpha} +\phi_{VS}+\phi_{VD} =0$$
Le forze lungo l'asse orizzontale sono:
$$m_{A}a\dot{\alpha}^{2}\sin\alpha+m_{1}\overline{OG}_{1}\dot{\alpha}^{2}\sin\alpha-m_{c}\mathcal{E}_{c}\dot{\alpha}^{2}\sin\alpha+\phi_{H}=0 $$

Possiamo riscrivere queste due come:
$$\begin{gather}
\dot{\alpha}^{2}(\overline{m} a+m_{A}a+m_{1}\overline{OG}_{1} -m_{c}\mathcal{E}_{c} )\cos\alpha + \overline{m}_{} \dot{\alpha}^{2} a\lambda \cos\alpha+ \phi_{VS}+\phi_{VD}=0 \\
\dot{\alpha}^{2}(m_{A}a+m_{1}\overline{OG}_{1} -m_{c}\mathcal{E}_{c})\sin\alpha +\phi_{H}=0
\end{gather}$$

Quello che è importante notare qui sono le forze a cui all'inizio abbiamo messo una linea sotto. Questo forze le abbiamo raggruppate e i fanno vedere che, se $m_{c}\mathcal{E}_{c}$ equa gli altri tre, il sistema è più equilibrato e trasmettiamo meno forza in quella direzione, questo però causa un aumento nella forza trasmessa nell'altra direzione. Possiamo quindi diminuire i disturbi lungo y aumentando per ciò i disturbi in x. La nostra scelta dipende da se vogliamo forze trasmesse in verticale od orizzontale.



