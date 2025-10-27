---
creation_date: 2025-05-03
tags: 
parent: 
child: 
share: false
---
# Lezione 16 - Cavitation in Turbines and Pelton Turbines

## Cavitation in Turbines

For a system with a turbine we define the required and available cavitation with the following equations:
$$NPSH_{R} = \frac{P_{2}}{\rho g}+\frac{v_{2}^{2}}{2g}-\frac{P_{min}}{\rho g}$$
$$NPSH_{A} = \frac{P_{2}}{\rho g}+\frac{v_{2}^{2}}{2g}-\frac{P_{sat}+P_{dis}}{\rho g}$$
So to not have cavitation, like before, we need:
$$P_{min}>P_{sat}+P_{dis}\iff NSPH_{A}>NPSH_{R}$$
From a diagram like this:
![](Pasted%20image%2020250503171626.png)
To find the first two terms in the $NPSH$ equations, we need to do a mechanical energy balance between 2 and B, and what we get is:
$$\frac{P_{2}}{\rho}+\frac{v_{2}^{2}}{2g} = \frac{P_{atm}}{\rho}-y(z_{2}-z_{B})+y_{_{DT}}$$

Our boundary conditions is that $P_{B}=P_{atm}$, so the fluid has to exist to adhere to the boundary condition.

Reducing the losses, reduces the $NPSH_{A}$, as it reduce the $\frac{P_{2}}{\rho g}+\frac{v_{2}^{2}}{2g}$, at the same time this the $NPSH_{R}$ also decreases by the same amount, so whether cavitation occurs or not does not change.

The higher the turbine is relative to the basin, the lower $NSPH_{A}$, this can be used a criteria to determine the height at which we need to install our pump.

## Pelton Turbine

Pelton turbines are one of the three types of hydraulic turbines which we will see during this course. They are used particularly for high head and low volumetric flow use cases, but we will see the selection criteria in more detail in another lesson.

Pelton turbines are easy to make approximations for, and so are the ones we start with.
They are the most complicated to work with, but after some simplifications they becomes the easiest.

Pelton turbines spin in free air and are fed a jet of water locally. Since the jet show locally, the water needs to go very quick to be able to spin the turbine, therefore the nozzle is conical.

The pressure upstream and downstream of the bucket is the same since the flow is constantly in contact with the air, so the turbine work through a pure exchange of kinetic energy.
After the turbine buckets, the water falls into the basin due to gravity.

A diagram for the velocity arrow in the Pelton turbine system can generally be drawn as such:

![](Pasted%20image%2020250503174112.png)

It is impossible for Pelton turbines to suffer from cavitation (under our simplified model), since a jet hitting a surface increases the pressure, so on the bucket internal surface the pressure can only increase, rendering cavitation there impossible. This is the reason why the Pelton turbine is useful in cases where the motor head is high, aside from it's higher efficiency.

While the bucket do not suffer from cavitation, they do suffer from erosion, but that is less troubling. It is possible for cavitation to occur if the wedge is not made or designed properly, but this is outside of what we are looking at for this course.

As we have said this machine works purely through an exchange of kinetic energy, and this is causes our reaction degree to be null:
$$\chi = \frac{P_{1}-P_{2}}{\rho gH_{m}}=0$$
For the other two types of turbines, Kaplan and Francis, this is not true.

### Analysis of the Pelton

A simplified diagram for the system can be drawn:
![](Pasted%20image%2020250503180108.png)

In general we cannot use the balance of mechanical energy between 0 and 1, since we don't know the $\chi$, but in this special case we do so we can consider the section 1.

To simplify we say that: $z_{0}=z_{1}=z_{2}=z_{B}$
Pelton turbines don't need a draft tube so be also say that $\xi_{_{DT}}=0$ and as a consequence $v_{2}=v_{3}$.

Let's do a balance of mechanical energy between $D$ and 1:
$$\cancelto{ 0 }{ l }-l_{wN}-y_{p} = T_{1}-T_{D} = \frac{P_{1}}{\rho}+\frac{v_{1}^{2}}{2}+gz_{1}-\frac{P_{atm}}{\rho}-gz_{_{D}}$$
The nozzle is part of the machine so we have to consider it's losses.
$$\implies \frac{v_{1}^{2}}{2}=\underbrace{ g(z_{D}-z_{B})-y_{p} }_{ =T_{0}-T_{B}=gH_{m} }-l_{wN}=gH_{m}-l_{wN}$$

The ideal velocity at 1 is the velocity our fluid would travel at in section 1, if there were no losses in the nozzle, therefore:
$$v_{1}':\frac{v_{1}^{2}}{2}=gH_{m}\implies v_{1}' = \sqrt{ 2gH_{m} }$$

