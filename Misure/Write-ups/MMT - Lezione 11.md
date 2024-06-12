---
creation_date: 2024-02-11 14:02
tags:
  - MMT
share: true
---
# Lezione 11 - Analisi di Fourier

Somma delle onde a frequenza dispari:
<!Diagramma somma dispari>

Somma delle onde a frequenza pari:
<!Diagramma somma pari>

Fourier prende un segnale e lo scompone nelle sue onde sinusoidali componenti.

Fourier ci permette di portare un segnale dal dominio del tempo al dominio della frequenza e indietro.

## Studio di Spettri e rappresentazioni diverse
Studiando la risposta di segnali semplici è possibile estrapolare la risposta a segnali complessi, rimuovendo il bisogno di studiare la risposta ai segnali complessi e riducendo la complessità dei nostri calcoli.


Definiamo la funzione di trasferimento le funzione che ci porta dallo spettro in entrata allo spettro in uscita:
<!Spettri in pg.11>

Quando guardiamo uno spettro cambiano da spettri amplitudine-tempo (come vediamo si solito le one) a amplitudine-frequenza permettendoci di visualizzare lo scomponimento dello spettro nei suoi segnali componenti.

<!Diagramma pg.12>

Il segnale nel tempo è la somma delle 3 armoniche, guardando basato sulla frequenze diventa più evidente la composizione del segnale

<!DIagramma spettri pg.13>

Un segnale si può vedere come la somma dei vettori, dato che sono delle funzioni sinusoidali, ogni frequenza è un vettore che gira ad una verta velocità angolare. Questo è come si può separare ed è da dove è derivato Fourier, separando i vettori rotanti.
<!Diagramma 14>

Possiamo esprimere le armoniche in ampiezza e fase o parte reale e parte immaginaria.
 <!Diagramma pg.17>

In questo sistema di amplitudine e fase, vediamo il coseno come il segnale con fase 0, per convenzione dell'analisi di Fourier.

<!Diagramma coseno>

Invece per ogni altra fase usiamo il seno
<!Diagramma seno>

Se il segnale ha valore medio agisce come vettore di frequenza 0, ma non appare nel diagramma delle fasi non appare perchè non ha fase.

<!Diagramma pg.22>

La media quadratica delle radici di un segnale del tempo è uguale alla stessa operazione per le frequenze.

### Spettri di Segnali con Più armoniche

Uno segnale composto da più armoniche imporra uno spettro che rappresenta tali armoniche.

<!Diagramma pg.26 e 27>

### Segnali Random

<!Diagramma pg.28>

Un segnale random non è prevedibile quello che possiamo fare è registra il segnale è usare distribuzioni statistiche basato su tale segnale.

### Segnali Reali

I segnali reali esistono tra i segnali a più armoniche e i segnali random, hanno componenti prevedibili e componenti aggiuntivi random.

La storia temporale di un disturbo noto. Per minimizzare si misura e poi si disegna basato sul suono che si prende. Si trova lo spettro e poi si separiamo basato su quello che vediamo come utile.

Misurando un fenomeno dinamico troviamo le frequenza proprie del fenomeno, ogni fenomeno ha le sue frequenze caratteristiche. Prendendo per esempio un dito e una penna che battono su un bancone, generano 2 suoni diversi o anche le corde di una chitarra che vibrano alla loro frequenza.

## Filtraggio

Si permette di isolare certa frequenza da un segnale, si può filtrare dal dominio del tempo e in quello delle frequenze.

Il sistemi di filtraggio possono esser analogico, digitale o meccanico.

Ci sono 4 tipi di sistema di filtraggio:
- Passa alto (toglie media e bassa frequenza)
- Passa basso (opposto, toglie microvariazioni)
- Passa banda (possano frequenze in un bando)
- A reiezione di bande (passa tutto tranne una banda)

I filtri non sono completi, non riescono a togliere the frequenze che vorrebbero togliere completamente.

Per trovare la derivata del segnale è possibile separare, per ogni punto si può moltiplicare e dividere per jw.
Passiamo nel dominio delle frequenze per trovare v ea, moltiplicando w e $w^{2}$ rispettivamente.

<!Diagramma pg.34 e 35 fino a 38>



