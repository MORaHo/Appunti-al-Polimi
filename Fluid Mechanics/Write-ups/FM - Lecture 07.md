---
creation_date: 2025-03-06
tags: 
parent: 
child: 
share: false
---
# Lezione 7 - Turbo-machinery Work

From the mixed flow machines, we get a model which we can get the axial and radial equation for the specific work.

We use the Fu 3 plane model, focusing particularly on the meridional and blade to blade surfaces.

The meridional view of turbomachinery is:

![](Pasted%20image%2020250306114321.png)
While the blade to blade view is:

![](Pasted%20image%2020250306114449.png)
The deflection causes the exchange in work, we can therefore assume there will some troque and we will have angular momentum.

The tangential direction is going in and out of the view.
The dashed green line is the boundary of the control volume.

We use shrouded/closed impeller/rotor, this will simplify our model since it puts a wall at the top of our blades, and since open/unshrouded rotors will generate losses in the gap between the blade and cover.

To be able to figure out the forces exchanged (and therefore the work) by writing new balances of linear and angular momentum.

The control volume that we use will be far from the front and back of the blades, enough such that there is not flow gradients. With in the volume we also make holes for the blades since we will use the blade surfaces are part of our solid surfaces.
We can therefore imagine a volume of revolution which is bounded by the surface of the blades, the hub and shroud as well as the inlet and outlet surfaces.

For nomenclatures:
$$\begin{gather}
\Omega=\text{control volume} \\
\partial\Omega = \underbrace{ A_{\text{in}}+A_{\text{out}} }_{ A_{\text{mat}} }+\underbrace{ A_{\text{hub}}+A_{\text{shroud}}+A_{BL} }_{ A_{w} }
\end{gather}$$

## Balance of Momentum (Linear)

We will first write the balance of linear momentum, where $\vec{\Pi}$ is the linear momentum:
$$\frac{d\vec{\Pi}}{dt} = \vec{F}=\int\limits_{\Omega(t)}^{} \rho \vec{f} \, dV +\int\limits_{\partial\Omega(t)}^{} \vec{\sigma} \, dA $$
Let's develop the left side of this equation:
$$\begin{align}
\frac{d}{dt}\underbrace{ \int\limits_{\Omega(t)}^{} \rho \vec{v} \, dV }_{ \text{momentum} } &\underbrace{ = }_{ \text{RTT} } \frac{d}{dt}\int\limits_{\Omega}^{} \rho \vec{v} \, dV+\int\limits_{A_{\text{in}}+A_{\text{out}}}^{} \rho \vec{v}(\vec{v}\cdot \vec{n}) \, dA  \\&\;\;\,\,=\frac{d}{dt}\int\limits_{\Omega}^{} \rho \vec{v} \, dV+\int\limits_{A_{\text{out}}}^{} \vec{v}\rho \underbrace{ (\vec{v}\cdot \vec{n}) }_{ v_{m,\text{out}} } \, dA + \int\limits_{A_{\text{in}}}^{} \rho \vec{v}\underbrace{ (\vec{v}\cdot \vec{n}) }_{ -v_{m,\text{in}} } \, dA    \\
&\;\;\,\,= \frac{d}{dt}\int\limits_{\Omega}^{} \rho \vec{v} \, dV+\int\limits_{A_{\text{out}}}^{} \vec{v}\rho  v_{m,\text{out}} \, dA - \int\limits_{A_{\text{in}}}^{} \rho \vec{v}v_{m,\text{in}} \, dA
\end{align}$$
We have to use the RTT since we have to take the derivative in a space that is variable in time. On the other hand, for the right hand of the equation, we are not taking the derivative, and therefore we can only find $t=\tau$ such that $\Omega(\tau) = \Omega$, and therefore it is:
$$\int\limits_{\Omega(t)}^{} \rho \vec{f} \, dV +\int\limits_{\partial\Omega(t)}^{} \vec{\sigma} \, dA  \underbrace{ = }_{ t=\tau }\int\limits_{\Omega}^{} \rho \vec{f} \, dV+\int\limits_{\partial\Omega}^{} \vec{\sigma} \, dA  $$

Putting things together and applying the lumped parameter approach we get:
$$\frac{d}{dt}\int\limits_{\Omega}^{}\rho \vec{v}  \, dV+\int\limits_{A_{\text{out}}}^{} \vec{v}\rho \cdot v_{m} \, dA-\int\limits_{A_{\text{in}}}^{} \vec{v}\rho \cdot v_{m} \, dA = \frac{d}{dt}\int\limits_{\Omega}^{} \rho \vec{v} \, dV + \underbrace{ \vec{v}_{\text{out}}\dot{m}_{\text{out}}-\vec{v}_{\text{in}}\dot{m}_{\text{in}}  }_{ \text{Momentum flux} }   $$


