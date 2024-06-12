---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 15 - Accelerometri e Sismometri

## Analisi Matematica del Funzionamento

In base gli accelerometri (e sismometri) sono attaccati a quello che misurano. Visto che usiamo i movimenti relativi non ci serve uno zero di riferimento che possiamo annullare. 

In base questi sistemi consistono in una massa sostenuta da una molla e sistema di smorzamento attaccati ad un corpi rigido.

Misuriamo il cambio in x, che è la posizione relativa interna, con un input di y variabile.

<!Diagramma semplice>

#### Equilibrio Dinamico

Bilanciamo le forze e risolviamo per trovare ognuno dei coefficienti che definiscono il sistema.

<!Diagramma equilibrio dinamico>

L'equilibrio delle forze allora sarà:
$$m\ddot{x}+r\dot{x}+kx=-m\ddot{y}$$

Le soluzioni che ricaveremo saranno di tipo: $x = Xe^{ jwt }$

Riscrivendo l'equilibrio allora è:
$$(-mw^{2}+rjw+k)Xe^{ jwt } = mw^{2}Ye^{ jwt }$$

Ricaviamo X:
$$X = \frac{mw^{2}Y}{-mw^{2}+rjw+k}$$
La funzione di trasferimento allora sarà:
$$FT = \frac{x}{y}=\frac{Xe^{ jwt }}{Ye^{ jwt }} = \frac{mw^{2}}{-mw^{2}+rjw+k} = \frac{w^{2}}{-w^{2}+2j\xi\Omega w+\Omega^{2}}$$

In questo caso:
$$\begin{gather}
\Omega = \sqrt{ \frac{k}{m} } \\
\xi =h = \frac{r}{2\sqrt{ r\cdot m }} \\
f_{\Omega} = \frac{1}{2\pi} = \sqrt{ \frac{k}{m} }
\end{gather}$$

## Sismometro

La accelerazione misurate da un sismometro a frequenze basse sono 0 perché il sistema agisce con se fosse un corpo rigido all'inizio.

Ad alte frequenze invece, nei sismometri la funzione di trasferimento dopo il picco non va a 0, questo è perché la massa è grande quindi ha molta inerzia.
Le frequenze basse non riescono a creare molte forze per muoverlo quindi tende a rimanere nello stesso posto nello spazio, all'altro lato invece il contenitore si muove, questo causa un cambio nella posizione relativa al contenitore, ma non la posizione assoluta. 

Nei sismometri usiamo un vibrometro che è in base un misuratore della posizione, visto che è attaccato alla scatola misura la posizione relative alla scatola. Questa misura della posizione relativa implica che a basse frequenze quando il sistema agisce come un corpo rigido la posizione relativa è nulla, invece ad alte frequenza quando la massa rimane nello stesso punto assoluto nello spazio ma non nello stesso punto relativo, implica uno spostamento relativo quindi una accelerazione non nulla.

<!Diagrammi spettri della funzione di trasferimento pg.6>


Nei sismometri vogliamo trovare:
$$\frac{x}{y}$$
### Vibrometro e Diagramma di Sismometro

Un vibrometro può venire in varie forme:
- Capacitativo
- Induttivo
- Estensimetro
- Velocimetro

Un diagramma tipico del sismometro è:

<!Diagramma sismometro con vibrometro>

### Caratteristiche del Sismometro

- La massa è ferma nello spazio se la frequenza di vibrazione della scatola è molto maggiore della frequenza propria
- Frequenza proprio molto bassa (<1 $Hz$)
- Molle poco rigide con una massa molto grande, massa grande riduce la frequenza propria, aumentando il corpo di prontezza
- I sismometri sono molto ingombranti
- Lo strumento è pronto per la frequenza maggiori alla frequenza propria

### Valori Tipici

- banda passante: >0,7 $Hz$
- sensibilità alta: $100-1000 \frac{V}{m/s}$
- massa inerziale: 5-10 $kg$

## Accelerometro

Gli accelerometri funzionano in modo un'pò diverso dai sismometri. Per primo negli accelerometri non prendiamo $y$ come input ma prendiamo $\ddot{y}$. Questo significa che la nostra funzione di trasferimento sarà:

