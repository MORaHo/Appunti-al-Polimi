---
creation_date: 2025-05-16
tags: 
parent: 
child: 
share: false
---
# Lezione 19 - Wind Turbines and Gas Thermodynamics

## Betz Theory (Continuation)

In the last lecture we derived the following conditions:
$$\begin{cases}
T = (P_{2}-P_{1})A_{D} = \frac{1}{2}\rho(v_{3}^{2}-v_{0}^{2})A_{D} \\
T = \dot{m}(v_{3}-v_{0}) = \rho v_{D}A_{D}(v_{3}-v_{0})
\end{cases}$$

Setting these two equations equal to each other:
$$\implies \frac{1}{2}\cancel{ \rho } \cancel{ A_{D} }\cancel{ (v_{3}-v_{0}) }(v_{3}+v_{0}) = \cancel{ \rho } \cancel{ A_{D} }v_{D}\cancel{ (v_{3}-v_{0}) }$$
$$\implies v_{D} = \frac{v_{3}+v_{0}}{2}\to\text{Froude Velocity}$$

Before we can optimise we have to study $\dot{L}$ and introduce a few parameters.

We introduce a parameter called the induction coefficient:
$$a= \frac{v_{0}-v_{D}}{v_{0}}$$
This parameter measures the deceleration of the flow after the turbine.

The forces generated on the blades are so large that they cause stagnation downstream which causes the $v$ to decrease and the $P$ to increase.

We want to maximise $\dot{L}$, and to be able to do so we have optimise $a$. What we can't see is how to change the turbine to change $a$.
We have:
$$\begin{cases}
v_{D}=(1-a)v_{0} \\
v_{3}= (1-2a)v_{0}
\end{cases}$$
So, the thrust is:
$$T = \rho v_{0}A_{D}(v_{3}-v_{0}) = \rho(1-a)v_{0}A_{D}((\cancel{ 1 }-2a)v_{0}-\cancel{ v_{0} }) = \rho A_{D}v_{0}^{2}(-2a(1-a))$$
The equation for therefore is:
$$\dot{L} = Tv_{D} = \rho A_{D}v_0^{2}(-2a\cdot(1-a)^{2})$$
The value of the power will be negative, since this is the power of the fluid, not of hte turbine.

We introduce two new parameters, a thrust coefficient and a power coefficient:
$$c_{T} = \frac{\left|T\right|}{\frac{1}{2}\rho A_{D}v_{0}^{2}} = 4a\cdot(1-a)$$

The mode of optimisation may not come as immediately as it seems. $\dot{L}$ depends on $\Delta v^{2}$, but reducing $v_{3}$ through a large exchange of work reduces $v_{D}$, so we have to have a balance to maximise $\dot{L}$. The $\dot{L}$ therefore has a counterbalancing effect of needing to increase $\Delta v^{2}$, but doing so will also decrease the power relative to the expected value.

In this balance we can find an optimum, and we are lucky since this lies in the valid range of the Betz theory.

Mapping the two equation that we have found for the thrust and power coefficients, we find:

![](Pasted%20image%2020250516095758.png)

We can find the optimum values for $a$ to optimise both coefficients:
$c_p$ is optimised at $a=\frac{1}{3}$, so it's optimal value is $c_{p}= \frac{16}{27}$
While the optimal value for $c_{T}$ is at $a=\frac{1}{2}$ $\implies v_{3}=0$

Results for $a>0.5$ are meaningless with this theory, while above $a=0.4$, the streamtube theory is no longer valid. Luckily, the maximum for $c_{p}$ is achieved before $a=0.3$. In reality there might be some error, but for the design this is still valid and what is generally used.

If $a$ is too big, this is not valid, we need experimental trends.

### Design of Turbines

During power generation we only know $v$.
While the power of the wind increase, the $c_{p}$ will vary. Therefore the point at which we can extract the most power, is not necessarily the point at which the wind's power is the highest.
What we have to do is design the machine to withstand a certain velocity at which to size the machine so they don't break; this is a velocity which our machine should never exceed, and if the machine were to exceeded this speed we would pivot the blades to save the machine and purposely reduce $\dot{L}$. So it doesn't exceed the design limit. We forcefully decrease $c_{p}$ doing so, but it's ok in the is case since we are making sure we are able to use machine at a later date.

A Balje-type diagram exists for turbines, in which different blade designs are compared.

## Thermal Machines
Thermal machines are machines in which the fluid can no longer be considered compressible. They are called thermal machines since the temperatures become relevant for our processes.

For compressible fluid, like in incompressible flows, we use the following balances:
$$\begin{cases}
\text{Mass Balance: }\dot{m} = \text{const} \implies  \rho v_{n}A = \text{const} \\
\text{Energy Balance: } l + q = \Delta h+\frac{\Delta v^{2}}{2}+g\Delta z \\
\text{Mechanical Balance: } l-l_{w} = \underbrace{ \int\limits_{_{IN}}^{OUT}  v\, dP }_{\substack{\text{Technical}\\\text{Work}}} + \frac{\Delta v^{2}}{2}+g\Delta z 
\end{cases}$$

