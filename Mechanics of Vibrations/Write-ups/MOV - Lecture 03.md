---
creation_date: 2025-02-27
tags: 
parent: 
child: 
share: false
---
# Lezione 3 - Linearisation of the Lagrange equation

In the last lesson we wrote the equation of motion for a pendulum as down below:
<!Diagram initial pendulum>

$$\left( \frac{mL^{2}}{4}+J \right)\ddot{\theta}+kl^{2}\sin\theta \cos\theta+\frac{mgl}{2}\sin\theta=0$$

While this equation is able to describe the whole motion of the system we described, we are not interested in such a detailed equation. The course is a course on vibrations, vibrations (and more specifically high frequency vibrations) occupy only small angle changes and therefore in many cases we can linearise these equations and render them more computationally efficient for our use case.

An equation that is not linearised cannot be solved without numerical integration (unless it's extremely simple) and even then we get the whole motion which we do not care for.

Linearising the above equation we get:
$$\tilde{J}\ddot{\theta}+kl^{2}\theta+\frac{mgl}{2}\theta=0$$
The mass/moment of inertia term is immediately linear, whereas the potential terms needs to be derived.

This approach for finding the linearised equation is not the smartest though, since it requires us to go through many derivations and interpretation of the problem. What we want is to go directly to the linear equation.

### Linearisation Kinetic Energy

Per the Konig Theorem we can write the kinetic energy as:
$$E_{c} = \frac{1}{2}\left( \frac{mL^{2}}{4}+J \right)\dot{\theta}^{2}$$
To derive the work performed by the kinetic energy we initially take do a Taylor expansion to the first degree since that will give us only linear term:
$$\begin{align}
E_{c} = \frac{1}{2}m^{*} (q)\dot{q}^{2} &\simeq \cancel{ \frac{1}{2}m^{*} (q)\dot{q}^{2}\Bigg|_{\substack{q=q_{0}\\\dot{q=0}}}}+\cancel{ \frac{1}{2}\frac{\partial m^{*} (q)}{\partial q}\dot{q}^{2}\Bigg|_{\substack{q=q_{0}\\\dot{q=0}}} }+ \\
&+ \cancel{ \frac{1}{2}\cdot 2\cdot m^{*} (q)\dot{q}\Bigg|_{\substack{q=q_{0}\\\dot{q=0}}}\dot{q} }+\cancel{ \frac{1}{2}\cdot \frac{1}{2} \frac{\partial^{2}m^{*} (q)}{\partial q^{2}}\dot{q}^{2}\Bigg|_{\substack{q=q_{0}\\\dot{q=0}}}(q-q_{0})^{2} }+ \\
&+\cancel{ 2\cdot \frac{1}{2}\frac{\partial m^{*} (q)}{\partial q}\dot{q}\Bigg|_{\substack{q=q_{0}\\\dot{q=0}}}\dot{q}(q-q_{0}) }+\frac{1}{2}\cdot m^{*} (q)\Bigg|_{\substack{q=q_{0}\\\dot{q=0}}}\dot{q}^{2}
\end{align}$$
The only term that doesn't cancel out is the final term since it's the one in which we are not evaluating.

Then after having derived the kinetic energy, we apply the derivatives to this energy and get the work:
$$\frac{d}{dt}\left( \frac{\partial E_{c}}{\partial \dot{q}} \right)-\frac{\partial E_{c}}{\partial q}=m^{*} (q_{0})\ddot{q}$$
The kinetic energy is independent of the position, we don't care about the evaluation. By not allowing dependence of the terms to our degree of freedom and making our equation linear this approach simplifies our evaluation while keeping our system linear.

Going to linear solutions directly, makes solutions much easier to get to.

Can we do the same with the potential energy?

### Linearization of the potential energy

To linearise the potential energy we once again perform a Taylor expansion to the first degree around $q=q_{0}$ (we always linearise around the equilibrium point):
$$V(q) \simeq \cancelto{ 0 }{ V(q_{0}) }+\cancelto{ 0 }{ \frac{ \partial V }{ \partial q } \Bigg|_{\substack{q=q_{0}\\\dot{q=0}}}(q-q_{0}) }+\underbrace{ \frac{1}{2}\frac{ \partial^{2} V }{ \partial q^{2} } \Bigg|_{\substack{q=q_{0}\\\dot{q=0}}}(q-q_{0})^{2} }_{ \frac{1}{2}K(q-q_{0})^{2} }$$
Taking the derivative of this derived equation we get:
$$\frac{ \partial V }{ \partial q }  = K(q-q_{0})$$
Where:
$$K = \frac{ \partial^{2} V }{ \partial q^{2} }\Bigg|_{q=q_{0}} $$

In this derivation we started from $V$ directly, but if we started $V=V_{k}+V_{g}$, the result that we get is:
$$\begin{align}
V &= \frac{1}{2}k(\Delta l_{0}+\Delta l_{d}(q))^{2}+mgh(q) \\
\implies \frac{ \partial V }{ \partial q }  &= k(\Delta l_{0}+\Delta l_{d}(q))\frac{\partial\Delta l_{d}(q)}{\partial q} + mg\frac{ \partial h(q) }{ \partial q } \\
\implies \frac{ \partial^{2} V }{ \partial q^{2} } &= \underbrace{ k\Delta l_{0}\cdot \frac{\partial^{2}\Delta l_{d}(q)}{\partial q^{2}} }_{ K''' }+k\underbrace{ \left( \frac{\partial\Delta l_{d}(q)}{\partial q} \right) }_{ K' }^{2} + \\
&+ \cancelto{ 0 }{ k\Delta l_{d}(q)\cdot \frac{\partial^{2}\Delta l_{d}(q)}{\partial q^{2}} } + \underbrace{ mg\frac{ \partial^{2} h(q) }{ \partial q^{2} } }_{ K'' }  
\end{align}$$

Combining these three parts derived parts with the Taylor expansion of $V$ which we got previously, gives us the linearised equation for the potential energy as:
$$V \simeq V_{0}+\frac{1}{2}(K_{I}+K_{II}+K_{III})(q-q_{0})^{2}$$

We define the three coefficients as:
$$\begin{align}
K_{I} &= k\left( \frac{\partial\Delta l_{d}(q)}{\partial q} \right)^{2}\to \text{Generalised Stiffness} \\
K_{II}  &= mg\frac{ \partial^{2} h(q) }{ \partial q^{2} } \Bigg|_{q=q_{0}} \to \text{Gravitational Stiffness} \\
K_{III} &=k\Delta l_{0}\frac{ \partial^{2} \Delta l_{d}(q) }{ \partial q^{2} }\Bigg|_{q=q_{0}} \to \text{Souplesse}
\end{align}$$
The generalised stiffness is always a factor in the calculations, whereas the other two terms can and cannot appear based on certain conditions, e.g. the souplesse will not appear if the $\Delta l_{d}$ is linear.

The gravitational stiffness explains the case in which a gravitational forces is projected in such a way to counter other forces. Whereas the souplesse is the effect of the preload on the stiffness, like in the case we spoke about in the case of the tight-rope.

Again taking the initially stated problem as an example we have:
$$\begin{gather}
\Delta l = l\sin\theta \to \frac{\partial\Delta l}{\partial\theta} = L\cos(\theta) \\
h_{g} = -\frac{l}{2}\cos\theta \to \frac{\partial h_{g}}{\partial\theta}=\frac{l}{2}\sin\theta
\end{gather}$$
Looking at the original equation:
$$\widetilde{J}\ddot{\theta}+kL^{2}\sin\theta \cos\theta+\frac{mgl}{2}\sin\theta=0$$
Knowing that $\Delta l=L\theta$ and finding:
$$\frac{ \partial^{2} h }{ \partial \theta^{2} } \Bigg|_{\theta=0}=\frac{l}{2}\cos\theta \approx \frac{l}{2}$$
With knowing the linearisation of the kinetic and potential energy we can write:
$$\implies \widetilde{J}\ddot{\theta}+\left( \underbrace{ kL^{2} }_{ K_{I} }+\underbrace{ \frac{mgL}{2} }_{ K_{III} } \right)\theta=0$$
We get the linearised equation without having to go through the non-linear equation.

We linearise around the equilibrium point, that is why we take the $q=0$.
### Another example with 2 springs
This example had one interesting aspect where the top spring was deformed by $L\theta$, and this deformation contributed to the same deformation of the bottom spring, which was also extended by an additional $\frac{L\theta}{2}$















