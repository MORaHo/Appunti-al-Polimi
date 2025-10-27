---
creation_date: 2025-02-24
tags: 
parent: 
child: 
share: false
---
# Lezione 4 - Ideal Liquid and Mass Balance

## Ideal Liquid

For an ideal liquid we can write it two state functions as:
$$\begin{cases}
u = u(T) \\
v = \text{const}
\end{cases}$$

Looking at the first equation we can write $du$ as:
$$du = Tds-\cancelto{ 0 }{ Pdv }$$

Entropy can be exchanged with an exchange of heat or by producing irreversibility. A change in energy therefore for a liquid means a change in it entropy.

Taking the derivative of the heat with respect to temperature for the transformation L:
$$c_{L} = \left( \frac{\delta q}{dT} \right)_{L} \underbrace{ = }_{ \text{Rev.} }T\left( \frac{ \partial s }{ \partial T }  \right)_{L}\implies \frac{du}{dT} = T\left( \frac{ \partial s }{ \partial T }  \right)_{L} = c_{L}$$

Like we did in the last lesson we can measure the internal energy at a temperature, taking a reference temperature and reference internal energy, with the equation:
$$u = u_{0}+\int\limits_{T_{\text{ref}}}^{T} c_{L}(T) \, dT $$

Returning to the equation, $du = Tds$, we can write:
$$ds = \frac{du}{T}=c_{L} \frac{dT}{T} \to s = s_{0}+\int\limits_{T_{\text{ref}}}^{T} c_{L} \, \frac{dT}{T} $$
We again can do the same for the entropy:
$$h = u+Pv\to dh = du+d(Pv)=c_{L}dT+vdP$$
$$h = h_{f}+\int\limits_{T_{\text{Ref}}}^{T} c_{L}(T) \, dT+v(P-P_{\text{Ref}}) $$

$h_{f}$ is not really used in liquid as it's less relevant.

## Mass Balance

Let's imagine a box in which lays a machine:
<!Box with machine>

We take $\Omega_{f}$ a control volume with a boundary $\partial\Omega_{f}$, which can be decomposed into three areas, $A_{in}$,$A_{out}$ and $A_{M}$.

The velocity of the fluid through $A_{in}$ is:
$$\vec{v}_{in}\cdot \vec{n}_{in}=-v_{m,in}<0\implies v_{m,in}>0$$
The velocity of the fluid passing through $A_{out}$ is:
$$\vec{v}_{out} \cdot \vec{n}_{out} = v_{m,out}$$
While for the area $A_{m}$ which outlines the solid surfaces through which fluid cannot pass, and therefore the velocity will be null.

The quantity in which we are interested is the variation with respect to time of the mass in the control volume. The mass of the control volume has equation:
$$M_{CV} = \int\limits_{\Omega_{f}}^{} \rho  \, dV $$

Because the control volume is open through the immaterial parts it's border. The mass of the control volume can vary, what enters it can either stay in or go out.

The fluid body on the other hand moves through the machine we can track it's movements over time:
<!Diagram fluid body>

The mass of the fluid body cannot change:
$$\implies \frac{d}{dt}M = \frac{d}{dt}\int\limits_{\Omega(t)}^{} \rho dV =0 $$
This is because the fluid body is a defined mass that is closed. The fluid body cannot define more than itself, so the mass cannot change (unless there are nuclear reactions).

Taking the derivative of the mass of the control volume:
$$\frac{d}{dt}M_{CV} = \frac{d}{dt}\int\limits_{\Omega_{f}}\rho  \, dV \neq 0$$
This cannot be equal to zero since as we have stated the mass can also accumulate, if we want to be more precise it can be zero but it would require the outflow and inflow to be the same.

Calculating the derivative of the integral is not the easiest thing since as we have written it, we currently would have to define the whole history of $\rho$ and how $V$ deforms in time. The derivation of the whole history is a laborious process considering the fact that we want only a snapshot of the flow, at $t=\tau$ at which point $\Omega(\tau)=\Omega_{f}$; even though the mass at the instant we take a snapshot will be the same, this would NOT mean that $\frac{dM_{CV}}{dt}=\frac{ dM }{ dt }$.

Since we 

We can use the Reynolds Transport Theorem to convert the density $\rho(\vec{x},t)$ from a Lagrangian to a Eulerian variable, which is much easier to use in this case.

### Reynolds Transport Theorem
Let's imagine that we have field $\varphi = \varphi(\vec{x},t)$ and that $\phi = \int\limits_{\Omega(t)}^{} \varphi \, dV$

If we want to evaluate:
$$\frac{d\phi}{dt} = \frac{d}{dt}\int\limits_{\Omega(t)}^{} \varphi \, dV =$$

We cannot put the derivative inside the integral because we are integrating of a volume which itself is a function of time.

