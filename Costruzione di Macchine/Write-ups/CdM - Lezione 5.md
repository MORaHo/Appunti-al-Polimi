---
creation_date: 2023-10-03 15:40
tags:
  - cosmac
parent: 
child: 
share: true
---
# Lezione 5 - Reazioni Vincolari

Alla fine del corso bisogna poter progettare una corpo rigido che e dimensionarlo per sostenere diversi sforzi.

## 1  Equilibrio

Un corpo in equilibrio e' un elemento che non si muove, cioe' la sommatoria delle forze e momenti e' uguale a 0.

$$dL = \sum_{i=1}^n [\vec{F_{i}} \cdot d \vec{u}] = \sum F_{i} = 0$$
$$dL = \vec{R} \cdot d \vec{u}_{o} + d \vec{\theta} \cdot \vec{M}_{o} = 0$$

Un corpo rigido non vincolato e' in equilibrio se tutte le forze applicate al corpo sommano a nulla.

Vincolo $\implies$ una reazione

Le reazioni vincolari sono forze che reagiscono all'applicazione di vincoli.

<!Diagramma>
![](Pasted%20image%2020231007205055.png)

Un corpo vincolato equivale ad un corpo non vincolato ma con le reazioni vincolari applicate.

Si considera un polo generico perche' si puo' ridurre a momenti tutte le altre reazione vincolari.

Un sistema e' in equilibrio se $\sum_{i}F_{i} =0$ e $\sum_{i}M_{i}=0$ per x,y,z e le 3 assi.

## 2  Statica

La cinematica riduce dei gradi di liberta con i GdV, invece la statica introduce forze di intensita', incognite e reazioni vincolari.

I vincoli perfetto sono vincoli dove l'intensita della forze non e' limitata.

## 3  Caratterizzazione energetica vincoli perfetti in diversi vincoli

I compenenti di spostamento per ogni vincolo so i modi in cui il vincolo puo' o non puo' muoversi. Per esempio l'incastro ha $u_{c} = 0, v_{c} = 0$ e $\theta = 0$ perche' non permette gli spostamenti in questi 3 modi.

I componenti di forza sono le forze e momento che un vincolo puo' applicare sugli elementi vincolati, queste sono le reazioni vincolari.

Il lavoro segue la equazione $L  = u_{c} \cdot F_{x} + v_{c} \cdot F_{y} + \theta \cdot M$

### 3.1  Incastro

- Componenti di spostamento
	-  $u_{c} = 0$
	- $v_{c} = 0$
	- $\theta =0$
- Reazioni vincolari (incognite perche' $\neq 0$)
	- $R_{x} \neq 0$
	- $R_{y} \neq 0$
	- $M \neq 0$
- Lavoro
	- $L = 0$ e' garantito da $u_{c} = v_{c} = \theta = 0$

### 3.2  Cerniera

- Componenti di spostamento
	-  $u_{c} = 0$
	- $v_{c} = 0$
- Reazioni vincolari (incognite perche' $\neq 0$)
	- $R_{x} \neq 0$
	- $R_{y} \neq 0$
- Lavoro
	- $L = 0$  dato che $u_{c} = v_{c} = 0$ e $\implies M_{c} = 0$ perche' la asta riesce a ruotare intorno al punto.

### 3.3  Pattino

- Componenti di spostamento
	- $v_{c} = 0$
	- $\theta =0$
- Reazioni vincolari (incognite perche' $\neq 0$)
	- $R_{y} \neq 0$
	- $M \neq 0$
- Lavoro
	- $L = 0$ dato che $v_{c} = \theta = 0$ e $\implies R_{x} = 0$ perche' permette moto

### 3.4  Carello

- Componenti di spostamento
	- $v_{c} = 0$
- Reazioni vincolari (incognite perche' $\neq 0$)
	- $R_{y} \neq 0$
- Lavoro
	- $L = 0$ dato che $v_{c} = 0$ e $\implies R_{x} = M_{c} = 0$

## 4  Esempio

<!Diagramma>
![](Pasted%20image%2020231007205126.png)
## 5  Altro Esempio

<!Diagramma>
![](Pasted%20image%2020231007205147.png)
## 6  Passi per Risolvere un Problema

![](Pasted%20image%2020231003154037.png)

## 7  Carichi Distribuiti

<!Diagramma>
![](Pasted%20image%2020231007205210.png)

 Le reazioni vincolari sono uguali ma i momenti generati sono diversi per questa ragione sono uguali solo in casi specifici.

Le sollecitazioni e distribuzione dei momenti sono diversi.