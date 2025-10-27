---
creation_date: 2025-03-10
tags: 
parent: 
child: 
share: false
---
# Lezione 9 - Energy Balance from a Non-Inertial frame

In this lecture we developed the various balances from a non-inertial frame. While we develop a general solution we will be specifically looking at the rotating case.

In the inertial frame we recovered that:
$$\vec{v} = \vec{w}+\vec{u}$$
Furthermore we have that:
$$\vec{u} = \vec{\omega}\times r\hat{i}_{r}=w\hat{i}_{x}\times r\hat{i}_{r}=wr\hat{i}_{\theta}$$
Since for this working out we also need to use the acceleration, we can also develop that as:
$$\begin{align}
\frac{d\vec{v}}{dt} = \frac{d\vec{w}}{dt}+\frac{d}{dt}(\vec{u}) &= \frac{d\vec{w}}{dt}+\frac{d}{dt}(\vec{\omega}\times r\hat{i}_{r}) \\
&=\frac{d\vec{w}}{dt}+\underbrace{ \vec{\omega}\times \vec{\omega }\times r\hat{i}_{r} }_{ -\omega^{2}r\hat{i}_{r} }+2\vec{\omega} \times \vec{w}+\cancelto{ 0 }{ \frac{d\vec{\omega}}{dt}\times r\hat{i}_{r} }
\end{align}$$
The last term get's cancelled because we are only considering steady flow.

## Momentum Balance
Momentum needs to be balances in an inertial case, we can rewrite it for the non-inertial case from there.

The equation for the momentum balance is always the same:
$$\frac{d}{dt}\int\limits_{\Omega (t)}^{} \rho \vec{v} \, dV = \vec{F} $$
We can play with this equation to write it depending only on $\vec{w}$:
$$\begin{align}
&=\frac{d}{dt}\int\limits_{\Omega(t)}^{} \vec{v}\cdot\underbrace{ (\rho dV) }_{ dM }=  \\
&= \int\limits_{\Omega(t)}^{} \frac{d\vec{v}}{dt} \, (\rho dV)+\vec{v}\cancelto{ 0 }{ d(dM) }= \\
&=\int\limits_{\Omega(t)}^{} \frac{\rho d\vec{v}}{dt}  \, dV= \\
&=\int\limits_{\Omega(t)}^{} \rho\left( \frac{d\vec{w}}{dt} + (-\omega^{2}r\hat{i}_{r}) +2\vec{\omega}\times \vec{w}\right) \, dV= \\
&=\int\limits_{\Omega(t)}^{} \rho   \, \frac{d\vec{w}}{dt}dV+\int\limits_{\Omega(t)}^{} \left((-\omega^{2}r\hat{i}_{r})+2\vec{\omega}\times \vec{w}\right) \rho \, dV \\
&=\underbrace{ \frac{d}{dt} \int\limits_{\Omega(t)}^{} \rho \vec{w} \, dV }_{ \substack{\text{Inverse of 2nd and }\\\text{3rd steps.Possible}\\\text{since conservative}} }  +\int\limits_{\Omega(t)}^{} (-\omega^{2}r\hat{i}_{r}) \, \rho dV  +\int\limits_{\Omega(t)}^{} 2\vec{\omega}\times \vec{w} \, dV = \vec{F}
\end{align}  $$

For reasons we will see later we move some terms to the right, converting them into their apparent counterparts.

$$\frac{d}{dt}\int\limits_{\Omega (t)}^{} \rho \vec{w} \, dV = \vec{F}+\underbrace{ \int\limits_{\Omega(t)}^{} \rho\omega^{2}r\hat{i}_{r} \, dV }_{ \vec{f}_{\text{CENTRIFUGAL}} }+\underbrace{ \int\limits_{\Omega(t)}^{}2\rho \vec{w}\times \vec{\omega}  \, dV }_{ \vec{f}_{\text{CORIOLIS}} }   $$
$f_{\text{centrif}}$ is a conservative, which means we can define it's potential, whereas $f_{cor}$ is non-conservative, so we will need another method to deal with it.

