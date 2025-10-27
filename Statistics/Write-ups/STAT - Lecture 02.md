---
creation_date: 2025-02-19
tags: 
parent: 
child: 
share: false
---
# Lezione 2 - Probability Function

A random experiment is an experiment whose outcome is determinable with absolute certainty before the experiment.

The distribution function of X associates between E and P.

Assigning the probability function is difficult. This is because to define the probability function we need to define the probability function for all E-s which can be difficult.

> [!note] Definition: Cumulative Distribution Function
> Let's take a random variable X, for which we can calculate the probability within any E (meaning $\exists P(X\in E\\;\;\;\;\; \forall E\in\mathcal{F})$).
> 
> We call the cumulative distribution of X the following function:
> $$\begin{align}F(X)(n)&:= P(X\leq x)\,\,\,\,\forall x\in\mathbb{R} \\ &=P(X\in(-\infty,x])\end{align}$$

The cumulative distribution function also follow the property:
$$0\leq F_{X}(x)\leq 1$$
This is inherited from the probability distribution function (P).

#### Proprieties of $F_{X}$, distribution function of X

1. $F_{X}$ is a non-decreasing function
2. $F_{X}$ is a right-continuous function
	This means that $\lim_{ \mathop{h>0}_{h\to_{0}} }F_{X}(x+h) = F_{X}(x)\;\;\forall x$
3. $\lim_{ x \to -\infty } F_{X}=0\to$ because for $x\to -\infty$, $E\to\varnothing$
	$\lim_{ x \to \infty }F_{X}(x) = 1 \to$ because for $x\to \infty$, $E\to \mathbb{R}$

When looking at a graph of the cumulative distribution function, we see that it doesn't need to be continuous as long as the part of the right of the discontinuity is the point that is defined, because of the right-continuity.

<!Diagram cumulative distribution function>


> [!note] Theorem
> Suppose you assign, $F:\mathbb{R}\to \mathbb{R}$ such that:
> 1. F is non-decreasing
> 2. F is right-continuous
> 3. $\lim_{ x \to -\infty }F(x) =0$ and $\lim_{ x \to \infty }F(x) = 1$
>    
> Then $\implies \exists$ some random variable X such that $F_{X}(x) = \underbrace{ F(x) }_{ \substack{\text{given}\\\text{by us}} }\;\;\; \forall x\in\mathbb{R}$

This function basically states that given that we have a distribution function, there exists a random variable which has the same distribution function, so we can treat our phenomenon as random (I believe).

#### Remark

Taking $a<b$, $P(a<X\leq b) = P(X\leq b)-P(X\leq a)$, this means that $= F_{X}(b)-F_{X}(a)$ because of how we defined $F_{X}$.

This means that:
$$P(X=x) = F_{X}(x^{+})-F_{X}(x^{-}) = \underbrace{ F_{X}(x) }_{ \substack{\text{right}\\\text{continuous}} }-F_{X}(x^{-})$$
If we look at the graph from before, the probability of the x is just the jump that occurs in the function.

If $F_{X}$ is continuous at x, then $P(X\in x)=0$. This is only true for continuous distribution functions, when we move to discrete distribution functions this will not be true.

> [!note] Definition: Absolutely Continuous Random Variable
> X is a random variable with distribution function (d.f) $F_{X}$.
> X is absolutely continuous if $\exists f_{x}:\mathbb{R}\to \mathbb{R}^{+}$ such that it's distribution function can be written as:
> $$F(X)(x) = \int\limits_{-\infty}^{x} f_{x}(u) \, du \implies  F_{X} \text{ is a continuous function} $$
> $f_{x}$ is called the distribution function. The way I see it is as the probability of the variable at each point in $\mathbb{R}$.

The density of the variable and the distribution function can be seen on a graph as:
<!Diagram density function and distribution function>

To find $P(a<X\leq b)$ we can write:
$$\begin{align}
P(a<X\leq b) = F_{X}(b)-F_{X}(a) &= \int\limits_{-\infty}^{b} f_{x}(u)  \, du -\int\limits_{-\infty}^{a} f_{x}(u) \, du \\
&=\int\limits_{a}^{b} f_{x}(u) \, du 
\end{align} $$
Instead if we want to do:
$$P(X=a)=0 =\int\limits_{a}^{a} f_{x}(u) \, du $$
This has an important consequence since it implies that:
$$\implies P(a\leq X) = P(a<X)\text{ or }P(X<b)=P(X\leq b)$$
This is true since we are taking an absolutely continuous function.

> [!note] Theorem
> If we introduce $f:\mathbb{R}\to \mathbb{R}^{+}$ with the properties:
> 1. $f(x)\geq 0\;\;\;\forall x\in\mathbb{R}$
> 2. $\int\limits_{\mathbb{R}}^{} f(x) \, dx=1$
> $\implies \exists$ a random variable X which is absolutely continuous whose density $f_{X}(x) = f(x)\;\;\;\forall x\in\mathbb{R}$.

