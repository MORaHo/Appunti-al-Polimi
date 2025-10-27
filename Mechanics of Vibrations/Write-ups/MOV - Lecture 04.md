---
creation_date: 2025-03-08
tags: 
parent: 
child: 
share: false
---
# Lezione 04 - Damping Behaviour (without external forces)

We will look at what to do with the linearised equation.

Taking the simple system:
![](Pasted%20image%2020250309170836.png)

The graphical representation for the dynamic equilibrium:
![](Pasted%20image%2020250309171311.png)
The linearised equation of the free this system is:
$$m\ddot{x}+ r \dot{x}+kx=0$$
To be able to solve the equation for our case we need the initial condition of the system, defining:
$$\begin{cases}
q(0)=q_{0} \\
\dot{q}(0)= v_{0}
\end{cases}$$

The motion of the system cycles, as the kinetic energy and potential energy are converted back and forth.

In an ideal system the motion would be perpetual and sustained forever, but in a system with dissipation and dampening we have an exponential decrease in the motion:

![](Pasted%20image%2020250309173808.png)

With the dissipation, throughout every cycle the mechanical energy of the system reduces, tending to a 0.

#### Solution for an undampened system
Without the dampening our equation of motion is:
$$m\ddot{x}+kx=0$$
The solution to the system takes the form:
$$\begin{gather}
x(t) = x_{0}e^{ \lambda t } \\
\dot{x}(t) = \lambda x_{0}e^{ \lambda t } \\
\ddot{x}(t) = \lambda^{2}x_{0}e^{ \lambda t }
\end{gather}$$

Inputting this into the equation of motion we get:
$$(\lambda^{2}m+k)x_{0}e^{ \lambda t }=0$$
The first solution $x_{0}=0$ is the static solution due to it being the equilibrium. The other solutions are:
$$\begin{gather}
\lambda^{2}m+k=0 \\
\implies \lambda^{2}=-\frac{k}{m} \\
\implies \lambda_{1,2} =\pm i\sqrt{ \frac{k}{m} }=\pm iw_{0}
\end{gather}$$
$w_{0}$ is the circular frequency. It's a mechanical property of the system since it's linked to both the mass and the stiffness of the system, while not being linked to the initial condition.

Due to this coefficient, we find that the high mass leads to low frequency system, whereas high stiffness means higher frequency.

Given the two $\lambda$ values, we get the solution:
$$x(t) = x_{1}e^{ i\omega_{0}t }+x_{2}e^{ -i\omega_{0}t }$$
The solution becomes:
$$x(t) = A\cos(\omega_{0}t+\varphi)$$
Mapping the history therefore we get:
![](Pasted%20image%2020250309190241.png)

In this case $T$ is the period of the cycles. We can get the natural frequency of the system taking the inverse of the period.

We know that:
$$\omega_{0}=\frac{2\pi}{T}$$
## Solution for system with damping (without external forces)

Again for a system with damping we need the initial conditions:
$$\begin{cases}
x(0)=x_{0} \\
\dot{x}(0)=v_{0}
\end{cases}$$

Like before we can take the exponential solution and input it into the equation of motion for the system:
$$(\lambda^{2}m+\lambda r+k)x_{0}e^{ \lambda t }=0$$
Once again the $x_{0}=0$ is the static solution and we forego developing it.

The other solution is:
$$\begin{gather}
\lambda^{2}m+\lambda r+k=0 \\
\implies \lambda^{2}+\lambda  \frac{r}{m}+\underbrace{ \frac{k}{m} }_{ w_{0}^{2} }=0 \\
\implies \lambda_{1,2}=-\frac{r}{2m}\pm \sqrt{ \left( \frac{r}{m} \right)^{2}-\omega_{0}^{2} }
\end{gather}$$
We see that the solution will take different forms depending on the determinant of the equation.

Before we develop the different solutions, let's define some terms which will help us generalise our solution.

We know that when the determinant is null:
$$\frac{r}{2m}=\omega _{0}\implies r=2m\omega _{0}$$
We define this value of $r$ for which the determinant is cancelled as $r_{crit} = 2m\omega_{0}$.

We can then define the dimensionless dampening as:
$$h = \frac{r}{r_{crit}}$$
Since $r_{crit}$ is defined by our system and independent of $r$ we can determine how dampened our system is relative to it's critical value.

