---
creation_date: 2025-02-21
tags: 
parent: 
child: 
share: false
---
# Lezione 3 - Heat, Functions and Ideal Gases

## Heat Modelling

Heat is the exchange of energy between the fluid and immovable wall. The exchange of energy causes vibrations of the particles of the wall, heating the wall (or particles). Heating is still a mechanical effect but it's not something who's effect we can see.

Let's look at the same generic cycle which we looked at in last lesson:

<!Diagram generic cycle>

According to the Clausius Theorem we can say that:
$$\oint \frac{\delta Q}{T} \leq 0$$

In the ideal case we have:
$$\oint \frac{\delta Q}{T}=0$$
This equality is sufficient and necessary to say that the transformation involves the maximum heat conversion into work and that the transformation is reversible. 

We can rewrite the equality as:
$$\int\limits_{1A}^{2} \frac{\delta Q}{T} = \int\limits_{1B}^{2} \frac{\delta Q}{T} =f(1,2) = S_{2}-S_{1} = \underbrace{ \Delta S }_{ \substack{\text{State}\\\text{function}} }$$
Since reversible transformation do not exit. The measure for the presence of irreversibility is entropy.

In any real case in which the process is irreversible the inequality will become:
$$\oint \frac{\delta Q}{T} = - \Delta S_{\text{IRR}}$$
If we look at a non-cyclic transformation we will have:
$$\int\limits_{1}^{2}  \frac{\delta Q}{T}  = S_{2}-S_{1}-\Delta S_{\text{IRR}}$$
We can therefore write that:
$$\implies \Delta S = \int\limits_{1}^{2}  \frac{\delta Q}{T} +\Delta S_{\text{IRR}} $$
In its infinitesimal form we can write:
$$dS = \frac{\delta Q}{T}+\delta S_{\text{IRR}}$$
$S_{\text{IRR}}$ is not a fixed value it changes based on every process.
While the entropy is a state function, the irreversible component $S_{\text{IRR}}$ is not.

Isolating the heat we get:
$$TdS = \delta Q + T\delta S_{\text{IRR}}$$
$\delta S_{\text{IRR}}$ is the equivalent the wasted work we found in the last lesson, just for heat rather than work.

### First Principle of Thermodynamics

The first principle of thermodynamics for an irreversible process is:
$$dU = \delta L+\delta Q = -PdV+\delta L_{w}+TdS-T\delta S_{\text{IRR}}$$
A reversible and irreversible exchange the same energy, the only difference between the to is that an irreversible process has some wasted energy, so the effective energy received by the media to which we are transferring energy is not the whole energy which we exchanged. We can write the reversible energy transfer as:
$$dU = \delta L_{\text{R}} + \delta Q_{\text{R}} = -PdV+TdS$$
Since the energy is the same, by subtracting we ge that:
$$\implies \delta L_{w} = T\delta S_{\text{IRR}}$$

If we think about it physically when we waste energy though friction we generate heat.

Because of this balance between the water work and irreversible entropy, we can always write:
$$dU = TdS-PdV$$
All 5 of these parameters are the macroscopic traces of all the microscopic effects.

Since in this equation $T$ and $P$ are constant we can write that $U$ is a state function of $S$ and $V$:
$$U = U(S,V)$$
And that:
$$\begin{gather}
T = \left( \frac{ \partial U }{ \partial S }  \right)_{V} \\
P = -\left( \frac{ \partial U }{ \partial V }  \right)_{S}
\end{gather}$$
We will need to define $U(S,V)$ for every system, and fluid we will be looking at. 

## Extensive Quantities

Everything that we are talking about is valid for simple thermodynamic systems, we are still looking at systems like the cylinder and piston in which the properties are homogeneous:

<!Diagram system with piston>

This system is characterised by a mass, the internal energy, entropy, volume and other quantities can be added (we will look at some of them later).

$U,V$ and $S$ are extensive quantities, meaning that they scale with mass. These quantities are defined for the whole volume.

$P$ and $T$ on the other hand are not extensive quantities, they are independent of the mass of the system. These quantities are not defined for the whole volume, but rather they are intrinsically local, they have nothing to do with size of the system. These quantities exist as long as we have a sufficiently small body which is still effected by the microscopic variations.