We combine these balances with the equations of state for a gas rather than a liquid:
$$\begin{cases}
\Delta h = c_{p}\Delta T \\
Pv = RT = \frac{P}{\rho}\implies \rho= \frac{P}{RT}
\end{cases}$$

From the mass balance, we know:
$$\begin{align}
d(ln(\rho v_{n}A)) = d(ln(\text{const}))&=0 \\
d(ln\left(\rho\right)+ln(v_{n})+ln(A)) &=0 \\
\implies \frac{d\rho}{\rho}  + \frac{dv_{n}}{v_{n}} + \frac{dA}{A}&=0 \\
\implies \frac{dv_{n}}{v_{n}} = -\frac{dA}{A}-\frac{d\rho}{\rho}
\end{align}$$
The addition of $\rho$ to the equation, relative to how we found it for perfect liquids, shows the difference from the incompressible case, and will add some additional difficulty to our derivations.

If we accelerate the fluid in a nozzle, we increase $v_{n}$, while usually decreasing $\rho$ and $A$. But if something weird happens to $\rho$ it is possible to have a non-convergent (divergent) nozzle.

Applying the equations of state with the energy balance we get:
$$l+q=c_{p}\Delta T + \frac{\Delta v^{2}}{2}+g\Delta z$$

While the mechanical energy balance becomes:
$$l-l_{w} = \int\limits_{IN}^{OUT} RT  \, \frac{dP}{P} + \frac{\Delta v^{2}}{2}+g\Delta z $$
This equations shows what we said before, the temperature can no longer be ignored.

The integral in the equation cannot be solvable without knowledge of the type of transformation, since $T$ and $P$ would remain unknown. So what we will do now is look at different types of transformations and derive the result in each case.

For simplification we assume our machine doe not change geodetic level, or that the change is in the least negligible.

For this analysis we will not need to look inside the machine, and since we make so that the speed does not change between the different ends of the machine, we (for now) assume $\Delta v^{2}$ is negligible. When we start to look inside the machine, we will no longer able to ignore this effect.

This method we use for studying the machines from the outside is called a "blackbox" approach.

## Thermodynamics of Gas Compression

### Isothermal Reversible Compression

For an isothermal reversible compression, the energy and mechanial energy balance equations result in:
$$l+q = c_{p}\Delta T=c_{p}(T_{out}-T_{in}) = 0\implies l=-q$$
$$l-l_{w} = \int\limits_{IN}^{OUT} RT \, \frac{dP}{P} = RT\ln\underbrace{ \left( \frac{P_{out}}{P_{in}} \right) }_{ \beta } $$
The result of the energy balance tell's us that the compressione causes heating, but since $\Delta T=0$, all the work from the fluid in the form of heat, otherwise the fluid changes temperature.

We introduce $\beta$ which is the pressure ration between inlet and outlet of our system, and will be very important for our study of different transformation types.

We can represent this transformation on a $T-s$ and $P-V$ diagram as:

![](Pasted%20image%2020250516143744.png)

If we consider the machine to be ideal, the mechanical work balance becomes:
$$l-l_{w} = RT \ln(\beta) = l_{T}$$

While this transformation is great and very easy to analyse, no current machine can produce an isothermal reaction, so this has no significance for us other than being a jump-off point for other transformations.

### Adiabatic Reversible Machines
A transformation that is adiabatic and reversible is isoentropic.

The energy and mechanical energy balance for these two transformation is:
$$\begin{gather}
 l +\cancel{ q } = c_{p} \Delta T   \implies l =c_{p}(T_{out}-T_{in}) \\
l-\cancel{ l_{w} } = \int\limits_{in}^{out} RT \, \frac{dP}{P} = l = \int\limits_{in}^{out} RT \, \frac{dP}{P} 
\end{gather}$$

We can once again represent this transformation on $T$-$s$ and $P$-$V$ diagram:

![](Pasted%20image%2020250516144359.png)

We will represent prior transformations with dashed lines to allow us to compare the transformations. the transformations we are currently looking at will be represented with a solid line if they are reversible, and with a dash line if they are not.

Adiabatic transformation have the equation:
$$Pv^{\gamma}= \text{const}$$
Where:
$$\gamma = \frac{c_{p}}{c_{v}}>1$$
To analyse our transformation, we start from the equation for the change in entropy in a perfect gas:
$$\Delta s = c_{p}\ln\left( \frac{T_{2s}}{T_{1}} \right)-R\ln\underbrace{ \left( \frac{P_{2}}{P_{1}} \right) }_{ \beta }=\ln\left( \frac{T_{2s}}{T_{1}} \right)^{c_{p}} - \ln(\beta)^{R}=0$$
$$\implies \frac{T_{2s}}{T_{1}} = \beta^{R/c_{p}}$$
$$\frac{R}{c_{p}} = \frac{c_{p}-c_{v}}{c_{p}} = \frac{\frac{c_{p}}{c_{v}}-1}{\frac{c_{p}}{c_{v}}} = \frac{\gamma-1}{\gamma}$$
$$\implies \frac{T_{2s}}{T_{1}} = \beta^{\frac{\gamma-1}{\gamma}}$$

