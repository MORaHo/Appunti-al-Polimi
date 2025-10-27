---
creation_date: 2025-05-17
tags: 
parent: 
child: 
share: false
---
# Lezione 21 - Gas Dynamics

In the last lecture we introduced gas-dynamics and defined a system equations for our gas. Before continuing to develop these equations, we took a second to introduce the Mach number and define it mathematically.

## Solution to 1D isoentropic compressible flow

The system we found for the gas was:
$$\begin{cases}
\rho(x)v(x)A(x) = \dot{m} =\text{const}\\
h(x) + \frac{v(x)^{2}}{2} = h_{T} = \text{const} \\
\frac{P(x)}{\rho(x)^{\gamma}} = \text{const}
\end{cases}$$
To these two equations we add the equations of state for a gas.

Starting from the second equation in our system we get:
$$\begin{align}
&\implies h_{T} = h+\frac{v^{2}}{2}  \\
&\implies  h_{T}-h = \frac{v^{2}}{2} \\
&\implies c_{p}(T_{T}-T)=\frac{v^{2}}{2} \\
&\implies T_{T}-T = \frac{v^{2}}{2c_{p}} \\
&\implies \frac{T_{T}}{T} = 1+\frac{v^{2}}{2c_{p}T}  \\
c_{p}= \frac{\gamma}{\gamma-1}R &\implies  \frac{T_{T}}{T} = 1+\frac{\gamma-1}{2}\cdot \frac{v^{2}}{\gamma RT}
\end{align}$$

We know the speed of sound to be:
$$a = \sqrt{ \left( \frac{\partial P}{\partial\rho} \right)_{S} }$$
From here, developing the third equation of the system (derived from the equations of state) we can find the value for the speed of sound for a perfect gas:
$$\begin{align}
\text{Perfect Gas}&\implies \ln\left( \frac{P}{\rho^{\gamma}} \right) = \ln(\text{const}) \\
&\implies \frac{dP}{P} = \gamma  \frac{d\rho}{\rho} \\
&\implies \left(\frac{\partial P}{\partial\rho}\right)_{S} = \gamma  \frac{P}{\rho} = \gamma RT  \\
a= \sqrt{ \left( \frac{\partial P}{\partial \rho}  \right)_{S} } &\implies a = \sqrt{ \gamma RT }
\end{align} $$
Going back to the previous equation with our new found knowledge:
$$\begin{gather}
\frac{T_{T}}{T} = 1+\frac{\gamma-1}{2} \frac{v^{2}}{\gamma RT} = 1+\frac{\gamma-1}{2}  \frac{v^{2}}{a^{2}} = 1+\frac{\gamma-1}{2} M^{2} \\
\frac{T_{T}}{T} = 1+\frac{\gamma-1}{2}M^{2}
\end{gather}$$
We have parameterised the energy balance to be a function of $M$.

We define $P_{T}$ as the total pressure, which is the pressure reached due to isoentropic deceleration.

Knowing that an isoentropic transformation can be represented by the following equation:
$$\frac{P_{2}}{P_{1}} =\left( \frac{T_{2}}{T_{1}} \right)^{\frac{\gamma}{\gamma-1}}$$

If $P_{2} = P_{T}$ and $P_{1}$ is any given pressure, the equation becomes:
$$\frac{P_{T}}{P} = \left( \frac{T_{T}}{T} \right)^{\frac{\gamma}{\gamma-1}}= \left( 1+\frac{\gamma-1}{2}M^{2} \right)^{\frac{\gamma}{\gamma-1}}$$

Applying the third equation of our system to this equation gives us:
$$\frac{\rho_{T}}{\rho} = \left( 1+\frac{\gamma-1}{2}M^{2} \right)^{\frac{1}{\gamma-1}}$$

The next equation we develop is the first equation of our system:
$$\dot{m} = \rho vA = \frac{P}{RT}\cdot \underbrace{ aM }_{ v }\cdot A = \frac{P}{RT}\cdot \sqrt{ \gamma RT }\cdot M\cdot A = \frac{PA}{\sqrt{ RT }}\sqrt{ \gamma }\cdot M$$
$h_{T}$, $P_{T}$ and $T_{T}$ are all good candidates for boundary conditions for our problem.

