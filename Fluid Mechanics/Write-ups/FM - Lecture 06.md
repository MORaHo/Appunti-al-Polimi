---
creation_date: 2025-03-03
tags: 
parent: 
child: 
share: false
---
# Lezione 6 - Classification and Description of Fluid Machines

Most of this lecture was in reference to the following slides:
[Lecture 6 Slides](Lecture%206%20Slides.pdf)

## Classification Criteria
### Direction of Energy
In motor machines we convert fluid energy into mechanical energy, we expect the pressure and enthalpy to decrease and the work to be positive.

In operating machines we convert mechanical energy into fluid energy with pressure and enthalpy increase and with work being negative.

### Thermal and Volumetric Behaviour

We call incompressible flow machines, machines which work with incompressible fluids, for these types of machines we use the ideal liquid model.

We call compressible flow machines, machines that work with compressible fluids, for such machines we use the perfect/ideal gas model.
### Operating Way
Volumetric machines/ positive displacement machines exchange energy through cyclic change of volume or displacement of the fluid. These machines use low flow velocity/flow rate. There are no limitations on the specific work we can generate barring any technological limitations.

Turbomachines exchange energy though continuous interactions between the fluid and rotating components. They are characterised by high flow velocity/flow rate and rotating components. They specific work we can extract from a rotor is limited due to the limits of physics, to counter this we can place more than one rotor with stators in-between to generate more work from the same fluid.

The difference between aero-engines and internal combustion engines is that one is a turbomachine while the other is a piston. They are both air-breathing engines.

![](Pasted%20image%2020250303221929.png)

## Volumetric Machines
There are different type of volumetric machines.

- Reciprocating machines
- Rotative machines: with these machines we capture the fluid in the rotation, and depending on the operating way the volume we use for the capture can either be lower or greater than the original volume, assuming it's compressible.
There are many more types that we have not listed.

As stated before these machines are suitable for low flow rate and high specific work.

## Turbomachines
Turbomachines exchange work by making the fluid interact with the airfoil.
The flow is deflected by the specific work of the air foil, the flow cannot be deflected to much in one go.
To be able to use multiple rotors we need to use stators, a rotor and stator pair is called a stage. 

The deflection is the mode with which we generate work.

In turbines, the deflection is very great, creating a high pressure gradient.

## Turbomachine Architecture

![](Pasted%20image%2020250303222613.png)

### Axial Machines
- the flow passes throughout the machine mainly in axial direction
- the flow trajectories lie mainly on cylindrical surfaces
- from inlet to outlet the distance between the flow surface and the axis of the machine remains (almost) constant
- made for high flow rates, since they have higher cross sections so we don't need velocity.
- they pressure ratios they generate a limited

### Radial machines
- the flow passes throughout the machine mainly in radial direction
- the flow trajectories lie on conical surfaces and NOT cylindrical
- from inlet to outlet the flow changes significantly the distance from the axis: centripetal/centrifugal flow paths
- made for low flow rates, relatively high specific work exchange
- the work exchanged is proportional to the radial path
- they are more efficient since they can deal with higher pressure ratios

We can use the pressure ratio between the inlet and outlet to determine if it's a axial or radial machine.

## Mixed Flow Machines
Fixed flow machines are a mix of axial and radial machines. They are more complex to deal with since they require the understanding of a 3D problem which is not true for the other two cases.

To simplify the solution we use 3 planes. One of the planes is parallel to the base, one is called the meridional planes, the third plane is the cross ectional plane.

The meridional plane derived from the mean stream lines from which we get the stream surface. From the meridional plane we can determine whether the flow is axial and radial. It's the plane which travels in the middle of two blades.

![](Pasted%20image%2020250303225525.png)

The tangential plane is plane that cuts at the middle of all the blades. This plane can also be called the blade to blade view.

## Calculating the mixed turbine

The meridional view for the mixed turbine:

![](Pasted%20image%2020250303225545.png)
The green is the boundary of the control volume.

The blade to blade view is:

![](Pasted%20image%2020250303225615.png)

We define the velocity as:
$$\vec{v} = \underbrace{ v_{x}\vec{i}_{x}+v_{r}\vec{i}_{r}+ }_{ \vec{v}_{m} = v_{m}\vec{i}_{m} }v_{t}\vec{i}_{\theta}$$
The flow rate is:
$$\dot{m} = \int\limits_{\text{A}_{cross}}^{} \rho \vec{v}\cdot \vec{n} \, dA = \rho v_{m}A_{\text{cross}} $$
The get the result on the right because the velocity on the cross sectional area is:
$$\vec{v}\cdot \vec{n} = v_{x}\vec{n}_{x}+v_{r}\vec{n}_{r}+\cancelto{ 0 }{ v_{t}\vec{n}_{\theta} } = v_{m}\vec{n}_{m}= v_{m}$$
The component of the tangential area is null since we the area is on the meridional plane which is perpendicular to the tangential plane and therefore there is not tangential speed component. 

The cross sectional area is:
$$A_{\text{cross}} = \pi D_{m}b$$
(We will prove this in the next class.)