Since temperature and pressure are intrinsically local, it could be useful for us to introduce quantities that are simile in definition to the extensive quantities but are intensive, we do this by dividing by the mass. These quantities are:
$$\begin{gather}
u=\frac{U}{M} \\
s = \frac{S}{M} \\
v=\frac{V}{M}=\frac{1}{\rho} \implies  \rho=\frac{M}{V}
\end{gather}$$
The density and the specific volume are more useful in different scenarios, with incompressibile fluid density is more useful, while with compressible fluid specific volume can be more useful.

Using these new specific quantities we can write:
$$u = u(s,v)$$
We can also write:
$$T = \left( \frac{ \partial u }{ \partial s }  \right)_{v}; P = -\left( \frac{ \partial u }{ \partial v }  \right)_{s}$$

### Working with non-homogeneous sytems

This system is not very useful since it's the idea case, in reality though the transformation the properties will no be homogeneous throughout the body of the cylinder. To take this unhomogeneity into account we don't consider the whole volume of the fluid as continuous as we did before, but as the union of many small elements which make up the fluid body. Each of these small bodies will individually homogeneous, but the whole body will not. These elements are small relative to the macroscopic gradients of the proprieties.

Each small body is small simple thermodynamic system each with it's own proprieties. Our body therefore is collection of infinitesimal simple thermodynamic systems each with it's own proprieties.

Each small body we are considering will be characterised by the following proprieties: $dM$,$dV$,$dU$ and $dS$

$U$ will be valid at the scale of the whole body (still be the hypothesis of a simple and homogeneous thermodynamic system) while $u$ will be valid for the realistic system at the local level of the small body.

For the small body we can write that:
$$\rho = \frac{dM}{dV} = \rho(\vec{x},t) \to dM=\rho \cdot dV \implies M = \int\limits_{\Omega}^{} \rho \, dV $$
The density will be a function of the position in space and the time.

Writing the equation of the internal energy and entropy we also get that:
$$\begin{align}
dU = u\cdot dM &= \rho udV \to U = \int\limits_{\Omega}^{} \rho u \, dV \\
dS = sdM &= \rho sdV \to S = \int\limits_{\Omega}^{} \rho s \, dV 
\end{align}$$
Where $\Omega$ is the space of the whole body of the cylinder which we are integrating in.

## Thermodynamic Potentials

The equation:
$$U = U(S,V)$$
is known as the fundamental relation, as we have stated a version of it is valid at all scales, as well as for all types of transformations (even irreversible ones)  which we study or fluids we use them in. Its universality is therefore what makes it the perfect candidate for a thermodynamic model of our fluids, meaning that for each case in which we are interested in using it we will have to decline to the case and it will give us the model for that specific case. The internal energy is a thermodynamic is thermodynamic potential.

There are other types of thermodynamic potentials which we can use to measure our system, such as enthalpy, Gibbs free energy and the Helmholtz potential.

The only additional thermodynamic potential we will be looking at is the enthalpy as it is very useful in our case.

The enthalpy has equation:
$$H = U+PV \to h = u+Pv$$
Tracking the derivative for both the global and specific forms we get:
$$\begin{cases}
dH = dU+PdV+VdP = TdS+VdP \\
dh = \dots = Tds+vdP
\end{cases}\implies \begin{cases}
H=H(S,P) \\
h = h(s,P)
\end{cases}$$

For the internal energy we get that:
$$dU = \underbrace{ \left( \frac{ \partial U }{ \partial S }  \right)_{V} }_{ T }dS+\underbrace{ \left( \frac{ \partial U }{ \partial V }  \right)_{S} }_{ -P }dV\implies \begin{cases}
T= \left( \frac{ \partial U }{ \partial S }  \right)_{V} = T(S,V) \\
P = -\left( \frac{ \partial U }{ \partial V }  \right)_{S} = P(S,V)
\end{cases}$$
The functions for T and P are equation of state.

While in modern times thermodynamic models are based on $U$, as technology now permits it's calculations, historically the thermodynamic models were based on $T$ and $P$ where were easier to measure and since $T$ and $P$ are still themselves functions of $S$ and $V$. This second approach is what we will be following. Since we are using to variables to define our thermodynamic model, it means that we have to define 2 function, which are the two equations of state of temperature and pressure respectively.


## State Diagrams of Fluids
In this course we use state diagrams, for different fluids to model the transformations though which they do through:
<!Diagram state diagram>

There are 4 main regions to these diagram:
- Region of incompressibile fluids
- Region of compressibile fluids
- Region of vapours
- Region of perfect gases
## Ideal Gases
(We need to remember the equations of state for each type of fluid for when we need to apply them)

