---
creation_date: 2025-03-28
tags: 
parent: 
child: 
share: false
---
# Lezione 14 - $H = H(Q)$
We demonstrated heuristically that the characteristic curves of a pump could be written as:
$$\begin{cases}
H = AQ^{2}+BQ+C \\
\eta = EQ^{2}+FQ+G
\end{cases}$$
These equations are valid for a given $n=\overline{n}_{}$ and $D = \overline{D}_{}$

In it's dimensionless form, the equation for the head can written as:
$$\psi = \alpha\varphi^{2}+\beta\varphi+\gamma$$
This equation is value for any $n$ and $D$ in machines of a given shape, therefore it describes the family of machines.

$\alpha,\beta$ and $\gamma$ depend only on the shape, whereas $A,B$ and $C$ are also dependent on $n$ and $D$.

For a certain SHAPE, $n$ and $D$ we are therefore able to describe the characteristic curve of a machine as:

![](Pasted%20image%2020250328151533.png)

On this graph we can also define the circuit curve, which will intersect with the machine curve and define the operating condition of the system:

![](Pasted%20image%2020250328151645.png)

The operation condition is where the curve intersect and will also be the condition in which the system will operate once the machine is plugged in and run at a given angular velocity, $n$.

What happens to the characteristic curve of the machine if we change $n$, without changing $D$ or the SHAPE?

Identifying any point on the curve, we know the non-constructive angles. What happens if we reduce $n$ while maintaining similarity conditions ($\implies$also reducing $Q$) is that the associated points of the curve change to maintain similarity.

To maintain similarity we have that:
$$\begin{cases}
\varphi_{1}=\varphi_{2}\implies \underbrace{ \frac{Q_{1}}{\overline{n}_{} }=\frac{Q_{2}}{n} }_{ \substack{\text{D remains}\\\text{unchanged}} } \underbrace{ \implies }_{ (1) } \frac{Q_{2}}{Q_{1}} = \frac{n}{\overline{n}_{} } \\
\psi_{1} = \psi _{2} \implies \frac{gH_{1}}{\overline{n}_{}^{2} } = \frac{gH_{2}}{n^{2}} \implies  \frac{H_{2}}{H_{1}} = \left( \frac{n}{\overline{n}_{} } \right)^{2}\underbrace{ = }_{ (1) }\left( \frac{Q_{2}}{Q_{1}} \right)^{2}
\end{cases}$$
The result of maintaining similarity (changing $n$ and $Q$ correspondingly to maintain the same non-constructive angles) is that we find that all points in hydraulic similarity will be on a parabola passing through the origin.

![](Pasted%20image%2020250328154136.png)
(The lines in red are machine characteristic curve at different values of $n$)

All the points on the line will have the same shape triangles and $\eta,\varphi$ and $\psi$ will also be constant.
Through each parabola and each points we can get the curves at any $n$ we are interested in.

Mapping two curves for the head of the machine at different $n$, we get two different operating conditions for our machine:

![](Pasted%20image%2020250328155016.png)

While these two points are both on the characteristic curve of the circuit, they are not on the same similarity curve, as the characteristic curve of the circuit does not pass through the origin (barring some special cases), and therefore it is not a similiary curve.

(If the characteristic curve of the circuit does pass through the origin, it will be a similarity curve and in this case only head needed would be to increase the velocity of the fluid, this is the case for many fluid pumping systems like those in cars to pump window wiper fluid.)

Since the two points are not similar, their $\eta$ will be different, as so too will $\varphi$ and $\psi$. To find the new curve we can map every points through it's similarity condition and it being assuming $n=\overline{n}_{}$.
Determining the curve through this is not very efficient, so a different method of determining the curve is to pass through the dimensionless form of the curve, assuming similarity condition and returning to the dimensional form of the equation.

## Hydraulic Similarity - Exercise 4
We are going to go through te steps of determining the new curve after a change in $n$, while looking at an example exercise.

For this exercise the two curves for the head and the circuit are:
$$H_{c} = 22+1200Q^{2}$$
$$H_{p} = 30-5000Q^{2}$$
The pump should always start higher and always have a negative curvature.

We can map these two curve on a $H-Q$ graph:

![](Pasted%20image%2020250328155936.png)

