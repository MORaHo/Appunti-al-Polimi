---
creation_date: 2024-02-11 14:02
tags:
  - TM
share: true
---
# Lezione 3 - Ripasso e Fonderia

## Ripasso

Produrre ha varietà negli input, nelle risorse, negli umani, e nel process di trasformazione. I processi anche sotto controllo hanno output variabili, e questo va bene se non è troppo.

C'è una cultura di progettista e tecnico/operatore/fabbro.

Tutti e due devono parlare e avere tolleranza di combinamento tale per produrre un pezzo finale di cui tutti e due possono esser felici.

Non si vuole uscire troppo dalle tolleranze, ma neanche entrare troppo.

C'è un correlazione tra rugosità e tolleranze:

<!Diagramma tollerenza vs rugosità>

Similmente ci sono i grafici di Ashby:

<!Diagramma Ashby>

### Costo vs. Tolleranze

Come ingegneri una delle prime cose che dovremmo considerare è il costo:

<!Diagramma costo vs tolleranza>

I process idi superfiniture costano MOLTO di più, si dovrebbe considerare restare nella stessa regione quando possibili.

Cosa succede se progettista e tecnologo/operatore sono in conflitto:

- Cambiare il progetto del prodotto (0 costo)
- Migliorare il processo (costi per mantenere o provare a migliorare tolleranze)
- Cambiare il processo (da b ad a)

C'è un correlazione tra tempo e rugosità, visto che il tempo costa bisogna considerare anche questo:

<!Diagramma tempo vs rugosità>

## Esempio di Processo di Produzione Intero

Per studiare come viene prodotto un oggetto bisogna considerare tutti i passi nella produzione.

Prendiamo per esempio una tazzina di metallo, come tiene il liquido caldo è per un cuscino interno di aria, questo è l'obbiettivo dei nostri processi.

<!Diagramma tazzina>

Questa tazzina è composto da 3 pezzi, il corpo centrale, il fondello e il manico.

Per produrre il corpo centrale servono multiple butitire( con pressa) per formare la forma inizia e estendrla:

<!Diagramma lastra su forma>

Si continua con processi di trattamento termico per portare alla forma desiderata, poi la contributitura forma i muri esterni.

Facciamo un assottigliamento del bordo per estetica.

Il fondello viene saldato al corpo centrale per chiudere la tazzina

Poi la lucidatura.

## Fonderia/ Colata

Per inizio la fonderia, fusione e colata sono tutti sinonimi per descrivere il processo di riempire forme con cavità con metallo liquido.

Faremo:
- Descrizione del processo
- Modellazione fisica per dimensionare
- Descrizione delle tipologie

### Fusione

Nella fusione entra metallo liquido da forni dove un panetto è stato reso liquido.

Viene raccolto in siviera(contenitore) e viene portato a macchina per esser colato in uno stampo (contentiore di forma). Quando solidificato (ma non raffreddato) esce un grezzo/getto.

I passi sono:
- Materiale liquido
- Portato a macchina (stampo)
- Solidificazione e estrazzione

### La Colata

Prima della colata serve un forma con cavità a forma del grezzo/getto finale che si vuole

<!Diagramma cavità>

Dopo esser colato nella cavità il metallo si solidifica e si aspetta che la temperature sia abbastanza bassa ( fino a completa solidificazione) dopo estrazione (rompendo o aprendo), e ci rimane il getto e il materiale della forma che abbiamo usato.

### Forma Transitoria o Permanente

Ci sono diversi tipi di forme, i pezzi in cui il metallo viene colato

#### Forme Transitoria

Le forme transitorie sono fatte per esser usate solo una volta.
Di solito le forme transitorie sono fatte in terra o sabbia perché costano poco e posso esser rotte facilmente.

Tipi di Fusione che usano forme transitorie sono:
- Colata in sabbia
- Shell molding
- Colata in polistirene espanso
- microfusione
- colata in gesso

Ciclo:
<!Diagramma ciclo transitorio>
La fabbricazione della forma è un processo intrinseco del ciclo
#### Forme Permanente

