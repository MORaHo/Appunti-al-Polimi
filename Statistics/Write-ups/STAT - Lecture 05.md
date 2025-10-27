---
creation_date: 2025-03-04
tags: 
parent: 
child: 
share: false
---
# Lesson 5 - 

## Recap

We have introduced two types of random variables, absolutely continuous and discrete random variables.

A discrete random varibles is a random variable which assumes values in a finite subset of $\mathbb{R}$ called S such that:
$$P(X\in S)=1$$

The discrete density is the probability that X is equal to any $x$ and has the following proprieties:
- $p(X)=0$ if $x\not\in S$
- $p_{X}(x)>0\;\;\;\forall x\in S$ and $\sum_{x_{i}}p(x_{i})=1$ 

## Continuation

The theorems which we found for absolutely continuous random variables hold true for discrete ones.

The distribution function of $X$ is:
$$F_{X}(x) = P(X\leq x) = \sum_{x_{i}\leq x}p_{X}(x_{i}),x\in\mathbb{R}$$
From the distribution we can find the probability density, given $x_{1}\leq x_{2}\leq x_{3}\leq \dots$
$$p_{X}(x_{k}) = F_{X}(x_{k})-F_{X}(x_{k-1}) \;\;\;\;\text{if }k\geq 2,\text{with }p_{X}(x_{1}) = F_{X}(x_{1})$$

#### Example
This was an example on discrete random variables and its discrete probability density and distribution function.

One interesting thing that we get from this example, is that we find that the distribution function of discrete random variable is a step function, in which each step is the high of the sum of all the probabilities to the point, and the individuals steps/jumps are the probabilities at each point.

> [!note] Theorem: Assigning a discrete random variable
> 
> Let $S = \{ x_{1},x_{2},x_{3},\dots \}$ be a finite set and let $p_{1},p_{2},\dots$ be a set of numbers such that $p_{i}\geq 0\;\;\forall i$ and $\sum_{i}p_{i}=1$. Then, there exists a discrete random variable $X$, with values in $S$, and such that:
> $$P(X=x_{j})=p_{j}\;\;\;\forall j=1,2,\dots$$
> 

### Analytical quantities

The mean of a discrete random variable. Discrete random variables with density $p_{X}$ and $S=\{ x_{1},x_{2},\dots \}$:
$$\mathbf{E}(X) = \sum_{i=1}^{\infty}x_{i}p_{x}(x_{i})$$

The variance is:
$$\text{Var}(X) = \sum_{i=1}^{\infty}(x_{j}-\mathbf{E}(X))\cdot p_{X}(x_{i})$$
Finally the standard deviation is:
$$\sigma(X) = \sqrt{ \text{Var}(X) }$$

> [!note] Theorem: Expectation of a function of $X$
> 
> Let $X$ be a discrete random variable with $S_{X} = \{ x_{1},x_{2},\dots \}$ and $p_{X}$. Let's consider $g:\mathbb{R}\to \mathbb{R}$ such that $Y = g(X)$. The expectation of this function will be:
> 
> $$\mathbf{E}[g(X)] = \sum_{i=1}^{\infty}g(x_{i})\cdot p_{X}(x_{i})$$
> 
> We can also define the n$^{th}$ moment of $X$ as:
> $$\mathbf{E}[X^{n}] = \sum_{i=1}^{\infty}x_{i}^{n}\cdot p_{X}(x_{i})$$

#### Proprieties of $\mathbf{E}$ and $\text{Var}$
- $E[aX+b] = aEX+b$
- $\text{Var}(aX+b) = a^{2}\text{Var}(X)$
- $\text{Var}(X) = E(X^{2})-E(X)^{2}$
- $\text{Var}(X)=0$ only if $X=c$, where $c$ is some constant almost surely.

## Types of Distributions for Discrete Random Variables

### Degenerate Random Variable

A degenerate random variable is random variable for which $X=c$ almost surely, and where $c$ is a real-value constant.

### Bernoulli Random Variable

$X \sim Be(p)$ if:
$$X\begin{cases}
1 & \text{with probability p} \\
0 & \text{with probability 1-p}
\end{cases}$$
Where $p \in(0,1)$.

The expectation of this type of variable is:
$$EX = p$$
Whereas the variance is:
$$\text{Var}(X) = p(1-p)$$
### Uniform Random Variable

$X$ is a uniform discrete random variable if $S=\{ x_{1},x_{2},\dots x_{n} \}$ and $p_{X}(x_{i})=p=\frac{1}{k}\;\;\;\forall i$


### Binomial Distribution

#### Sequence of Bernoulli Trials

Let's introduce a sequence of Bernoulli trials following the following hypotheses:
1. The outcome of a single trial can only be a "success" or a "failure", meaning that we can either get what we were looking for or not get it.
2. The probability of "success" is constant, meaning that is doesn't change with the trial.
3. The outcomes are independent, the outcome of one of the trials does not affect the outcome of another.

#### Binomial Distribution

Let's consider $X$ as the variable measuring the number of successful results in $n$ Bernoulli trials, with $p$ probability of success in a trial. Then:
$$X\sim \text{Bin}(n,p)$$
This means that:
$$p_{X}(x) = P(X=x)=\binom{n}{p}p^{x}(1-p)^{n-x}\;\;\;\text{with }x=0,1,\dots,n$$
Where:
$$\binom{n}{x} = \frac{n!}{x!(n-x)!}\to \binom{n}{0}=1$$

The expectation for this distribution is:
$$EX=np$$
Whereas the variance is:
$$\text{Var}(X) = np(1-p)$$
An edge case for this distribution is:
$$X\sim \text{Be}(p)= X\sim \text{Bin}(1,p)$$

A sequence of $n$ Bernoulli is a sequence of independent trials with only two possible results.

#### Exercise 1
At least 1 implies that we need the probability that it is not 0.

#### Exercise 2
At most 4 means the sum of the probabilities up to 4.

#### Example
We can also find the number of trials needed for certain probabilities.

### Poisson Distribution

Taking $X\sim \text{Bin}(n,p)$ but with $n\to \infty$, and $p$ decreases such that $np=\lambda=\text{cost}$.

Then if $k=0,\dots,n$, $P(X=k)=\binom{n}{k}p^{k}(1-p)^{n-k}$ $\underbrace{ \to }_{ n\to \infty } e^{ -\lambda } \frac{\lambda^{k}}{k!}$ with $k=0,1,\dots$ 

This type of distribution, $X\sim \text{Poi}(\lambda)$, is called the Poisson distribution.

The expectation for such a distribution is:
$$EX=\lambda$$
The variance of the distribution is:
$$\text{Var}(X) = \lambda$$

