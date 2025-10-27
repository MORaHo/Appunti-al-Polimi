---
creation_date: 2025-05-19
tags: 
parent: 
child: 
share: false
---
# Lezione 22 - Gas Dynamics and Dimensional Analysis

## de Laval Nozzle

A de Laval nozzle is the logical continuation of the analysis we did in the last lesson.
A de Laval nozzle is composed by the purely converging nozzle we looked at, and a diverging nozzle which allows the fluid to expand in supersonic conditions:

![](Pasted%20image%2020250519134829.png)

When varying the $P_{ext}$ to different values, we can trace the relative pressure at different points along the flow in a diagram relative to the initial internal pressure of the counter $P_{0}$:

![](Pasted%20image%2020250519135838.png)

We see three distinct behaviours of the fluid in the nozzle.
When $M_{out}<1$ the pressure will decrease until the throat as the flow is speeding up, then will increase again as the fluid is still subsonic, and therefore the divergent will flow the flow down.

This continues until $M_{out}=1$, at which point the flow has two options, it will either go to $P_{1}$ or $P_{2}$, if it remains subsonic it will go to $P_{1}$ , if it does supersonic it will drop to $P_{2}$.

In between $P_{1}$ and $P_{2}$, to be able to reach the given $P_{ext}$, the fluid will travel part of the diverging duct as a supersonic flow, then an event called normal shock will occur, causing the flow to spike in pressure and then to be subsonic, because this the fluid will increase in pressure and be able to reach the desired intermediary pressure.

For $M<0,3$, we call the element a Venturi duct.
For $0,3<M<1$, we call the element a compressible venturi duct.
For $M=1$, we call the element a sonic venturi duct.

For $P_{ext} \geq P_{1}$ we call it a incompressible, compressible or sonic venturi duct.
For $P_{ext}\leq P_{2}$, we call the element a full nozzle.

For $P_{1}<P_{ext}<P_{2}$,  the models we are using in this class do not provide any solution. To get this solution we need to eliminate the isentropic condition. The only way to reach the boundary conditions $P_{ext}$ is to not be isentropic and then the fluid will act subsonically and see a diffuser so will go to the wanted pressure. To be able to make a well posed problem, we use the boundary conditions $P_{0}$, $T_{0}$ and $P_{ext}$.

## Analysis of Thermal Machines

We are interested in seeing if similarity applies for our machines or if it's only for hydraulics.

If we keep the dimensionless parameters from hydraulic, changing on the the volumetric flow rate to the mass flow rate, we fin that although we are able to keep similarity at the start of the machine, by the end similarity is not maintained, and therefore overall similarity is lost.
Applying similarity like we did in hydraulics, means that we can only have similarity on one and not the other.

The loss of similarity is due to the change in density by the time the flow gets to the outlet, and that the velocity varies while the flow is inside the machine and we are not considering this in our equations.

