---
creation_date: 2025-03-17
tags: 
parent: 
child: 
share: false
---
# Lezione 11 - Dimensionless Analysis of Pumps

In the last lesson we wrote $l(Q)$, that was through the nondimensionalization of the Euler equation, and allows us to find the dimensionless terms.

We started the work:
$$l=u_{2}v_{2t}-u_{1}v_{1t}$$
We found that:
$$l=l(Q,n,D,\text{SHAPE})$$
Taking $n$ as the time scale and $D$ as the length scale, we rendered it dimensionless and found the dimensionless for of work as:
$$\lambda=\lambda(\varphi,\text{SHAPE})$$
We found that:
$$\begin{cases}
\varphi=\frac{Q}{nD^{3}}\to \text{Volumetric Efficiency} \\
\lambda = \frac{l}{n^{2}D^{2}}\to \text{Dimensionless Work}
\end{cases}$$

## H(Q)?

How do we write the head as a function of the volumetric work.
Let's start with the equation for the head:
$$gH = l-l_{w}$$

### What is $l_{w}$?

We know that the dimensionless loss is:
$$y\to \xi=\frac{y}{\frac{v^{2}}{2}}=\xi(Re,\text{SHAPE})$$
The wasted work is physically the same $y$, but occurs inside the machine rather than outside. Due to this physical similarity we can say it's the same assume it's the same as the dimensionally, just reworked to reflect it's integrity to the machine.

Therefore:
$$l_{w}\to \zeta = \frac{l_{w}}{n^{2}D^{2}}=\zeta(Re,SHAPE);Re=\frac{\rho D^{2}w}{\mu}$$
So we can say that:
$$l_{w} = l_{w}(n,D,\rho,\mu,\text{SHAPE})$$
### H(Q)

The equation therefore can be written as:
$$gH = l(Q,n,D,\text{SHAPE})-l_{w}(n,D,\rho,\mu,\text{SHAPE})$$
$$\implies H(Q,n,D,\rho,\mu,\text{SHAPE})$$
Rendering the head dimensionless we get:
$$\psi = \frac{gH}{n^{2}D^{2}}\implies \psi= \psi(\varphi,Re,\text{SHAPE})$$
In this course we will always consider $Re$ such that we have a fully-turbulent flow:
$$\implies \frac{ \partial \psi }{ \partial Re } = 0\implies \begin{cases}
\psi=\psi(\varphi,\text{SHAPE}) \\
\cancel{ g }H=\cancel{ g }H(Q,n,D,\text{SHAPE})
\end{cases} $$
The set of equations:
$$\begin{cases}
\psi = \psi(\varphi,\text{SHAPE}) \\
H = H(Q,n,D,\text{SHAPE})
\end{cases}$$
Define what we call hydraulic similarity. Hydraulic similarity implies an incompressible flow and fully-turbulent flow, meaning we we go from a dynamic to kinematic problem.

In the equations, when we say that we have an assigned shape, it means that we will be focusing on a single family of machines. We make the assumption that we always have an assigned shape.

$D$ assigned implies that the size of the machine is defined, since we have already a given shape, everything else about the geometry becomes defined.

$Q,n$ represent the operating condition of the machine.

### Representative curve of a pump
Only after defining the shape, D and an $n$ will be be able to determine the dimensional relationship between $H$ and $Q$.

This curve for the pump will take the form:
![](Pasted%20image%2020250317203714.png)
It's important to note that while pumps generally have representative curve of this form, a curve will only be valid for the defined conditions, if any change, the curve will also be subject to change.

In dimensionless terms only the shape needs to be assigned to be able to get a relationship, since $\psi = \psi(\varphi,\text{SHAPE})$. The curve will take same form:
![](Pasted%20image%2020250317204000.png)

Taking multiple values for $Q$ we see that the head changes for each, with one being the best. This is because the air foil can only have one change, for the whole range of $Q$ values. Since we are not changing $n$, the different volumetric flows will be more or less effective in transferring power to blade; this is since the angle $\beta_{1}$ changes.

$\beta_{2}$ as already stated is constructive so no matter what it stays the same. The head changes due to volumetric flow since, given that the flow is entering at different angles, the flow will need to be deflected so we will need to put more power into the fluid.

