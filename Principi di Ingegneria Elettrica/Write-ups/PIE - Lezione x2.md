---
creation_date: 2023-10-26 14:55
tags:
  - PIE
share: true
---
# Lezione 12 - Boucherot e Trifase

## Boucherot

$$\begin{gather}
\sum_{k}P_{k}=0\\
\sum_{k}Q_{k}=0
\end{gather}$$

Q non è una quantità di energia, ma una misura della energia scambiata dagli utilizzatori ai generatori.

![](Pasted%20image%2020231029173823.png)

Boucherot ci dice che la somma di tutti i carichi noti con i carichi che non conosciamo sarà la potenza generata dei generatori.

### Segno di Q

$$Q=VI\sin \phi$$
![](Pasted%20image%2020231029173841.png)

Q può avere segno positivo e negativo.

### Direzione di Calcolo

Usando Boucherot si può salira dai carichi al generatore, cioè dalla potenza generata negativa a 0, o si potrebbe scendere dalla potenza generata positiva a 0.

Quando si scala in qualsiasi qualsiasi direzione, possiamo determinare quale elemento viene conversato ricendo il resto del circuito in un carico incognito è vedere come agisce la corrente. Per esempio tra C e D, e tra A e B:

![](Pasted%20image%2020231029173853.png)

### Esempio di Scendere con Boucherot

![](Pasted%20image%2020231029173903.png)

#### Sezione C

![](Pasted%20image%2020231029173915.png)

#### Sezione B

![](Pasted%20image%2020231029173927.png)

## Rifasamento


Q è una potenza che non fa lavoro ma vogliamo tenerla sotto una soglia cosi possiamo designare intorno a quella soglia. Vogliamo minimizzare Q anche perché muovere Q, perciò riducendo la energia utile che saremmo riusciti a trasferire se non ci fosse

Dato che:
$$A = \sqrt{ P^{2}+Q^{2} }=VI$$
Un modo per ridurre Q sarebbe fissare V e ridurre I, ma questo non è possibile in molti casi. Perciò disolito minimizziamo Q, fissato il $\phi$ massimo a $\arccos(0,9)$

![](Pasted%20image%2020231029173937.png)

Perciò abbiamo che:
$Q_{MAX}=P\cdot \tan(\arccos(0,9))$

### Esempio

Se avessimo un circuito con un solo carico che ha $Q>Q_{max}$ possiamo aggiungere un condensatore (che ha Q < 0) tale che $Q_{max}=Q_{g}+Q_{c}=Q_{nuovo}$ 

![](Pasted%20image%2020231029173952.png)

Aggiungendo il condensatore in parallelo, riduciamo il Q richiesto dal generatore. Si sceglie il condensatore giusto per rifasare a $Q_{max}$ preciso così il proveditore di energia non ha problemi.
Questa operazione di aggiungere un condensatore ad un circuito è detta rifasamento.

CONOSCIAMO: P e Q del carico e ci viene dato $Q_{max}$

$$Q_{max}=P\cdot \tan(\underbrace{ \arccos(0,9) }_{ \phi_{max} })$$
$$\underbrace{ |Q_{c}| = Q_{carico}-Q_{max} }_{ \substack{\text{Come quello che abbiamo}\\\text{fatto con Boucherot}} } = \frac{V_{g}^{2}}{X_{c}\left( =\frac{1}{wC} \right)} = wCV_{g}^{2}$$

Per trovare il C specifico che dobbiamo usare:

$$C = \frac{Q_{carico}-P\cdot \tan(\arccos(0,9))}{w\cdot V_{g}^{2}}$$
## Trifase

Un sistema trifase è un sistema che ha 3 fili per trasfortare la corrente.

I sistema a trifase sono i sistemi che usiamo per trasportare elettricità a distanza.

![](Pasted%20image%2020231029174009.png)

Un sistema a 4 fili è un sistema a tre fili con un filo in più detto filo ci neutro che è attaccato ad uno dei fili in trifase, questo filo da un possibilità di ritorno della elettricità in caso di problemi. Un quinto filo sarebbe il filo di terra che manda la elettricità a terra in caso ci fosse un problema grave.

I diagramma a trifase sono sfasati di 120 gradi.

![](Pasted%20image%2020231029174026.png)