We also know the efficiency of the pump to be:
$$\eta_{_{p}} = -250Q^{2}+17Q+0.5$$
The power of the machine will be:
$$\dot{L} = \dot{m}l = \overline{\dot{m}} \frac{g\overline{H}}{\overline{\eta}_{} } = \frac{\rho \overline{Q}_{}\overline{H}_{}g}{\overline{\eta}_{} } = 10.5kW$$

Using the two curves we can find original operating condition as:
$$\begin{cases}
\overline{H}_{0}=23.5m \\
\overline{Q} = 0.036 \frac{m^{3}}{s} \\
\eta(\overline{Q}_{} ) = \overline{\eta}_{} = 0.788   
\end{cases}$$

Changing the angular velocity from 1500 to 1750, the characteristic will increases at the $n$ increases:

![](Pasted%20image%2020250328162828.png)

We know $H_{p}$ from n=1500, if we are able to write it in a dimensionless form we will be able to then find the new curve.

We can generalise the curve and use similarity to find the new curve based on whichever $n$ we want.

### General Procedure
$$H = AQ^{2}+BQ+C\to \text{for } \overline{n} \text{ and }\overline{D}_{}   $$

With $\psi = \frac{gH}{\overline{n}_{}^{2}\overline{D}^{2}}$ and $\varphi = \frac{Q}{\overline{n}_{}\overline{D}_{}^{3}}$ for our initial condition we get dimensionless curve based on our initial value as:
$$\psi \overline{n}^{2}\overline{D}_{}^{2} = gA\overline{n}_{}^{2}\overline{D}_{}^{6}\varphi^{2}+gB\overline{n}_{}\overline{D}_{}^{3}\varphi+gC      $$
$$\implies \psi = \underbrace{ gA\overline{D}_{}^{4} }_{ \alpha }\varphi^{2}+\underbrace{ gB \frac{\overline{D}_{}}{\overline{n}_{} } }_{ \beta }\varphi + \underbrace{ \frac{gC}{\overline{n}_{} ^{2}\overline{D}_{} ^{2}} }_{ \gamma }    = \alpha\varphi^{2}+\beta\varphi+\gamma$$
Since we follow similarity, the curve will be the same for any $n$ and $D$ we choose, for any given SHAPE, we can use this fact to be able to write any curve for a given SHAPE.

$$\begin{cases}
\alpha = gA\overline{D}^{4} \\
\beta = gB \frac{\overline{D}}{\overline{n}_{} } \\
\gamma = \frac{gC}{\overline{n}_{} ^{2}\overline{D}_{} ^{2}}  
\end{cases}\implies \begin{cases}
A = \frac{\alpha}{g\overline{D}_{} ^{4}} \\
B = \frac{\beta \overline{n}}{g\overline{D} } \\
C = \frac{\gamma}{g}\overline{n}^{2}\overline{D}^{2}   
\end{cases}$$
$\alpha,\beta$ and $\gamma$ are a family of coefficients for a given shape, while $A,B$ and $C$ are the realisation of these coefficients for $\overline{n}_{}$ and $\overline{D}_{}$.

We can finally generalise the equation for the head knowing:
$$\begin{cases}
\varphi = \frac{Q}{nD^{3}}  \\
\psi = \frac{gH}{n^{2}D^{2}}
\end{cases}$$
Plugging this into the dimensionless equation we go, we get:
$$\frac{gH}{n^{2}D^{2}} = gA\overline{D}_{}^{4} \frac{Q^{2}}{n^{2}D^{6}} + gB \frac{\overline{D}_{}}{\overline{n}_{} } \frac{Q}{nD^{3}} + \frac{gC}{\overline{n}^{2}\overline{D}_{}^{2}  }  $$
Simplifying we get:
$$\boxed{ H = A\left( \frac{\overline{D}}{D}  \right)^{4}Q^{2} + B\left( \frac{n}{\overline{n}_{} } \right)\left( \frac{\overline{D}}{D}  \right)Q+C\left( \frac{n}{\overline{n}_{} } \right)^{2}\left( \frac{D}{\overline{D}_{} } \right)^{2} }$$
This is the equation $H=H(Q,n,D,\text{SHAPE})$ which we have been looking for this whole time.

In this equation $\overline{n}_{}$ and $\overline{D}_{}$ are original from which we got the original curve, whereas $n$ and $D$ are the arbitrary parameters from which we get the new curve.
In this case we are keeping the diameters the same, so the ratios are:
$$\frac{\overline{D}_{}}{D} = \frac{D}{\overline{D}} = 1 $$

