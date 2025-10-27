---
creation_date: 2025-02-24
tags: 
parent: 
child: 
share: false
---
# Lezione 3 - Expectation of a function of X, median, density of a function of X and Uniform Distribution

Let's make a note of a notation which we will use a bit today:
$$I_{A}(x) = \begin{cases}
1 \text{ if }x\in A \\
0\text{ if } x \not\in A
\end{cases}$$

The expectation is the weighted center.
The variance is the dispersion of the random variable.

Some times we are interested in some function which manipulates the random variable. In this course we will be looking a functions where y remains a random variable.

We can calculate the expectation of the function y, knowing $X$ as:
$$E[y] = \int\limits_{\mathbb{R}}^{} g(x)\cdot f_{x}(X) \, dx $$

The n$^{th}$-moment of x can be found as:
$$E[X^{n}]  = \int\limits_{\mathbb{R}}^{} x^{n}\cdot f_{x}(X) \, dx $$
As we said in the last class we can find the difference between the expectation of the second moment of the random variable and the expectation of it's first moment:
$$\text{Var}(X) = E(X^{2})-E(X)^{2}$$

### Exercise 
We did an example defining the conditions in which the function is a density, then we found the expectation and variance using the functions which we found.

## Median

The median $m$ of an absolutely continuous random variable with distribution function $F_{X}$ is the value such that:
$$P(X<m) =P(x\leq m) = \frac{1}{2}$$
Or equivalently:
$$m = F^{-1}_{X}\left( \frac{1}{2} \right) \iff F(m) = \frac{1}{2}$$

We can also define an $\alpha$-quantile, we need a real value $x_{\alpha}$ for which:
$$P(X\leq x_{\alpha}) = \alpha$$
If $\alpha = \frac{1}{2}$ then the $\alpha$-quantile is the median.

### Exercise
We calculated the median for the function we got last lesson.

## Density function of Y = g(X)

Let X be a absolutely continuous random value with density $f_{X}$ and let $Y$ be absolutely continuous.

$Y$ is absolutely continuous, when $g$ and $g^{-1}$ are differentiable.

There are two steps needed to find the density function of $Y$ from that of $X$.

The first step is to find the distribution function of $Y$:
$$F_{Y}(y) = P(Y\leq y) = P(g(X)\leq y) = P(X\in g^{-1}((-\infty,y]))$$
We basically need to find the intervals for which $g(X)\leq y$.

The second step involved finding the derivative of the distribution function which we just found, since this is the density function of $Y$.

### Examples
We did two example of functions for which we found the density function.

## Notable Absolutely Continuous Distibutions

We did the uniform distribution today and then we look at the rest next lesson.
### Uniform Distributions

The distribution of $X\sim\mathcal{U}((a,b))$ if called uniform is X is a random variable with density function:
$$f_{X}(x) = \frac{1}{b-a}\cdot I_{(a,b)}(x)$$
The density function in $(a,b)$ is:
$$f_{X} = \begin{cases}
\frac{1}{b-a} & \text{if }a<x\leq b \\
0 & \text{otherwise}
\end{cases}$$

<!Uniform density function>

The distribution function of X is:
$$F_{X}(x) = \begin{cases}
0 & \text{if }x<a \\
\frac{x-a}{b-a}  & \text{if }a\leq x<b \\
1 & \text{if }x\geq b
\end{cases}$$

<!Uniform distribution function>

The expectation of the uniform distribution will be:
$$EX  = \frac{a+b}{2}$$

The variance of the distribution function will be:
$$\text{Var}(X) = \frac{(b-a)^{2}}{12}$$
