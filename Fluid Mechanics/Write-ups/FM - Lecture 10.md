---
creation_date: 2025-03-15
tags: 
parent: 
child: 
share: false
---
# Lezione 10 - Hydraulics

Hydraulics are machines operating with liquids or gasses for which the density is constant.

In this case then:
$$\begin{cases}
\dot{m} = \rho v_{n}A=\text{const}\to \text{Mass Balance} \\
l+q = \Delta h + \frac{\Delta v^{2}}{2}+g\Delta z \to \text{Energy Balance} \\
l-l_{w} = \int\limits_{\text{IN}}^{\text{OUT}} v \, dP+\frac{\Delta v^{2}}{2}+g\Delta z \to \text{Mechanical Energy Balance} 
\end{cases}$$
We also add:
$$\begin{cases}
v= \text{const} \to\rho=\text{const} \\
\Delta h = c_{L}\Delta T+\frac{\Delta P}{\rho}
\end{cases}$$
Since $\dot{m}$ and $\rho$ are constant, we get that:
$$v_{n}A=Q=\text{const}\implies \frac{dv_{n}}{v_{n}}=-\frac{dA}{A}$$
For our fluid therefore we have 4 defining equations:
$$\begin{cases}
\frac{dv_{n}}{v_{n}}=-\frac{dA}{A} \\
l+q = c_{L}\Delta T+\frac{\Delta P}{\rho}+\frac{\Delta v^{2}}{2}+g\Delta z \\
l-l_{w}= \frac{\Delta P}{\rho}+\frac{\Delta v^{2}}{2}+g\Delta z=\Delta \mathbb{T}\to \underbrace{ \mathbb{T} }_{ \substack{\text{Bernoulli}\\\text{Trinomial}} }\stackrel{D}{=} \frac{P}{\rho}+\frac{v^{2}}{2}+gz \\
q+l_{w} = c_{L}\Delta T \to \text{ Thermal Energy Balance}
\end{cases}$$
These 4 equations will become more complex when the density is not constant.
The thermal energy balance like before comes from the difference between the mechanical energy balance and the energy balance.

## Behaviour of Flow in a Duct (A=const)

The profile in a duct has to general tendencies depending on whether the flow is laminar or turbulent:
![](Pasted%20image%2020250315142214.png)

The velocity of the fluid is describable by the average velocity:
$$\vec{v}= v_{n}\hat{i}_{x}= v\hat{i}_{x}\implies v=\text{const}\underbrace{ \implies }_{ \substack{\text{Mass}\\\text{Balance}} } v_{in}=v_{out}$$
We can write the mechanical energy balance of the flow as:
$$\cancel{ l }-l_{w}=\Delta T=\frac{\Delta P}{\rho}+\cancel{ \frac{\Delta v^{2}}{2} }+\cancel{ g\Delta z }$$
$$\implies l_{w} = -\frac{\Delta P}{\rho}\stackrel{D}{=}y$$
$y$ is the collective distributed losses which occur due to friction, leading to a loss of pressure as the flow passes through the duct.

We can write that:
$$l-l_{w} -y = \Delta \mathbb{T}$$
We can use this to change the mechanical energy and thermal energy balances as:
$$\begin{gather}
l-l_{w}-y = \frac{\Delta P}{\rho}+\frac{\Delta v^{2}}{2}+g\Delta z=\Delta \mathbb{T} \\
q+l_{w}+y = c_{L}\Delta T
\end{gather}$$

This formulation allows us to distinguish the losses due to irreversibility and due to friction. This distinction will make our work (at our jobs) easier in the future.

Though experimentation we have found that:
$$y =y(v,D,L,\rho,\mu)$$
The dimensions of the different variables tells us that this is a dynamic problem, therefore we have to define 3 scales for which we will reformulate the equation to make it dimensionless. We want the equation to dimensionless since we want to be able to find coefficients which we can add to make an easy sum.

Rewriting $y,L$ and $\mu$ as a function of our scale, we get:
$$y\to y = \frac{\xi_{_{D}}v^{2}}{2}\to\xi_{_{D}} = \frac{y}{\frac{v^{2}}{2}}$$
$\varepsilon_{_{D}}$ is the distributed loss coefficient, which is different from concentrated loss coefficients.

The other two become:
$$L\to \frac{L}{D}$$
$$\mu\to \frac{\rho vD}{\mu} = Re$$
The other become redundant since making them dimensionless return 1.
We can therefore write the equation for our distributed loss coefficients as:
$$\xi_{_{D} }=\xi _{_{D}}\left( Re, \frac{L}{D} \right)$$
Analytical solutions do determining this coefficient for turbulent flow do exists, so we base our understanding on experimental data.