#### Dimensionless Approach 
(We do not derived this in this course, but just see the results of it's application).

Instead of $\varphi$ we use the dimensionless mass:
$$\dot{m}_{AD} = \frac{\dot{m}\sqrt{ RT_{T,in} }}{P_{T,in}\cdot D^{2}}$$
We can still use the dimensionless work, but we have to make a change to be able to consider the velocity.

Generally we have written:
$$\psi = \frac{l_{s}}{n^{2}D^{2}}= \frac{\gamma}{\gamma-1}\cdot \mathcal{\frac{R}{\mathcal{M}}}T_{in}\left( \beta^{\frac{\gamma}{\gamma-1}}-1 \right)$$

The problem with this equation is that it considers machines to blackboxes where velocity does not change, and so it is wrong for our use case.
If we use the total value, instead of the static ones we are able to consider the correct velocity.
![](Pasted%20image%2020250519143916.png)

Starting from the energy balance we have:
$$\begin{align}
l+q&=\Delta h+\frac{\Delta v^{2}}{2}+g\Delta z  \\
&= \Delta\left( h+\frac{v^{2}}{2} \right) = \Delta h_{T}  \\
&=c_{p}(T_{T,out}-T_{T,in}) \\
&=c_{p}T_{T,in} \left( \frac{T_{T,out}}{T_{T,in}}-1 \right) \\
&=c_{p}T_{T,in}\left( \left( \frac{P_{T,out}}{P_{T,in}} \right)^{\frac{n-1}{n}}-1 \right)
\end{align}$$
We can define here the total pressure ratio, which is the pressure ratio between the total pressure at $1$ and $2$.
$$\beta_{T}= \frac{P_{T,out}}{P_{T,in}}$$
The dimensionless isoentropic work will therefore be:
$$\psi = \frac{l_{s}}{n^{2}D^{2}} = \frac{\frac{\gamma}{\gamma-1} \frac{\mathcal{R}}{\mathcal{M}}T_{T,in}\left( \beta_{T}^{\frac{\gamma-1}{\gamma}}-1 \right)}{n^{2}D^{2}}$$

To these two dimensionless parameters, we need to add at least another one. The one we add is the peripheral Mach number, which is defined as:
$$M_{U} = \frac{wD/2}{\sqrt{ \gamma RT_{T,in} }}$$
We also add the Reynolds number and $\gamma$, but we can easily remove them from our system, like we did with Reynolds in hydraulics.

In $\psi$, $\beta_{T}$ is the only parameter which doesn't appear in the other equations, so instead of using the complicated equation for $\psi$, we use $\beta_{T}$. We have the added bonus of imposing this value ourselves.

$$\beta_{T}=\beta_{T}(\dot{m}_{AD},M_{u},\cancel{ Re,\gamma,\text{SHAPE} })$$
$$\eta  =\eta(\dot{m}_{AD},M_{u},\cancel{ Re,\gamma,\text{SHAPE} })$$
### Practical Results

We can now look at some practical diagram of compressor function.
![](Pasted%20image%2020250519152407.png)

Looking at these diagram, we find that increasing $M_{u}$ increases the range dimensionless mass flow rate rate which the compressor can operate.

What we also see is that all the diagram becomes vertical at a certain point.
This occurs because of the shape of the blades which create a throat for the flow to pass through:

![](Pasted%20image%2020250519152704.png)

At the point at which $M=1$, at the throat a chocked flow is created and the pressure ratio immediately drops.

Creating a lone where this flow begins for all the curves gives us what is called the chocked flow llne.

We can also create a line for all the points at which the curves have the highest pressure ratio. This line is called the surge line.
We do not measure the operating condition before the surge line, because being able to operate in that area is not only not useful but also dangerous as the flow can become unstable if an operating condition is found there. While this instability is practically the same as for the hydraulics, in reality it is much more dangerous as in this case it can lead to explosions. So operating before the surge line is not recommended.

### Balje Diagram
Like we did for hydraulics, we can define $w_{s}$ and $D_{s}$ of each machine and create a Balje diagram.

While we can easily link the $w_{s}$ and $D_{s}$ to $\varphi$ and $\psi$. This insufficient to define a Balje diagram.
We need to define the link between $w_{s}$ and $D_{s}$ to $M_{u}$ to be able to define a diagram.

$$\begin{align}
M_{u}  &=\frac{wD/2}{\sqrt{ \gamma RT_{T,in} }} \\
&=w_{s} \frac{l_{s}^{3/4}}{\sqrt{ Q_{in} }} \cdot \frac{\frac{1}{2}D_{s}\sqrt{ Q_{in} }}{l_{s}^{1/4}} \cdot \frac{1}{\sqrt{ \gamma R }\cdot \sqrt{ T_{T,in} }} \\
&= w_{s}D_{s}\cdot \frac{1}{2} \sqrt{ \frac{\gamma R}{\gamma-1}T_{T,in}\left( \beta_T^{\frac{\gamma-1}{\gamma}}-1 \right) } \\
&=w_{s}D_{s}\cdot \frac{1}{2}\sqrt{ \frac{\beta_{T}^{\frac{\gamma-1}{\gamma}}-1}{\gamma-1} }
\end{align}$$
$$\implies M_{u} \propto w_{s},D_{s},f(\beta_{T},\gamma)$$
This equations tells us that once be define a point in the Balje diagram, and a compression ratio we have our Balje diagram.

Fixing a point, we fix $M_{u}$.




