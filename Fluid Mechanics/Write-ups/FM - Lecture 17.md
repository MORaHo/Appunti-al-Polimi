---
creation_date: 2025-05-11
tags: 
parent: 
child: 
share: false
---
# Lezione 17 - Study of Different Types of Hydraulic Turbines

In the last lecture we looked at the analytical determination of the performance and optimization of the Pelton turbine.

We still need to look at how to change the operating condition. Traditionally this is done by changing the geometry; in the case of the Pelton the change in shape occurs at the nozzle.

The buckets have holes to better allow the jets to flow when transitioning between buckets.
We can use a deflector while reducing the section to reduce the effect of the water hammer, and prevent the destruction of our system.

The point of the nozzle is called a Dubble nozzle. This type of nozzle is make up of two parts, a static part and a moving part. When we are trying the regular the area, the moving part moves backwards or forwards to increase or decrease the area respectively.

Unlike the Kaplan and Francis turbines, the Pelton turbine is easy to regulate since it doesn't suffer from cavitation and it easy to startup, since the axial torque at startup is not null; all the while Pelton is also very efficient.

### How to stop a Pelton turbine

In the even of a blackout, the turbine go to escape velocity. At this velocità the axial torque generated is null, and the damage of going at that speed is immense.

How do we stop the flow from causing damage to our system?

The solution is plug the nozzle. This is easier said then done. If we were to quickly block the nozzle, water hammer would occur. Water hammer occurs is an effect of near-incompressible flows, where the shock wave informing the liquid that the flow has stopped is not able to reach the whole liquid in time and therefore more fluid continues the enter the penstock, since the flow has stopped this means an increase in the fluid volume in the penstock, causing the pressure to increase and the penstock to bust. This reaction to the stopping of the flow is called water hammer.

To avoid water hammer, we can use a diverter to quickly reduce the effect of the flow on the turbine; this can be done easily and quickly (still slow), this gives us time to reduce the size of the flow slowly, avoiding water hammer.

In Francis and Kaplan turbines we cannot use a deflector, so we have to contend with reducing the nozzle area slowly, and so accept the damage we will inevitably cause to our turbines.
This means that for a bit our turbines will accelerate with $C_{ax}=0$, so we need to design our turbines to consider this higher speed, and reduce the damage caused in the case we do reach those speeds.

The design criteria for our Pelton turbine is an optimal specific speed:
$$w_{s,opt} = \frac{wQ^{1/2}}{(gH_{m})^{3/4}} = \frac{d}{D}\sqrt{ i }$$

This equation is easy for us to use since, $\frac{d}{D}$, is already a relevant shape parameter for our machine. A bigger $d$ means we have to consider the jet for a larger portion of the motion, reducing the efficiency as the triangles will not be optimal for a longer span on the motion.

When the $d$ is very small, there are parasitic losses which reduce the efficiency.
$\frac{d}{D}$ therefore is a parameter that needs to be optimised to reduce losses and kept as stable as possible.

### Design Strategy for Designing Pelton Turbines

$H_{m}$ and $Q$ are known from the target $\dot{L}$.
We have $w_{s,opt} \propto w$, and we know $H_{m} \propto u^{2}_{opt} \propto wD^{2}\implies w_{s,opt}D$ has to be constant.

Since the hydrodynamic of the system set $\frac{d}{D}$, we know that $w_{s,opt}\propto\sqrt{ i }$.

Putting both these conclusions together, by imposing the maximum value for $i$ at 6 $\implies w_{s,opt}$ increases $\implies w$ increases causing D to decrease $\implies$ constant decreases.
This all means that in general for hydraulic machines, small and fast machines are better for techno-economic optimisation.

## Reaction Turbines

Until now we have looked at Pelton turbines, which are impulse-type turbines.
There are two-types of these turbines:
- Centripal/Mixed-Flow, called Francis turbines
- Axial Flow, called Kaplan turbines

It's very rare to find a purely radial turbine.