In general we can write the equation for the loss coefficient as:
$$\xi_{_{D} }= \lambda(Re) \cdot \frac{L}{D}$$
Where $\lambda(Re)$ is the friction coefficient, which is a function of the Reynolds number.

The main graph for determining the friction coefficient, is the Moody diagram

![](Pasted%20image%2020250315145226.png)

The Moody diagram tells us how the loss coefficient changes depending the Reynolds at different stages of flow.

For the turbulent we see that the loss coefficient changes not only based on $Re$ but also a parameter $\varepsilon$ which we have not considered. Where $\varepsilon$ is the surface roughness of the duct.

Therefore $y \neq y(v,D,L,\rho,\mu)$, but rather:
$$y = y (v,D,L,\varepsilon,\rho,\mu)$$
Fixing our the equation for our coefficient we get:
$$\xi_{_{D}} = \xi_{_{D}}= \left( Re, \frac{\varepsilon}{D}, \frac{L}{D} \right)$$
And:
$$\xi_{_{D}} = \lambda\left( Re, \frac{\varepsilon}{D} \right)\cdot \frac{L}{D}$$
For full turbulent flow we find that:
$$\frac{ \partial \lambda }{ \partial Re }=0 $$
Therefore flow the full-turbulent flow we can write the distributed losses as:
$$y = \xi_{_{D}}\left( \frac{\varepsilon}{D}, \frac{L}{D} \right) \frac{v^{2}}{2}$$
Due to the elimination of the Reynolds number we no longer need to consider the density or viscosity of the fluid, therefore the problem has become a kinematic problem. In the fully-turbulent flow, this means that the problem has become purely shape dependent, shape includes the surface roughness.

## Pumping Plant

A pumping is a device to pump fluid from one reservoir to another with a higher geodetic level or pressure.

Let's take an example in this case:

![](Pasted%20image%2020250315152711.png)

The mechanical energy balance between 1 and 2 gives us:
$$l-l_{w}-y = \mathbb{T}_{2}-\mathbb{T}_{1} \implies l-l_{w}=\mathbb{T}_{2}-\mathbb{T}_{1}=gH$$
Where $H$ is the head, which is a length measure.

The mechanical energy balance between 0 and 3 gives:
$$\underbrace{ l-l_{w} }_{ gH }-y = \mathbb{T}_{3}-\mathbb{T}_{0}=\frac{P_{3}-P_{0}}{\rho}+g(z_{3}-z_{0})$$
To be able to achieve the $\Delta P$ and $\Delta z$, the pump exchanges work, with some losses due to friction and other due to irreversibility.

We get, therefore:
$$\cancel{ g }H = \frac{P_{3}-P_{0}}{\rho g}+\cancel{ g }(z_{3}-z_{0})+\frac{y}{g}$$
Since $\frac{y}{g}\to(\xi_{c}+\xi_{_{D}}) \frac{v^{2}}{2g}$ and $v=\frac{Q}{A}$, we find that $y\propto Q^{2}$ and therefore we can introduce the coefficient $B$, where $B+\mathbf{B}(A,\xi_{c},\xi_{_{D}})$:
$$H=\frac{P_{3}-P_{0}}{\rho g}+(z_{3}-z_{0})+BQ^{2}$$

This equation implies that as the flow of the machine increases the head needed to overcome the losses due to friction increase, and so the amount of work our pump has to introduce also increases.

We can map the characteristic curve of the circuit which gives us the relationship between flow and head as:

![](Pasted%20image%2020250315155515.png)

It can be seen as a sum of the energy requirements which we need to have to have flow. Although the energy is represented in terms of meters, it is still an energy balance which we are looking at.

When designing a circuit, knowing the characteristic curve of the circuit, if we are looking for a pump we need to one that matches the head which our circuit requires at the volumetric flow we are interested in operating at.

## Characteristic Curve of the Pump

How do we get the characteristic curve for the pump?

Well, we know that that $gH = l-l_{w}$.
So, before we design $H(Q)$, it might be easier to define $l(Q)$ and $l_{w}(Q)$.

$l_{w}(Q)$ is impossible to determine analytically, while $l(Q)$ can be derived from the Euler equation:
$$l=u_{2}v_{2t}-u_{1}v_{1t}$$
The volumetric flow does not immediately stand out from this equation. This is because the volumetric flow follows the meridional direction, not the tangential. Therefore we have to re-write this equation as a function of the meridional velocities.

