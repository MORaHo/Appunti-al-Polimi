---
creation_date: 2025-03-22
tags: 
parent: 
child: 
share: false
---
# Lezione 6 - State-Dependent Forces

In the last lecture we looked at time-dependent external forces, in this lecture we will be looking at state-dependent ones.

The example problem we will use for the state-dependent forces is:

![](Pasted%20image%2020250322173444.png)

The equation for the system is:
$$m\ddot{x}+r  \dot{x}+kx = F(x,\dot{x})$$
Generally the forces tends to be non-linear. So, since we intend to linearise our problem, we need to find where to linearise our problem.

Since we now have a state-based external force we are doing to have to consider it as well while determining our equilibrium position.
$$kx_{0}=F(x_{0},0)$$
Where $x_{0}$ is our equilibrium position, and the unknown for the equation.

Having determined the equilibrium position, we can now linearise around the point, and we get:
$$F(x,\dot{x})=\underbrace{ F_{0}(x_{0},0) }_{ \text{const} }+\underbrace{ \frac{ \partial F }{ \partial x } \Bigg|_{\substack{x=x_{0}\\\dot{x}=0}} }_{ \text{const} }\underbrace{ (x-x_{0}) }_{ \text{displacement} }+\underbrace{ \frac{ \partial F }{ \partial \dot{x} } \Bigg|_{\substack{x=x_{0}\\\dot{x}=0}} }_{ \text{const} }\dot{x}$$
At the equilibrium position, $x=x_{0}$ and $\dot{x}=0$.

Using a new coordinate system:
$$\overline{x}_{}=x-x_{0} $$
$$\dot{\overline{x}_{} }=\dot{x}$$

Re-writing our equation for the system we get:
$$\begin{align}
m\ddot{\overline{x}_{}}+r  \dot{\overline{x}_{} }+k(\overline{x}+\cancel{ x_{0} } )&=F_{0}(x_{0},0) \\
&=\cancel{ F_{0}(x_{0},0) }+\underbrace{ \frac{ \partial F }{ \partial x }\Bigg|_{\substack{x=x_{0}\\\dot{x}=0}} }_{ -k_{_{F}} } \overline{x}_{} + \underbrace{ \frac{ \partial F }{ \partial \dot{x} }\Bigg|_{\substack{x=x_{0}\\\dot{x}=0}} }_{ -r_{_{F}} }\dot{\overline{x}_{} }
\end{align} $$
We can see that the forces that are state-dependent, act like springs and dampers which add additional components to our equation in linearised terms.
We don't know the sign of $r_{_{F}}$ or $k_{_{F}}$, they may reduce the forces acting on the system, so the stiffness is not known a priori.

Our equation for the system becomes:
$$m\ddot{\overline{x}_{} }+r  \dot{\overline{x}_{} }+k\overline{x}_{}=-r_{_{F}} \dot{\overline{x}_{} }-k_{_{F}}\overline{x}_{}  $$
Moving everything to one side we get:
$$m\ddot{\overline{x}_{} }+\underbrace{ (r+r_{_{F}}) }_{ r_{_{T}} }  \dot{\overline{x}_{} }+\underbrace{ (k+k_{_{F}}) }_{ k_{_{T}} }\overline{x}_{}=0  $$
We don't know if the total dissipation and the total stiffness of the system will be negative or positive.

What we do know is that if the total dissipation is positive, the system dissipates, if the it's null there is no dissipation, and if it is negative the system's energy will increase causing the oscillations to increase until everything collapses.

Through the Lyapunov Theorem we know that if the linear system is assymptotically stable, so will the non-linear one be. If the system is non-asymptotically stable, we cannot draw conclusion on the stability of the non-linear system. If the linear system is not able, the non-linear one will also of course not be stable.

Using the tentative solution for the system and applying it to the equation we get:
$$(\lambda^{2}m+r_{_{T}}\lambda+k_{_{T}})X_{0}\cancel{ e^{ \lambda t } }=0$$
There are different scenario's that we have to study.

If $r_{_{T}}$ and $k_{_{T}}$, we get 3 possible scenario's for the free motion of the system that we have already studied.

![](Pasted%20image%2020250322180946.png)

If the $k_{_{T}}$ is positive, but we have no dampening we have:

![](Pasted%20image%2020250322181027.png)

The system is stable but no asymptotically, so we have to study the non-linear form.

If $k_{T}$ is negative, independent of $r_{_{T}}$ our system will be unstable.
![](Pasted%20image%2020250322181150.png)
If $k_{_{T}}$ is positive, but $r_{_{T}}$ is negative, we have dynamic instability with oscillation.

![](Pasted%20image%2020250322181305.png)

The state dependent force can come from the attachment of the system to the ground. 

![](Pasted%20image%2020250322181658.png)
In this case the solution to our system will be:
$$\begin{align}
E_{c} &= \frac{1}{2}m\dot{x}^{2} \\
D &= \frac{1}{2}r \dot{\Delta l}^{2} \\
V&= \frac{1}{2}k\Delta l^{2} \\
\Delta l&=x-y \\
\dot{\Delta l} &= \dot{x}-\dot{y} \\
D &= \frac{1}{2}r(\dot{x}-\dot{y})^{2} \\
V &=\frac{1}{2}k(x-y) \\
\implies m\ddot{x}&+r(\dot{x}-\dot{y})+k(x-y)=0 \\
m\ddot{x} &+ r \dot{x}+kx =r \dot{y}+ky = (i\Omega r+k)y_{0}e^{ i\Omega t }
\end{align}$$
The irregularity of the surface forces the mass to move.

If instead of the deriving the equations based on $x$, we derived based on $y$, we can see the result as the function of the external forces acting horizontally on the connection point.

![](Pasted%20image%2020250322182643.png)

The equation $R$, the result of the derived based on $y$, comes out as:
$$-r(\dot{x}-\dot{y})-k(x-y)=R$$

## Aerodynamic
Wind is a major generator vibrations in builds and other structures.
The aerodynamic forces generated on surface will be:

![](Pasted%20image%2020250322182805.png)

In the case of high viscosity or low speed fluids, the flow around the round surface takes the shape:

![](Pasted%20image%2020250322182907.png)

As the speed increase, the flow begins to detach from the surface before it should and this causes the generation of a wake:

![](Pasted%20image%2020250322182957.png)

Since the pressure is no longer symmetric around the body we generate force.
The forces have the equation:
$$F_{D}=\frac{1}{2}\rho v^{2}c_{D}S$$
But, unlike the idealised model which we have just drawn, the wake is not generate as one steady region, but rather a series of steady regions which form around the body, detaching from the body at alternating steps. 

![](Pasted%20image%2020250322183214.png)

This alternating causes alternating forces to be generated, and oscillations to therefore be created. The forces have frequency which can be described using the equation:
$$f_{_{ST}}=ST\cdot \frac{V}{D}$$

Considering now a symmetric wing:

![](Pasted%20image%2020250322183513.png)

We introduce an extension to the wing, which causes a reduction of the wake generated.

The wind will flow around the wing like:

![](Pasted%20image%2020250322183702.png)

Regions of higher and lower pressure generated due to this flow, cause forces to be generated, which are::
$$\begin{gather}
L=\frac{1}{2}\rho v^{2}c_{L}(\alpha)S \\
D = \frac{1}{2}\rho v^{2}c_{D}(\alpha)S \\
M = \frac{1}{2}\rho v^{2}c_{M}(\alpha)S\cdot b
\end{gather}$$
$\alpha$ is the attack angle, or the angle between the direction of the wind and the plane of symmetry of the wing.