Using this value we can rewrite our solution as:
$$\begin{align}
\lambda_{1,2}&=-\frac{r\omega_{0}}{2m\omega_{0}}\pm \sqrt{ \left(\frac{r\omega_{0}}{2m\omega_{0}}\right) ^{2}-\omega_{0}^{2}} \\
&= -h\omega_{0}\pm \sqrt{ h^{2}\omega_{0}^{2}-\omega^{2}_{0} } \\
&=\omega_{0}(-h\pm \sqrt{ h^{2}-1 })
\end{align}$$
This new form simplifies our determination of the solutions, since we know that:
$$\begin{gather}
\Delta>0\implies h>1\implies r>r_{crit} \\
\Delta=0\implies h=1\implies r=r_{crit} \\
\Delta<0\implies h<1\implies r<r_{crit}
\end{gather}$$
From here we can start solving our system.

### $\Delta>0\implies h>1$

This is a system that has so much damping that it's more than $r_{crit}$.
Since $h>1\implies\lambda_{1,2}\in\mathbb{R}^{^{-}}$.

Our solution, $x(t)=x_{1}e^{ \lambda_{1}t }+x_{2}e^{ \lambda_{2}t }$, for $t\to \infty$ and since $\lambda_{1,2}<0$ tends to 0, with the motion:
![](Pasted%20image%2020250309192154.png)

The system does not oscillate, going directly to equilibrium, and crossing the zero at least once.

### $\Delta=0\implies h=1\implies r=r_{crit}$
In this case the $\lambda$ is singular since $\lambda_{1}=\lambda_{2}=-h\omega_{0}$, the solution will therefore be:
$$x(t) = x_{1}te^{ \lambda t }+x_{2}e^{ \lambda t }$$
This solution takes the same form as the previous solution which reaches equilibrium the quickest.

### $\Delta<0\implies h<1\implies r<r_{crit}$

The $\lambda$ for this case are:
$$\lambda_{1,2}=-\alpha\pm i\omega$$
Although mathematically $\omega \neq\omega_{0}$, they are so close that they can be confused and we will do so.

Therefore the solution will be:
$$x(t)=x_{1}e^{ (-\alpha+i\omega_{0})t }+x_{2}e^{ (-\alpha-i\omega_{0})t }$$
Where $\alpha=k\omega_{0}$
We can write the equation as:
$$x(t) = e^{ -\alpha t }(x_{1}e^{ i\omega t }+x_{2}e^{ -i\omega t })$$
$$x(t) = e^{ -\alpha t }A\cos(\omega_{0}t+\varphi)$$
This is like solution which we saw in the beginning for the undampened system, but now with the added dampening factor.
This solution is therefore represented like:
![](Pasted%20image%2020250309201237.png)
Which is the same as we said it would look like.

## Determining the damping

Since in many cases the damping is difficult to define and therefore difficult to precisely impose. What we generally do is generate a dampener, and then measure it's $r$ by taking two points at a set number of periods, which gives us an idea of the $r$ which we can then calibrate to fit what we want.

Take for example the system:
![](Pasted%20image%2020250309201620.png)

Assuming that we know that $h<1$, how do we get $r$?

We can write:
$$x(t)= |X\mid e^{ -k\omega_{0}t }\cos(\omega_{0}t+\varphi)$$
If we know the period, as well as any two $x_{1}$ and $x_{2}$:
![](Pasted%20image%2020250309201823.png)

The ratio between the two $x$s will be:
$$\begin{align}
\delta = \frac{x_{t}}{x_{t+T}}&=\ln\left( \frac{x_{i}}{x_{i+1}} \right) \\
&=\ln\left( \frac{\cancel{ \left|x \right| }e^{ -k\omega_{0}t }\cancel{ \cos(\omega t+\varphi) }}{\cancel{ \left|x \right| }e^{ -k\omega_{0}\left(t+T\right) }\cancel{ \cos(\omega (t+T)+\varphi) }} \right) \\
&=\ln(e^{ h\omega_{0}T }) \\
&=h\omega_{0}T
\end{align}$$
$$\implies h=\frac{\delta}{\omega_{0}T}=\frac{\delta}{2\pi}$$
Since we know $r_{crit}$ we can therefore find $r$.
In reality we would take the difference over many different cycles as a way of reducing the error, the only thing that change is that we have to write $\delta=h\omega_{0}cT$, where $c$ is the number of cycles over which we are averaging.