On which angles do we operate to do this re-write?

In our impeller we have, $\alpha_{1},\alpha_{2},\beta_{1}$ and $\beta_{2}$. Two of these angles are geometric, while 2 are not. The angles that are geometric, and which we will use to operate on the system re-write velocities, are $\alpha_{1}$ and $\beta_{2}$. $\alpha_{1}$ is geometric since our fluid comes from a duct and so we will always know the angles with which it comes. $\beta_{2}$ is more clearly geometrical as it is the angles which the relative velocity leaves the air-foil with and therefore it is the same as the final angle of the air-foil. $\beta_{1}$ and $\alpha_{2}$ on the other hand are operationally dependent angles, as they change as a function of the magnitudes and directions ($\alpha_{1}$ and $\beta_{2}$) of $v_{1}$ and $u_{1}$, and $w_{2}$ and $u_{2}$ respectively.

How let's start our re-write, starting from the Euler equation.
$$\begin{align}
l&=u_{2}v_{2t}-u_{1}v_{1t} = \\
&= u_{2}(\underbrace{ w_{2t}+u_{2} }_{ v_{2t} }) - u_{1}v_{1t} \\
w_{2t} &= w_{2m}\cdot \tan(\beta_{2}) \\
w_{2m} &= v_{2n}=\frac{Q}{\pi D_{2}b_{2}} \\
w_{2t} &= \underbrace{ \frac{Q}{\pi D_{2}b_{2}} }_{ w_{2m} }\tan(\beta_{2}) \\
v_{1t} &= v_{1m}\tan(\alpha_{1})=\frac{Q}{\pi D_{1}b_{1}}\tan(\alpha_{1}) \\
\implies l&=u_{2}\left( \frac{Q}{\pi D_{2}b_{2}}\tan(\beta_{2})+u_{2} \right)-u_{1} \frac{Q}{\pi D_{1}b_{1}}\tan(\alpha_{1}) \\
&=u_{2}^{2} \left( \frac{Q}{\pi D_{2}b_{2}u_{2}}\tan(\beta_{2})+1-\frac{u_{1}}{u_{2}} \frac{Q}{\pi D_{1}b_{1}u_{2}}\tan(\alpha_{1}) \right)
\end{align}$$
All the terms inside the parenthesis are dimensionless.
Since we know that $w_{1}=w_{2}=w$, we can replace $u_{1}$ and $u_{2}$, as well making the specific work dimensionless:
$$\frac{l}{u_{2}^{2}}=\frac{Q}{\pi D_{2}^{2}u_{2}}\cdot D_{2}b_{2}\tan(\beta_{2})+1-\frac{D_{1}}{D_{2}} \frac{Q}{\pi D_{1}^{2}u_{2}}\cdot \frac{D_{1}}{b_{1}}\tan(\alpha_{1})$$
$$u_{2} = wR_{2}=\frac{wD_{2}}{2}=\frac{\frac{2\pi n}{60}D_{2}}{2}=\frac{nD_{2}\pi}{60}$$
$$\implies \frac{l}{u_{2}^{2}}=\frac{l}{n^{2}D_{2}^{2}}\cdot\left( \frac{60}{\pi} \right)^{2}\implies l\propto n^{2}D_{2}^{2}$$
This proportional relationship means that we can make $l$ dimensionless, taking $D$ and $n$ as the length and time respectively as the scales.

We can therefore define:
$$\lambda=\frac{l}{n^{2}D^{2}}$$
We can continue to develop the right part of the work equation:
$$\begin{align}
\frac{Q}{\pi D_{2}^{2}u_{2}}\cdot \frac{D_{2}}{b_{2}}\tan(\beta_{2})&=\frac{Q}{\frac{\pi D_{2}^{2}nD_{2}\pi}{60}}\cdot D_{2}b_{2}\tan(\beta_{2}) \\
&=\underbrace{ \frac{Q}{nD^{3}} }_{ \varphi }\cdot f(\text{SHAPE})
\end{align}$$
$\varphi\to$ flow efficiency, is the real flow relative to the actual flow. This quantity is dimensionless.
We do the a similar simplification for the second part, and receive the same function.

We have been able to write both sides as a function of the work and volumetric flow respectively, so we have that:
$$\frac{l}{n^{2}D^{2}}= f\left( \frac{Q}{nD^{3}},\text{SHAPE} \right)$$
We get a relationship of the type:
$$\lambda=\lambda(\varphi,\text{SHAPE})$$
Returning back to the dimensional relationship, we get:
$$l=l(Q,n,D,\text{SHAPE})$$