Le forme permanenti sono create per esser usate molte volte.
Queste forme si usurano poco, costano molto e di solito sono apribili.

Alcuni processi che usano le forme permanenti sono:
- Colata in stampo metallico
- Pressofusione
- Squeeze casting
- Colata centrifuga

Ciclo:
<!Diagramma ciclo permanente>
La fabbricazione della forma occorre solo una volta.

Dopo la fusione molti pezzi devono esser sottoposti ad altri processi di deformazione plastica e finitura per darne la caratteristiche volute, questo è perché la fusione è una trasformazione geometrica ma non è precisa, creando pezzi opachi e rugosi. E in molti casi le proprietà del materiale non sono esattamente quelle volute.

La fonderia è un processo molto creativo che crea una forma finita circa al 80-90%. Più o meno tutti i metalli possono fondere quindi ci sono molti opzioni per metalli da usare in casi diversi.

## Osservazioni e usi di diversi metalli

### Alluminio

L'alluminio è usato nell'automotive, elettrodomestici, elettronica, arredamento.

<!Diagramma alluminio>

### Acciaio e Ghisa

L'acciaio è usato nel settore automative, componenti di impianti, utensileria ed elettrodomestica.

<!Diagramma accaiaio>

### Confronto di Materiali


| Metallo | Peso (kg/L) | $T_{fus}$  |     |
| ------- | ----------- | ---------- | --- |
| Zn      | 7           | 420        |     |
| Mg      | 1.5         | 600        |     |
| Al      | 3.7         | 600        |     |
| Acciaio | 8           | 1500       |     |
| Ti      | 4-5         | 1700       |     |
| Ni      | 8           | 1500       |     |
| Cu      | 9           | Medio-Alto |     |
Il materiale che scegliamo può esser determinato dal peso, temperatura di fusione o altri fattori, in molti casi anche leghe sono scelte, ogni materiale ha roba per cui è molto utile e molta roba per cui non può esser usato, quindi sta a noi scegliere il materiale giusto.

### Zinco

Usato nei pneumatici, automotive, mobile di arredo(cerniere porte) e elettrodomestici

È usato a volte come sostituto per l'acciaio, come per esempio nelle cerniere, perché ha $T_{fus}$ bassa quindi costa meno dell'acciaio e non peggiora il prodotto in questo caso.

### Rame
Usato per creare pulegge, nell'idraulica, utensileria e elettrodomestica

### Magnesio
Usato nell'automotive, elettronica, e sport

### Titanio
Usato nelle scatole cambio, nell'aerospaziale, automotive, e sport

### Nickel
Usato nelle turbine (superlega di nickel), aerospaziale, automotive, componenti di impanti

Una superlega è usata perché l'inox non ha $T_{fus}$ abbastanza alte, quindi per mantenere le turbine è stata creata una superlega che non si distrugge tanto quanto l'inox.

## Osservazioni su Dimensione

La fusione può andare da piccolo a immenso.

## Pregi della Fonderia

- Forme complesse interne ed esterne sono possibili
- Molte sono near-net shape (vicino a forma finale) quindi non serve molto lavoro in più per avere un pezzo completo
- Molti sono usciti finiti, non serve altro lavoro
- Pezzi grandi e piccoli/ ampie possibilità dimensionali
- Flessibile, in materiale, complessità e forma
## Limiti della Fonderia

- La microstruttura è effetto del raffreddamento
	- Troppo lento o rapido va male (dipende)
	- Non progettabile
	- Permette di avere diverse caratteristiche
- Tensioni termiche d ritiro e residue
	- Può causare rotture se portato a limite
- Porosità
	- Quando il metallo è caldo, appena esce dalla forma può reagire con l'aria un bell'po'
-  Scarsa precisione dimensionale
- Scarsa finiture superficiale
- Sicurezza dell'operatore durante la lavorazione dei metalli ad alte temperature, si lavora quando il metallo si è solidificato non significa non quando è freddo
- Problematiche ambientali ed energetiche




