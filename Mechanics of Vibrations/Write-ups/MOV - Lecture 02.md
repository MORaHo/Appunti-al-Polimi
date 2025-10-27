---
creation_date: 2025-02-20
tags: 
parent: 
child: 
share: false
---
# Lezione 2 - Lagrangian for a system with 1 degree of freedom

In the system we will be deriving the systematic approach for writing the equation of motion for a system with 1 d.o.f:

Throughout this lesson we will be using this system as an example for our calculations, it's simple and that is fine:

<!Diagram simple initial problem>

The first step to solving a problem normally would be to count the number of the degrees of freedom and choosing the proper (simplest) ones. In this case we already know and the counting would otherwise be normal if we didn't.

We also need to place our system of reference and the convention of the motion, we usually take it positive the forces that extend springs and anti-clockwise rotations as positive.

For Lagrange we need to fix a few quantities, our energies $E_{c},V,\delta^{*}\mathscr{L}$.

### Generation Derivation of Lagrange

The kinetic energy for every element can be taken from the Konig Theorem as:
$$E_{c} = \frac{1}{2}mv_{G}^{2}+\frac{1}{2}J_{G}w^{2}$$
The problem with this form of the kinetic energy, is that they are physical coordinates, we need to write them in a form where they become function of only the degrees of freedom.

Taking q as a general degree of freedom, and $\dot{q}$ and $\ddot{q}$ as it's derivatives with respect to time, we can write the kinetic energy of the system with respect to q as:
$$E_{c} = \frac{1}{2}m^{*} (q)\cdot \dot{q}^{2}$$
Where $m^{*}(q)$ is the reduced mass (or moment of inertia if $q = \theta$) which is a function of the degree of freedom.
This is the general way in which the kinetic energy can be written.

The system we are looking at is not system in which the mass varies by the degree of freedom, but in the case of a piston we find that the mass component of the kinetic energy DOES change with the angle of the crank-shaft.

Let's try to solve the Lagrangian of a general one degree problem, starting with the first two terms.

As we have said $E_{c} = \frac{1}{2}m^{*}(q)\cdot\dot{q}^{2}$, therefore:
$$\begin{align}
\frac{\partial E_{c}}{\partial \dot{q}} &= m^{*} (q)\cdot \dot{q} \\
\implies \frac{d}{dt}\left( \frac{ \partial E_{c} }{ \partial \dot{q} }  \right) &= m^{*} (q)\ddot{q} + \frac{\partial m^{*} (q)}{\partial q}\cdot \frac{ dq }{ dt } \dot{q} \\
&=m^{*} (q)\cdot \ddot{q} + \frac{\partial m^{*} (q)}{\partial q}\cdot \dot{q}^{2}
\end{align}$$
$$\frac{\partial E_{c}}{\partial q} = \frac{1}{2}\frac{\partial m^{*} (q)}{\partial q} \cdot \dot{q}^{2}$$

We therefore have:
$$\frac{d}{dt}\left( \frac{\partial E_{c}}{\partial \dot{q}} \right)-\frac{\partial E_{c}}{\partial q} = m^{*} (q)\cdot \ddot{q}+\frac{1}{2}\frac{\partial m^{*} (q)}{\partial q}\cdot \dot{q}^{2}$$
We see that now we only need calculate one derivative instead of the 3 we needed to originally. Additionally, since we derived this equation from a general formula, this is valid for all system with 1 degree of freedom, therefore for every body in the system we can plug in the appropriate values and we get the kinetic energy of the system.
If $m^{*}$ is not dependent on the degree of freedom then we only need the first part of the term.

The derivation of the kinetic energy basically gives us the inertia (linear or rotational) of the system, showing that the Lagrangian is actually an equation of dynamic equilibrium in which we balance either forces or the torques.

The next term relevant term is the potential energy (we will not be looking at the dissipation function in this lesson). 

The potential energy $V$ is composed of the gravitational force and elastic potential energy.

We can split $V$ in two components:

$$V = V_{k} +V_{g} = \frac{1}{2}k\Delta l^{2}+mgh_{G} = \frac{1}{2}k\Delta l^{2}(q)+mgh_{G}(q)$$
We write this for each body and every spring that is present in the system.

We can split the $\Delta l$ into a static and dynamic part doing:
$$V_{k} = \frac{1}{2}k\Delta l^{2}(q) = \frac{1}{2}k(\Delta l_{0}+\Delta l_{d}(q))^{2}$$
In this equation $\Delta l$ is the pre-load of the spring, the difference in it's natural length and length at static equilibrium, while $\Delta l_{d}$ is the dynamic elongation.

In our system the $\Delta l_{0}$ does not appear as the static equilibrium does not causa the spring to be compressed. On other hand, if the shaft were horizontal (as seen below) the mass of the shaft would activate the spring in the state of equilibrium.

<!Diagram>


Taking the derivative for Lagrange we get:
$$\frac{ \partial V_{k} }{ \partial q } = k\Delta l_{0}\cdot \frac{\partial\Delta l_{d}(q)}{\partial q} + k\Delta l_{d}(q)\cdot \frac{\partial\Delta l_{d}(q)}{\partial q}$$

Physically the last derivative if the variation of the length of the spring when we vary the degree of freedom.

The fact that the pre-load is considered explains a few thing physically. The best example is people being to walk on a tight rope. Even though the tight-rope does not have a flexional response, the initial tension in the rope allows us to stay up as the vector move up, and the additional dynamic partial derivative coefficient combined with the pre-load create a force pushing up, allowing us to stay up.

