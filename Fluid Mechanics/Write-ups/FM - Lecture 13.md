---
creation_date: 2025-03-23
tags: 
parent: 
child: 
share: false
---
# Lezione 13 - Cavitation and Characteristic Curve of a Centrifugal Pump

## Cavitation

For an operating machine the pressure curve, across two sides of the blade are:

![](Pasted%20image%2020250323091339.png)

For a motor machine on the other hand, the pressure curves are:

![](Pasted%20image%2020250323091409.png)

It is important to note that the stagnant pressure is not the same as we have considered, $P_{st}= P+\frac{1}{2}\rho v^{2}$, but rather it is:
$$P_{st} = P_{1}+\frac{1}{2}\rho w_{1}^{2}$$
To be able to avoid cavitation we only have to guarantee that the $P_{min}$ is higher that the saturation pressure at the given temperature, and the pressure of the dissolved gasses put together, therefore:
$$P_{min}>P_{sat}(T)+P_{dis}$$

Since companies spend a lot of time making their machines, and so do not want to release the curved which are the fruit of this work.
But, the buyer still needs to be able to have information that tells them where their $P_{min}$ is. So we introduce a new parameter, the new positive suction head (NPSH).

### Net Positive Suction Head (NPSH)

For pumps that required NPSH to guarantee that there is no cavitation is:
$$NPSH_{R} = \underbrace{ \frac{P_{1}}{\rho g}+\frac{v_{1}^{2}}{2g} }_{ P_{ST} }-\frac{P_{min}}{\rho g}$$
This Required NPSH, $NPSH_{R}$, is easy to determine because it's plant dependent, but it is defined for the machine and so cannot be changed easily without changing the machine.

It is important to note that the NPSH can be read as the vertical distance, in the pressure graphs, between the stagnation pressure ,and, in the case of the require NPSH, the minimum pressure.

The equation for the $NPSH_{R}$ tells us that, given $n$ and $D$, it is only dependent on the volumetric flow.

![](Pasted%20image%2020250323094905.png)

A user definable value is the available NPSH, $NPSH_{A}$, which has equation:
$$NPSH_{A} = \frac{P_{1}}{\rho g}+\frac{v_{1}^{2}}{2g}-\frac{P_{sat}-P_{dis}}{\rho g}$$

It is sufficient to guarantee that $NPSH_{A}>NPSH_{R}$, to say that the cavitation will not occur, since we get $P_{sat}+P_{dis}<P_{min}$, which is the condition which we listed before.

### Cavitation Assessment
A cavitation assessment is how in practice we get $NPSH_{A}>NPSH_{R}$.

Let's take the start of a pumping system, as such:
![](Pasted%20image%2020250323095329.png)

Taking the mechanical energy balance between 0 and 1, we get:
$$\begin{align}
\cancel{ l }-\cancel{ l_{w} }-y_{s}&=T_{1}-T_{0} \\
-y_{s}&=\frac{P_{1}}{\rho g}+\frac{v_{1}^{2}}{2g}+gz_{1} -\frac{P_{0}}{\rho g}-\frac{v_{0}^{2}}{2g}-gz_{0} \\
-\frac{y_{s}}{g} &= \frac{P_{1}}{\rho} + \frac{v_{1}^{2}}{2}-\frac{P_{0}}{\rho}+gh \\
\implies \frac{P_{1}}{\rho g}+\frac{v_{1}^{2}}{2g}&= \frac{P_{0}}{\rho g}-h-\frac{y_{s}}{g} 
\end{align}$$

This equations shows that while it may be advantageous to place the pump above the reservoir to make it easy to access for maintenance, for operational purposes (reducing losses) it is advantageous to put it underneath the reservoir.

Looking at the equation for the $NPSH_{A}$:
$$NPSH_{A} = \frac{P_{1}}{\rho g}+\frac{v_{1}^{2}}{2g}-\frac{P_{sat}-P_{dis}}{\rho g}$$
We can substitute the stagnation pressure with the equation that we have just found:
$$=\frac{P_{0}}{\rho g}-h-\frac{y_{s}}{g}-\frac{P_{sat}+P_{dis}}{\rho g} = \frac{P_{0}}{\rho g}-h-\frac{\xi_{s}v_{s}^{2}}{2g}-\frac{P_{sat}+P_{dis}}{\rho g}$$

There were no concentrated or distributed losses, and $P_{0}=P_{atm}$, then the maximum height would be $h_{max}$ before we have cavitation, this is something we also saw in the fluid mechanics course.

