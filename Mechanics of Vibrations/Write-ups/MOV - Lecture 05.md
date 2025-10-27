---
creation_date: 2025-03-22
tags: 
parent: 
child: 
share: false
---
# Lezione 5 - Periodic Forced Motion

In this lecture we will look at what happens when a 1-degree system is forced to move by an external force.

Forces work, putting energy into the system. This means that we are interested in the particular solution to the different equation, unlike the general component which we looked at last time.

Let's take a system like this:

![](Pasted%20image%2020250322112327.png)

The linearised equation of motion for this system will be:
$$m\ddot{x}+r \dot{ x}+kx = F$$

The force component can come in two forms:
- Time-dependent, i.e. $F(t)$, which we will look at today
- State-dependent, i.e. $F(x,\dot{x})$, which we will look at in the next lecture

The response will of the system will always take the form:
$$x(t)=x_{g}(t)+x_{p}(t)$$
The general term, $x_{g}(t)$, is what we saw in the last lecture, and it is the system's response to the start of the motion.

The particular term is the term which we are interested in now, as it determines the system's response to external forces, and will also be the main term present if the general term dies out.
## Time-Dependent Forces

Time-dependent forces can come in different forms:
- Constant
- Sinusoidal
- Periodic
- Aperiodic
- Random

### Constant Forces

Depending on the dampening of the system, the specific response to the system to a constant forms can take 3 forms:

![](Pasted%20image%2020250322120932.png)

We aren't interested in constant forces are they only imply a change in the equilibrium position and the motion towards that new position.

### Sinusoidal, Periodic and Random Forces

A sinusoidal force is force that follows a singular sinusoidal path, as example of this is a mass is turned around what is not it's center of mass, like:

![](Pasted%20image%2020250322121347.png)

The force will sinusoidally increase and decrease, as a function of it's position.

A periodic force is a force that can be seen as the sum of two or more harmonic signals, like:

![](Pasted%20image%2020250322121512.png)

The extreme case of a periodic force is a random force. Random signals can be described by the length and height of their waves, therefore they are like periodic signals where an infinite number of harmonic are added together to create random noise. 

![](Pasted%20image%2020250322123338.png)

The fact that these types of signals are a sum of sinusoidal signals, means that we can apply a Fourier transform to all three and describe them using a spectra.

A random signal taken at random will have an emission spectrum with a form like:
![](Pasted%20image%2020250322123500.png)

For a road, which can be seen as a random signal, the shape of the spectra will change based on the speed with which we travel over it, as at a higher speed the time it takes us to cover what was the same distance is now lower, so the signal will be squeezed to the left.

### Response to a Sinusoidal Signal

If we can solve the linear system for one general sinusoidal signal, we can define the transfer function, and generalise it to any periodic and random signal.

![](Pasted%20image%2020250322125844.png)

The tentative solution for a sinusoidal force is:
$$x_{p}= X_{0}e^{ i\Omega t }$$

Putting this into our system we get:
$$(-\Omega^{2}m+i\Omega r+k)X_{0}\cancel{ e^{ i\Omega t } }=F_{0}\cancel{ e^{ i\Omega t } }$$
![](Pasted%20image%2020250322131631.png)

The transfer function defines how big the $X_{0}$ is, and how large the phase different between $F_{0}$ and $X_{0}$ is. 

Re-writing the function we get:
$$X_{0}=\frac{F_{0}}{-\Omega^{2}m+i\Omega r+k}=F_{0} \cdot  \underbrace{ \frac{1}{-\Omega^{2}m+i\Omega r+k} }_{ \substack{\text{Mechanical}\\\text{Impedence}} }$$

While this is the transfer function, we want to write it in the dimensionless form to be able to define a general solution.

$$\begin{align}
X_{0}&=\frac{F_{0}/k}{-\Omega^{2} \frac{m}{k}+i\Omega  \frac{r}{k}+1} \\
&=\frac{X_{\text{static}}}{1-\frac{\Omega^{2}}{w_{0}^{2}}+i\Omega  \frac{2mr}{2mk}}
\end{align}$$
We need to fix $i\Omega\frac{2mr}{2mk}$ to make it become dimensionless. We know that $\frac{m}{k}=\frac{1}{w_{0}^{2}}$. Knowing also that $a= \frac{\Omega}{\omega_{0}}$ and $h=\frac{r}{r_{crit}}=\frac{r}{2m\omega_{0}}$. We can therefore write:
$$i\Omega  \frac{2mr}{2mk}=i\Omega  \frac{2r}{2m\omega_{0}^{2}} = i \frac{\Omega}{\omega_{0}}\cdot \frac{2r}{2m\omega_{0}} = i\cdot 2ah$$
From here we get the dynamic amplification of our force as:
$$\implies \frac{X_{0}}{X_{\text{static}}} = \frac{1}{1-a^{2}+i2ah}$$

We can map the module of the dynamic amplification to $a$, and we get the general result:
![](Pasted%20image%2020250322134427.png)

We can say a few things about this graph.
First is the static case, since there is not dynamic load, there is no amplification, and therefore the dynamic amplification is 1 as it doesn't change anything for us.
We call the zone largely prior to a = 1, the quasi-static behaviour.
The zone around $a=1$, is called resonance area, while the zone after $a=1$ is called the seismographic zone.

We see the while line that tends to infinity. This is the case for $h=0$, meaning when we have no dampening, we will see why this happens. In general though, when we have dampening, the dynamic amplification peaks at $\frac{1}{2h}$ (at $a=1$). The dynamic amplification even at $a=1$ can be lower that 1.

In the seismographic case, the system acts like a low pass filter, this is because the system cannot follow the force so it ends up filtering our the low frequency and only registering the higher frequency components of the force.

We can also map the phase between the force and the system's response alongside the function $a$ and we get:

![](Pasted%20image%2020250322135607.png)

The phase angle will always be negative, this is because the response of the system cannot precede the force (it cannot predict that future), as the force has not been applied therefore the energy is not present to cause the motion.
Again in the is diagram, the while line is the undampened case.

### Analysis of the System's Response.

We can see the response of the system as a result of the force equilibrium.
We can device the response force of the system into 3 components, the inertial, dampening and elastic components. Therefore the equilibrium of our system will be:
$$\vec{F}_{i}+\vec{F}_{v}+\vec{F}_{s}+\vec{F}_{e}=0$$
Where $\vec{F}_{s}$ is the elastic force, and $\vec{F}_{e}$ is the external force.

In the quasi-static case our forces can be mapped as:

![](Pasted%20image%2020250322142028.png)
The angle should be 0, but fore visual purposes it was drawn at a large angle.
We can see that when we have $a<1$, the external forces are balanced by the spring forces, this also explains why is it not too far from the static case.

In the seismographic case we have:

![](Pasted%20image%2020250322142220.png)

Again, this angle should be closer to $-\pi$, but isn't for visual purposes.
In this case we see that the external forces are balanced our by the inertial forces.

Finally in the resonance case we have:

![](Pasted%20image%2020250322142519.png)

We see that the forces are balance our only by the dampening forces. This also explains why, when we have not dampening, the dynamic amplification does to infinity, since there is not force to contrast the external forces we are endlessly adding more energy.

All the angles are derived from the $\varphi$ vs. $a$ diagram that we have drawn.

