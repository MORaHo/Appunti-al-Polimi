---
creation_date: 2025-05-03
tags: 
parent: 
child: 
share: false
---
# Lezione 15 - Training & Hydraulic Turbines

## Exercise 6
This is an exercise to get to grips on how pumps in parallel work.

![](Pasted%20image%2020250503103345.png)

We know that each pump at $n=1500$, operates with head and efficiency curves which are:
$$\begin{cases}
H_{p} = -100Q^{2}-20Q+12.5 \\
\eta_{p} = -0.2 Q^{2}-Q+1
\end{cases}$$
The elevation change, $\Delta z$ is of $4m$.

We want to find the operation condition, the $Q$ and $H$, that our system naturally goes to. We also want to find the exchanged power of the system.

For the circuit we know:
$$H= \Delta z+\cancelto{ 0 }{ \frac{\Delta P}{\rho g} }+y$$
Where:
$$y = \frac{25V^{2}}{2}=2t\left( \frac{Q}{\pi D^{2}/h} \right)^{2} = \frac{1}{2} \frac{25.4}{2\pi D^{2}}Q^{2}$$
Therefore the curve of the circuit is:
$$H_{c} = 80.77Q^{2}+4$$
For the pumps, we know they are in parallel, therefore:
$$\begin{cases}
Q = Q_{p_{1}}+Q_{p_{2}} = 2Q_{p} \\
H=H_{1}=H_{2}
\end{cases}$$
Since we know single pump volumetric flow rate is half the total flow rate, we can write the head for each individual pump to be:
$$H_{p_{1}}=H_{p_{2}} = 100\left( \frac{Q}{2} \right)^{2}-70\left( \frac{Q}{2} \right)+12.5$$
We therefore now need to solve the system:
$$\begin{cases}
H = -25Q^{2}-10Q+12.5 \\
H_{c} = 80,77Q^{2}+4
\end{cases}$$
We get that: $Q = \frac{0,12m^{3}}{s}$ and $H = 8,66m$.

For system of two parallel pumps the characteristic curves can be drawn like:
![](Pasted%20image%2020250503105809.png)
Where the while is the single pump and blue is the parallel pump system.
The power exchanged by the system is the sum of the power of the two pumps, and therefore:
$$\dot{L}=\dot{L}_{p_{1}}+\dot{L}_{p_{2}} = \rho Q_{p_{1}} \frac{gH_{p_{1}}}{\eta_{p_{1}}}+\rho Q_{p_{2}}  \frac{gH_{p_{2}}}{\eta_{p_{2}}} = 23,3kW$$

$$\eta_{p_{1}} = -0,2(0,12)^{2}-0,12+1=0,88=\eta_{p_{2}}$$

If one breaks what happens?

The pump of the single curve will have to reach the condition which the parallel system.

![](Pasted%20image%2020250503111329.png)

The explanation is long so I will just leave it in the hand-written notes, but in general we need ot inf the new $n$ at which the pump can fulfil the operating condition required by the system, and then we can find the efficiency and exchanged power.

## Hydraulic Turbines

Hydraulic turbines are the opposite of hydraulic pumps, they don't put energy into the fluid, they take it out.
![](Pasted%20image%2020250503112000.png)

Doing the balance of mechanical energy between $D$ and $B$ gives us:
$$\left|l \right|+l_{w}+y_{p}+y_{_{DT}}=(T_{B}-T_{D}) = -g(z_{_{B}}-z_{_{D}})$$
$$\implies \left|l \right| = g(z_{_{D}}-z_{_{B}})-y_{p}-y_{_{DT}}-l_{w}$$

In an attempt to find a reasonable equation for the efficiency, let us define for now the motor head as:
$$gH_{m} = T_{0}-T_{2}$$

A BME between 0 and 2 gives us:
$$l-l_{w} = T_{2}-T_{0}\implies T_{0}-T_{2}=gH_{m}=\left|l \right|+l_{w}$$
The efficiency therefore would be:
$$\eta_{_{T}} = \frac{\left|l \right|}{gH_{m}} = \frac{\left|l\right|}{\left|l \right|+l_{w}} =\frac{g(z_{_{D}}-z_{_{B}})-y_{p}-y_{_{DT}}-l_{w}}{g(z_{D}-z_{B})-y_{p}-y_{_{DT}}}=1-\frac{l_{w}}{gH_{m}}$$

The problem with this equation  may not be immediate, but when we talk to turbine manufacturers, we see that they do not only sell us the turbine but also the associated draft tube. The problem with this equation therefore is that we are not considering the draft tube, as it also is a machine element, and therefore it's losses also constitute machine losses.

Let's now take an alternative definition for the motor head:
$$\begin{align}
gH_{m} &= T_{0}-T_{B} \\
&=T_{0}-T_{B}+T_{D}-T_{D} \\
&=(T_{D}-T_{B})-(T_{0}-T_{D}) \\
&=g(z_{D}-z_{B})-\underbrace{ (T_{0}-T_{D}) }_{ y_{p} } \\
&=g(z_{D}-z_{B})-y_{p}
\end{align}$$
This causes the machine efficiency to now be:
$$\eta = \frac{\left|l\right|}{gH_{m}}=\frac{g(z_{D}-z_{B})-y_{p}-l_{w}-y_{_{DT}}}{g(z_{D}-z_{B})-y_{p}}=1-\frac{l_{w}}{gH_{m}}-\frac{y_{DT}}{gH_{m}}$$

By playing with the definition of $H_{m}$, we managed to include $y_{_{DT}}$ in the definition of the efficiency, which is useful since the manufacturers will also sell us the draft tube.

The draft tube losses can be written as both concentrated and distributed, like:
$$y_{_{DT}} = y_{mD}+y_{mc} = \xi  \frac{v_{3}^{2}}{2}+\frac{v_{3}^{2}}{2} = (\xi_{_{DT}}+1) \frac{v_{3}^{2}}{2}$$

Using this we can re-write our equation for the efficiency as:
$$\eta_{_{T}} = 1-\frac{l_{w}}{gH_{m}}-\frac{\xi_{_{DT}}v_{3}^{2}}{2gH_{m}}-\frac{v_{3}^{2}}{2gH_{m}}$$
The drat tube will be a divergence since we want to reduce $v_{3}$ as much as possible to decrease the losses and bring the pressure of the water to the pressure at B.

An advantage of the draft tube therefore helps us increase the efficiency of machines which would otherwise loose much more without.

The main disadvantage of the presence of the draft tube though is that it can lead to cavitation in the fluid if the tangential velocity is too high (we design machines do it can be 0), and the the pressure can be lower after the machine since draft tube increases the pressure to the pressure of the basin.