We can do this same procedure for $\eta$:
$$\eta = EQ^{2}+FQ+G = \underbrace{ E\overline{n}_{}^{2} \overline{D}_{}^{6}  }_{ \varepsilon }\varphi^{2}+ \underbrace{ F\overline{n}_{}\overline{D}_{}^{3} }_{ \sigma }\varphi + G   $$
Since $\varphi = \frac{Q}{nD^{3}}$ we get:
$$\eta = E\left( \frac{\overline{n}_{}}{n}  \right)^{2}\left( \frac{\overline{D}}{D}  \right)^{6}Q^{2}+F\left( \frac{\overline{n}_{}}{n}  \right)\left( \frac{\overline{D}}{D}  \right)^{3}Q+G$$
The initial point always remains the same, while curve moves to up and to the right, with the concavity reduces flattening our the parabola.

In the case of the original exercise, the original curve is:
$$H = 30-5000Q^{2}$$
The curve will be:
$$H = 30\left( \frac{1750}{1500}\right)^{2}-5000Q^{2} = 40.8-5000Q^{2}$$
The circuit curve stays the same as before, leading to the new operating condition for the system being:
$$\begin{cases}
H = 25.6m \\
Q = 0.055 \frac{m^{3}}{s}
\end{cases}$$
The efficiency on the other hand is:
$$\begin{align}
\eta &= -250\left( \frac{1500}{1750} \right)^{2}Q^{2} + 17\cdot\left( \frac{1500}{1750} \right)Q+0.5  \\
&= -184Q^{2}+16.57Q+0.5
\end{align}$$

$$\eta(0.055) = 0.745$$
As the graphs show this value has decreased.
The power of this system changes to:
$$\dot{L} = 18.6\;kW$$

## Pump Theory
Increasing $\beta_{2}$ to $\sim-60$ to $-70$, $\chi = 0,8-0.9$, this allows us to no longer need a diffuser, as the pump already does all the work of increasing the pressure. This lack of diffuser means that the machine will be more compact and render it more useful for a greater number of use cases.

![](Pasted%20image%2020250328175836.png)

On the left we have free or vaneless diffusers, which no longer need the blades of the diffuser to increase the flow to the desired pressure. The use only the increase in diameter along to flow as a diffusing mechanism.

On the right we have vaned diffuser hwich are needed when $\beta_{2}$ doesn't have enough magnitude. Vaned diffusers allow us to achieve higher loads for the pump, since $\chi$ will be lower so $v_{2t}$ will be higher, meaning that the exchanged work will be higher and therefore the head will be higher. Pumps that require more head use vaned diffusers.

Vaneless pumps have wider use cases, but are penalised with lower efficiency and are able add less head and work to the flow,
Vaned diffusers are less used but are more useful when the system requires more head to be added to the flow.

Vaneless diffusers usually have a more flat curve of efficiency which them even more useful in industrial settings.

### Stable vs. Unstable Pump Operation

Stable equilibrium is found when the operating condition is on the descending part of the characteristic curves.
Unstable equilibrium is found when the curve is on the ascending part of the curve.

More generally, an operating condition is stable when we can perturb the flow and the head produced by the system does not change as the machine cannot match the system, the system will then return to the initial operating condition once the perturbation has ended.
On the other hand, an operating condition is unstable when we can perturb the system, and since it has another point where it can match the requirements of the system it will go to that point. This will cause the operating conditions to become the one where the system carries a higher head.


![](Pasted%20image%2020250328180551.png)

Forward blades and radial blades are the most likely to have unstable equilibrium points.

### Multistage Pumps
Pumps can be put in parallel or series. A series configuration will allow us to increase the head of the system, whereas a parallel configuration will allow us to increase the flow rate as more machine us utilised to increase the head by the same amount.

Pumps in series have the following properties:
$$\begin{cases}
H_{eq} = H_{1}+H_{2} \\
Q_{eq}= Q_{1}+Q_{2}
\end{cases}$$
![](Pasted%20image%2020250328181213.png)


Whereas pumps in parallel have the following properties:
$$\begin{cases}
Q_{eq} = Q_{1}+Q_{2} \\
H_{eq } = H_{1}=H_{2}
\end{cases}$$

![](Pasted%20image%2020250328181609.png)

