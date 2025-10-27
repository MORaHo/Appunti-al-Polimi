---
creation_date: 2025-05-16
tags: 
parent: 
child: 
share: false
---
# Lezione 20 - Gas thermodynamics and gas dynamics

## Continuation of Gas Thermodynamics

By the end of the last lecture we had found different works from different transformations, and found that in a real transformation we have an additional component of reversible lost work which we have consider.

The expressions for the work we found were:
$$l_{s} = \frac{\gamma}{\gamma-1} \mathcal{\frac{R}{\mathcal{M}}}T_{1}\left( \beta^{\frac{\gamma-1}{\gamma}}-1 \right)$$
$$l = \frac{\gamma}{\gamma-1} \frac{\mathcal{R}}{\mathcal{M}}T_{1}\left( \beta^{\frac{n-1}{n}}-1 \right)$$
$$l-l_{w} = \frac{n}{n-1} \frac{\mathcal{R}}{\mathcal{M}}T_{1}\left( \beta^{\frac{n-1}{n}}-1 \right)$$

We also commented that:
$$l_{s} \neq l-l_{w}$$
As seen from the graph:

![](Pasted%20image%2020250516203002.png)

$$\implies  l = l_{s}+l_{w}+l_{RH}$$

Where:
$$\begin{align}
l_{RH} &= (l-l_{w})-l_{s} \\
&= \int\limits_{1}^{2} v(s,P) \, dP -\int\limits_{1}^{2S} v(s_{1},P) \, dP 
\end{align}$$

Since we have an additional work, there are more parameters of efficiency / definitions for efficiency.

The first is the isoentropic efficiency:
$$\eta_{IS} = \frac{l_{s}}{l} = \frac{\beta^{\frac{\gamma-1}{\gamma}}}{\beta^{\frac{n-1}{n}}}$$
The problem with this definition is that it is not consistent with what we've used for pumps, but we can define the polytropic efficiency which takes resembles what we have seen:
$$\eta_{y} = \frac{l-l_{w}}{l} = \frac{n}{n-1}\cdot\frac{\gamma-1}{\gamma}$$

For compressors $\eta_{y}>\eta_{is}$ , always.

Between the two $\eta_{y}$ is preferred since:
$$\frac{n-1}{n} = \frac{\gamma-1}{\gamma}\cdot \frac{1}{\eta_{y}}$$
$$\implies \eta_{is} = \frac{\beta^{\frac{\gamma-1}{\gamma}}-1}{\beta^{\frac{\gamma-1}{\gamma \cdot \eta_{y}}}-1}$$

The isoentropic efficiency penalises systems that have higher $\beta$ because they will have more reheat work, which is considered in the isoentropic work. On the other hand, the polytropic efficiency does not have this, and that is good because the reheat work is not something we can control and so a designer should not be penalised for something they cannot physically control.

![](Pasted%20image%2020250516204006.png)

### Multi-stage Adiabatic Irreversible Compression

In a multi-stage compressor we can split the compression ratio into the respective parts for each stage:
$$\frac{P_{out}}{P_{in}} = \frac{P_{inter}}{P_{in}}\cdot \frac{P_{out}}{P_{inter}}$$

Let's draw the $T$-$s$ diagram for this multi-stage compression:
![](Pasted%20image%2020250516210112.png)

If we highlight the reheat work, we notice something interesting. Alongside the two normal parabolic-shaped slices for the re-heat work we have an additional quadrilateral section.
This additional section is the result of the losses from the first transformation not being isoentropic, it's a form of legacy re-heat component.

From this we can in a multistage machine, the irreversibility causes an additional, increasing, loss at later stages. Since this legacy re-heat grows as we perform more transformations, to optimise it is best to optimise the earliest stages so we don't pay at later stages.

## Adiabatic Irreversible Expansion

Just to see, we will look at adiabatic irreversible expansions. This will be useful when we look at real machines.

The diagram for such a transformation, with the different types of work mapped is:
![](Pasted%20image%2020250516211931.png)

For the compression ratio, while we keep the name of the parameter, we change the definition to have value >1:
$$\beta = \frac{P_{in}}{P_{out}}$$
We once again use an isobaric between 1 and 2T to map the isoentropic work; we also use an equivalent isobaric for the work.
A difference between the compression and the expansion is that the re-heat effect in the expansion actually recovers some of the $l_{RH}$. Rather than just being an additional term, in the expansion, the re-heat helps us reduce the amount of work we waste from our system and therefore increases our efficiency.
The presence of the re-heat means that only the areas surrounded by the yellow are equivalent, and the area on the right does not include the triangle which we recover with the re-heat.

The definitions for the efficiencies are:
$$\eta_{is} = \frac{\left|l\right|}{\left|l_{s}\right|} = \frac{\beta^{\frac{n-1}{n}}-1}{\beta^{\frac{\gamma-1}{\gamma}}-1}$$
$$\eta_{y} = \frac{l}{l-l_{w}} = -\frac{\left|l\right|}{-\left|l\right|-l_{w}}=\frac{\left|l\right|}{\left|l\right|+l_{w}} = \frac{\gamma}{\gamma-1}\cdot \frac{n-1}{n}$$
For turbines $n<\gamma$  and therefore $\eta_{is}>\eta_{y}$.

## Gas Dynamics
Gas dynamics is the analysis of compressible fluid flows.

### Compressible Flows in Ducts

Let's consider a duct with variable are along the primary axis.
![](Pasted%20image%2020250516213601.png)