Kaplan machines tend to be more useful at higher $w_{s}$; the higher $w_{s}$, the more the machines tend to be axial.

At high $w_{s}$, Francis turbines can impose a chainge in cross-section within the rotor since the blades already create a nozzle effect, so this increase in area just reduces the nozzle effect with causing diffusion. We can increase the cross section very quickly with much negative effects,  and since draft tubes need a lot of space to increase the cross-section, this flexibility helps use reduce the amount of space we take up.

### Francis Turbines
The basic optimisation rule for Francis turbines is $v_{2}= v_{2m}\implies v_{2t}=0$

Because of this the optimal work exchanged is:
$$l_{opt} = u_{2}v_{2t}-u_{1}v_{1t} = -u_{1}v_{1t} = -u_{1}v_{1}\sin\alpha_{1}$$

We can define a $k_{p}$ for Francis turbines that is:
$$k_{p} = \frac{u_{1}}{v_{1}}\implies l_{opt} = -\frac{u_{1}^{2}\sin\alpha_{1}}{k_{p}}$$
The reaction degree for Francis turbines is:
$$\chi = 1-\frac{v_{1}^{2}}{2gH_{m}}$$
$$\implies v_{1}^{2}=2gH_{m}(1-\chi)\implies \eta = \frac{\left|l_{opt}\right|}{gH_{m}} = 2k_{p}(1-\chi)\sin\alpha \implies \chi = 1-\frac{\eta}{2k_p \sin\alpha_{1}}$$
These equations are not very concrete (grounded in the machine theory), they don't really help us understand how to optimise this machine.

Typical design choices for Francis turbines are:
$$\alpha_{1}=75-80^{o}\implies k_{p,opt} = \sin\alpha_{1}$$
$$\implies v_{1t}=u_{1}\text{ and }\chi =0,5\implies l_{opt}=-u_{1}^{2}$$

> [!note] 
>  For a given motor head, the Francis turbine needs higher $u$ than the Pelton to reach the optimum specific work extracted.
>  
>  Another consideration for the Francis is that it needs to be underground, in order to avoid cavitation, which unlike the Pelton turbine it can generate.

A banality of the Francis turbines is that if there is a need, they can be used as pumps and turbines, if we need they can be used as an easy solution for pumped hydro. Of course, they will be more effective in one direction relative to the other.

### Kaplan Turbine

In the most simple way to describe them, Kaplan turbines are just extreme and axial versions of Francis turbines.

The distribution and stator are still radial, but before it goes to the turbine it is made axial.

Since $H_m$ is very low, the machine is composed by few blades, which are mounted directly to the shaft.

Blades are variable radii, due to the relatively high $\frac{b}{D}$ ratio which is adopted for the blades.

### Power Control for Francis Turbines
(This is a common question asked in theory)

Power control for Francis turbines is achieved by pivoting (or staggering) the stator/distribution blades, this reduced the throat between the blades and so we reduce the speed $v_{m}$ passing through them.

The blades are not cambered, but rather they are straight. This can have larger effect on the velocity triangle. The geometric similarity is violated, so we no longer consider similarity when changing angles.

Changing the angle causes the $v_{t}$ after the rotor to no longer be null, so we risk inducing cavitation.

The change in the the angle causes the reaction degree to change since $w_{2t}$ changes a lot.
Because of how much everything changes, the ability to change $\dot{L}$ does not come for free, and there is a high cost of doing so, therefore is a severe penalty to efficiency for being off design.

### Power Control for Kaplan Turbines
In Kaplan turbines, low blade numbers in both the stator and rotor, mean that both the stator and rotor blades are pivotable. This is a way of compensating for the loss in efficiency that we see in Francis turbines.

### Comparison

While Kaplan and Francis turbines are generally more efficient when in their design configuration, they are more penalised relative to Pelton when we are interested in changing the operating condition.

![](Pasted%20image%2020250513213141.png)

Impulse tend to have higher $r$, which means more losses so lower efficiecny, which is why Pelton is low. 