We can write this question in terms of $P_{T}$ and $T_{T}$:
$$\implies \dot{ m}=\frac{P_{T}A}{\sqrt{ R T_{T} }} \underbrace{ \left( 1+\frac{\gamma-1}{2}M^{2}s \right)^{\frac{1}{2}-\frac{\gamma}{\gamma-1}}\sqrt{ \gamma  }\cdot M }_{ \text{Dimensionless} \to f(\gamma,M) } $$
This dimensionless parameter we find, is the the dimensionless mass flow rate and is defined as:
$$f(\gamma,M) = \frac{\dot{m}\sqrt{ RT_{T} }}{P_{T}\cdot A}=\dot{m}_{AD}$$
### Relationship in the rate of change between area and velocity
(In this section $\nu$ is the specific volume, while $v$ is the velocity)

Taking the derivate of each of the equation of our system we get:

$$\begin{cases}
\frac{d\rho}{\rho} + \frac{dv}{dv}+\frac{dA}{A}=0 \\
dh +d\left( \frac{v^{2}}{2} \right) = 0 \\
ds=0
\end{cases}$$
The first equation can simply be re-written as:
$$\frac{dA}{A}=\frac{dv}{v}-\frac{d\rho}{\rho}$$
The third equation, along side of the equations of state for gasses imply:
$$\frac{dP}{P} = \gamma  \frac{d\rho}{\rho}\implies dP = \underbrace{ \gamma  \frac{P}{\rho} }_{ RT }d\rho=a^{2}d\rho$$
Now, developing the second equation, we find:
$$\begin{align}
&\implies Tds + \nu dP + \frac{2}{2}v dv=0 \\
&\implies  \nu dP = -v dv
\end{align}$$
Applying the equation for $dP$ which we found from developing the third equation, we get:
$$\begin{align}
&\implies \frac{1}{\rho}a^{2}d\rho = -v dv \\
&\implies \cancel{ a^{2} } \frac{d\rho}{\rho} = -\frac{v^{2}dv}{a^{2}\cdot v} = -M^{2} \frac{dv}{v} \\
&\implies \frac{d\rho}{\rho} = -M^{2} \frac{dv}{v}
\end{align}$$
Combining this with the result we got from the first equation we get:
$$\frac{dA}{A} = -\frac{dv}{v}+M^{2} \frac{dv}{v} = (M^{2}-1) \frac{dv}{v}$$

This equation finally tells us the relationship between the area and the velocity of a gas in a duct.
The equation tells us that there are two possible general behaviours for the gas.

#### Subsonic Case ($M<1$)

In this case:
$$\frac{d\nu}{\nu}< \frac{dv}{v}\to M^{2}-1<0\implies \frac{dA}{A} = -\left|M^{2}-1\right| \frac{dv}{v}$$
Since $M<1$, the rate of change of $A$ and $v$ is the opposite. This is the case we consider most of the time, where we need a converging nozzle if we want to speed up the fluid and a diverging diffuser if we want to slow down the fluid.

#### Supersonic Case ($M>1$)

In this case:
$$\frac{d\nu}{\nu} > \frac{dv}{v}\implies \frac{dA}{A} = \left|M^{2}-1\right| \frac{dv}{v}$$
The rates of change are of the same sign, so now as counter-intuitive as it may seem, we need a diverging nozzle to increase the speed of the fluid and a converging diffuser to slow down the fluid.

#### Sonic Case ($M=1$)

In the sonic case, the change in area will be null, we call the point at which this occurs a sonic throat.

### Application

Let's study the efflux from a reservior, with a 1D, compressible and isoentropic flow going through a purely converging nozzle.

Let's imagine a system:

![](Pasted%20image%2020250518111149.png)


Let's say we are interested in determining the outflow static temperature, how we procede knowing the pressure ratio:

$$\frac{P_{T,out}}{P_{out}} = \left( 1+\frac{\gamma-1}{2}M^{2}_{out} \right)^{\frac{\gamma}{\gamma-1}}\longrightarrow \frac{P_{0}}{P_{ext}} = \left( 1+\frac{\gamma-1}{2}M_{out}^{2} \right)^{\frac{\gamma}{\gamma-1}}$$
In this case we know that the total pressure in the container is the internal pressure, and since there is no work being performed the total pressure inside will also be the total pressure outside.
$$\frac{T_{T,out}}{T_{out}} = \left(1+\frac{\gamma-1}{2}M_{out}^{2}\right)$$
From the first equation we can determine the Mach number:
$$\implies M_{out} = \sqrt{ \frac{2}{\gamma-1}\left( \left( \frac{P_{0}}{P_{ext}} \right)^{\frac{\gamma}{\gamma-1}}-1 \right) }$$
Assuming we know $v$ we are able to determine the speed of sound for our fluid at the outflow.
From this Mach number and the second equation we can find the temperature of the gas at the exit:
$$T_{out} = \frac{T_{0}}{1+\frac{\gamma-1}{2}M_{out}^{2}}$$
If we are able to refer condition (i.e. quantities which we already know the value of), then we are able to solve everything.

Because $M_{0}=0$ and because we assume an isoenergetic ($l=0$) transformation:
$$T_{T,out}= T_{T_{0}}=T_{0}$$
$$P_{T,out} = P_{T_{0}} = P_{0}$$

While for $M_{out}\leq 1$ we can say $P_{out}=P_{ext}$, we cannot say this in the case in which $M_{out}\geq 1$.

$$\text{If: }M_{out}=1 \implies \frac{P_{T,out}}{P_{out}} = \left( 1+\frac{\gamma-1}{2} \right)^{\frac{\gamma}{\gamma-1}} = \left( \frac{\gamma+1}{2} \right)^{\frac{\gamma}{\gamma-1}} = \beta_{crit}$$
We can also determine the critical temperature ratio:
$$\frac{T_{T,out}}{T} = \frac{\gamma+1}{2}$$

Let's now consider the case which we vary $P_{ext}$ to different pressure:

![](Pasted%20image%2020250518114508.png)

If we reduce $P_{ext}$ to $\frac{P_{0}}{\beta_{crit}}$, while keeping $P_{0}$ constant, then $M_{out}=1$. At this point the perturbation waves from any further change in $P_{ext}$ will never reach the fluid inside the container, so the fluid inside the container will still believe the boundary conditions are those where $P_{ext} = \frac{P_{0}}{\beta_{crit}}$ when $P_{ext}$ might have gone even lower. The flow is therefore stuck at $M_{out}=1$ until $P_{ext}< \frac{P_{0}}{\beta_{crit}}$.
This type of flow is called chocked flow condition.

At the chocked flow, the $P_{out}\neq P_{ext}$, because $P_{out}$ is the pressure the fluid can reach from speeding up and compressing in the nozzle, these values are:
$$P_{out}=\frac{P_{0}}{\left(\frac{\gamma+1}{2}\right)^{\frac{\gamma}{\gamma-1}}}$$
$$T_{out} = \frac{T_{0}}{\frac{\gamma+1}{2}}$$
Since $P_{out}>P_{ext}$, the flow still needs to speed up and reduce it's pressure. To do so after the exit of the nozzle, the flow will reach $M>1$, and start to expand as supersonic flows need a diverging nozzle to continue to speed up.

![](Pasted%20image%2020250518115319.png)

Continuing with the chocked flow, since the fluid inside the contained is no longer able to be informed of the external boundary conditions, it maintains a flow the adheres the last boundary conditions it got. Therefore after $P_{ext}=\frac{P_{0}}{\beta_{crit}}$, the mass flow rate plateaus and is no longer able to increase, as such:

![](Pasted%20image%2020250518115529.png)
(Remember we are moving to the left on the $x$-axis since we are decreasing $P_{ext}$)

While this case of altering $P_{ext}$ is interesting, in most cases $P_{ext}$ is fixed and $P_{0}$ is the variable quantity. In this case the mass flow rate has the following graph:

![](Pasted%20image%2020250518115729.png)

In the flow we are not able to exceed $M_{out}=1$, since our system only has a purely converging nozzle, as we have said after $P_{out}$ the flow will then expand, so if we want $M_{out}$ to increase we have to add a diverging nozzle to the end of our converging one.

The increase is linear since it increases with $v$.

Again, after the converging nozzle the flow will expand and we can added a diverging nozzle to help guide the fluid to reach $P_{ext}$, but we are not making those consideration right now as we are only considering a purely converging nozzle.