For this study we are going to impose a few assumptions about out system:
- Duct area will change ($\frac{dA}{A}\ne 0$ ), but the change is slow enough such that $v_{r}\approx0$ and $v_{t}\approx0$.
- Mono-dimensional flow, $\vec{v}=v_{x}\hat{i}_{x}$ as a consequence of the prior assumption.
- $\Delta z\simeq0$
- The heat exchange is negligible: $q\approx0$
- Friction is present $\implies l_{w}$

Developing our balances we get:
$$\begin{cases}
\dot{m}=\text{const} \implies \rho_{1}v_{1}A_{1}=\rho_{2}v_{2}A_{2}=\rho(x)v(x)A(x) \\
\cancel{ l }+\cancel{ q } = \Delta h + \frac{\Delta v^{2}}{2}+\cancel{ g\Delta z } \implies  h_{1}+\frac{v_{1}^{2}}{2}=h_{2}+\frac{v_{2}^{2}}{2} =h(x)+\frac{v(x)^{2}}{2}=h_{T}(x) \\
\text{B.MOM} \to \dot{m}(\vec{v}_{2}-\vec{v}_{1})\hat{i}_{x} + (P_{2}\vec{n}_{2}A_{2}+P_{1}\vec{n}_{1}A_{1})\hat{i}_{x} = \int\limits_{A_{L}}^{} \vec{\sigma}\hat{i}_{x} \, dA 
\end{cases}$$
While the momentum balance is useful for sizing ducts, in this case it doesn't help us.

Instead of the balance of momentum, we use the equation for a polytropic transformation, since we need another equation that is conserved (remains constant):
$$\frac{P(x)}{\rho(x)}^{n}=\text{const}$$

In the energy balance we said the work is null since there is no machine. We also defined the total enthalpy, $h_{T}$. The total enthalpy is the gas equivalent of the total pressure; both were defined as the value of the quantity which is reach after an isoentropic decelleration.

Our system of equation therefore is:
$$\begin{cases}
\rho(x)v(x)A(x) = \text{const} \\
h(x)+\frac{v^{2}(x)}{2} = \text{const} \\
\frac{P(x)}{\rho(x)}^{n}=\text{const}
\end{cases}$$

We need boundary conditions to be able to completely solve the system, so we use our equation of state as boundary conditions.

Before we continue with this we first have to define the speed of sound and the Mach number.

## Mach Number

We define the speed of sound as the speed at which propagation waves move in a fluid.
If something moves faster than this speed, then there could be parts of the system it's in which never know that there has been a change in the system, since the propagation waves would not be able to reach those parts of the system.

"sound" is a low amplitude pressure wave, since the change in pressure is low, none of the other properties of the fluid change much and so the system can be assumed isoentropic.

Let's imagine a straight cylindrical duct:

![](Pasted%20image%2020250516221136.png)

The fluid accelerates because it is informed by the pressure move that ravels through the duct.

The motion changes the fluid, as it has to adhere to the new boundary conditions. After some time the whole fluid knows of the change.

We want to determine the speed of the pressure wave which updates the system on the new boundary conditions.

$a$ is the speed of sound.

The simple form of the mass balance cannot be used sine we are not in steady state, but it can be linearised easily. If instead of looking from an inertial frame, we move with the non-inertial frame of the pressure wave, the system becomes steady. Therefore is we are integral with the motion, we can write the balances as we have seen them.

From an inertial frame:
![](Pasted%20image%2020250516222251.png)

The relative velocities of the fluid on either side will be:
$$\begin{gather}
u = v+a \\
w_{1}=v_{1}-u = v+dv-v-a=dv-a \\
w_{2}=v_{2}-u=v-v-a=-a
\end{gather}$$
The mass balance from here becomes:
$$\begin{gather}
\rho_{1}w_{1}\cancel{ A_{1} } = \rho_{2}w_{2}\cancel{ A_{2} } \implies (\rho+d\rho)(dv-a) = \rho(-a) \\
\implies \rho dv-\cancel{ a\rho }+\cancel{ d\rho dv }-d\rho a=\cancel{ -\rho a } \\
\implies \rho dv=ad\rho
\end{gather}$$

We take the momentum balance along $\hat{i}_{x}$:
$$\begin{gather}
\dot{m}(\vec{w}_{2}-\vec{w}_{1})+P_{2}A_{2}-P_{1}A_{1}=0 \\
\implies -\rho a(\cancel{ -a }+dv+\cancel{ a })A+(\cancel{ P-P }-dP)\cancel{ A }=0 \\
\implies \rho adv=dP\to dv=\frac{dP}{\rho a}
\end{gather}$$
Putting this together with the result of the mass balance we have that:
$$\frac{dP}{a}=ad\rho$$
The velocity has disappeared from the equation, so we find that $a$ only depends on $\frac{dP}{d\rho}$.
$$\implies a^{2} = \left( \frac{\partial P}{\partial\rho} \right)_{S} \implies a = \sqrt{ \left( \frac{\partial P}{\partial\rho} \right)_{S} }$$
The equation is valid for any fluid, as we have never introduced specific parameters for the type of fluid which we are interested in.

We are now are able to define the Mach number of our moving fluid as:
$$M = \frac{v}{a}$$
If $M=0$, sound is heard radially around a point.

If $M<1$, we are in subsonic conditions, the sound is still heard radically but there imight be some delay.
![](Pasted%20image%2020250516225303.png)

if $M>1$, we are in supersonic conditions. The fluid or vehicle is travelling faster than the perturbation wave so the vehicle arrives before it is heard.

![](Pasted%20image%2020250516225429.png)

Since when we are moving supersonically the fluid into which the vehicle crashes does not know that it is going to be crashed into, we have to change shape to reduce the drag and stop fluid from piling up:

![](Pasted%20image%2020250516225539.png)

