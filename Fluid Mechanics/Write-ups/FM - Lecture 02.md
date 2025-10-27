---
creation_date: 2025-02-18
tags: 
parent: 
child: 
share: false
---
# Lezione 2 - Seminar + First Principle of Thermodynamics

Thermodynamics aims to describe the energy transfer between a large number of elements. We can imagine that doing the calculations for all the elements in even a small system is not possible as the elements for a normal system are atoms and there are too many atoms for us to do the calculations.

There are two general approaches to the calculations.
Since we don't know exactly what is occurring at the microscopic level ,the first approach approach involves observing the system and the macroscopic tendencies which each system tends to follow and deriving phenomenological rules. This approach is how the first and second principles of thermodynamics were derived.

The other approach involved performing a probabilistic study of the small scale phenomena, even though we can't study at the microscopic level it is still possible to treat the microscopic processes with statistical means. Through assumptions about probabilistic distribution of the movement of particles, we can derive the traces of macroscopic phenomena which we observe. This approach studies the statistical mechanics of the particles.

While both are valid approaches for the study of a thermodynamics system, both have their draw backs, so what we do it is take an intermediate approach, using the postulates derived from the first approach on the statistical mechanics.

## Energy Transfer in Systems

For a mechanical system we can describe the work as:
$$L = \Delta E_{k}+\Delta E_{p}$$
This equation is not necessarily when we look at systems that are no longer purely mechanical. We find that this equation does not consider the other way in which energy can be transferred, heat. We also want to consider a fact for storing the total energy of a system.

### Simple Thermodynamic System

We define that state of a system as a set of equilibrium conditions which describe the system. On the macroscopic scale a system can be defined using only 2 variables.

Let's a take cyclic thermodynamic system which does from one state to a second and back.

<!Cyclic system diagram>

The total energy change in the system can be calculated with:
$$\begin{align}
\oint(\delta L+\delta Q) &= 0 = \int\limits_{1A}^{2} (\delta L+\delta Q) \, dA - \int\limits_{1B}^{2} (\delta L+\delta Q) \, dA \\
& = f(1,2) = U_{2}-U_{1} = \Delta U
\end{align}  $$

$f(1,2)$ is the state function, which is a function that only depends on the state of the system.
The difference in the internal energy, $\Delta U$, is 0 proving the validity of the first principle of thermodynamics.

The first principle can be written in the finite and differential forms:
$$\begin{cases}
\Delta U = L+Q \\
dU = \delta L + \delta Q
\end{cases}$$
The d in $dU$ indicated the $U$ is a state function. While $\delta$ indicates that the variable is not a state function, usually indicating the it depends on both the state of system as well as the variables dependence from the part which we take to get from one state to another.

This equation also only work in thermodynamics systems. In the systems we will be looking at, like dams and turbo-engines, the kinetic and potential energy of the system will also have to be accounted for
### Characterisation of Work / Work Modelling

Let us take a volume of gas, closed on all sides one of which is free to move up and down:

<!Diagram for work modelling>

The particles that collide with the wall can do two things. If they wall is mobile the collision cause the transfer of momentum (in part) to the wall and therefore work is transferred, while if the wall is immobile the transfer of momentum causes the particles to vibrate and therefore this a heat transfer (if the wall is colder). We will only be looking at the first one.

Let's divide the system into 2 bodies, of the fluid and on of the mobile wall:

<!Diagram of 2 bodies>

Because the particles colliding with the mobile wall transfer momentum, they cause a force on the mobile wall to be generated. The wall, assuming we don't want it to change position, will have to generate an equal and opposite force, whether though it's own weight or an external force applied to it.

The forces therefore are:
$$\vec{F}_{\text{ext}}  = -\vec{F}_{\text{int}}  $$

The mean of the stress caused by the force over the area of the wall is called pressure and it has equation:
$$\overline{\vec{P}}_{} = \frac{\vec{F}_{\text{int}}}{A}   $$
(The bar indicate that it is a mean)

We are looking at the force on the fluid (currently it is F_int but we will add the minus later). If we want a more precise definition of the pressure can see it as the sum of the local pressure or rather the components of the force of infinitesimal areas. The problem with looking at the infinitesimal scale is that at some point we have to start considering the single particles of the fluid, but if we consider the fluid as one continuous body then the problem disappears (we consider the particles small enough for them to adhere to gradients while big enough to make the macroscopic phenomena appear (if the scale is too small the traces of the macroscopic phenomena disappear)) and we can write:
$$\vec{P}  = \lim_{ dA \to 0 } \frac{\delta \vec{F}_{\text{int}}}{dA} = P\vec{n}$$
The $dA$ that we take is not only on the wall, but can also be within the fluid itself, the logic is still valid as the forces will always in sum be normal to area.

We can write that:
$$\vec{F}_{\text{int}} = \int\limits_{}^{}\delta \vec{F}_\text{int}  \,= \int\limits_{A}^{} P\vec{n} \, dA \implies \vec{F}_{\text{ext}} = -\int\limits_{A}^{} P\vec{n} \, dA   $$

What happens if we are able to more the piston?

<!Diagram with moving piston>

If the moment of the piston by $d\vec{w}$ occurs too fast, the system can no longer be considered a simple thermodynamic system since the motion of the particles will require kinetic energy.
To be able to still be a simple thermodynamic system the piston needs to be moved at an infinitely small step.

The work generated by the motion is:
$$\begin{align}
\delta L = \vec{F}_{\text{ext}}\cdot d\vec{w} = -\int\limits_{A}^{} P\vec{n} \, dA \cdot d\vec{w} &=-P \int\limits_{A}^{} \vec{n}d\vec{w} \, dA \\
&=-PdV 
\end{align} $$
This is the work exchanged by a simple thermodynamic system that keeps the system the same and is reversible.

A process like the is not realistic as the time it would take to perform it would infinite. Since we are interested in processes that take a finite time to finish, we want the speed therefore to not be infinitely small.

If the velocity non-infinitesimal, the force needed will be higher than what we would use in the reversible process. The force therefore generates "waste" energy to deal with the waste processes which occur while the intended process occurs.

If therefore $\vec{F}_\text{ext} \neq \vec{F}_{\text{int}}$ (since we require non-infinitesimal motion now), then:
$$\begin{align}
\vec{F}_{\text{ext}} = -\vec{F}_{\text{int}} + \underbrace{ \vec{F}_{w} }_{ \text{Wasted} } \to \delta L &= -PdV + \vec{F}_{w}\cdot d\vec{w} \\
& = -PdV + \delta L_{w}
\end{align}$$
$\delta L_{w}$ is always positive, so when we are compressing the volume, $\implies dV <0$, then the process requires more energy that is would have originally. If we are expanding the volume, $\implies dV>0$, then the energy that we are able to extract is less than we would otherwise be able to. This means that in both directions we have a gain in energy by the fluid, and therefore we will have consider both in the efficiency of the process.

$\delta L_{w}$ is irreversible, so this is accounted for in our efficiency.

Energy is positive if it is entering the fluid.