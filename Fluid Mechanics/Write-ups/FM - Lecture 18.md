---
creation_date: 2025-05-15
tags: 
parent: 
child: 
share: false
---
# Lezione 18 - Volumetric Pumps

## Small comments on the last lecture

In the last lecture we found a plot within which we have mapped the application range of the different machines in terms of $H$ and $Q$, rather than their dimensionless parameters.

Machines that operate on the top right of the graph on their lonesome as unfeasible, and we are only able to operate in that range if we operate in series or parallel.

For cases in which our system needs $H>500m$, the only solution is the Pelton.
In between we have the Francis, and at low $H$ and high $Q$, we have the Kaplan.

The area areas of transition between the regions, where one machines is the not the sole best option.

## Volumetric Pumps (Operating Pumps)
(This is section is just for the theory part, there will be no exercises with volumetric machines.)

Volumetric pumps take a portion of fluid and displace it by pulling. Since this is a pump, where the fluid is being delivered too usually has a higher pressure, but this is not always true.

Volumetric machines are low flow rate machines, so static interactions are much more significant than dynamic ones in the exchange of work. Given the low velocity and low displacement rate, they are very efficient in cases where the volumetric flow rate needs to be low.

An advantage of the dynamics not being very important is that there is not cavitation and no stall. This means that we can exchange a lot of work without putting the machine in peril, so the machine is good for high head required systems.

For our categorization, the optimial configuration is for very low $w_{s}$, since we have low $Q$ and high $H$.

There are two main architectures for volumetric pumps:
- Reciprocating pumps (very low $w_{s}$)
- Rotary pumps (low $w_{s}$)

### Reciprocating Pump: Working Principle

![](Pasted%20image%2020250515102035.png)

We open one valve to let in te fluid as the piston back, when the piston is at the bottom dead centre, we close the valve and open the other, and the piston pushes the fluid up the second duct (the pressure having increase since the delivery duct usually has a higher pressure and geodetic level).

When the second valve is opened, the pressure increases instantaneously ( at constant $V$ ) as it comes into contact with the fluid in the delivery duct which is already at a higher pressure.

The $P-V$ diagram for this type of machine is:

![](Pasted%20image%2020250515102358.png)

The yellow area is the work.

In the practice this is not the case, as there are some losses and there is some transition cases between processes.

The instantaneous change in pressure in reality sees a change in $\rho$, and so there is some oscillation in the pressure.

The flow rate is highly periodic due to the operational cycle:
$$Q = \frac{\pi D^{2}}{4}r\left( \sin \varphi + \frac{r}{2l}\sin2\varphi \right)w$$
The $Q$ is directly proportional to the $w$ we are spinning the system at, and we can define an average flow rate, $Q_{m}$.

$$Q = \eta_{v}\cdot Q_{id} = \eta _{v}Vze \frac{n}{60}$$
Where, $\eta_{v}$ is the volumetric efficiency, while $e$ is the numbers of effects (volumes) which are active in the our system.

If we have multiple piston all phased out relative to each other, we can have a steadier average flow rate.

### Power Exchanged by a Reciprocating Machine

We usually say $\dot{L} = l\cdot \dot{m}$, but to this we need to know how $l$ and $Q$ are related to each other, in pumps we did this through constructive angles as in the Euler equation, bu in this case we don't know.

The head of the machine does not depend (theoretically) on the flow. So ideally to increase $Q$ we can increase $w$, but $Q$ is (ideally) decoupled from $w$,so too is it from $Q$.

![](Pasted%20image%2020250515104434.png)

The work is the head that we add to the fluid, so the $H$ is also ideally independent of $Q$.