One we have chosen $\beta$, and a fluid, we have found $\Delta T$ for an adiabatic process. Since $\frac{\gamma-1}{\gamma}<1$, the temperature is always smaller than $\beta$.

The we can develop the mechanical energy balance to be:
$$\implies l  = c_{p}T_{1}\left( \frac{T_{2s}}{T_{1}}-1 \right) = c_{p}T_{1}(\beta^{\frac{\gamma-1}{\gamma}}-1)$$

The isoentropic work will be:
$$l_{s} = \frac{\gamma}{\gamma-1} \frac{\mathcal{R}}{\mathcal{M}}T_{1}(\beta^{\frac{\gamma-1}{\gamma}}-1)$$

While this is conceptually useful, if we have the $T_{2s}$ and $T_{1}$, we can calculate $l$ directly, without using the pressure ratio form.

Since the isoentropic work is not immediately visible in the $T$-$s$ diagram, graphically we can represent is as the work performed during an isobaric transformation from the temperature reached by the isoentropic transformation to the initial temperature.

![](Pasted%20image%2020250516151217.png)

### Adiabatic Irreversible Compression

In the adiabatic irreversible transformation, the heat is null since the transformation is adiabatic, but the wasted work is not-null since it's not reversible meaning these is some work that we cannot recoup.

The energy and mechanical energy balance are:
$$\begin{cases}
 l +\cancel{ q } = c_p(T_{out}-T_{in}) = c_{p}T_{in}\left( \frac{T_{out}}{T_{in}}-1 \right) \\
l-l_{w} = \int\limits_{in}^{out} v \, dP 
\end{cases}$$

We represent them int he two graphs as:

![](Pasted%20image%2020250516151917.png)

We are not able to immediately find 2. The idea to solve this issue, is to represent the global effects of the transformation. We need to use a reversible transformation/s that represent the global energy transfer.

We can do this by modelling the transformation as an idealistic reversible transformation, with work exchanged and reversible heating. The process will therefore be diabatic, meaning that there is an exchange of heat, in this case from 2S to 2. 
In other words, there is a transformation which exchanges the work and the change in entropy will be causes by a certain amount of reversibly exchanged heat, which we can also represent graphically.

![](Pasted%20image%2020250516152724.png)

So, when looking at our balances, instead of solving them, which we can't do, we use a model in which $q= l_{w}$.

This kind of transformation is known as a polytropic transformations, in which:
$$Pv^{n}=\text{const}$$
$$\implies \frac{T_{2}}{T_{1}}=\beta^{\frac{n-1}{n}}$$
$n$ is an index of the quality of the transformation. The closer $n$ is to $\gamma$, the more efficient is the machine. $n$ is a property of the machine, not the fluid so it changes every time we change machines.

With our new polytropic transformation, we get:
$$l = c_{p}T_{1}\left( \frac{T_{out}}{T_{1}}-1 \right) = c_{p}T_{1}(\beta^{\frac{n-1}{n}}-1)$$
$$\implies l = \frac{\gamma}{\gamma-1}  \frac{\mathcal{R}}{\mathcal{M}} T_{1}\left( \beta^{\frac{n-1}{n}}-1 \right)$$

We can also calculate the integral since:
$$Pv^{n} = P_{1}v_{1}^{n} \implies v=v_{1}\left( \frac{P_{1}}{P} \right)^{1/n}$$
Plugging into the integral we get:
$$l-l_{w} = \int\limits_{1}^{2} v_{1}\left( \frac{P_{1}}{P} \right)^{1/n} \, dP = \frac{n}{n-1} \frac{\mathcal{R}}{\mathcal{M}}T_{1}\left( \beta^{\frac{n-1}{n}}-1 \right) $$

#### Reheat Effect

In hydraulics we said:
$$l-l_{w} = \Delta T=l_{s}$$

But in this case:
$$l \neq l_{s}+l_w$$
We can demonstrate this graphically because:

![](Pasted%20image%2020250516153925.png)

In an adiabatic irreversible compression, there is an additional effect apart from the isoentropic work and the wasted work.

This is a result of a difference in the technical work between $\int\limits_{}^{} v \, dP$ between an isoentropic and  a real transformation. In an isoentropic transformation the technical work is:
$$\int\limits_{1}^{2S} v(s_{1},P) \, dP $$
While the real work is:
$$\int\limits_{1}^{2} v(s,P) \, dP $$

The losses are therefore divisible in two parts, the direct irreversible losses ($l_{w}$), and the indirect losses which ARE reversible, we call these secondary indirect losses reheat work $l_{RH}$.
The reheat losses are a consequence of thermodynamics, not of a choice of the designer so they cannot be avoided, and therefore will be two definitions of efficiency, one considering it and one not.

To conclude, in the a real transformation the total specific work performed is:
$$l = l_{s} + l_{w}+l_{RH}$$