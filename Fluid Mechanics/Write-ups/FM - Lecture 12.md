---
creation_date: 2025-03-18
tags: 
parent: 
child: 
share: false
---
# Lezione 12 - Machine Classification Curves, Aerodynamics Review and Cavitation

## Machine Classification Curves

The result of this analysis is not derived from a theoretical basis, but rather are experimental resuslts.

As we have seen for each machine we can draw the $\psi$ or $\eta$ vs. $\varphi$ curves.
![](Pasted%20image%2020250318195938.png)
Mapping the BEP for different machine we see not trend, as expected.

What we can do is eliminate one of the term, like $D$ and define a "specific" of $n$, as such:

$$\begin{align}
\varphi &= \frac{Q}{nD^{3}} \\
\psi &= \frac{gH}{n^{2}D^{2}} \\
\implies D &= \frac{\sqrt{ gH }}{n\sqrt{ \psi }} \\
\implies \varphi &= \frac{Q}{n}\frac{n^{3}(\sqrt{ \psi })^{3}}{\sqrt{ gH }^{3}} = n^{2} \frac{Q}{(gH)^{3/2}}\cdot \psi^{3/2}
\end{align}$$
Isolating the dimensionless terms we get:
$$\sqrt{ \frac{\varphi}{\psi^{3/2}} } = \frac{n\sqrt{ Q }}{(gH)^{3/4}}=n_{s}\to \text{specific angular speed}$$

We can also define a counterpart:
$$w_{s} = \frac{w\sqrt{ Q }}{(gH)^{3/4}}$$
Using this we can draw a curve compared to $w_{s}$:
![](Pasted%20image%2020250318200451.png)

Plotting the $\eta_{\text{BEP}}$ and $w_{s,\text{BEP}}$ for each machine a on graph we get:
![](Pasted%20image%2020250318200534.png)

### Why do we get this result?
Let's consider  a distorted similarity, in which the kinematic similarity is maintained (meaning the triangles are similar), but the geometric similarity is non-similar (this is common in practice).

Due to the kinetic similarity we know that every speed is proportional in come way to the tangential speed of the rotor, therefore:
$$v_{i}\propto \vec{u}\implies \begin{cases}
v_{m}\propto \vec{u} \\
v_{t}\propto \vec{u} \\
w\propto \frac{\vec{u}}{D} \\
Q\propto v_{m}Db \propto \vec{u}Db \\
gH\propto u^{2}
\end{cases}$$
We can therefore write:
$$w_{s} = \frac{w\sqrt{ Q }}{(gH)^{3/4}} \propto \frac{\cancel{ u }}{ D } \frac{\sqrt{ \cancel{ u }\cancel{ D }b }}{\cancel{ \left(u^{2}\right)^{3/4} }}\propto \sqrt{ \frac{b}{D} }$$
This result implies that $w_{s}$ is a shape parameter. It also tells us that we can roughly maintain kinematic similarity as long as this parameter isn’t too different between machines.

From the next lesson on $w_{s }$ implies $w_{s,BEP}$.
#### Radial Machine Example
Let's see what is result means really.

For radial machines we have:
![](Pasted%20image%2020250318201155.png)
$\eta$ is low at low $w_{s\text{BEP}}$ (meaning that the machine for low $w_{s\text{BEP}}$ has low $\eta$), since $w_{s,\text{BEP}}\propto \frac{b}{D}$. So for low $w_{s,\text{BEP}}$, $b$ will be small relative to $D$.
This curve tells us the limit for the best machine we can design, given a $\omega_{sBEP}$. So in radial machines there is an inherent penalty for low $\omega_{s}$ machines. This is because a low $w_{s,BEP}$ , means a low $\frac{b}{D}$ ( meaning our channel in the rotor will be a thin and long channel ). Machines with low $\frac{b}{D}$, are longer and shorter in terms of blade height, causing  lower efficiency since they tend to have greater losses due to friction ( like a duct with high $\frac{L}{D}$).

![](Pasted%20image%2020250318201559.png)
A higher $w_{sBEP}$ means a thicker duct, so less losses.
Therefore in general, longer and thinner tubes are less efficient, then channel which are shorter and thicker.

#### Radial vs. Axial (Why are axial machines better at higher $w_{s}$)

![](Pasted%20image%2020250318202147.png)

Radial machines require too much curve at higher $\omega_{s}$, this causes separation, ergo lower efficiency. Increasing the divergence to allow more flow, causes more efficiency loss. While axial machines suffer from neither of these two issues, so for higher $\omega_{s}$ and therefore higher $Q$ they are more efficient.

### Cordier Diagram

What happens if we eliminate $n$ rather than $D$?

We get:
$$\frac{D(gH)^{1/4}}{\sqrt{ Q }}=D_{s}\to \text{Specific Diameter}$$
Writing the curves for $\eta$ and $D_{s}$, and representing mapping all the $\eta_{BEP}$ and $D_{s,\text{BEP}}$ we get:

![](Pasted%20image%2020250318202643.png)

If we then decide to map the $w_{s,BEP}$ with the $D_{s,BEP}$, we find what is called the Cordier Diagram:

![](Pasted%20image%2020250318202808.png)

This line is still valid today, even though technologies have improved and $\eta$ has increased.

Given $Q,H$ and $w$, we can get $w_{s}$, from there we can get $D_{s}$, and the type of machine:
$$D_{s}=\frac{D(gH)^{1/4}}{\sqrt{ Q }}$$
From this equation we immediately find the size $D$ of the machine. We are able to get one of our main parameters from just one equation.

From the work of Cordier, Balje added iso-efficiency areas describing the change in efficiency if someone moved further from the Cordier line:

![](Pasted%20image%2020250318203202.png)

These areas a not representative of the real diagram. In the real diagram, the penalty for axial machines is lower relative to the penalty associated to radial machines.

### Limit of Similarity Laws
In general, when we design a machine we tend to have many constraints the affect our efficiency when scaling up or down, the main constraint is the technology that we have at our disposal.

Due to the technological constraints, the geometrical symmetry tends to be violated. This is most common when scaling down. While we would like to be able to reduce factors like surface roughness as the rest of the machine scales down, at some point we hit a technological limit and are not longer able to do so. Another common factor is the space between the tip of the blades and the cover, which at some point we are no longer able to decrease.

The opposite is true when scaling up. In general we tend to keep the factors which cause losses, like surface roughness and aforementioned space between cover and blade tip, because there is no reason to increase them unless, we have to. Their increased would cause an increased in losses so if we are able to, we keep them the same, and improve the efficiency.

Therefore, small machines are more penalised by the geometry of the machine and the associated size of effect.

## Aero/Hydro-Dynamics Review

### Round Surface

Placing a round object in a fluid flow with a high Reynolds number we get:

![](Pasted%20image%2020250318204127.png)

The pressure diagram of the fluid around the object will not return to the initial value, as the detachment of the fluid from the surface of the object stops the pressure from rising again back to it's original value.

![](Pasted%20image%2020250318204305.png)

Along the surface of the object we have a boundary layer generated by the adherence condition of the fluid and the associated friction:
![](Pasted%20image%2020250318204411.png)

If $\frac{ \partial P }{ \partial x }>0$, we call it an adverse pressure gradient, this causes $\frac{ \partial v_{x} }{ \partial y }$ to decrease.
While if  $\frac{ \partial P }{ \partial x }<0$, we call it a favourable pressure gradient, and this causes $\frac{ \partial v_{x} }{ \partial y }$ to increase.

This pressure gradient matters, because at some point on the back of the flow, the $\frac{ \partial v_{x} }{ \partial y }=0$, this means that the friction with the surface will be 0, and this is the point at which the flow will detach from the surface.

This detachment causes drag, which decelerates our motion massively.
To reduce these resistive effects, we can extend our shape to fill the volume which is taken up by the wake, reducing the curvature and therefore the pressure gradient.

### Aero/Air/Hydro-foil

![](Pasted%20image%2020250318205523.png)

This shape is called the airfoil/aerofoil/hydrofoil.

The map of the pressure along the surface of the body is:

![](Pasted%20image%2020250318205635.png)

We do not use $\hat{i}_{x}$ or $\hat{i}_{y}$, since the special directions are irrelevant, so we take the direction of the fluid flow, with it being a more relevant direction.

The aerodynamic forces on the surface are:
$$\vec{F}_{\text{aero}} = \oint\vec{\sigma}hdl=\vec{F}_{aero,t}\hat{i}_{t}+F_{aero,n}\hat{i}_{n} = \begin{cases}
F_{aero,t} = \oint\vec{\sigma}\cdot \hat{i}_{t}hdl=D \\
F_{aero,n}=\oint\vec{\sigma}\cdot \hat{i}_{n}hdl=L
\end{cases}$$

Drag is composed of the pressure draw causes by the change in the pressure across the body and the friction losses.

### Airfoil with angle of attack

If we apply an angle of attack to either the fluid or the airfoil we generate a pressure side and a suction side.

![](Pasted%20image%2020250318211041.png)

![](Pasted%20image%2020250318211051.png)

This generation of a pressure and suction side, is a reason by we have cavitation.

We can represent the pressure difference along the body as:
![](Pasted%20image%2020250318211202.png)
This pressure difference will generate like, and this is exactly why planes are able to fly.
### Cambered Airfoil

A cambered airfoil takes the form:
![](Pasted%20image%2020250318211325.png)

Even without an angle of attack, the form generates lift.

Depending on the angle of attack we get different amount of drag and lift:

![](Pasted%20image%2020250318211431.png)

Where:
$$c_{L}=\frac{L}{\frac{1}{2}\rho v_{\infty}^{2}ch}$$
$$c_{D} = \frac{D}{\frac{1}{2}\rho v_{\infty}^{2}ch}$$

Stall occurs when we have increase $\alpha$ too much, causing the flow to start to detach.

## Cavitation
Cavitation is an expression in our rotor of what is happening to our fluid (typically water) while it passes through our rotor.

While the fluid passes through the rotor it can values different from just the ones between the pressure at the inlet and outlet, as we have seen in come of the pressure diagrams.

The pressure within the blade region can change to be very different from inlet and outlet, and can even be negative (suction).

Looking at phase diagrams:

![](Pasted%20image%2020250318211956.png)

As the fluid moves from the in flow, it reach a region where it the pressure is $P_{min}$. If in doing so the fluid passes it's saturation line, a second gaseous phase of the fluid will begin to form. This is cavitation.

Once on bubble forms, the fluid will have to go around that as well, reducing the pressure even further and causing more gas to be produced. This causes a chain reaction, which only ends as the bubbles detach from the blade and enter regions of higher pressure (as the pressure will inevitable have to increase again).

The bubbles do not last long. As the bubbles move and the pressure increases, in most cases this will cause the fluid to re-enter the single phase area and turn fully liquid again.

In some cases, the bubble will not turn back but rather will shrink. For these shrunk bubbles, once the pressure is to great for the bubble to sustain, it will implode. If this implosion occurs too close to the blade, the implosion causes erosive damage to the blade, weakening it.

The presence of pressure and suctions zones, is the reason for the occurrence of cavitation.