The gravitational potential term is $V_{g} = mgh_{G}(q)$, taking the derivative we get:
$$\frac{\partial V_{g}}{\partial q} = mg\cdot\frac{\partial h_{G}(q)}{\partial q}$$

The derivative is the kinematic relationship between the vertical position of the center of gravity and the degree of freedom.

While $h_{G}$ is different based on the system of reference, but when we derivate the derivative is the same, meaning that it doesn't matter.  

All these terms are once again general, so we can plug in the specific equations for our cases, without needing the re-derive anything.

#### Application

Let's apply these general derivations to the problem we initially proposed.

<!Diagram of initially proposed problem>

$$\begin{gather}
E_{c} = \frac{1}{2}m \underline{v}_{G}^{2}+\frac{1}{2}J\underline{w}^{2} \\
V = V_{k} +V_{g} = \frac{1}{2}k \underline{\Delta l}^{2} + mg\underline{h}_{g} 
\end{gather}$$

The first step is to transform the underlined variables to be a function of $\theta$ which is our degree of freedom:
$$\begin{gather}
v_{G}^{2} = \frac{L^{2}}{4}\dot{\theta}^{2} \\
w^{2} = \dot{\theta}^{2}
\end{gather}$$

For $\Delta l$ and $h_{g}$ it's useful to draw a simplified diagram to help us understand how to derive the quantities geometrically:
$$\begin{gather}
h_{g} = y_{g} = -\frac{L}{2}\cos(\theta) \\
\Delta l = x_{p} = L\sin(\theta)
\end{gather}$$

Therefore our energies are:
$$\begin{gather}
E_{c} = \frac{1}{2}\left( \frac{L^{2}}{4}m+J \right)\dot{\theta}^{2} \\
V_{k} = \frac{1}{2}k(L\sin\theta)^{2} \\
V_{g} = -\frac{mgL}{2}\cos\theta
\end{gather}$$
We take the 3 derivatives which we need for our general equations and then input them into the general equation:
$$\left( \frac{L^{2}}{4}m+J \right)\ddot{\theta} + kL^{2}\sin\theta \cos\theta + \frac{mgL}{2}\sin\theta = 0$$
This is the equation of motion for our system.

#### Other Example

What happens if we take the system but with the shaft and slide being horizontal?

<!Diagram horizontal>

The energy of the kinetic system since as long as the system is the same configuration the kinetic energy is independent of position.

The kinetic energy is:
$$E_{c} = \frac{1}{2}\underbrace{ \left( \frac{mL^{2}}{4}+J \right) }_{ \hat{J}\to \substack{\text{reduced}\\\text{moment/}\\\text{mass}} }\dot{\theta}$$

$$V = V_{k}+V_{g} = \frac{1}{2}k(\Delta l_{0}+\Delta l_{d}(\theta))^{2}+mgh_{G}(\theta)$$

In this case we find that:
$$h_{g} = y_{g} = \frac{L}{2}\sin\theta \to \text{not the same}$$
$$\Delta l_{d}(\theta) = x_{p}(\theta) = L\sin\theta\to \text{same}$$

The derivatives will be:
$$\begin{gather}
\frac{ \partial h }{ \partial q }  = \frac{L}{2}\cos(\theta) \\
\frac{\partial\Delta l_{d}}{\partial q} = L\cos(\theta)
\end{gather}$$

The Lagrangian will therefore be:
$$\hat{J}\ddot{\theta} + kL^{2}\sin(\theta)\cos(\theta)+k\Delta l_{o}L\cos(\theta) + \frac{mgL}{2}\cos(\theta) = 0$$
While before we could say that $\Delta l_{0}$ was 0, not we can no longer say that. This is an issue because it adds an unknown variable, meaning that we have 2 unknowns for 1 equation, therefore we need to determine one of the two through another equation, this will be the $\Delta l_{0}$.

There are different ways we can determine $\Delta l_{0}$, one is static equilibrium having removed the constraints on the body:

<!Diagram static equilibrium>

While this approach does work for systems in which there are not many bodies, it has the major downside of flipping signs. In this case we see that we find:
$$\Delta l_{0} = \frac{mg}{2k}$$
This is a problem since this implies that compression of the spring is a positively signed variable, but as we stated the stretching of a spring should be positively signed, therefore we are in violation of our sign convention.

The other (smarter) approach, and the one which we will be using, requires a recall of a propriety of the potential energy. The potential energy in a state of equilibrium has derivative 0, meaning that the terms should cancel our.

Therefore if we take the derivative of the potential energy, which we have already determined, and calculate it at the equilibrium we should be able to find the $\Delta l_{0}$, like so:
$$\begin{align}
\frac{ \partial V }{ \partial \theta }(\theta) &= 0 \\
\frac{ \partial V }{ \partial \theta }(0) &= kL^{2}\cancelto{ 0 }{ \sin\theta } \cos\theta + k\Delta l_{0}L\cos\theta + \frac{mgL}{2}\cos\theta \\
&=  k\Delta l_{0}L + \frac{mgL}{2} = 0 \\
&\implies  \Delta l_{0} = -\frac{mg}{2k}
\end{align} $$
We find the $\Delta l_{0}$ with the correct sign. The big issue with first approach in the sign, because if we take the $\Delta l_{0}$ with the correct sign, we find that the equation of motion to be:
$$\hat{J}\ddot{\theta} + kL^{2}\sin\theta \cos\theta =0$$
The static elastic potential term and the static gravitation potential term have cancelled our, something that would not happen with the result of the first approach because the sign would not be correct, and in fact they would sum together rather than cancel out.

In the next class we will look at how to linearize the equation and how to determine the linear equation directly without having to go through the non-linear equation.