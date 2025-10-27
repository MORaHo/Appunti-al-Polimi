---
creation_date: 2025-03-26
tags: 
parent: 
child: 
share: false
---
# Lezione 7 - Vibrations due to aerodynamic forces

In the last lecture we started looking at aerodynamic forces on fluff bodies, and started to look at streamlined bodies, which is where we will start now.

![](Pasted%20image%2020250326221003.png)

The different forces on the streamlined body are:
$$\begin{gather}
F_{D}=\frac{1}{2}\rho v_{R}^{2}c_{_{D}}(\alpha)S \\
F_{L} = \frac{1}{2}\rho v_{R}^{2}c_{L}(\alpha)S \\
M = \frac{1}{2}\rho v_{R}^{2} c_{M}(\alpha)Sb
\end{gather}$$
$c_{L},c_{D}$ and $c_{M}$ are coefficients which are a function of the body shape. They can calculated through FEM or through experiments in a wind tunnel.

The drag coefficients tends to be very small, due to the drag being the friction between layer of air close to the body which doesn't cause much friction.

However which way we decide to determine them, the different coefficients as a function of $\alpha$ have a general tendency like:

![](Pasted%20image%2020250326221827.png)

The flow of the fluid across the wind section causes two general motions, one characterised by torsion and another characterised by a flapping/a flexural moment.

Given that the different coefficients are measure for a stiff body which is not in motion, we would assume that we would not longer be able to use the coefficients, but there is a condition which if satisfied means that we can use them.
This conditions asks us whether the time it takes the fluid to cross our body is bigger than the frequency of the motion of the wing, by a factor of ten. In mathematical terms this means:
$$v^{*}  = \frac{v}{fB}>10$$

### Torsional Case
Studying the torsional case means that we have to study a system like:

![](Pasted%20image%2020250326222759.png)

The spring and damper on either side act to represent the torsional stiffness of our the wing.

The linearised equation of the system is:
$$J\ddot{\theta}+rb\dot{\theta}+kb\theta = M$$
The velocity vectors for the air are:

![](Pasted%20image%2020250326223026.png)

The relative velocity of our system will have equation:
$$\vec{v}_{R} = \vec{u}+b\vec{\dot{\theta}}\implies M(\theta,\dot{\theta})$$

![](Pasted%20image%2020250326223239.png)

$$\begin{gather}
\theta = \alpha+\varphi \\
\alpha= \theta-\varphi
\end{gather}$$

Because $u^{2}\gg b\dot{\theta}$ $\implies \varphi$ is very small and that:
$$v_{R}^{2}\simeq u^{2}$$
We also have:
$$q  = \frac{1}{2}\rho v^{2}$$
$$\varphi = atan\left( \frac{b\dot{\theta}}{u} \right)\underbrace{ \simeq }_{ \text{small }\varphi } \frac{b\dot{\theta}}{u}$$
Substituting everything in:
$$\implies J\ddot{\theta}+rb\dot{\theta}+kb\theta = qSbc_{M}(\alpha)$$

We can linearise the moment coefficient and geT;
$$c_{M}(\alpha) \simeq \cancelto{ 0 }{ c_{M}(\alpha)\Bigg|_{\alpha=0} }+\frac{ \partial c_{M} }{ \partial \alpha }\Bigg|_{\alpha=0}(\alpha-\alpha_{0})+k_{M}\alpha $$

We also can write:
$$\alpha=\theta-\varphi=\theta-\frac{b\dot{\theta}}{u}$$

Writing out equation of motion:
$$\implies J\ddot{\theta}+rb\dot{\theta}+kb\theta = qSbc_{M}(\alpha) = qSbk_{M}\left( \theta-\frac{b\dot{\theta}}{u} \right)$$
$$\implies J\ddot{\theta}+(rb+qSbk_{M} \frac{b}{u})\cdot\dot{\theta}+(kb-qSbk_{M})\theta = 0$$
We see therefore that our dampening increases as the speed increases, while our stiffness decreases.
The stiffness decreasing isn't really a problem for wings as they already have a relatively high stiffness. The problem is greater for bridges which require different method to have less problems related to torsional stiffness.

### Flexural Case

The flexural case leads us to have to write the equation for this kind of system:

![](Pasted%20image%2020250326224307.png)

In this case $F$ is not a function $x$, so it doesn't have an impact on the stiffness, but it is a function of $\dot{x}$ so it will affect the dampening.

The equation of motion for this type of system is:
$$m\ddot{x}+r \dot{x}+kx = F_{L}\cos\alpha-F_{D}\sin\alpha$$

The velocity triangle is:

![](Pasted%20image%2020250326225215.png)

Since $\dot{x}$ is small, $\alpha$ will be too, so the right-hand side of the equation of motion can be written as:
$$=qS(c_{L}(\alpha)\cos(\alpha)-c_{D}(\alpha)\sin\alpha)$$

Linearising the coefficients we have:
$$c_{D}(\alpha)\simeq c_{D0}\Bigg|_{\alpha=0}+\cancel{ \frac{ \partial c_{D} }{ \partial \alpha }\Bigg|_{\alpha=0} }\alpha = c_{D0} $$
$$c_{L}(\alpha) \simeq \cancel{ c_{L0}\Bigg|_{\alpha=0} } + \frac{ \partial c_{L} }{ \partial \alpha }\Bigg|_{\alpha=0}\alpha = k_{L}\alpha $$
So once again we can write the right-side as:
$$=qS(k_{L}\alpha-c_{D0}\alpha) = qS\alpha(k_{L}-c_{D0})$$
Since $\alpha$ is small we can also write:
$$\alpha = atan\left( \frac{\dot{x}}{u} \right) \simeq \dot{\frac{x}{u}}$$

We get the final form of the right-hand side as:
$$=qS(k_{L}-c_{D0}) \dot{\frac{x}{u}}$$
We only have an effect on the damping and since $-k_{L}>0$, then the damping will increases, so as the speed increases, the stability will increase.