A way we can get around is saying that what we are integrating is a product which defines the small elementary masses which make up our body, and therefore we take take the derivative of that to then integrate that:
$$=\int\limits_{\Omega(t)}^{} \frac{d}{dt}(\varphi dV) = \int\limits_{\Omega(t)}^{} \frac{d\varphi}{dt} \, dV + \int\limits_{\Omega(t)}^{} \varphi \, \frac{d(dV)}{dt}   $$

The interesting part of this equation is the ordinary derivative of $\varphi$ when we know that $\varphi$ is a function of it's position and the time. This is because of the different systems of representation that we can use.

The Lagrangian representation of the variable means that we can use it's initial position and the time at the moment and represent it with only those two.
The problem with this representation is that it makes us develop the whole history when we are interested in a few points, specifically at the snapshot we want to take where the fluid body fills the control volume.
Developing the whole history to get to the point we want is laborious when we are interested in one single point in time and space.

Therefore what is a more interesting for us is the Eulerian representation, in which we can monitor $\varphi$ in a general position in space. We need to remember though that the position that we take is cannot be fixed however we want we have to define it with respect to the path which the fluid follows, therefore our representation is:
$$\varphi(\vec{x}(\vec{x}_{0},t),t)$$
The derivative for this representation will be:
$$\frac{d}{dt}(\varphi(\vec{x}(\vec{x}_{0},t),t)) = \frac{D\varphi}{Dt} = \nabla \varphi \cdot \vec{v}+\frac{\partial \varphi}{\partial t}$$

Returning back to the integrals. When we put the derivative inside the integral, this made sure that the snapshot which we take at $t=\tau$ will be valid for both the control volume and the fluid body which we are interested in. Since once we have calculated the derivatives we just have to integrate at any time and since we can chose the time at which the fluid body fills the control volume, the equation will be the same for both. Therefore fixing $t=\tau$:
$$\underbrace{ = }_{ t=\tau }\int\limits_{\Omega(\tau)}^{} \frac{d\varphi}{dt} \, dV +\int\limits_{\Omega(\tau)}^{} \varphi \, \frac{d(dV)}{dt} $$

Since we know that $\Omega(\tau) = \Omega_{f}$ we can substitute in without issues:
$$=\int\limits_{\Omega_{f}}^{} \frac{d\varphi}{dt} \, dV + \int\limits_{\Omega_{f}}^{} \varphi \, \frac{d(dV)}{dt}  =$$
$$=\dots=\int\limits_{\Omega_{f}}^{} \frac{\partial \varphi}{\partial t} \, dV+\int\limits_{\partial\Omega_{f}}^{} \varphi \vec{v}\cdot \vec{n} \, dA  = \frac{d}{dt}\underbrace{ \int\limits_{\Omega_{f}}^{} \varphi \, dV }_{ \phi_{_{CV}} } + \int\limits_{\Omega_{f}}^{} \varphi \vec{v}\cdot \vec{n} \, dA   $$

We have therefore derived that:
$$\frac{d\phi}{dt} = \frac{d}{dt}\phi_{_{CV}} + \int\limits_{\partial\Omega_{f}}^{} \varphi \vec{v}\cdot \vec{n} \, dA $$

Applying this to the case of the mass that we had before with $\varphi=\rho$ and $\phi=M$, we can write that:
$$\frac{dM}{dt} = \frac{dM_{CV}}{dt}+\int\limits_{A_{in}+A_{out}}^{} \rho \vec{v}\cdot \vec{n} \, dA $$
Since $\frac{dM}{dt}=0$ we get that:
$$\implies \frac{dM_{CV}}{dt} +\int\limits_{A_{out}}^{} \rho v_{m,out} \, dA = \int\limits_{A_{in}}^{} \rho v_{m,in} \, dA $$
As we said before what enters the control volume can either enter or go out.

A process which is defined as steady, means that the derivative of the mass of the control volume is null, meaning that the mass it's mass is constant and the mass entering and exiting are the same.
$$\text{Steady}\implies \frac{dM_{cv}}{dt}=0$$
$$\implies \int\limits_{A_{out}}^{} \rho v_{m,out} \, dA=\int\limits_{A_{in}}^{} \rho v_{m,in} \, dA  $$
$\rho$,$v_{m,in}$ and $v_{m,out}$ are dependent of the field with gradient in the area. So to help linearize these equations we can take the average, which is valid for the whole cross section. This is called the lumped parameter approach.

We will then be able to write:
$$\rho_{out}v_{m,out}A_{out} = \rho_{in}v_{m,in}A_{in}$$
These are all average values and should be overlined but will not since that would become tedious.

We can also define the mass flow rate as:
$$\dot{m}=\rho v_{m}A$$
The mass flow rate is not conserve but the mass of the control volume is.

