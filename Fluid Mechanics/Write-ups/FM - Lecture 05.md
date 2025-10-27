---
creation_date: 2025-02-26
tags: 
parent: 
child: 
share: false
---
# Lezione 5 - Energy Balance

## Energy Balance

Let's take the system like the one we took in the last lesson:
<!Diagram control volume>

We can define many things for this control volume and the fluid body that fills it.

For the fluid body we can say that:
$$M = \int\limits_{\Omega(t)}^{} \rho \, dV\text{ where }\frac{ dM }{ dt } =0 $$
The linear momentum for the fluid body is:
$$\vec{\Pi} = \int\limits_{\Omega(t)}^{} \rho \vec{v} \, dV \to \frac{d\vec{\Pi}}{dt}=\vec{F} $$
The $\vec{F}$ is the summation of the forces which affect the fluid body, this has equation:
$$\vec{F} = \int\limits_{\Omega(t)}^{} \rho \vec{f} \, dV +\int\limits_{\partial\Omega(t)}^{} \vec{\sigma} \, dA $$
The part on the left is the field force whereas the part on the right are the forces due to surface stresses, such as pressure and fiction, in fact we represent $\vec{\sigma}$ as:
$$\vec{\sigma} = -P\vec{n}+\vec{\tau}$$

We can take this equation for the forces at $t=\tau$ such that $\Omega(\tau) = \Omega_{f}$, this will allow use to calculate the work and heat instantaneously exchanged in the control volume without issue:
$$\begin{align}
&\underbrace{ = }_{ t=\tau }\int\limits_{\Omega(\tau)}^{} \rho \vec{f} \, dV+\int\limits_{\partial\Omega(\tau)}^{}\vec{\sigma}  \, dA   \\
&= \int\limits_{\Omega_{f}}^{} \rho \vec{f}  \, dV+\int\limits_{\partial\Omega_{f}}^{} \vec{\sigma} \, dA  
\end{align}$$

We can also develop the angular momentum, but since neither is very useful, apart from one since use, they will therefore not be used.

We can only calculate the rate of change of energy, not the energy exchanged, so we are going to calculated power.

We will therefore be using the instantaneous exchange of work and heat and therefore be using the equation:
$$\frac{ dE }{ dt } =\underbrace{ \dot{L}_{O} }_{ \substack{\text{overall}\\\text{exchanged}\\\text{work}} }+\dot{Q}$$
We are mainly doing to be focused on $E$ and $\dot{L}_{O}$.

### E

Energy is composed of three components, the kinetic, potential and internal energy:
$$\begin{gather}
E_{k} = \frac{1}{2}V^{2}M\to E_{k} = \int\limits_{\Omega(t)}^{} \frac{1}{2}\rho \underbrace{ V^{2}  }_{ \text{speed} }\, \underbrace{ dV }_{ \text{volume} }  \\
E_{p} = gzM\to E_{p} = \int\limits_{\Omega(t)}^{} \rho gz \, dV \\
U = \int\limits_{\Omega(t)}^{} \rho u \, dV  
\end{gather}$$
So we have the equation:
$$\frac{d}{dt}\underbrace{ \int\limits_{\Omega(t)}^{} \rho\left( u+\frac{V^{2}}{2} +gz\right) \, dV }_{ \frac{ dE }{ dt }  } = \dot{L}_{O}+\dot{Q}$$

If we consider only conservative forces like volume forces, the mechanical power can be seen as a change in potential energy. Since we cannot count it twice, will not count it as a change in work, therefore the potential energy change, is considered as just the change in the potential energy and only count it in $\frac{ dE }{ dt }$