From the centrifugal force which we have found we can define the centrifugal energy, alongside it's gradient as:
$$\vec{f}_{\text{centrif}} = \omega^{2}r\hat{i}_{r}\to e_{c}:\nabla e_{c}=-\vec{f}_{\text{centif.}}$$
This means that $\nabla e_{c}$ is function of $r$ alone, and so:
$$\frac{ \partial e_{c} }{ \partial r } =\frac{ de_{c} }{ dr } =-\omega^{2}r$$
We can therefore write the centrifugal energy as:
$$e_{c} = \cancelto{ 0 }{ e_{c_{0}} }+\int\limits_{r_{0}}^{r} -\omega^{2}r \, dr=-\frac{1}{2}\omega^{2}r^{2}=-\frac{u^{2}}{2} $$

## Energy Balance (Rotating)

The energy of the fluid body from a relative perspective can be found with the equation:
$$E_{w} = \int\limits_{\Omega(t)}^{} \rho\left( u+\frac{w^{2}}{2}+gz-\frac{u^{2}}{2} \right)  \, dV $$
Our energy balance will be:
$$\frac{d}{dt}\int\limits_{\Omega(t)}^{} \rho\left( u+\frac{w^{2}}{2}+gz-\frac{u^{2}}{2} \right) \, dV = \dot{L}_{w}+\dot{Q} $$
We treat this mostly like we did in the inertial, the only novelty is the relative mechanical power, which we need to consider because Coriolis is non-conservative. Before we develop it we need to clarify that:
$\partial\Omega(t) = A_{w}+A_{in}+A_{out}$.

The relative mechanical power has equation:
$$\dot{L}_{w} = \cancelto{ 0 }{ \int\limits_{\Omega(t)}^{} 2\rho(\vec{w}\times \vec{\omega})\cdot \vec{w} \, dV } + \int\limits_{\partial\Omega(t)}^{} \vec{\sigma}\cdot \vec{w} \, dA=  $$
The first term cancels because the vector product creates a vector perpendicular to the two, so the dot product after with a vector perpendicular to itself will be 0.
$$\begin{align}
&=\int\limits_{A_{w}}^{} \vec{\sigma }\cdot \underbrace{ \vec{w_{w}} }_{ \vec{v}_{w}-\vec{u}=0 } \, dA +\int\limits_{A_{in}+A_{out}}^{}  \vec{\sigma}\cdot \vec{w}\, dA= \\
&=\int\limits_{A_{in}+A_{out}}^{} -P\vec{n}\vec{w} \, dA+\cancelto{ 0 }{ \int\limits_{A_{in}+A_{out}}^{}\vec{\tau}\vec{w}  \, dA }  = \\
\dot{L}_{w}&=\int\limits_{A_{in}+A_{out}}^{} \rho(-Pv)\vec{w}\cdot \vec{n}\, dA 
\end{align}$$
The relative velocity of the fluid with respect to the rotor is 0 because of the adherence condition under which every fluid functions.

Applying the RTT to the energy balance we get:
$$\cancelto{ 0 }{ \frac{d}{dt}\int\limits_{\Omega_{f}}^{} ()\;dV }+\int\limits_{A_{in}+A_{out}}^{} \rho\left( u+\frac{w^{2}}{2}+gz-\frac{u^{2}}{2} \right)\vec{w}\cdot \vec{n} \, dA = \int\limits_{A_{in}+A_{out}}^{} \rho(-Pv)\vec{w}\cdot \vec{n} \, dA+\dot{Q} $$

From this equation we get the energy balance as:
$$\int\limits_{A_{in}+A_{out}}^{} \rho\left( h+\frac{w^{2}}{2}+gz-\frac{u^{2}}{2} \right)\vec{w}\cdot \vec{n} \, dA=\dot{Q} $$
In general turbo-machinery is bad at exchanging heat so generally $\dot{Q}$ is very low.