The meridional velocity is not constant but we will use $\dot{m}$ which is constant and the evaluation of the change remain in the fact that we need to evaluate in $A_{\text{in}}$ and $A_{\text{out}}$.

We can develop the forces as:
$$\vec{F} = \int\limits_{\Omega}^{} \rho \vec{g} \, dV + \int\limits_{A_{\text{in}}+A_{\text{out}}}^{} \underbrace{ (-P\vec{n}+\vec{\tau}) }_{ \vec{\sigma} } \, dA + \int\limits_{A_{w}}^{} \vec{\sigma} \, dA= $$
We develop this like we did in the energy balance, we put the boundaries far from the blades, so there is less gradient and therefore we can annul the friction component.

Applying once again the lumped parameter approach we get:
$$\underbrace{ = }_{ \text{LPA} } \int\limits_{\Omega}^{} \rho \vec{g}\, dV - P_{\text{out}}\vec{n}_{\text{out}}A_{\text{out}}-P_{\text{in}}\vec{n}_{\text{in}}A_{\text{in}}+\vec{F}_{aero} $$
Where $\vec{F}_{aero}$ are the aerodynamic forces on solid surfaces.

Putting everything together we get:
$$\frac{d}{dt}\int\limits_{}^{} \rho \vec{v} \, dV + \dot{m}_{out}\vec{v}_{out}-\dot{m}_{in}\vec{v}_{in}+P_{out}\vec{n}_{out}A_{out}+\underbrace{ P_{in}\vec{n}_{in}A_{in} }_{ \substack{\text{Will become}\\\text{negative from}\\\text{the vector}} } -\int\limits_{\Omega}^{}\rho \vec{g}  \, dV = \vec{F}_{aero} $$

Through steady flow and with one inlet and outlet ($\dot{m}_{in} = \dot{m}_{out}=\dot{m}$):
$$\cancelto{ 0 }{ \frac{d}{dt}\int\limits_{}^{} \rho \vec{v} \, dV } + \dot{m}(\vec{v}_{out}-\vec{v}_{in})+P_{out}\vec{n}_{out}A_{out}+ P_{in}\vec{n}_{in}A_{in} -\int\limits_{\Omega}^{}\rho \vec{g}  \, dV = \vec{F}_{aero} $$
This equation is very complex due to the integral which we are not able to solve easily, therefore it's not very useful.

If we develop the angular momentum, will be able to get a solvable equation.

## Balance of Angular Momentum
To develop the angular momentum, we place an origin point somewhere on the axis of rotation and the point on interest can be anywhere in the control volume.

![](Pasted%20image%2020250306133348.png)

The derivative of the angular momentum ($\vec{\Gamma}$) is:
$$\begin{align}
\frac{d\vec{\Gamma}}{dt} = \vec{M} &= \int\limits_{\Omega(t)}^{} \vec{OP}\times\rho \vec{g} \, dV+\int\limits_{\partial\Omega(t)}^{} \vec{OP}\times \vec{\sigma} \, dA= \\
&=\int\limits_{\Omega}^{} \vec{OP}\times\rho \vec{g} \, dV+\int\limits_{A_{\text{in}}+A_{\text{out}}}^{}  \vec{OP}\times(\cancelto{ 0 }{ -P\vec{n} }+\cancelto{ 0 }{ \vec{\tau} })\, dA+\underbrace{ \int\limits_{A_{w}}^{} \vec{OP}\times \vec{\sigma} \, dA   }_{ \vec{C}_{aero} } 
\end{align}  $$
The component of the friction is null for the same reason as before, while the pressure is removed since we assume the pressure is constant around a vertical surface and therefore the momentum will balance out.

The angular momentum is:
$$\vec{\Gamma} = \int\limits_{\Omega(t)}^{} \vec{OP}\times\rho \vec{v} \, dV $$
Through the application of the RTT on the derive we get:
$$\begin{align}
\frac{d\vec{\Gamma}}{dt} &= \frac{d}{dt}\int\limits_{\Omega}^{} \vec{OP}\times\rho \vec{v} \, dV+\int\limits_{A_{\text{in}}+A_{\text{out}}}^{} \vec{OP}\times\rho \vec{v}(\vec{v}\cdot \vec{n}) \, dA \\
&=\int\limits_{\Omega}^{} \vec{OP}\times\rho \vec{g} \, dV+\vec{C}_{aero} 
\end{align}  $$