For turbines instead of taking the mechanical energy balance between 0 and 1, we take it between 1 and 2, across the turbine.

### NPSH and Similarity
In standard conditions the NPSH is a kinematic quantity, like the head. Therefore we can describe the required NPSH as:
$$NPSH_{R} = NPSH_{R}(Q,n,D,\text{SHAPE})$$
Looking for a dimensionless parameter, due to it's similarity to the head we can write:
$$\sigma = \frac{gNPSH}{n^{2}D^{2}}\to\sigma=\sigma(\varphi,\text{SHAPE})$$
$\sigma$ is Thoma's Parameter, who's actual definition is $\sigma = \frac{NPSH_{R}}{H}$, but this can cause confusion and the form we use is more understandable when we make changes.

Is $n'=n$, then $NPSH_{R}=4NPSH_{R}$.

## Characteristic Curve of Centrifugal Pump
In the last few lessons we have seen the characteristic curve of the pump and have taken it for granted, so now we will derive it.

The characteristic curve describes the equation $H=H(Q)$, given $n,D$ and $SHAPE$.

Since:
$$H=\frac{l-l_{w}}{g}$$
We need to write $l(Q)$ and $l_{w}(Q)$:
$$l(Q) = u_{2}v_{2t}-\cancel{ u_{1}v_{1t} } = u_{2}(w_{2t}+u_{2})=u_{2}\left( \frac{Q}{\pi D_{2}b_{2}}\tan\beta_{2} +u_{2}\right)$$
For $l_{w}(Q)$ we cannot derive an analytical equation, we have to make general consideration.

For the work, we can find the work based on the angle of the blades at the trailing edge.

In the base where $\beta_{2}>0$, the velocity vectors have shape:

![](Pasted%20image%2020250323103505.png)

For $\beta_{2}=0\implies l=u_{2}^{2}$.

If $\beta_{2}>0$, we call the blades forward blades and the velocity vectors are:

![](Pasted%20image%2020250323103620.png)
If the volumetric flow increases, the relative speed increases which causes $v_{2t}$ to increase, therefore increasing the work.

While if $\beta_{2}<0$, the blades are called backward blades, the velocity vectors are:

![](Pasted%20image%2020250323103831.png)
In this case if the volumetric flow increase, the relative velocity increases, but in this case $v_{2t}$ decreases, so the work also decreases.

Putting everything together we can write:
![](Pasted%20image%2020250323103928.png)

To be able to answer which $\beta_{2}$ is best for our case, we need to clarify the $l_{w}(Q)$.

In general we can describe losses as the sum of the losses due to friction in the meridional view and the aerodynamic losses due to interaction with the blades:
$$l_{w}=l_{w,\text{MER}}+l_{w,\text{B2B}}$$
![](Pasted%20image%2020250323105206.png)
The losses can be interpolated by a parabola with positive concavity.

Putting together the work and the losses we get a curve which is dependent on the angle (here we represent just 3 cases):

![](Pasted%20image%2020250323105455.png)

There curves are like many of the curves which we have seen, because they all come the same function of $H$ which are trying to depict.

### Which $\beta_{2}$ is best?

Overlaying the velocity vectors for different setups:

![](Pasted%20image%2020250323112233.png)
(The $u$ vectors should be the same).

Since out objective with the pump is to increase the pressure the designs that have lower $v_{2}$ will be easier to use, since this will reduce the work which other systems will have to do to increase the pressure and reduce the speed. The diffuser which increases the velocity the most (while still increasing the pressure as every machine does), is less used since we have to use other systems to straighten the flow and reduce the pressure which incur more losses as they have deflect the velocity more to bring it back to what it was. Backward blades are therefore more efficient and therefore more in use.

While this is a good explanation for why backwards blades are more efficient, we need to find an analytical parameter which explains why this is so.

The parameter which we introduce is the reaction degree, $\chi$, which describes how much of the head becomes speed and how much becomes pressure.

Let's take the a centrifugal pump:

![](Pasted%20image%2020250323112956.png)

We can define the reaction degree as:
$$\chi = \frac{P_{2}-P_{1}}{\rho gH}$$
To be able to re-write this we need to make a few assumptions:

The first assumption is that $l_{w}=0$:
$$\implies \begin{cases}
gH=l=u_{2}v_{2t} \\
gH = \underbrace{ T_{4}-T_{0} }_{ BME\; 4-0 } = T_{2}-T_{1} =\frac{P_{2}-P_{1}}{\rho}+\frac{v_{2}^{2}-v_{1}^{2}}{2}
\end{cases}$$
For the second equation we applied the equation that we know $gH=l-l_{w}=\Delta T$ between 0 and 4, since the head is across the whole machine not just the rotor. The equation can also be re-written as:
$$\frac{P_{2}-P_{1}}{\rho}=gH-\frac{v_{2}^{2}-v_{1}^{2}}{2}$$
Applying this to the original equation for the reaction degree:
$$\implies \chi=\frac{gH-\frac{v_{2}^{2}-v_{1}^{2}}{2}}{gH} = 1-\frac{1}{2} \frac{v_{2}^{2}-v_{1}^{2}}{gH}=$$
Applying then the first equation we get:
$$\chi=1-\frac{1}{2} \frac{v_{2}^{2}-v_{1}^{2}}{u_{2}v_{2t}}$$

The second assumption we make is that the meridional velocity is constant:
$$v_{m}=\text{const}\implies v_{2}^{2}-v_{1}^{2}=(v_{2t}^{2}+\cancel{ v_{2m}^{2} })-\cancel{ v_{2m}^{2} }$$
Applying this to the original equation we get:
$$\chi = 1-\frac{1}{2} \frac{v_{2t}}{u_{2}}$$
This equation is dependent on $\beta_{2}$:
$$\begin{cases}
\beta_{2}=0\to \chi=0.5 \\
\beta_{2}>0\to \chi<0.5 \\
\beta_{2}<0\to \chi>0.5
\end{cases}$$
If $\chi$ is greater, more head is transformed into pressure, therefore we can see the advantage of the backwards blades, and why they are used more. The objective of the pump is to increase pressure, it is not a fan, therefore we try to minimise the acceleration as much as possible (knowing that they fluid will still speed up).

### Characteristic Curve 
We have seen that H is parabolic:

![](Pasted%20image%2020250323133908.png)
And can be described with the interpolating parabola:
$$H=H(Q)=AQ^{2}+BQ+C$$
Knowing also that:
$$\eta= \eta(Q) \to \eta = \frac{gH}{l}$$
We can also find the parabola of the efficiency:

![](Pasted%20image%2020250323134106.png)
And the associated parabola:
$$\eta = \eta (Q)=DQ^{2}+EQ+F$$

If I know, the shape, $D$ and $n$, as well as the $H-Q$ curve for a given value of $n$ and $D$, we will be able to find the dimensionless form and be able to determine the curve for all machines of the family, not just the one machine.

Our head has parameters:
$$H = H(Q,n,D,\text{SHAPE})$$
Through similarity we can make $H=H(Q)$ and $\eta = \eta(Q)$ dimensionless, and then by inputting the values of $n$ and $D$ for our specific case we are able to redimensionalise them.

$A,B,C,D,E$ and $F$ are function of $n$ and $D$, we are able to derive this.

We know that the dimensionless forms of the head and volumetric flow are:
$$\begin{gather}
\psi = \frac{gH}{n^{2}D^{2}} \\
\varphi = \frac{Q}{nD^{3}}
\end{gather}$$
This means that the head and volumetric flow can be written as:
$$\begin{gather}
H = \frac{\psi n^{2}D^{2}}{g} \\
Q= nD^{3}\varphi
\end{gather}$$
Inputting the unique values of $n=\overline{n}_{}$ and $D=\overline{D}_{}$ for the machine we are looking at:
$$\begin{gather}
H = \frac{\psi}{g}\overline{n}_{}^{2}\overline{D}^{2} \\
Q = \varphi \overline{n}\overline{D}^{3}    
\end{gather}$$
Plugging in these specific value in the equation of the parabola of the head we get:
$$\underbrace{ \frac{\psi}{g}\overline{n}_{}^{2}\overline{D}_{}^{2} }_{ H } = A\overline{n}_{}^{2}\overline{D}_{}^{6}\varphi^{2} +B\overline{n}_{}\overline{D}_{}^{3}\varphi+C $$
$$\implies \psi = \underbrace{ gA\overline{D}_{}^{4} }_{ \alpha }\varphi^{2} +\underbrace{ gB \frac{\overline{D}_{}}{\overline{n}_{} } }_{ \beta }\varphi+\underbrace{ \frac{g}{\overline{n}_{} } \frac{C}{\overline{D}_{} }  }_{ \gamma } = \alpha \varphi^{2}+\beta \varphi+\gamma$$
Since the equation get to be dimensionless, we know that the units have to cancel each other out, and therefore $\alpha,\beta$ and $\gamma$ have be functions of $D$ and $n$ to cancel out the values.