### Hydraulic efficiency of the pump

$$\eta_{p} = \frac{gH}{l} = \frac{l-l_{w}}{l} = 1- \frac{l_{w}}{l}$$
We can also write this in dimensionless terms since both $l_{w}$ and $l$ can be nondimentionalised by $n^{2}D^{2}$:
$$\eta_{p} = \frac{\psi}{\lambda}\implies \eta_{p}=\eta_{p}(\varphi ,\text{SHAPE})$$

Since $\lambda=\lambda(\varphi,\text{SHAPE})$, we can also write $\psi$ as a function of $\lambda$, and also $\eta$ as a function of $\lambda$:
$$\eta = \eta(\lambda,\text{SHAPE})$$

We can represent the relationship between $\eta$ and the $\varphi$:
![](Pasted%20image%2020250317204916.png)

The best efficiency point is obviously the point at which the efficiency is at it's greatest, we typically try to design the machine to function best at this point.

### Condition Similarity

Given a machine for which:
$$\begin{cases}
H=H(Q,n,D,\text{SHAPE}) \\
\psi = \psi(\varphi,\text{SHAPE})
\end{cases}$$
Is it possible to change $Q,n,D$ such that they change but $\psi$ doesn't?
Yes, it's possible. If true these conditions are called similar/corresponding conditions, meaning that:
$$\begin{cases}
\varphi,\varphi' \to \varphi=\varphi' \\
\psi,\psi' \to \psi=\psi'
\end{cases}$$

Let's do an example.

Let's take the rotor and find it's velocity triangles:

![](Pasted%20image%2020250317210702.png)

Let's consider the condition with an initial Q and one in which $Q'=\frac{Q}{2}$, the velocity triangles for these two conditions are:

![](Pasted%20image%2020250317210807.png)

We can see that the angles $\alpha_{1}$ and $\beta_{2}$ do not change as these are constructive angles and only change based on the geometry, on the other hand the two non-constructive angles have changed as one component has changed, while another has not.

Keeping the machine as it is, withing changing $D$ or $n$, everything changes we have changed the conditions. We can see this with the change both the efficiency and dimensionless work:

![](Pasted%20image%2020250317211024.png)

Since we have halved the volumetric flow, and we keep the diameter the same, since we want to use the same diameter, we want to find the $n$ so we have a similar condition.

If we want similarity:
$$\implies \varphi'=\varphi \implies \frac{Q'}{n'\cancel{ D^{3} }}=\frac{Q}{n\cancel{ D^{3} }}\implies \frac{n'}{n}=\frac{Q'}{Q}\implies n'=\frac{n}{2}$$
Our velocity triangles have become:

![](Pasted%20image%2020250317212340.png)

All angles have been maintained, this is thanks to the similarity conditions.
Through the similarity conditions we can guarantee that our non-constructive angles are conserved.

Conserving the shape of the triangles means that we are also able to conserve the performance parameters, $\varphi'=\varphi$ and $\psi'=\psi$, $\eta'=\eta$

Since the dimension of the triangles are different though, the work will have to also change. In this case since we decreased the volumetric flow and rotations velocity by a factor of 2, the work will be 4 times lower.

Since under the similarity conditions, the efficiency is constant, the head will be proportional to the work, therefore since:
$$\frac{l'}{l}=\frac{1}{4}\implies \frac{H'}{H}=\frac{1}{4}$$
(THIS IS ONLY VALID IN SIMILARITY CONDITIONS)

### Other approach to similarity

Since $Q'=\frac{Q}{2}$, $D'=D$ and the shape has been assigned.

$$\begin{cases}
\varphi'=\varphi \\
\psi=\psi(\varphi,\text{SHAPE}) \\
\psi'=\psi' (\varphi',\text{SHAPE})
\end{cases}\implies \psi'=\psi \implies H'=\left( \frac{n'}{n} \right)H$$
This is a quicker derivation of the different in head that we have to have.

So as a recap, the similarity of conditions, means that there will be a similarity in the velocity triangles.

Everything will become a bit more complicated in thermal machines, when the density will not be constant.