The change in work will be:
$$\dot{L}_{O} = \int\limits_{\partial\Omega(t)}^{} \vec{\sigma}\vec{v} \, dA \underbrace{ = }_{ t=\tau } \int\limits_{\partial\Omega_{f}}^{} \vec{\sigma}\vec{v} \, dA=\underbrace{ \int\limits_{A_{m}}^{} \vec{\sigma}\vec{v} \, dA }_{ \dot{L} }+\int\limits_{A_{in}+A_{out}}^{} \vec{\sigma}\vec{v} \, dA= \dot{L}+\int\limits_{A_{in}+A_{out}}^{} \vec{\sigma}\vec{v} \, dA$$
$\dot{L}$ is not zero since there are points on the surface of the turbine which compose the material parts of the border, where the velocity is not 0 and therefore the integral is not null.

We can decompose the second term through the definition of $\vec{\sigma}$ as:
$$\int\limits_{A_{in}+A_{out}}^{} \vec{\sigma}\vec{v} \, dA = \int\limits_{A_{in}+A_{out}}^{} -P\vec{n}\cdot \vec{v} \, dA+\cancelto{ 0 }{ \int\limits_{A_{in}+A_{out}}^{} \vec{\tau}\vec{v} \, dA }   $$
The friction component is 0 since we can take the $A_{in}$ and $A_{out}$ far enough away such that the velocity is practically uniform and since the friction is proportional to the strain rate it will therefore be close to 0 when the velocity is uniform.

Once again the energy balance for the fluid body is:
$$\frac{d}{dt}\int\limits_{\Omega(t)}^{} \rho\left( u+\frac{V^{2}}{2}+gz \right) \, dV=\dot{L}_{O}+\dot{Q} $$

Through the Reynolds Transport Theorem we can apply this to the control volume we are interested in and therefore for the control volume we can write:
$$\begin{align}
&\frac{d}{dt}\int\limits_{\Omega_{f}}^{} \rho\left( u+\frac{V^{2}}{2}+gz \right) \, dV+\int\limits_{A_{in}+A_{out}}^{}\rho\left( u+\frac{V^{2}}{2} +gz\right)\vec{V}\cdot \vec{n} \, dA= \\
&=\dot{L}+\int\limits_{A_{in}+A_{out}}^{} -\rho(vP)\vec{v}\cdot \vec{n} \, dA+\dot{Q}
\end{align}$$
On the left hand size the second term appears as a consequence of the Reynolds transport theorem and moving the reference system from the fluid body to the control volume. In the middle term on the right on the other hand we multiplied and divided by the density $\rho$. Moving this second term to the left we can write:
$$\frac{d}{dt}\int\limits_{\Omega_{f}}^{} \rho\left( u+\frac{V^{2}}{2}+gz \right) \, dV+\int\limits_{A_{in}+A_{out}}^{}\rho\left( \underbrace{ u+Pv }_{ h }+\frac{V^{2}}{2} +gz\right)\vec{V}\cdot \vec{n} \, dA=\dot{L}+\dot{Q}$$

By calculating the enthalpy we don't need to calculate $u$,$P$ or $v$ in this case.

$h$ is not flux of $u$ in this case, it's the union of the flux of $u$ and the flux of the mechanical power $Pv$.

