---
creation_date: 2025-02-26
tags: 
parent: 
child: 
share: false
---
# Lezione 4 - Distributions

## More Distributions
When we write $X\sim$, it means that the distribution function is distributed in the same form as the stated distribution type.
### Distribution: Symmetric
Let $X\sim f_X$ where $f_{X}(x)$ is symmetric with $a$ such that:
$$f_{X}(x-a)= f_{X}(a-x)$$
The median is equal to $a$.

If $EX$ exists $\implies EX=a$

#### Proprieties for $a=0$:

1. $f_{X}(x) = f_{X}(-x)\;\;\;\forall x$ 
2. $\underbrace{ P(X\leq-t)  }_{ F_{X}(-t) }= \underbrace{ P(X\geq t) }_{ 1-F_{X}(t) }\;\;\;\forall t$

Graficamente il second può esser visto come:
<!Diagram for equal areas>

1. $-x_{p} = x_{1-p}$
$x_{p}$ indicates the quantile of the distribution of order $p\in(0,1)$, so $x_{p}$ is the point $x$ at which point the it returns a cumulative distribution of P.
In general it means that the point symmetric to a point that return a distribution of P, will return a distribution of $1-P$.

Graphically:
<!Diagram quantile of order P>

## Standardisation of the random variable X

Yesterday we introduced the linear transformation of the random variable:
$$Y=aX+b\;\;\;;\;\;\;\;a,b\in\mathbb{R},a\neq 0$$
This type of transformation is common when we need to change the scale of our random variable.

> [!note] Definition: Standardisation
> Let X be a random variable such that $EX$ exists and $\text{Var}(X)>0$
> 
> Let us consider a new random variable:
> $$Z = \frac{X-EX}{\sqrt{ \text{Var}(X) }}$$
> Therefore:
> $$a=\frac{1}{\sqrt{ \text{Var}(X) }}$$
> $$b = -\frac{EX}{\sqrt{ \text{Var}(X) }}$$
> 
> This is a special type of transformation called standardisation.

The expectation of this new standardised variable will be:
$$E(Z) = E\left( \frac{X-EX}{\sqrt{ \text{Var}(X) }} \right)=\frac{EX-EX}{\sqrt{ \text{Var}(X) }}=0$$
The variance on the other hand will be:
$$\text{Var}(Z) = \text{Var}\left( \frac{X-EX}{\sqrt{ \text{Var}(X) }} \right) = \left( \frac{1}{\sqrt{ \text{Var}(X) }} \right)^{2}\cdot \text{Var}(X)=1$$
We can use this transformation to compare two distribution, even if they have different scales, we can still compare them.

$Z$ represents the distance of $X$ from it's mean, in terms of it's standard deviation.

## Even more distributions

### Distribution: Exponential with parameter $\lambda$
This is a very useful distribution for engineering.

Let's take the parameter $\lambda>0$, and let $X\sim \text{Exp}(\lambda)$. The density of $X$ will be:
$$f_{X} = \begin{cases}
0 & \text{if }x\leq 0 \\
\lambda e^{ -\lambda x } & \text{if }x\geq 0 
\end{cases}$$
We can draw the density of such as distribution as:
<!Diagram exponential probability distribution>

The (cumulative) distribution function of $X$ is:
$$F_{X} = \begin{cases}
0 & \text{if }x\leq 0 \\
1-e^{ -\lambda x } & \text{if }x\geq 0
\end{cases}$$
We can picture the distribution function of X as:
<!Diagram distribution function of X>

The expectation of a variable with such as distribution is:
$$EX=\int\limits_{0}^{\infty} -x\cdot\lambda e^{ -\lambda x } \, dx =\frac{1}{\lambda}$$
Whereas the variance of the same variable will be:
$$\text{Var}(X)=\frac{1}{\lambda^{2}}$$
### Distribution: Gaussian/Normal

A Gaussian/Normal distribution is a probability distribution which is defined as:
$$f_{X}(x,\mu,\sigma^{2}) =\frac{1}{\sqrt{ 2\pi\sigma^{2} }}e^{ (-x-\mu)^{2}/2\sigma^{2} }$$
With $\mu \in\mathbb{R}$ and $\sigma^{2}>0$

