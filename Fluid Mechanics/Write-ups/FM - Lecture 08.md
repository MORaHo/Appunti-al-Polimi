---
creation_date: 2025-03-07
tags: 
parent: 
child: 
share: false
---
# Lezione 08 - Theory though exercise

This will be a lecture with numbers, although it's a formally a lecture we will be learning through the lens of an exercise.

The text for the exercise in on WeBeep, it's the first of the Euler problems.

The fact that the machine is isoentropic means that there is no $l_{w}$. In many problem our machines will be so.

The machine is an axial fan, meaning that his has the objective of accelerating the fluid.

The 4 requests for this exercise are to find:
1. The ideal work exchanged
2. Total pressure rise
3. Pressure at the stator exit
4. Discharge section at atmospheric change

Our data is:
- $\hat{i}_{m} = \hat{i}_{x}\implies \text{Axial}\implies \vec{v}_{m}=\vec{v}_{x}$
- $D_{m} = 0.2m$
- $b= 0,05m$
- $Q = \frac{\dot{m}}{\rho} = \frac{0,5m^{3}}{s}$ $\to$ Volumetric, while for steady flows $\dot{m}$ is constant, $Q$ is not constant unless $\rho$ is also constant.
- $\rho=\text{const}=\frac{1.2kg}{m^{3}}$
- $v_{x} =\text{const}$
- $n=3000rpm$
- $\mid\Delta\beta\mid = 20^{o}$

We can model our system as:
![](Pasted%20image%2020250307171237.png)

Since both $\dot{m}\text{ and } Q= \text{const}$, and knowing that $v_{x}$ and $D_{m}$ are constant we find the $b$ has to be constant. When we draw a simplified representation for compressors we usually make a funnel which is decreasing in size. This is cause in most cases $\rho \neq \text{const}$ and therefore the blade height, $b$, will change accordingly to keep $\dot{m}$ constant. $D_{m}$ is constant because it is the mean diameter.

Let's start by looking at the blades and the deflection of our velocities.
![](Pasted%20image%2020250307184350.png)
Since this is an operating machine we want the relative velocity to become more axial, while in a motor machine we would want it to become less axial.
As an easy way to remember, air foils in a operating machine deflect in the same direction as the spinning of the rotor, whereas motor machine deflect in the opposite direction.

Looking at the velocities in the two sections:
![](Pasted%20image%2020250307192509.png)

The $\Delta\beta$ is the angle which we are given, in this case we have determined that the $\Delta\beta$ is the change in angle that makes the relative velocity more axial, if the machine were a motor machine then the angle would have increased. It's important to note that in this case are taking the downward direction as our 0 angle.

We can find the work which we imposed on the machine with the equation:
$$l = u_{2}v_{2t}-\cancelto{ 0 }{ u_{1}v_{1t} } = u\cdot v_{2t}$$
Our $v_{x}$ is constant and it is $15.9 \frac{m}{s}$.

We know that the axial term for the relative velocity, $w_{x}$, will be the same as $w_{x}$. We can also say that the tangential term is the same as the velocity with which the rotor is spinning.

Knowing the two components of $\vec{w}$ we can find the angle, and from there determine the angle of the relative velocity as it exists the rotor. Going from -63$^{o}$ to -43$^{o}$ .

Knowing this angle we can find the tangential component of the absolute velocity as it exists the rotor, and from there the specific work exchanged, which will be:
$$l = u\cdot v_{2t} = 518.2 \frac{J}{kg}$$


The stator straightens the fluid flow wasting energy, therefore the mechanical energy that we added will be conserved and converted into pressure as we has said $v_{x} =\text{const}$ and the stator removes any tangential component.


#### Section 0
Let's take a section "0" far from the machine in which the fluid is not in motion and the pressure is the atmospheric pressure.