In full, the power balance of the control volume is:
(I'm changing the speed to be lower case from now on)
$$\begin{gather}
\frac{d}{dt}\int\limits_{\Omega_{f}}^{} \rho\left( u+\frac{V^{2}}{2}+gz \right) \, dV+\int\limits_{A_{out}}^{}\rho\left( h+\frac{V^{2}}{2} +gz\right)\vec{v}_{out}\cdot \vec{n} \, dA-\\ \\
-\int\limits_{A_{in}}^{}\rho\left( h+\frac{V^{2}}{2} +gz\right)\vec{V}_{in}\cdot \vec{n} \, dA=\dot{L}+\dot{Q}
\end{gather}$$

This is an equation that is not very useful for our cases due to it's complexity, so we going to make a few assumptions to simplify it.

The first assumption that we make is of steady flow, that means that the accumulation in the control volume no longer occurs, therefore the first terms is removed.
Additionally we use the lumped parameter approach, this means that the variables which we have in the integrals we take an average of across the area and therefore they become constants.

We can therefore write:
$$\implies \left( h+\frac{v^{2}}{2}+gz \right)_{\text{out}}\cdot \underbrace{ \int\limits_{A_{out}}^{} \rho v_{out} \, dA }_{ \dot{m}_{\text{out}} }-\left( h+\frac{v_{2}}{2}+gz \right)_{\text{in}}\cdot \dot{m}_{\text{in}} = \dot{L}+\dot{Q} $$
Due to the assumptions we have taken the mass balance is also valid, therefore $\dot{m}_{in}=\dot{m}_{out}=\dot{m}$, this is true since we are taking a steady flow and we are only considering one inlet and one outlet.

We can therefore write:
$$\left( h+\frac{v^{2}}{2}+gz \right)\cdot \cancel{ \dot{m} }-\left( h+\frac{v^{2}}{2}+gz \right)\cdot \cancel{ \dot{m} } = \frac{\dot{L}}{\dot{m}}+\frac{\dot{Q}}{\dot{m}} = l+q$$

We can write the energy balance in the final form which we will be using:
$$l+q  = h_{\text{out}}-h_{\text{in}}+\frac{v^{2}_{\text{out}}-v^{2}_{\text{in}}}{2}+g(z_{\text{out}}-z_{\text{in}})$$

While this equation is useful since it includes everything, sometimes we want just the mechanical terms or just the heat terms, this is since it allows us to find the efficiency, writing equations based on mechanical or heat terms makes the wasted production comes out.

From Clausius we know that:
$$q = \int\limits_{\text{in}}^{\text{out}} T \, ds - \underbrace{ l_{w} }_{ =T\Delta s_{irr} } $$
We know that the difference in enthalpy is:
$$h_{\text{out}}-h_{\text{in}} = \int\limits_{\text{in}}^{\text{out}} T  \, ds+\int\limits_{\text{in}}^{\text{out}} v \, dP  $$
We can place the two in the energy balance:
$$l-l_{w} = \int\limits_{\text{in}}^{\text{out}} v \, dP+\frac{\Delta v^{2}}{2}+g\Delta z \to \substack{\text{Mechanical}\\\text{Energy}\\\text{Balance}}$$
This equations states that mechanical energy is not conserved and that there is a sink which is the $l_{w}$, this is because we are only considering mechanical energy and don't look at the thermal energy.

On the other hand we can write the thermal energy balance:
$$q+l_{w} = \int\limits_{\text{in}}^{\text{out}} T \, ds $$

## Machine Elements

Pumps and compressors put work into the fluid, therefore $l>0$ and $l_{w}>0$, for such elements we can therefore write:
$$l>\int\limits_{}^{} v \, dP +\frac{\Delta v^{2}}{2}+g\Delta z$$
For turbine and thermal turbine elements, we have $l<0$ and $l_{w}>0$. To maintain the sign we write:
$$l-l_{w} = -|l|-l_{w}$$
We can therefore write:
$$\mid l\mid = \left|\int\limits_{\text{in}}^{\text{out}} v \, dP+\frac{\Delta v^{2}}{2}+g\Delta z  \right|-l_{w}$$

## Closing Notes

$g\Delta z$ is typically very small, the change in velocity can also be small.

The difference in work and wasted work is:
$$\begin{align}
l-l_{w} = \int\limits_{\text{in}}^{\text{out}} v \, dP &\underbrace{ = }_{ \substack{\text{Ideal}\\\text{Liquid}} }v\Delta P\to l-l_{w}=\frac{\Delta P}{p}+\frac{\Delta v^{2}}{2}+g\Delta z=\Delta\left( \underbrace{ \frac{P}{\rho}+\frac{v^{2}}{2}+gz  }_{ \mathrm{T}\to\substack{\text{Bernoulli}\\\text{Trinomial}} }\right)=\Delta\mathrm{T} \\
&\underbrace{ = }_{ \substack{\text{Ideal}\\\text{Gas}} } \int\limits_{\text{in}}^{\text{out}} RT \, \frac{dP}{P} \to \substack{\text{we cannot determine this because of the interdependence}\\\text{of T and P, which depends on the transformation}}
\end{align} $$









