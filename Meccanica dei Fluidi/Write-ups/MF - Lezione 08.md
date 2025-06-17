---
creation_date: 2024-02-11 14:02
tags:
  - MF
share: true
---
# Lezione 8 - Equazioni di Reynolds

Nella ultima lezione abbiamo visto i diversi attributi del flusso di Poiseuille in condetta:
<!Diagramma diagrammi diversi Poiseuille in condotta>

In questo fluido abbiamo:
$$\begin{gather}
u(r) = \frac{\gamma J}{4\mu}(R^{2}-r^{2}) \to \text{Equazione diagramma della velocità} \\
U = \frac{u(r=0)}{2}=  \frac{u_{max}}{2} \\
\alpha = \frac{\int\limits_{A}^{} u^{3} \, dA}{U^{3}A}= 2 
\end{gather}$$
J, detto cadente piezometrico è la pendenza della linea piezometrica. Dato che abbiamo definito la LCT usando la velocità media che è costante, troviamo che J è anche la pendenza del LCT, è allora è il cadente energetico.

Come abbiamo fatto con $\alpha$ possiamo ragguagliare altra roba:

Abbiamo detto che $\underline{M}$ è la spinta dinamica/flusso di quantità di moto o anche:
$$ = \int\limits_{A}^{} \rho \cdot \underline{v}\cdot \underline{v}\cdot \underline{n} \, dA $$
Visto che in questo caso il flusso è semplice $\underline{v}=u$, possiamo scrivere allora:
$$M_{x} = \int\limits_{A}^{} \rho u^{2} \, dA = \rho \underbrace{ \frac{\int\limits_{A}^{} u^{2} \, dA}{U^{2}A} }_{ \beta }\cdot U^{2}A = \rho \cdot \frac{\int\limits_{A}^{} u^{2} \, dA}{U^{2}A}UQ=\rho QU\beta  = \rho U^{2}A\beta = \frac{\rho Q^{2}}{A}\beta $$

Questo è un modo più facile da scrivere e possiamo scriverlo in vari modi, permettendoci di ricavare diverse informazioni.

Abbiamo definito:
$$\beta = \frac{\int\limits_{A}^{} U^{2} \, dA}{U^{2}A} = \frac{4}{3} \to \text{in questo caso}$$

Con in metodo globale possiamo calcolare le spinta sulle superfici curve:
<!Diagramma delle spinta dinamica su superfici curve>

La equazione sarà:
$$\underline{G}+\underline{\Pi}_{p}+\underline{T}+\underline{I}+\underline{M}=0$$
Anche se $\frac{ \partial u }{ \partial x }$ esiste, le T sono piccole quindi le possiamo togliere.

$M_{3}$ per la stessa ragione che abbiamo visto è nulla.
In questo caso però $M_{1}$ e $M_{2}$ son diverse non si annullano.

$\underline{\Pi}_{0}$ sono tutte le possibili sollecitazioni sulla superficie, non specifichiamo se sorgono dalla pressione o dalla viscosità, mettiamo tutto insieme solo in questo caso.

La azione di massa sarà:
$$\underline{G}_{y} = -\gamma w$$

Invece:
$$\begin{gather}
M_{1x} = \beta\rho QU_{1} \\
M_{2x} = -\beta\rho QU_{2} \\
\Pi_{pG_{1}x} = p_{G_{1}}A_{1} \\
\Pi_{pG_{2}x} = -p_{G_{2}}A_{2}
\end{gather}$$
$$\underline{S} = -\underline{\Pi}_{0}=\underline{G}+\underline{\Pi}_{p_{1}}+\underline{\Pi}_{p_{2}}+\underline{M}_{1}+\underline{M}_{2}$$
Da qui tutto è uguale alla statica.

Questo approccio si può fare su ogni tipo di volume di controllo.

## Turbolenza

Se prendiamo un tubo di Pitot è lo mettiamo in un flusso turbolento vediamo il grafico della velocità che misura è:
<!Diagramma velocità con tempo>

Vediamo c'è una costante generale della velocità e delle oscillazioni grandi. Queste oscillazioni sono causate da un qualcos'altro che è la turbolenza.

Ci sono due modi diversi per modellare e calcolare la turbolenza:
1. Modelliamo tutto a scala temporale piccola
2. Modellismo l'andamento medio, detto moto turbolento medio. Usiamo una media temporale come l'U di prima.

L'approccio che guardiamo noi ora è l'approccio medio. Per facilitare questo approccio usiamo la decomposizione di Reynolds.

La decomposizione di Reynolds dice che possiamo dividere una valore variante nel tempo in due parti, il valore medio è la fluttuazione rispetto a quel punto medio.

<!Diagramma punto medio e fluttuazione della velocità>

