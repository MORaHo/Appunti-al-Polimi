---
creation_date: 2023-12-14 16:11
tags:
  - PIE
share: true
---
# Lezione 23 - Macchine Elettriche

## Trasformatori in Trifase

<!Diagramma in trifase>

I trasformatori che compriamo saranno già modellati per trifase, il modello è lo stesso.
Dal punto di visto teorico ci servono 3 trasformatori in monofase.

<!Diagramma di trasformatori in trifase>

In trifase questo è l'arrangiamento in stella, abbiamo:
$$\begin{gather}
\frac{N_{1}}{N_{2}}=\frac{E_{1}'}{E_{2}''} \\
K = \frac{V_{12}'}{V_{12}''} \to \text{perchè ci sono delle discrepazioni}
\end{gather}$$
Se fosse a triangolo dovremmo usare la tensione concatenata.

Indice Orario $\to$ lo sfasamento tra le due tensioni. Nel monofase non esiste perché passiamo solo magnificare e devono essere nelle stesse fasi.

<!Diagramma indice orario>

Nei trasformatori industriali mettiamo le linee di più alta tensione esterne per raffreddare più facilmente.

<!Diagramma trasformatori industriali>

## Macchine Elettriche

Per generare corrente elettrica, serve un campo magnetico e del movimento nel campo.

<!Diagramma movimento nel campo magnetico>

Possiamo generare tensione, movendo qualcosa nel campo magnetico

$$\begin{gather}
e = \frac{d\Psi}{dt}=\frac{d}{dt}\Bigg(  \int_{S} \vec{B}\cdot  \underbrace{ \hat{n} \, dS }_{ \substack{\text{per generare}\\\text{campo elettrico}\\\text{e modificare}\\\text{questo, modifichiamo}} } \cdot N \Bigg) \\
\boxed{ e= } \frac{d}{dt} (B\cdot l\cdot x)= Bl \frac{dx}{dt} \boxed{ = Blu }
\end{gather}$$

<!Diagramma regola della mano destra>

Il movimento nel campo magnetico genera forse contrastanti che arrestano il sistema:

<!Diagramma forze per movimento>

$$\begin{gather}
e=Blu \\
ei = P=Fu \\
Bl\cancel{ u }\cdot i = F\cdot \cancel{ u } \\
F = Bli
\end{gather}$$
Per generare energia elettrica significa applicare energia meccanica continuamente per nullificare la forza contrastante.

## Uso nei Generatori

Se mettiamo due calamite e una spira che giriamo intorno ad un asse:

<!Diagramma spire con rotazione>

$$\begin{gather}
\varphi = \int_{A}^{} \vec{B} \cdot  \hat{n}\, dA  \\
e = \frac{d\Psi}{dt}=\frac{d}{dt}(BA\cos\theta) \\
= - wBA\sin wt \\
e = -wBA\sin wt
\end{gather}$$

Girare un spira tra calamite è molto facile, spiega perché la tensione alternata è sinusoidale. Per aumentare la tensione bisogna aumentare la velocità.

Le reazioni chimiche sono usate per generare la corrente diretta facilmente, invece i movimenti elettromagnetici sono usate per generare la corrente alternata facilmente.

Aggiungendo un collettore e contatti scorriento/spazzole fatte in grafite ci permette di generare corrente continuamente nel tempo. Il fattore che questi brush sono in grafite rende i motori fragili, deboli alle vibrazioni e deve esser rimpiazzato ogni tanti

<!Diagramma con brushes>

Il grafico delle tensioni $e$ e $v$ è:

<!Diagramma e e v>

Perché le spazzole non girano, il segno di $v$ non cambia.

Usando più spazzole abbiamo più cambi di v per mantere una tensione media più elevata.