$$\frac{x}{\ddot{y}} = \frac{1}{-w^{2}+2j\xi\Omega w+\Omega^{2}}$$

Visto che cambiamo da y a $\ddot{y}$, non misuriamo più la posizione relativa ma la forza che viene applicata alla massa. Questo implica che a basse frequenze quando la forza è alta misuriamo una accelerazione (in questo caso dato che la molla è molto rigida non c'è un cambio nella posizione relative, quindi misuriamo una la forza a cui l'accelerometro viene posto quindi la acclerazione del pezzo proprio) e invece ad alte frequenze quando la forza è bassa non misuriamo una accelerazione, l'opposto del sismometro.

Questo implica anche che possiamo misurare l'accelerazione quando la frequenza è 0.

L'accelerometro ha uno spettro della funzione di trasferimento che è così:
<!Diagramma accelerometro funzione di trasferimento>

Per misurare la forza che il sistema subisce usiamo un misurato di forza invece del'vibrometro.

<!Diagramma accelerometro>

### Caratteristiche dell'Accelerometro

- Molle molto rigide
- Scatola e massa interna hanno circa la stessa accelerazione
- Frequenza propria elevata (> 1000 Hz $\to$ basso rispetto al valore tipico)
- Piccole dimensioni
- Il sistema è pronto per frequenza minori della frequenza propria

La molla e smorzamento in effetto li togliamo, ma in verità ogni caso a i sui valori propri incluso il pezzo che usiamo per misurare la forza.

### Tipi di Accelometro

Ci sono vari tipi di accelerometro:

- Vibrometro relativo
- Piezoaccelerometro
- ICP (Integrated Circuit Piezoelectric) detto anche IEPE
- Servoaccelerometro
### Piezoaccelerometro

La cella di misura della forza è composto di quarzo che è un materiale piezoelettrico. I materiali piezoelettrici sono materiali che creano un gradiente di carica quando sottoposti ad una forza, simile ai condensatori.

Questa carica non è molto alta circa $~ 2 \frac{pC}{N}$

Gli piezoelettrici possono esser posti in modi diversi per misurare una forza applicata:

<!DIagramma pg.13>

In questi casi il verde è la massa sospesa su cui stiamo faendo le misure.

Ci sono tanti tipi di geometrie possibili.

L'accelerometro sarà pronto fino ad un limite dove inizia ad esserci discrepanza.

A bassissime frequenze non creiamo abbastanza forza per creare una corrente significativa, questo significa che non possiamo misurare la forza applicata. 

<!Diagramma pg.15>

Gli accelerometri visto funzionano mono-assialmente in verticale ma a vole sente gli effetti di una vibrazione trasversale, questo è di solito trascurabile ma forse serve compensare in casi estremi.

### ICP

Gli ICP sono simili ai piezoelettrici ma diversi.

Gli ICP compensano per uno svantaggio dei piezoelettrici, quello della dipendenza dalla carica del piezoelettrico. 

Dato che il piezoelettrico genera una carica molto bassa (come visto $~2 \frac{pC}{ms^{-2}}$), gli ICP aggiungono un'amplificate per amplificare il segnale ricavato cosi non viene verso nel cavo mentre lo stiamo registrando.

<!Diagramma pg.20>


L'amplificatore ha bisogno di esser alimentato, quindi serve un sistema di carica e poi un sistema di acquisizione, questi due non devono esser integrati.

Con gli accelerometri piccoli la massa del cavo ha effetto sulla misura, quindi è utile avere un cavo che registra ed alimenta con un cavo solo per ridurre la massa. È possibile avere un sistema di acquisizione che ha un sistema di alimentazione integrato per ridurre l'ingombro sia del sistema che del cavo, e la massa del cavo.

È possibile misurare con solo 2 cavi, in avanti e uno indietro, trattando l'accelerometro come una resistenza e misurando la tensione attraverso tale resistenza. In questo modo riduciamo al massimo la massa è l'ingombro:

<!Diagramma pg.24>

#### Vantaggi di ICP

- Sensibilità costante (indipendente dal cavo, con i piezoelettrici il cavo ha resistenza elevata rispetto alla corrente ricavata quindi è un possibile problema di dissipazione)
- Bassa impedenza di uscita (non importa per noi)
- Costi limitati (relativo a piezoelettrico)