The probability function is distributed like:
<!Diagram gaussian probability distribution>

The points of inflection for this type of probability distribution can be found at $x= \mu\pm\sigma$.

The expectation for such a distribution is:
$$EX =\mu$$
Whereas the variance of the distribution is:
$$\text{Var}(X) = \sigma^{2}$$
To sign that $X$ is distributed like the gaussian/normal we write:
$$X\sim \mathcal{N}(\mu,\sigma^{2})$$

The distribution function will have equation:
$$F_{X} = \int\limits_{-\infty}x^{x} \frac{1}{\sqrt{ 2\pi\sigma^{2} }}e^{ -(s-\mu)^{2}/2\sigma^{2} } \, ds $$
We can show that $P(\mu-3\sigma<X<\mu+3\sigma)=.9973$

##### Standard Gaussian/Normal ($\mu=0$,$\sigma^{2}=1$)

Let $X\sim \mathcal{N}(0,1)$, the probability density will ha equation:
$f_{X}(x,\mu=0,\sigma^{2}=1)=\varphi(x)\to \text{standard notation}$

The distribution function will be:
$$F_{X}(x,\mu=0,\sigma^{2}=1) = \Phi(x) =\int\limits_{-\infty}^{x} \frac{1}{\sqrt{ 2\pi }}e^{ -s^{2}/2 } \, ds $$

We can draw the distribution function as:
<!Diagram standard Gaussian/normal density>

Since the probability density is symmetrical around 0, we have the same properties.

If $X\sim \mathcal{N}(\mu,\sigma^{2})$, the standardisation of $X$ as $Z$ is:
$$Z=\frac{X-\mu}{\sqrt{ \sigma^{2} }}$$

This will have expectation and variance of:
$$\begin{gather}
EZ = 0 \\
\text{Var}(Z) = 1
\end{gather}$$
We can therefore determine that $Z$ will still be a Gaussian/normal distribution, and in fact it will be distributed like:
$$Z\sim \mathcal{N}(0,1)$$
When we standardise a $X\sim \mathcal{N}(\mu,\sigma^{2})$, it standardised dual will be $Z\sim \mathcal{N}(0,1)$

##### Remark
If $X\sim \mathcal{N(\mu,\sigma^{2})}$, and we consider $a,b\in\mathbb{R}$ with $a\neq0$:
$$\implies Y=aX+b\sim \mathcal{N}(a\cdot\mu+b,a^{2}\sigma^{2})$$

#### Example:
We did an example where we standardised a Gaussian distribution and determined the probability of something occurring in the initial distribution, which we can do since the distribution will still have the same shape and as long as we convert the bound to be valid for this new distribution it will work.

#### Other example
Another example of the same thing, just with a different starting distribution.

## Discrete Random Variable

> [!note] Definition: Discrete Random Variable
> A random variable is discrete if it assumed a finite number of values with total probability of 1.

> [!note] Definition: Discrete Density
> For a discrete random variable $X$ with denumerable possible values $S:=(x_{1},x_{2},\dots)$ such that $P(X\in S)=1$, the discrete density is defined as:
> $$p_{X}(x) :=P(X=x)\;\;\;,\forall x\in S$$
> If $x\not\in S\implies p_{X}(x)=0$

The support $S$ for a discrete random variable can be finite or infinite but tends to be finite.

The plot of the density of the discrete random variable $X$ will be a bar chart:
<!Diagram density for discrete random variable>

> [!note] Theorem:
> Let $X$ be a discrete random variable with $S=\{x_{1},x_{2},\dots\}$, with density $p_{X}$, the distribution function $F_{X}$ will be:
> 1. $$F_{X}(x) = \sum_{x_{i}\in S,x_{i}\leq x}p_{X}(x_{i})=1$$
> 2. Suppose $x_{1}<x_{2}<x_{3}<\dots$. We can say that:
>    $$\begin{gather}p_{X}(x_{1})=F_{X}(x_{1})\\ p_{x}(x_{j}) = F_{X}(x_{j})-F_{X}(x_{j-1})\;\; for j \geq 2\end{gather}$$