Using the lumped-parameter approach on the energy balance we get:
	$$\left( h+\frac{w^{2}}{2}+gz -\frac{u^{2}}{2}\right)_{\text{out}}\underbrace{ \int\limits_{\text{out}}^{} \rho \vec{w}\cdot \vec{n} \, dA }_{ \dot{m}_{\text{out}} } +\left( h+\frac{w^{2}}{2}+gz+\frac{u^{2}}{2} \right)_{\text{in}}\underbrace{ \int\limits_{\text{in}}^{}\rho \vec{w}\cdot \vec{n}  \, dA }_{ -\dot{m}_{\text{in}} } = \dot{Q} $$

Since we have one mass flow as:
$$\dot{m}_{\text{out}}=\dot{m}_{\text{in}}=\dot{m}$$
We can write the energy balance as:
$$\Delta h+\frac{\Delta w^{2}}{2}+g\Delta z-\frac{\Delta u^{2}}{2}=q$$

Across a rotor we can write:
$$\begin{cases}
\text{Abs.Energy Balance: }l+q=\Delta h+\frac{\Delta v^{2}}{2}+g\Delta z \\
\text{Rel.Energy Balance: }q=\Delta h+\frac{\Delta w^{2}}{2}+g\Delta z-\frac{\Delta u^{2}}{2}
\end{cases}$$
In the relative energy balance the work exchanged has been killed, while the change in centrifugal force looks like rotating kinetic energy.

The difference between the two energy balance gives us:
$$l=\frac{\Delta v^{2}}{2}-\frac{\Delta w^{2}}{2}+\frac{\Delta u^{2}}{2}$$
This is the alternative definition of the specific work exchanged.

In the exercise we got an increase in $v$ as $w$ decreased, this formula explains it.

Centrifugal machines have a non-negligible $\frac{\Delta u^{2}}{2}$, so it explains why they are typically operating machines.

Radial machines have higher $\Delta P$ since they also use $u$, which axial machines do not.

The equation therefore allows us to classify radical and axial machines, seeing how much $\frac{\Delta u^{2}}{2}$ is relative to $\frac{\Delta v^{2}}{2}-\frac{\Delta w^{2}}{2}$.
In general $\frac{\Delta u^{2}}{2}$ is at minimum $2-3\%$, but in our cases we ignore this to simplify our calculations.

## Mechanical Energy Balance for a Rotating Observer

We know that:
$$q=\int\limits_{1}^{2} T \, dS = l_{w} \to \text{Wasted}$$
We can use this to re-write the energy balance as:
$$\cancel{ \int\limits_{1}^{2} T \, dS } - l_{w} = \cancel{ \int\limits_{1}^{2} T \, dS }+\int\limits_{1}^{2} v \, dP + \frac{\Delta w^{2}}{2}+\cancelto{ 0 }{ g\Delta z }-\frac{\Delta u^{2}}{2}   $$
We therefore get:
$$\int\limits_{1}^{2} v \, dP = -\frac{\Delta w^{2}}{2}+\frac{\Delta u^{2}}{2}-l_{w} $$
This equation shows that the pressure increases as the $w$ decreases.

Fans are rotating diffusers, they reduce the relative velocity to increase the pressure, turbines are the opposite.

We have written, the mass, absolute, rotating, mechanical energy equations and Euler equation.

## Turbine Stage
In a turbine we are taking work from the fluid, therefore $l<0$. Because of Euler's equation which we found last time, $l=u_{2}v_{2t}-u_{1}v_{1t}$. We get that $v_{1t}>v_{2t}$ for the $l$ to be negative.

So $v_{1t}$ to be greater than $v_{2t}$ it requires $v_{1t}$ to exist, how do we do this? We introduce a stator which acts like a nozzle,similar to how the stator in the other case acted as a diffuser.

The blade to blade diagram for the stator and rotors will be:
![](Pasted%20image%2020250310221835.png)

We see that the stator adds a tangential component to the absolute velocity and so to compensate the relative velocity tends to be more straight, which is reflected in the air foil shape. We use the air foil to deflect the flow, making the absolute velocity as straight as possible, as to reduce $v_{2t}$ as much as possible (since we want to extract as much power as possible), and making $w_{2}$ very deflected.

The velocity triangles will be:
![](Pasted%20image%2020250310222126.png)

The tangential component of $v$, be it induced or not, in 1 is greater than the tangential component $v$ in 2 and therefore the power is negative.