We can get the power associated from the torque as:
$$\dot{L} = \vec{C}_{aero}\cdot \vec{w} = \vec{C}_{aero}\cdot w\cdot \vec{i}_{x} = wC_{aero,x}$$
Assuming a steady flow we kill one term and get:
$$\int\limits_{A_{\text{out}}+A_{\text{in}}}^{} \vec{OP}\times\rho \vec{v}\cdot \hat{i}_{x}(\vec{v}\cdot \vec{n}) \, dA = \int\limits_{\Omega}^{} \vec{OP}\times \cancelto{ 0 }{ \rho \vec{g}\cdot \hat{i}_{x} } \, dV + C_{aerox}  $$
We therefore get the aerodynamic torque as:
$$\begin{align}
C_{aerox} &= \int\limits_{A_{\text{in}}+A_{\text{out}}}^{} rv_{t}\rho(\vec{v}\cdot \vec{n}) \, dA = \\
\text{LPA$\to$ }& =  r_{\text{out}}v_{t,\text{out}}\dot{m}_{\text{out}}-r_{\text{in}}v_{t,\text{in}}\dot{m}_{\text{in}}\\
&=\dot{m}(r_{\text{out}}v_{t,\text{out}}-r_{\text{in}}v_{t,\text{in}})
\end{align}$$
$$\implies \begin{align}
\dot{L} = wC_{aerox} &= w\dot{m}(r_{\text{out}}v_{t,\text{out}}-r_{\text{in}}v_{t,\text{in}}) =\dot{m}(wr_{\text{out}}v_{t,\text{out}}-wr_{\text{in}}v_{t,\text{in}})
\end{align}$$
This equation explains why we need the deflection, we need to be able to induce a change in $v_{t}$ to have a change in the angular momentum.

We can define the peripheral speed as:
$$\vec{u} = \vec{w}\times \vec{r} = w\hat{i}_{x}+v\hat{i}_{r}=wr\hat{i_{\theta}} = u\hat{i}_{\theta}$$
We can rewrite our power equation as:
$$\dot{L} = \dot{m}(u_{\text{out}}v_{t,\text{out}}-u_{\text{in}}v_{t,\text{in}})$$

The specific work/Euler work exchang is therefore:
$$l = \frac{\dot{L}}{\dot{m}} = u_{\text{out}}v_{t,\text{out}} -u_{\text{in}}v_{t,\text{in}}$$
#### Proprieties of this derived work
- $r$ is the mean line, the mid-span of the blade. This can be an issue if the blade height is very large, but in our cases the mid-span is okay so we will only be using that measure.
- This $\dot{L}$ that we have gotten is the real work the is exchanged to the fluid, meaning that we do not need to take into account losses since they have already been taken into account. We can find the wasted work by calculating the mechanical energy change:
	$$\underbrace{ l }_{ \substack{\text{what }\\\text{we got}} }-l_{w} = \int\limits_{\text{in}}^{\text{out}} vdP+\frac{\Delta v^{2}}{2}+g\Delta z $$

For a operating machines we put work into the fluid, therefore $l>0$, so we get:
$$l = u_{\text{out}}v_{t,\text{out}} - v_{\text{in}}v_{t,\text{in}}\implies v_{t,\text{out}}>0\text{ since }u>0\text{ by def.}$$

We typically consider the fluid as coming from a duct therefore $v_{t} =0$.

Once the blades are spinning we define the tangential direction such that $u$ will always be positive. $v_{t}$ can be the same or opposite sign depending if $l$ is $<0$ or $>0$.

From this point on we will be using numbers to refer to different sections.

Drawing the velocity diagram for the rotor we get:
![](Pasted%20image%2020250306170408.png)

The blades at the front are inclined since they have to accomodate for the fact that they are rotating so the fluid will have a relative velocity with respect to them.

While we have to design our blades based on the relative velocity all the calculations are based on the absolute velocity.

The deflect the air foil so that we can deflect the absolute velocity of the fluid. This is achieved through our rotation and the work we apply. Since we want to add work to the fluid we have the change in tangential velocity has to be positive, so our calculations work out.

To simplify our understanding of what is going at the sections at the end of the rotor we can draw velocity triangles:
![](Pasted%20image%2020250306170825.png)

This makes it clearer that we have added tangential velocity, and since $l>0$ and $l= u_{2}v_{2t}-u_{1}v_{1t}$, assuming that $u_{2}=u_{1}$ we have to have a positive difference in the tangential velocity through a decrease of the relative velocity. (This happens because we are forcing a tangential velocity onto the fluid as it is moving through the rotor which we are spinning.)