#### Section 1
At section one we know that the velocity of the fluid will be $v_{x} = 15.9 \frac{m}{s}$ while the pressure is known.
To determine the pressure we can do a mechanical energy balance from $0$ to $1$.
Doing this energy balance we find that the work terms cancel our as we have not yet put any work in, while the system is also isoentropic so the water work will be null, additionally there is not difference in vertical position.
We therefore get the equation:
$$\frac{P_{1}}{\rho}+\frac{v_{1}^{2}}{2}=\frac{P_{0}}{\rho}+\frac{v_{0}^{2}}{2}$$
We can write this equation as:
$$\underbrace{ P_{1}+\frac{1}{2}\rho v_{1}^{2} }_{ P_{T_{1}} }=\underbrace{ P_{0}+\frac{1}{2}\rho v_{0}^{2} }_{ P_{T_{0}} }$$
On both sides of this equation we have what we can call, total pressure.

Imagine placing a rod in the flow of a fluid. There will be one point on the surface of this rod which the fluid will hit perpendicularly and stagnate, we call this the stagnation point. At the stagnation, since the fluid has stopped moving, all the mechanical energy which used to be kinematic is converted into pressure. The total is exactly this pressure which is the sum of the local pressure and the equivalent pressure to the kinematic energy.

The equation for the total pressure is valid if we are working with isoentropic transformations. What we are looking at is the incompressible case.

The mechanical pressure tells us that without work, wasted work or a change in vertical position the total pressure is conserved. If there is work the total pressure though is not conserved, but will increase rather by the work which we put in.

#### Section 2
At the second section we know the velocity of the fluid, the angle with which it exits, what we don't know is the pressure.

Writing a mechanical energy balance between 1 and 2 we get:
$$\rho l = P_{T_{2}}-P_{T_{1}}=\Delta P_{T}$$
The work which we put in, times the density is the difference in the total pressure.

From the total pressione in the second section we can derive the pressure and find that it is:
$$P_{2} =100303.6Pa$$
This is a little bit off, because we would assume that only the velocity would have increased, and that the pressure would probably have decreased due to the larger area at the exit of the rotor relative to the inlet area, but we are able to explain this.

Mapping two blades in a blade to blade view:
![](Pasted%20image%2020250307195124.png)

The area between the two blades increased through the duct, they are diverging.
There is a change in pressure, since while $v$ is accelerating $w$ is decelerating, and this decrease in $w$ causes the increase in pressure which we see.
We will be looking at the mathematical proof for this in the next lesson, where we will writing the equilibria for an observer on the rotor, which will kill the work exchanged and explain why the pressure increases as a result of the decrease in $w$.

#### Section 3

For the third section we need to draw the blade to blade view for the stator too:
![](Pasted%20image%2020250307195542.png)

In the stator the absolute velocity return to its initial $v_{x}$ component alone and the relative velocity does not exist.

Since $v_{3t}=0\implies v_{3x}=v_{x}$
We therefore get the:
$$\mid \vec{v}_{3}\mid = \mid \vec{v}_{1}\mid$$
Since stator's don't exchange work we don't need to write the mechanical energy balance since we know that:
$$P_{3T}=P_{2T}$$
$$\implies P_{3}=P_{2T}-\frac{1}{2}\rho v_{3}^{2} = 100470\;Pa$$
The mechanical energy which the rotor exchanged with the fluid, has been completely converted into a change in pressure.

To find our final object of interest, we need to write the mechanical energy balance between the third section and the outlet section, from which we get:
$$\begin{gather}
P_{3T}=P_{T,\text{out}}=P_{\text{out}} +\frac{1}{2}\rho v_{\text{out}}^{2}=P_{0}+\frac{1}{2}\rho v_{\text{out}}^{2} \\
P_{3T} = P_{2T}=P_{1T}+\rho l=P_{0T}+\rho l \\
\implies \cancel{ \underbrace{ P_{0T} }_{ P_{0} } } + \cancel{ \rho } l=\cancel{ P_{0} }+\frac{1}{2}\cancel{ \rho } v_{\text{out}}^{2} \implies  \boxed{ l=\frac{1}{2}v_{\text{out}}^{2}
 }\end{gather}$$

Since it's a snow cannon this equation is correct, we have exchanged work to accelerate a still fluid at section 0 to fluid in motion at the outlet.