The equations of state for ideal gases are:
$$\begin{cases}
u=u(T) \\
PV=n\mathscr{R}T
\end{cases}$$
$u= u(T)$ is a weird equation. It's an equation of state, not a fundamental relation. It's an equation of state because it doesn't say anything on $U=U(S,V)$, but since $u$ is a function of $S$ and $V$, this tells use that $T$ is also a function of $S$ and $V$.

$\mathscr{R}$ is the universal gas constant which is equal to $8314 \frac{J}{kmol\cdot K}$, and separating the $n$ term into mass and molar mass we can rewrite the second equation as:
$$Pv= RT$$
In which $R$ is the specific gas constant for the gas we are looking at.
This equation of state basically tells us the volumetric behaviour of the fluid.

To find the first equation seemingly tells use something about the thermal behaviour, we can immagine the heating of a fluid, thinking about the specific heat $q$ instead of the heat $Q$.

We apply a $\delta q$ to inducing a certain $dT$, the variable between these two values is called the specific heat capacity, which has equation:
$$c_{x} = \left( \frac{\delta q}{dT} \right)_{x} = T\left( \frac{ \partial s }{ \partial T }  \right)_{x}$$
There are multiple two ways in which we can transfer heat, one in which we keep $P$ constant and the other in which we keep $v$ constant, the $x$ indicates that we the equation is the same, what changes is just what is remaining constant.

This equation for the specific heat acts on the assumption that the process is irreversible. To deal with the irreversibility of many processes, we usually accept the effects of this irreversibility and model an fictitious reversible energy exchange which does the same energy exchange as the real irreversible process, thus allowing to continue using the specific heat capacity as it currently is.

### What is $u=u(T)$?

Writing the equation for $u$ we get:
$$du = Tds-Pdv$$
Taking the derivative with respect to temperature at constant specific volume we get:
$$\left( \frac{ \partial u }{ \partial T }  \right)_{v} = \underbrace{ T\left( \frac{ \partial s }{ \partial T }  \right)_{v} }_{ c_{v} }-P\cancelto{ 0 }{ \left( \frac{ \partial u }{ \partial T }  \right) } = c_{v} = \frac{du}{dT}$$
$$\implies du = c_{v}dT = c_{v}(T)dT$$

For this specific fluid (ideal gases), $u$ does not depend on $s$ or $v$ but rather $T$.

For our processes we usually take a reerence temperatura and a $u_{ref}$ to be able to write:
$$\int\limits_{u_{ref}}^{u}  \, du = \int\limits_{T_{ref}}^{T} c_{v}(T) \, dT\implies u = u_{ref}+\int\limits_{T_{ref}}^{T} c_{v}(T) \, dT   $$
Since $c_{v}(T)$ does not vary much and since it would require a forth order integral to calculate $c_{v}(T)$ we usually consider it constant and reduce our burden.

In the case of the enthalpy, like the internal energy we can write:
$$h = u+Pv = u(T)+RT=h(T)$$
$$dh = Tds + vdP$$

Taking the differential forme of this we get:
$$\left( \frac{ \partial h }{ \partial T }  \right)_{P} = T\left( \frac{ \partial s }{ \partial T }  \right)_{P}+v\cancelto{ 0 }{ \left( \frac{ \partial P }{ \partial T }  \right)_{P} } = c_{p} = \frac{dh}{dT}\implies dh = c_{p}(T)dT$$

Again after selecting a reference temperature and a formation enthalpy in this case we can write:
$$h = h_{f}+\int\limits_{T_{ref}}^{T}c_{p}(T)  \, dT $$
We take $h_{f}$ as the formation enthalpy, the energy at which the chemical reaction occurs, $u_{ref}$ on the other hand was arbitrary.

We can also find the equation for the enthalpy as:
$$dh = Tds+vdP \implies ds = \frac{dh}{T}-\frac{v}{T}dP =\frac{dh}{T}-R \frac{dP}{P} = \frac{c_{p}dT}{T}-R \frac{dP}{P}$$

Since $s$ depends on both temperatura and pressure, we need to impose a $T_{ref}$ and $P_{ref}$, as well as a $s_{ref}$, and we get:
$$s = s_{ref}+\int\limits_{T_{ref}}^{T} c_{p}(T) \, \frac{dT}{T}-R\ln\left( \frac{P}{P_{ref}} \right) $$
The integral models that we have derived are not what what we will be using, since through the assumption that $c_{p}$ and $c_{v}$ are constant the ideal gas has become polytropic.