La velocità media ha equazione:
$$v_{pm} = \frac{1}{T} \int\limits_{T}^{} v_{p} \, dt $$
T è un periodo temporale abbastanza grande per fare una media, è un equivalente temporale del volume W.

La fluttuazione della medio è 0:
$$v'_{pm} = 0\text{ perché } v_{pm}' = \frac{1}{T}\int\limits_{T}^{} (\underbrace{ v_{p}-v_{pm} }_{ v'(t) })  \, dt = \frac{1}{T} \int\limits_{T}^{} v_{p} \, dt - \frac{1}{T} \int\limits_{T}^{} v_{pm} \, dt  = v_{pm}-v_{pm}=0 $$

Per studiare il moto turbolento medio ci importa solo la velocità media non la fluttuazione, ci importa modellisticamente di studiare solo la media temporale.

Per passare dalle equazioni di Navier-Stokes all'istantaneo nello spazione ad equazioni nel tempo medio, dobbiamo integrare nel tempo imvece nello spazio, è equivalente del ricavo globale ma nel tempo.

Le equazioni di Navier-Stokes sono:
$$\begin{gather}
div(\underline{v})=0 \\
\rho\left( \underline{f}-\frac{d\underline{v}}{dt} \right) = grad(p)-\mu \cdot\Delta \underline{v}
\end{gather}$$

Queste equazioni valgono nell'istantaneo, ma non è garantito che questa funzioni valgano per un periodo esteso temporale. Quindi render tale che valgano per un periodo esteso temporale, le integriamo nel tempo, permettendoci di studiare l'effetto della turbolenza sul fluido e sulla media delle sua proprietà.

Scriviamo queste equazioni in 2D per ridurre i conti.

## Integrazione temporale delle equazioni di Navier-Stokes (Equazioni di Reynolds)

$$\begin{gather}
\frac{1}{T}\int\limits_{T}^{} div(\underline{v}) \, dt = 0 \to \text{media temporale}  \\
\frac{1}{T}\int\limits_{T}^{} \left( \frac{ \partial U }{ \partial x } +\frac{ \partial v }{ \partial y }  \right) \, dt = 0 \\ \\
\frac{1}{T} \int\limits_{T}^{} \underbrace{ \left[ \frac{ \partial  }{ \partial x } (u_{m}+u')-\frac{ \partial   }{ \partial y } (v_{m}+v') \right] }_{ \substack{\text{Decomposizione di Reynolds}\\\text{come abbiamo fatto prima}} } \, dt =  \\ \\
= \frac{1}{T}\int\limits_{T}^{} \frac{ \partial u_{m} }{ \partial x }  \, dt + \frac{1}{T}\int\limits_{T}^{} \frac{ \partial u' }{ \partial x }  \, dt+\frac{1}{T}\int\limits_{T}^{} \frac{ \partial v_{m} }{ \partial y }  \, dt + \frac{1}{T}\int\limits_{T}^{} \frac{ \partial v' }{ \partial y }  \, dt= \\ \\
\text{Applichiamo qui la Regola di Liebniz}:\\
= \frac{ \partial  }{ \partial x } \frac{1}{T} \int\limits_{T}^{} u_{m} \, dt + \frac{ \partial  }{ \partial x } \frac{1}{T}\underbrace{ \int\limits_{T}^{}u'  \, dt }_{ = \,0 } + \frac{ \partial  }{ \partial y } \frac{1}{T} \int\limits_{T}^{} v_{m}  \, dt +\frac{ \partial  }{ \partial y } \frac{1}{T}\underbrace{ \int\limits_{T}^{} v' \, dt }_{ =\,0 }      
\end{gather}$$
Questi valori si annullano perché come abbiamo visto i valori medi di fluttuazioni.

$$= \frac{ \partial u_{m} }{ \partial x } +\frac{ \partial v_{m} }{ \partial y } $$

Avendo integrato la divergenza della velocità nel tempo abbiamo trovato che è:
$$div(\underline{v})=0 \to div(\underline{v}_{m})=0$$

Integrando la seconda equazione, come nella integrazione globale della dinamica la accelerazione è il termine che complica la roba.

Iniziamo facendo la decomposizione di Reynolds:
$$\rho\left( \underline{f}_{m}+\underline{f}'-\frac{d}{dt} (\underline{v}_{m}+\underline{v}') \right) = grad(p_{m}+p') - \mu \cdot\Delta(\underline{v}_{m}+\underline{v}')$$

Quando $\underline{f} = g$, $\underline{f}' = 0$ ma questo è il caso generale quindi non lo togliamo immediatamente.

Integrando le diverse parti di questa equazione nel tempo abbiamo:
$$\begin{gather}
\frac{1}{T}\int\limits_{T}^{} (\underline{f}_{m }+\underline{f}') \, dt = \underbrace{ \frac{1}{T}\int\limits_{T}^{} \underline{f}_{m} \, dt }_{ \underline{f}_{m} } + \frac{1}{T} \cancelto{ 0 }{ \int\limits_{T}^{} \underline{f}' \, dt } = \underline{f}_{m}   \\
\frac{1}{T}\int\limits_{T}^{} \nabla(p_{m}+p') \, dt =\nabla \frac{1}{T} \int\limits_{T}^{} (p_{m}+p') \, dt  = grad(p_{m}) \\
\frac{1}{T}\int\limits_{T}^{} \mu \Delta(\underline{v}_{m}+\underline{v}') \, dt = \Delta \cdot \frac{1}{T} \int\limits_{T}^{} \mu (\underline{v}_{m}-\underline{v}')\, dt = \mu \cdot \Delta \underline{v}_{m}  
\end{gather}$$
Abbiamo integrato tutte le parti della seconda equazione eccetto l'accelerazione, per evitare la ripetizione di equazioni e ridurre il già immenso numero di equazioni, consideriamo la accelerazione in una sola direzione e da le equazioni nelle altre direzioni saranno equivalenti.

La accelerazione allora sarà:
$$\frac{ du }{ dt }  = \frac{ \partial u }{ \partial t } + u \frac{ \partial u }{ \partial x } +v\frac{ \partial u }{ \partial y } $$
Decomposizione di Reynolds:
$$ = \frac{ \partial  }{ \partial t } (u_{m}+u')+(u_{m}+u')\frac{ \partial  }{ \partial x } (u_{m}+u') + (v_{m}+v')\frac{ \partial  }{ \partial y } (u_{m}+u')=$$
Da qui facciamo il gioco che abbiamo fatto con le derivate di forma $\frac{ \partial (AB) }{ \partial x }$:

$$= \frac{ \partial  }{ \partial t }(u_{m}+u') + \frac{ \partial  }{ \partial x }(u_{m}+u')^{2}-(u_{m}+u')\cancel{ \frac{ \partial  }{ \partial x }(u_{m}+u') }+\frac{ \partial  }{ \partial y } [(u_{m}+u')(v_{m}+v')] - \left[ (u_{m}+u')\cancel{ \frac{ \partial  }{ \partial y }(v_{m}+v') }  \right]$$
La due componenti si annullano per la equazione della continuità.
$$ = \frac{ \partial  }{ \partial t } (u_{m}+u') + \frac{ \partial  }{ \partial x } (u_{m}^{2}+2u_{m}u'+u'^{2})+\frac{ \partial  }{ \partial y } (u_{m}v_{m}+u'v'+u_{m}v'+u'v_{m})$$
Abbiamo solo sviluppato $\frac{ du }{ dt }$, ora dobbiamo integrare nel tempo:
$$=\frac{1}{T}\int\limits_{T}^{} [\frac{ \partial  }{ \partial t } (u_{m}+u') + \frac{ \partial  }{ \partial x } (u_{m}^{2}+2u_{m}u'+u'^{2})+\frac{ \partial  }{ \partial y } (u_{m}v_{m}+u'v'+u_{m}v'+u'v_{m})] \, dt $$

Applichiamo Leibniz alle diverse parti di questa equazione.
Applichiamo Leibniz alla prima parte anche se sono tutti e due variabili del tempo, questo è perché anche se T e t sono tutte e due misure di tempo, T è il periodo intero in cui facciamo il nostro calcolo mentre e il tempo dentro a questo periodo di tempo, sono fondamentalmente due cose diverse.

$$\frac{ \partial  }{ \partial t } \frac{1}{T}\int\limits_{T}^{} (u_{m}+u') \, dt = \frac{ \partial u_{m} }{ \partial t }  $$
$$\begin{gather}
\frac{ \partial  }{ \partial x } \frac{1}{T}\int\limits_{T}^{} u_{m}^{2} \, dt = \frac{ \partial  }{ \partial x } u_{m}^{2}  \\
\frac{ \partial  }{ \partial x } \frac{1}{T}\int\limits_{T}^{} 2u_{m}u' \, dt=0  \\
\frac{ \partial  }{ \partial x } \frac{1}{T} \int\limits_{T}^{} u'^{2} \, dt  = \frac{ \partial  }{ \partial x } u_{m}'^{2}
\end{gather}$$
Anche se la media di $u'$ è nulla, il quadro significa che ogni parte negativa diventa positiva, quindi non può esser nullo.

$$\begin{gather}
\frac{ \partial  }{ \partial y } \frac{1}{T} \int\limits_{T}^{} u_{m}v_{m} \, dt = \frac{ \partial   }{ \partial y  } (u_{m}\cdot v_{m}) \\
\frac{ \partial   }{ \partial  y  } \frac{1}{T} \int\limits_{T}^{} u'v_{m} \, dt = \frac{ \partial   }{ \partial y } \frac{1}{T}\int\limits_{T}^{} v' u_{m} \, dt = 0 \\
\frac{ \partial  }{ \partial y } \frac{1}{T} \int\limits_{T}^{} u'v' \, dt = \frac{ \partial  }{ \partial y } (u'\cdot v')_{m}      
\end{gather}$$

La integrazione allora ci ha dato:
$$=\frac{ \partial u_{m} }{ \partial t } +\frac{ \partial  }{ \partial x } u_{m}^{2} + \frac{ \partial  }{ \partial x } u'^{2}_{m} + \frac{ \partial  }{ \partial y } (u_{m}\cdot v_{m})+\frac{ \partial  }{ \partial y } (u'v')_{m}$$
Media delle accelerazioni nel tempo.
$$=\frac{ \partial u_{m} }{ \partial t } +u_{m}\frac{ \partial u_{m} }{ \partial x } +u_{m}\cancel{ \frac{ \partial u_{m} }{ \partial x } } +\frac{ \partial  }{ \partial x } u'^{2}_{m}+u_{m}\cancel{ \frac{ \partial v_{m} }{ \partial y } } +v_{m}\frac{ \partial u_{m} }{ \partial y }C+\frac{ \partial  }{ \partial y } (u'v')_{m} $$
Abbiamo espanso per rimuovere termini per la equazione di continuità.

La equazione di Navier-Stokes nella direzione x è andata da:
$$\rho\left( f_{x}-\frac{ \partial u_{m} }{ \partial t } -u\frac{ \partial u }{ \partial x } -v\frac{ \partial u }{ \partial y }  \right) = \frac{ \partial p }{ \partial x } -\mu \cdot\Delta u$$
A:
$$\rho\left( f_{xm}-\frac{ \partial u_{m} }{ \partial t } -u_{m}\frac{ \partial u_{m} }{ \partial x } -\frac{ \partial   }{ \partial x } u'_{m} - v_{m}\frac{ \partial u_{m} }{ \partial x } - \frac{ \partial  }{ \partial y } (u'v')_{m}U  \right) = \frac{ \partial p_{m} }{ \partial x }-\mu\Delta v_{m} $$

I termini che erano lineari nella equazione originale sono lineari anche qui e i termini misti hanno sono quelli che hanno generato i termini aggiuntivi.

Cambiando il T e la caratteristica della turbolenza è possibile che vari un po' la media.

Dalla equazioni di Navier-Stokes:
$$\begin{gather}
div(\underline{v})=0 \\
\rho\left( \underline{f}-\frac{d\underline{v}}{dt} \right) = grad(p)-\mu\Delta \underline{v}
\end{gather}$$

Integrando nel tempo abbiamo ricavato le equazioni di Reynolds:
$$\begin{gather}
div(\underline{v}_{m})=0 \\
\rho\left( \underline{f}_{m}-\frac{d\underline{v}_{m}}{dt} \right)  = \underbrace{ grad(p_{m})-\mu\Delta \underline{v}_{m}+div(\underline{\underline{\phi}}_{R}) }_{ div(\underline{\underline{\phi}}) }
\end{gather}$$
$\underline{\underline{\phi}}_{R}$ è il tensore degli sforzi di Reynolds, che nel caso bidimensionale ha valore:
$$\underline{\underline{\phi}}_{R} = \rho \begin{bmatrix} u'_{m} & (u'v')_{m} \\(u'v')_{m} &  v'^{2}_{m} \end{bmatrix}$$

I termini che sono aggiunti per la media dei componenti non lineari della accelerazione.

#### Perché deve esistere $\underline{\underline{\phi}}_{R}$?

La ragione per cui la turbolenza media ha questo termine è perché in realtà la turbolenza è molto caotica, crea vortici e ha correnti non lineari, prendendo forma come:
<!Diagramma flusso turbolento>

La turbolenza media però non è come la turbolenza. La turbolenza media è lineare, l'abbiamo filtrata nel tempo e lasciato l'andamento medio che è lineare:
<!Diagramma flusso turbolento medio lineare>

Il fatto che siamo andato sa un flusso caotico non lineare ad un flusso lineare significa che dobbiamo tenere a conto degli effetti della non-linearità e per ciò i suoi effetti dissipativi. Questo è quello che compie $\underline{\underline{\phi}}_{R}$, tenendo conto degli effetti dissipativi delle fluttuazioni. 

Il problema che abbiamo ora è che abbiamo aggiunto più incognite che dobbiamo definire, quindi dobbiamo definire un legame costitutivo per legare gli sforzi di Reynolds al resto del flusso.
Questo legame viene dato dal modello di turbolenza che prendiamo, questi però non li vedremo.


