The ideal work will be:
$$W_{id} = (P_{m}-P_{a})Q_{id} = (P_{M}-P_{A})V\underbrace{ ze \frac{n}{60} }_{ \frac{\# \text{strokes}}{s} }$$

$$\implies W = \frac{P_{M}-P_{A}}{\eta_{\gamma}\eta_{0}}Q = \frac{\eta_{v}}{\eta_{\gamma}\eta_{0}}(P_{M}-P_{A})Vze \frac{n}{60}$$

The overall efficiency for reciprocating volumetric pumps is around 60%.

### Rotary Pumps

Rotary pumps use, gears, screws, lobes and others, to function.

The key advantage of rotary pumps is that they don't have valves that can get stuck.
They are useful for higher flow rate use cases relative to reciprocating pumps, and their flow rate is steadier.

They can be used for more complicated fluids, such as blood and other highly viscous fluid.

## Wind Turbines

Wind turbines are very specific machines, where there is no stator or duct to utilize. They use the same theory of ship propellers, so the theory is already well defined.

The rotor is composed a hub, with long and tapered blades, places on a high tower.
Since there is no duct, there are things that we can no longer say about the fluid, and we are not able to evaluate $Q$ as easily.
We maintain our strong link between $l$ of the machine and the $Q$ that passes through the work.

In turbines increasing $Q$, we decrease $l$, so we need to find the condition of optimal efficiency.
We need to search for the maximum $\dot{L}$, rather $l$ and $Q$.

Although the rotor theory still holds, it is easier to go through slightly different to calculate $\dot{L}$.

### Characteristics of Winds
Wind is created by non-uniform heating, which creates areas of high and low pressure. Wind, like weather, is not something we can predict perfectly, we need to use statistical data before we install a wind turbine.

Wind is said to be favourable is it is strong enough for a relatively long period. There are places that typically have favourable winds, especially offshore since there is less disturbance, but we can only place them where the depth is $<60\;m$, since at that point we will need to use floating platforms.

The atmospheric boundary layer has an effect on the velocity profile with it being a function of the distance to the ground. The function is called the 1/7th power law:
$$\frac{v}{v_{ref}} = \left( \frac{y}{y_{ref}} \right)^{1/7}$$

This is why we prefer to increase the height of the rotor. Increasing the height, we increase the velocity and so we are able to get a more uniform velocity gradient over the turbine, and we are able to extract more power.

The typical velocity range we can exploit is $3-30\, \frac{m}{s}$.

We increase the area since it allows us to increase the $Q$ which increases the $\dot{L}$.

Onshore wind is the most economically sensible technology, and generally pays itself back in 1 year.

The mainstream wind turbines are called the horizontal axis wind turbines (HAWT), the two main issues with these turbines are:
- lower angular speed $\to$ gearbox is required
- Generator at top of tower $\to$ cost, maintenance and load

Throughout history, other designs have been proposed and seen use, but they are all worse for power generation and have since fallen out of use.

The velocity at the tip of the blade will be the same as the wind's. So large wind turbines spin slower and we said that we want large blades to be able to increase $Q$.

### Betz Model

![](Pasted%20image%2020250515201330.png)

Wind that passes through the rotor looses only it's kinetic energy. No pressur or geodetic height is lost.

We expect:
- $v_{3}<v_{0}$
- $v_{3}<v_{D}<v_{0}$

Per the principle of conservation of mass:
$$\dot{m}_{3} = \rho v_{3}A_{3} = \dot{m}_{D} = \rho v_{D}A_{D}= \dot{m}_{0} = \rho v_{0}A_{0}$$
Where $A_{D}$ is the area of the disk covered by the wind turbine blades, and $A_{0}$ is a purely fictional fraction of the total flow that is ready to enter the disk.

Since the flow rate needs to be conserved, we find that:
$$A_{0}<A_{D}<A_{3}$$
Measuring $A_{3}$ is very easy, while finding $A_{0}$ is much more difficult since there is nothing inherently different about the flow that will enter the disk and that which will not enter it, so it's hard to find a physical reference to measure.

We make a few assumptions to permit the theory to work:
- Incompressibile Fluid
- Steady Flow
- Inviscid Flow $\to$ No viscosity
- $v_{t} \neq 0$ (of course) but it's still very low so we can generally neglect it, this means though that we need a new approach since cannot rely on the Euler equation.

To find the $l$, we can d a $BME$ between 1 and 2, two sections on either side of the rotor:
$$l-\cancelto{ 0 }{ l_{w} } = T_{2}-T_{1} = \frac{P_{2}}{\rho}+\cancel{ \frac{v_{2}^{2}}{2} }+\cancel{ gz_{2} }-\frac{P_{1}}{\rho}-\cancel{ \frac{v_{1}^{2}}{2 }}-\cancel{ gz_{1} }$$
The velocity is the same since we take these two sections to be infinitely close.
$$\implies l = \frac{P_{2}-P_{1}}{\rho}$$

Through the first two assumptions and two BME between 0 and 1, and 2 and 3 respectively we get:
$$\begin{cases}
0\to1: \cancel{ l } -\cancel{ l_{w} } = T_{1}-T_{0} \implies \frac{P_{1}}{\rho}+\frac{v_{1}^{2}}{2}+\cancel{ gz_{1} } = \frac{P_{0}}{\rho} + \frac{v_{0}^{2}}{2}+\cancel{ gz_{0} } \\
2\to3: \cancel{ l } - \cancel{ l_{w} } = T_{3}-T_{2}\implies \frac{P_{3}}{\rho}+\frac{v_{3}^{2}}{2}+\cancel{ gz_{3} } = \frac{P_{2}}{\rho}+\frac{v_{2}^{2}}{2} + \cancel{ gz_{2} }
\end{cases}$$
Summing these two sections we get:
$$\frac{P_{1}}{\rho}+\cancel{ \frac{v_{1}^{2}}{2} }+\cancel{ \frac{P_{3}}{\rho} }+\frac{v_{3}^{2}}{2}=\cancel{ \frac{P_{0}}{\rho} }+\frac{v_{0}^{2}}{2}+\frac{P_{2}}{\rho}+\cancel{ \frac{v_{2}^{2}}{2} }$$
Since $P_{3}=P_{0}=P_{atm}$ and $v_{1}=v_{2}=v_{D}$
$$\implies \underbrace{ \frac{P_{2}-P_{1}}{\rho} }_{ l } = \frac{v_{3}^{2}-v_{0}^{2}}{2}\implies l = \Delta E_{k}$$
$$l= \frac{P_{2}-P_{1}}{\rho} = \frac{v_{3}^{2}-v_{0}^{2}}{2}$$
While we have been able to determine the $l$, we will need to be able to determine the $\dot{L}$.

To do this, instead of considering a turbine, we consider a porous disk which produces the same effects onto the wind.

![](Pasted%20image%2020250515205118.png)

 We can achieve an equivalent concentrated loss to the loss of the rotor by swapping it with the porous disk.
For the porous disk $l=0$, but $l_{w}$ performs the loss, such that:
$$-l_{w} = \frac{P_{2}-P_{1}}{\rho}$$
Since:
$$\dot{L} = \vec{T}\cdot \vec{v}_{d} = \dot{m}l$$
From this model we want to find the thrust generated by the disk onto the fluid to find the power.

We will look at maximising the $\dot{L}$ of the porous disk and from there find the equivalent for the turbine.

To start we do a balance of the linear momentum between 1 and 2.
We create a control volume around the disk and through it's pores, contouring all the material boundaries.

![](Pasted%20image%2020250515205526.png)

The balance of linear momentum with the lumped parameter approach already applies will be:
$$\dot{m}(\vec{v}_{2}-\vec{v}_{1}) +P_{2}\vec{n}_{2}A_{2}+P_{1}\vec{n}_{1}A_{1} = \vec{T}$$

The vecotrial form is not useful so we can project along $\hat{i}_{x}$ by multiplying:
$$\implies \dot{m}\cancel{ (v_{2}-v_{1}) } +(P_{2}-P_{1})A_{D} = T\implies T=(P_{2}-P_{1})A_{D}$$
This equation for the thrust will be negative this is the thrust on the fluid, not on the turbine.

We also need a balance of linear momentum along $\hat{i}_{x}$ between 0 and 3.
For this we extend the control volume to cover the entire streamtube.

![](Pasted%20image%2020250515210108.png)

The outside produces forces acting perpendicular to the surface due to the pressure difference, these forces constitute the $F_{aero}$.

The balance is:
$$\dot{m}(v_{3}-v_{0}) +P_{3}A_{3}-P_{0}A_{0}+\int\limits_{A_{L}}^{} P_{L}\vec{n}_{L}\hat{i}_{x} \, dA =T $$
While we can assume $P_{L}=P_{atm}$, this assumption will cause our theory to fail outside of a certain range of wind velocities. This narrow range luckily is the range in which the optimal condition lies, and since we are trying to optimise our machine we can continue to use this model with this assumption.

Since all the pressure are either $P_{atm}$, or are assumed to be so, the balance can be written as:
$$\dot{m}(v_{3}-v_{0})+P_{atm}\left(\cancel{  A_{3}-A_{0} }+\underbrace{ \int\limits_{A_{L}}^{} \vec{n}_{L}\cdot \hat{i}_{x} \, dA }_{ -\cancel{ (A_{3}-A_{0}) } }  \right)=T \implies T=\dot{m}(v_{3}-v_{0})$$

For now we have found:
$$\begin{cases}
 T = (P_{2}-P_{1})A_{D} = \frac{v_{3}^{2}-v_{0}^{2}}{2}A_{D}\rho \\
T=  \dot{m}(v_{3}-v_{0}) = \rho v_{D}A_{D}(v_{3}-v_{0})
\end{cases}$$

We will continue from these two equations tomorrow to derive the power.