#### Examples

(See handwritten notes) 

One important thing to take from the examples is that, if X is absolutely continuous with density $f$:
$$P(X\in E)\;\;\;\forall E\in\mathcal{F}\implies =\int\limits_{E}^{} f(x) \, dx $$
### Remark: Finding $f_{x}$ from $F_{X}$

Having fixed $f_{x}$ and with the function being absolutely continuous we have said that we can find $F_{X}$ as:
$$F_{X}(x) = \int\limits_{-\infty}^{x} f_{x}(u) \, du $$
Is it possible to get $f_{x}$ from $F_{X}$, following the logic that we only need to take the derivative of the integral? YES.

As long as $F_{X}$ is differentiable in all X, we can write:
$$f_{x} = F_{X}'(x)$$

There will be at most a finite number of points in which it's not differentiable. That means we can choose the density at the point since it has no affect on the probability.

#### Exercise

(Again, look at the hand-written notes)

### Variables for statistical analysis

We are first going to define the mean/expectation, the variance and the standard deviation, and then define the properties of the first two.

> [!note] Definition: Mean/Expectation
> X is a random variable that is absolutely continuous with $f_{x}$ being it's density. The mean (or expectation) of the random variable X, is:
> $$EX = \int\limits_{\mathbb{R}}^{} x\cdot f_{x} \, dx $$
> Conceptually this is similar to the center of gravity of a stick with mass density of $f_{x}$.

To logically understand this function we can see the density function as the number of times a given value will occur out of all probabilities ($\frac{n_{x}}{n_{tot}}$), multiplying this by the value gives use the value weighted by it's probability like we think of the [mean](https://en.wikipedia.org/wiki/Mean#Arithmetic_mean_(AM)) where we multiply the number of times a specific event occurs divided by the total number of events that have occurred.

> [!note] Definition: Variance
> Taking X as absolutely continuous, with density $f_{x}$ and expectation $EX$, the variance is:
> $$\text{Var}(X) = \int\limits_{\mathbb{R}}^{} (x-EX)^{2}\cdot f_{x}(x) \, dx $$

> [!note] Definition: Standard Deviation (s.d) of X
> The standard deviation has equation:
> $$\sigma = \sqrt{ \text{Var}(x) }$$

#### Properties of Expectation and Variance
These properties as for absolutely continuous functions but will also be true for discrete random variables.

1. Linearity

Given $a,b\in\mathbb{R}$, we find that:
$$\underbrace{ E(aX+b) }_{ \substack{\text{Expection of}\\aX+b} } = a\cdot EX+b$$

We can prove this since:
$$\begin{align}
\underbrace{ \int\limits_{\mathbb{R}}^{} (aX+b) \cdot f(x)\, dx }_{ \substack{\text{Equation to find expectation}\\ \text{of }aX+b} }  = a\underbrace{ \int\limits_{\mathbb{R}}^{} x\cdot f_{x}(x) \, dx }_{ EX }  + b\underbrace{ \int\limits_{}^{} f(x) \, dx }_{ =1 } = aEX+b
\end{align}$$

2. 

Given $a,b\in\mathbb{R}$, the variance of $aX+b$ is:
$$\text{Var}(aX+b) = a^{2}\text{Var}(x)$$
$$\begin{align}
\int\limits_{\mathbb{R}}^{} (\underbrace{ (aX+b)-E(aX+b) }_{ aX+\cancel{ b }-\underbrace{ E(aX+b) }_{ aEX+\cancel{ b } } })^{2}\cdot f_{x}(x) \, dx &= \int\limits_{}^{} [a(x-EX)]^{2}\cdot f_{x}(x) \, = \\
&=  a^{2}\cdot\text{Var}(X)
\end{align}$$

3. 
 $$\begin{align}
\text{Var}(X) &= \int\limits_{\mathbb{R}}^{} (x-EX)^{2}\cdot f(x) \, dx \\
&=\int\limits_{\mathbb{R}}^{} (x^{2}+(EX)^{2} - 2\cdot(EX)\cdot x)\cdot f_{x}(x) \, dx    \\
&=\int\limits_{\mathbb{R}}^{}x^{2}\cdot f(x) \, dx +\int\limits_{\mathbb{R}}^{} (EX)^{2} \cdot f(x)\, dx + \int\limits_{\mathbb{R}}^{} -2(EX)\cdot x\cdot f(x) \, dx \\
&=\int\limits_{\mathbb{R}}^{} x^{2} \cdot f(x)\, dx   + \underbrace{ (EX)^{2} }_{ \text{constant} } \underbrace{ \int\limits_{\mathbb{R}}^{} f(x) \, dx }_{ =1 } -2(EX)\cdot EX = \\
&=\underbrace{ \int\limits_{\mathbb{R}}^{} x^{2}\cdot f(x) \, dx }_{ E(X^{2}) } -(EX)^{2} \\
&= E(X^{2})-(EX)^{2}
\end{align}$$


 











