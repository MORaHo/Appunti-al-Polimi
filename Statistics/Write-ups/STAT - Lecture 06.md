---
creation_date: 2025-03-11
tags: 
parent: 
child: 
share: false
---
# Lezione 6 - Joint Distribution of Random Variables

## Poisson Distribution
In the last lesson we introduce the Poisson distribution. We introduced it as the limit of the binomial distribution under some conditions. The conditions are primarily that we need to be able to approximate $n$ to $\infty$, in general if $n\geq 50$ we can make the approximation. The other conditions is that $np=\lambda=\text{const}$

Th random variable $X$ is $Poi(\lambda)$ distributed with $\lambda>0$, when:
$$p_{X}(x) = e^{ -\lambda } \frac{\lambda^{x}}{x!}\to x=0,1,2,\dots$$
Where:
$$S = \{ \underbrace{ 0 }_{ p_{0} },\underbrace{ 1 }_{ p_{1} },\underbrace{ 2 }_{ p_{2} },\underbrace{ 3 }_{ p_{3} },\dots \}$$
As we said, each individual probability is:
$$p_{j} = \frac{e^{ -\lambda }\lambda^{j}}{j!}$$
We know that the probability density has a sum of 1, and therefore:
$$\sum_{j=0}^{\infty}\frac{e^{ -\lambda }\lambda^{j}}{j!}=1$$
We can manipulate it to write:
$$e^{ -\lambda }\underbrace{ \sum\frac{\lambda^{j}}{j!} }_{ e^{ \lambda } } = e^{-\lambda}e^{\lambda}=1$$
### Approximation

Assuming $X\sim \text{Bin}(n,p)\implies X\underbrace{ \sim }_{ \text{Approx.} }Poi(\lambda)$. $\lambda=np$ under the conditions:
1. Considering a large $n$ such that $n\geq 50$.
2. $p$ small enough such that $np\leq 10$.

### Exercise
We can write multiple example to solidify our understand of the binomial distribution and showed that Poisson can approximate the Binomial under the certain conditions.
In the Poisson example that we found, we saw that the error was large, this is due to the $np$ being exactly 10, which is the limit for the conditions for which we can use Poisson so it's understandable that the might large a large error.

## Joint Distribution of Random Variables
If $X$ and $Y$ are two random variables, we call joint distribution of the random variable ($X\;\&\;Y$) the value:
$$P(X \in A,Y\in B)\to A,B\in\mathcal{F}$$
The distribution is therefore the probability of X belonging to A and Y belonging to B.

The comma in the notation is a logical operator, equivalent to the intersect or a logical AND.

## Couples of Random Variables

### Couple of Absolutely Continuous Random Variables

($X,Y$) is a couple of absolutely continuous random variables, with density $f_{X,Y}$ if there exists a function $f_{X,Y}:\mathbb{R}^{2}\to \mathbb{R}$, where $f_{X,Y}\geq 0$ and $\int\limits_{\mathbb{R}^{2}}^{} f_{X,Y}(x,y) \, dxdy= 1$, such that:
$$P(a<X\leq b,c<Y\leq d ) = \int\limits_{a}^{b} \int\limits_{c}^{d} f_{X,Y}(x,y) \, dx  \, dy \to \text{for any }a<b,c<d $$
We are not going to put much focus on this type of couple since we are more interested in discrete couples.

### Couple of Discrete Random Variables
($X,Y$) is a couple of discrete random variables, if both $X$ and $Y$ are discrete random variables, we need to assign the joint density of $(X,Y)$, that is:
$$p_{X,Y}(x,y)=\begin{cases}
=P(X=x,Y=y) & \text{ for }x,y\in S\text{ support of }(X,Y) \\
=0 & \text{for }x,y\notin S
\end{cases}$$
$p_{X,Y}(x,y)$ is the joint discrete random variable of $(X,Y)$.

For this couple we can write:
$$P((X,Y)\in B) = \sum_{(x,y)\in B}p_{X,Y}(x,y)$$
## Marginal Densities

The density of $X$ (or $Y$) is called marginal density of $X$ (or $Y$), and is computed as:
- when ($X,Y$) is a couple of discrete variables:
$$p_{X}(x) = P(X=x) = P(X=x,y=\mathbb{R})$$
- when ($X,Y$) are a couple of absolutely continuous random variables:
$$f_{X}(x) = \int\limits_{\mathbb{R}}^{} f_{X,Y}(x,y) \, dy\;\;\forall x\in\mathbb{R} $$
These can be generalised to $n$ variables, but we will limit ourselves to 2 discrete random variable.

## Table of Joint Distributions of a couple ($X,Y$) of discrete random variables.

Assuming $X$ has values $a_{1}<a_{2}<a_{3}<\dots<a_{k}$, and $Y$ has values $b_{1}<b_{2}<b_{3}<\dots<b_{m}$, and we can define the support:
$$S= \{ (a_{j},b_{l}),j=1,\dots,k,l=1,\dots,m \}$$

If $k$ and $m$ are not very large we can use a table to write the joint density at each pair of points $p_{X,Y}(a_{j},b_{l})$

We can write the table as:
$$$$