We define the parameter $\varphi$, to show how different our ideal speed is to the real one:
$$\varphi = \frac{v_{1}}{v_{1}'} \implies  v_{1} = \varphi v_{1}'=\varphi \sqrt{ 2gH_{m} }\to\simeq0,96-0,98$$

We can use this parameter  to account for the water which the machine processes:
$$Q = \frac{i\pi d^{2}}{4}\cdot \varphi \sqrt{ 2gH_{m} }$$
Where $i$ is the number of jets/nozzles, and $d$ is the diameter of the jets.

If $y_{P}=0$, then $v_{1}=\varphi \sqrt{ 2g\Delta z }$, due to how we have defined the motor head.

If we change $d$, $Q$ changes but $v_{1}$ doesn't, this is because we not changing $P_{atm}$ around the jet of which means that $v$ has to be the same. So even though it's strange changing $d$, means that we change $Q$ and not $v$, usually it's the opposite.

Now we need to consider how the flow moves, to calculate the power.
$$\left|l \right| = v_{2t}u_{2}-v_{1t}u_{1} = \left|v_{1t}u_{1}-v_{2t}u_{2} \right| = \left|v_{1t}-v_{2t} \right|u=$$

Since we have designed the tangential velocity the one which is parallel to $\vec{u}$, it means that in this special case the meridional and tangential velocity are the same, therefore:  $v_{1}=v_{1t}=v_{2t}$.

This means that we can change the equation to be:
$$=\left|v_{1}-v_{2t} \right|u = \left|v_{1}-(w_{2t}+u) \right|u=$$

Before we continue to develop this equation we need to quickly look at the velocity triangles at the exit of the turbine:

![](Pasted%20image%2020250503182726.png)

Performing a balance of energy in a rotating frame between 1 and 2, we get:
$$\cancel{ q }=\left( h_{2}+\frac{w_{3}^{2}}{2}-\frac{u_{2}^{2}}{2} \right)-\left( h_{1}+\frac{w_{1}^{2}}{2}-\frac{u_{1}^{2}}{2} \right)$$
This equation tells us that the rothalpy ( the name for the sum of these three terms ) is conserved in this case, therefore:
$$\frac{w_{2}^{2}}{2}-\frac{w_{1}^{2}}{2}=\underbrace{ h_{1}-h_{2} }_{ u_{1}=u_{2} }=-\Delta h = -\left( \int\limits_{1}^{2} T \, ds +\int\limits_{1}^{2} v \, dP  \right)=-l_{wR}$$
The friction causes a change in the velocity. This is only true for Pelton, not Kaplan or Francis.
We can introduce a new term for the efficiency of maintaining $w_{2}$, which is:
$$\frac{w_{2}}{w_{2}'} = \frac{w_{2}}{w_{1}}=\psi \approx 0.9$$

Can use this term to find $w_{2t}$, since:
$$w_{2t} = w_{2}\cdot \sin \beta_{2} = \psi w_{1}\sin\beta_{2}$$

We can now go back to the equation which we saw before:
$$\left|l \right| = \left|v_{1}-(w_{2t}+u) \right|\cdot u = \left|(v_{1}-u)-w_{1}\psi \sin\beta_{2} \right|\cdot u$$
Because of the generate angle we have in section 1: $w_{1}=v_{1}-u$, so we can re-write it as:
$$\begin{align}
&=\left|(v_{1}-u)-(v_{1}-u)\psi \sin\beta_{2} \right|\cdot u \\
\left|l \right| &= (v_{1}-u) \left|1-\psi \sin\beta_{2} \right|\cdot u
\end{align}$$

We can now calculate the efficiency:
$$\eta = \frac{\left|l\right|}{gH_{m}} = \frac{u(v_{1}-u)\left|1-\psi \sin\beta_{2} \right|}{v_{1}'^{2}/2g} = 2   \frac{u}{v_{1}'}\left( \frac{v_{1}}{v_{1}'} - \frac{u}{v_{1}'} \right)\left|1-\psi \sin\beta_{2} \right|$$

We define a new parameter called the peripheral speed coefficient which is:
$$k_{p} = \frac{u}{v_{1}'}$$
Which we can use to define a final form for our efficiency equation:
$$\eta = 2k_p(\varphi-k_{p})\left|1-\psi \sin\beta_{2} \right|$$

We can map this equation, and see that is gives us a unique solution maximise our efficiency:

![](Pasted%20image%2020250503184352.png)

The efficiency is null at $\varphi$ because $k_{p}=\varphi \implies v_{1}=$.

$\eta_{BEP}: k_{p}=\frac{\varphi}{2}\implies v_{1}=2u\implies u=\frac{1}{2}v_{1}\implies w_{1}=u_{1}$

As always, we design our machine to operate at the BEP.

### Power and Torque

The power is:
$$\begin{align}
\dot{L} &= \dot{m}l = \rho Q\left|l\right| \\
&= \frac{\rho i\pi d^{2}}{4} \cdot \varphi \sqrt{ 2gH_{m} }\cdot u(\varphi \sqrt{ 2gH_{m} }-u)\left|1-\psi \sin\beta_{2} \right|
\end{align}$$

$\dot{L}$ is a function of $d^{2}$, this makes it extremely easy to regular(neglecting change in $H_{m}$) since only $Q$ will change, but everything else remains the same, it's an engineers dream.

The axial torque generated by the turbine is:
$$C_{ax} = \frac{\left|\dot{L}\right|}{w} = \frac{\left|\dot{L}\right|}{w}\cdot \frac{D}{2} = \frac{\rho id^{2}}{4}\varphi \sqrt{ 2gH_{m} }(\varphi \sqrt{ 2gH_{m} }-u)\cdot \frac{D}{2}\left|1-\psi \sin\beta_{2}\right|$$

We can see that when $u=0$, $\dot{L}=0$ but $C_{ax}\neq 0$. This is useful, since it means that our system starts on it's out/ there is not need for a motor to start our turbine before flow of water starts, it starts on in own.

The graph for the axial torque can be drawn as:

![](Pasted%20image%2020250503193314.png)

$v_{1}$ doesn't change much, and $Q$ is near constant, since from $0$ to $1$, the diameter is reduced by a lot already making these more finite changes to $d$ doesn't do much. 