| $X\backslash Y$ | $b_{1}$                | $b_{2}$                | $\dots$ | $b_{m}$                | $p_{x}$        |
| --------------- | ---------------------- | ---------------------- | ------- | ---------------------- | -------------- |
| $a_{1}$         | $p_{X,Y}(a_{1},b_{1})$ | $p_{X,Y}(a_{1},b_{2})$ |         | $p_{X,Y}(a_{1},b_{m})$ | $p_{X}(a_{1})$ |
| $a_{2}$         | $p_{X,Y}(a_{2},b_{1})$ |                        |         |                        |                |
| $\vdots$        |                        |                        |         |                        |                |
| $a_{k}$         |                        |                        |         | $p_{X,Y}(a_{k},b_{m})$ |                |
| $p_{y}$         | $p_{Y}(b_{1})$         |                        |         |                        | 1              |

In the table every call is the density at the pair of specific points. 
Looking at the rows we see that sum of all the terms, ends up being the marginal density of $X$ in $a_{1}$, therefore we add a column where we can write the marginal densities for all the points of $X$. We can do the same for $Y$. At the end we find that the top of all the rows in $p_{x}$ is 1, which is equal to the sum of all the columns of $p_{y}$. This makes sense since the columns and rows add up all the elements in the their designated direction, adding all these up makes it so we are adding together all the cells in which our density exists, therefore the sum has to add up to 1, as it does.

Using the table also makes it easier to calculate the expectation,variance and standard deviation of both variables. Since the $p_{y}$ row tells us how it changed and the $p_{x}$ the same.

## Covariance between X and Y
In many cases $X$ and $Y$ will not be independent of each other and rather will have a co-dependence, we can measure this with the linear covariance.

Let $X,Y$ be two random variables. The covariance between $X$ and $Y$ is real number defines as:
$$Cov(X,Y) = E\left[(X-EX)\cdot(Y-EY)\right] = E(X\cdot Y)-EX\cdot EY$$

In the discrete case this can be written as:
$$\sum_{(x,y)\in S}(x_{i}-EX)(y_{i}-EY)p_{X,Y}(x_{i},y_{i})$$
Whereas the in absolutely continuous case, this is written as:
$$\int\limits_{\mathbb{R}^{2}}^{}  (x-EX)(y-EY)f_{X,Y}(x,y)\, dx\,dy$$

In general the covariance measure the tendency of on variable to increase while the other increase, this can be positive if they both increases, or negative if one increases as the other decreases.
![](Pasted%20image%2020250311212150.png)

### Remark
Let $(X,Y)$ be random variable, and let a new random variable $g(X,Y)$ be the deterministic transformation of $(X,Y)$, e.g $\frac{X}{Y}$, $X^{2}Y$, etc.

The expectation of such as variable is, in the discrete case:
$$E\left[g(X,Y)\right] = \sum_{(x_{i},y_{i})\in S}g(x_{i},y_{j})p_{X}(x_{i},y_{j})$$
Whereas in the absolutely continuous case it is:
$$\int\limits_{\mathbb{R}^{2}}^{} g(x,y)f_{X,Y}(x,y) \, dxdy $$

### Properties
As we have already written:
$$cov(X,Y) = E(X\cdot Y)-EX\cdot EY$$

### Example
We did an example where we had to fill a table in from the few pieces of data which we were given, and then we had to calculate the variance of the data, and specific probability.

## Correlation between $X$ and $Y$

The linear correlation between the $X$ and $Y$ variable is:
$$cor(X,Y) = \rho_{X,Y} = cov\left( \frac{X-EX}{\sqrt{ Var(X) }},\frac{Y-EY}{\sqrt{ Var(Y) }}\right)$$
It is essentially the covariance of the standardisation of the two variables.

It can also be written as:
$$=E\left[\frac{X-EX}{\sqrt{ Var(X) }}\cdot \frac{Y-EY}{\sqrt{ Var(Y) }}\right]-\cancel{ E\left( \frac{X-EX}{\sqrt{ Var(X) }} \right) }\cdot \cancel{ E\left( \frac{Y-EY}{\sqrt{ Var(Y) }} \right) }$$
The expectation of standardised variables is 0, while their variance is 1.
We can continue by writing:
$$=\frac{1}{\sqrt{ Var(X)\\\cdot  Var(Y) }}E((X-EX)\cdot (Y-EY)) = \frac{cov(X,Y)}{\sqrt{ Var(X)\cdot Var(Y) }}$$

Vale allora che:
$$-1\leq\rho_{X,Y}\leq 1$$

$\left|\rho_{X,Y} \right|=1 \iff \exists \underbrace{ a,b\in\mathbb{R} }_{ a\neq 0 }$ such that $P(Y=aX+b)=1$
This implies the if the linear correlation is perfect the probability of $Y$ maps directly on to a linear map of $X$.

The linear correlation therefore measure how linear the correlation between $X$ and $Y$, whereas the covariance is the non-normalised version of the correlation. The correlation renders the measure of the covariance applicable and referable to all cases.

If $\rho_{X,Y}=1\implies a>0$, whereas $\rho_{X,Y}=-1\implies a<0$.