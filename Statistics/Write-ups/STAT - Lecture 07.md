---
creation_date: 2025-03-19
tags: 
parent: 
child: 
share: false
---
# Lezione 7 - Covariance, Independent Random Variables, Distribution of the Sum of Independent Random Variables

## Covariance

The covariance of two random variables is define as:
$$Cov(X,Y)=E\left[(X-EX)\cdot(Y-EY)\right]=E\left[X\cdot Y\right]-EX\cdot EY$$
A positive covariance, if means $X$ forces $Y$ to increase, whereas a negative covariance is when $X$ forces $Y$ to decrease.

The linear correlation coefficient:
$$\begin{align}
\rho_{x,y} &= Cov\left(  \frac{X-EX}{\sqrt{ Var(X) }}, \frac{Y-EY}{\sqrt{ Var(Y) }} \right)  \\
&= \frac{Cov(X,Y)}{\sqrt{ Var(X)\cdot Var(Y) }}\implies -1\leq\rho_{x,y}\leq 1
\end{align}$$
If $\rho=1$ or $\rho=-1$, there is a linear relationship between the two variables.

### Remark
Taking the sum of two random variables, $X$ and $Y$. The expectation of the sum is:
$$\begin{gather}
E\left[X+Y\right]=EX+EY \\
Var\left[X+Y\right] = Var(X)+Var(Y)+2Cov(X,Y)
\end{gather}$$
### Proprieties of the Covariance

1. $Cov(X,X)= Var(X)$ and $Cov(X,Y)=Cov(Y,X)$
2. $Cov(aX+bY)=a\cdot Cov(X,Y), \forall a,b\in\mathbb{R}$
3. $Cov(X+Y,Z)=Cov(X,Z)+Cov(Y,Z)$
4. $$\begin{align}
&Cov(aX+bY,cX+dZ)= \\
&=ac\cdot Var(X)+ad\cdot Cov(X,Z)+bc\cdot Cov(X,Y)+bd\cdot Cov(Y,Z)
\end{align}$$
If the $Cov(X,Y)=0$, $X$ and $Y$ are said to be uncorrelated or not correlated.

## Independent Random Variables

Let $X_{1},X_{2},\dots,X_{n}$ be n random variables. These variables are independent if:
$$\begin{align}
&P(X_{1}\in E_{1},X_{2}\in E_{2},\dots,X_{n}\in E_{n}) = \\
&= P(X_{1}\in E_{1})\cdot P(X_{2}\in E_{2})\cdot \dots \cdot P(X_{n}\in E_{n})
\end{align}$$
This has to be true $\forall E_{1},E_{2},\dots,E_{n}\in\mathcal{F}$

We can write that for 2 variables:
$X$ and $Y$ are independent $\iff P(X\in A,Y\in B)=P(X\in A)\cdot P(Y\in B)\;\;\forall A,B\in \mathbb{R}$.

### Proprieties:

1. $X,Y$ are independent $\iff$
$$\begin{gather}
p_{_{X,Y}}(x,y) = p_{_{X}}(x)\cdot p_{_{Y}}(y)\;\;\forall x,y \text{ for }X,Y \text{ discrete r.v.} \\
f_{_{X,Y}}(x,y) = f_{_{X}}(x)\cdot f_{_{Y}}(y)\;\;\forall x,y \text{ for }X,Y \text{ abs. cont. r.v.}
\end{gather}$$

i.e.$\to$ If the joint distribution function can be factorised as the product of the marginal densities.

2. If $X,Y$ are independent, then $E(X\cdot Y)=E(X)\cdot E(Y)$ so $Cov(X,Y)=0$

This second property does not mean that if the covariance is null, that the variables are necessarily independent. Therefore $Cov(X,Y)=0\cancel{ \implies } X,Y$ independent.

What we can say though is that:$Var(X,Y)=Var(X)+Var(Y)+2\cancelto{ 0 }{ Cov(X,Y) }=Var(X)+Var(Y)$

### Exercises

First exercise:
![](Pasted%20image%2020250319164239.png)

We said that $Y$ only has to possible outcomes so it was distributed like a Bernoulli function, where $p=\frac{1}{2}$, and X was symmetric around 0, so the average is 0.

The covariance was 0, so they were uncorrelated.

We also found that the two variables were not independent because we could not write:
$$p_{_{X,Y}}(x,y)=p_{_{X}}(x)\cdot p_{_{Y}}(y)$$
For every point.

After being asked the probability of $P(Y=X^{2})$ and mapping summing all possible combination of X and Y, we go that the sum of the probabilities was 1, so $Y=X^{2}$, and so this confirms that the variables are not independent.

In the second exercise we were given:
![](Pasted%20image%2020250319164654.png)

We found that the expectations of the two variables as well as the expectation of their product, so we could then calculate the covariance, and found that it was not 0, so we could say that it the variables were necessarily not independent.

## Distribution of the Sums of Independent Random Variables

### Theorem

#### Gaussian Sum
Let $X_{1},X_{2},\dots,X_{n}$ be independent random variables with $X_{i}\sim \mathcal{N}(\mu_{i},\sigma_{i}^{2})$.
Then: (Linear reproducibility)
$$Y = c_{1}X_{1}+c_{2}X_{2}+\dots+c_{n}X_{n}\sim \mathcal{N}(\mu_{_{Y}},\sigma_{_{Y}}^{2})$$
Where:
$$\begin{gather}
\mu_{_{Y}}=c_{1}\mu_{1}+\dots+c_{n}\mu_{n} \\
\sigma_{_{Y}}^{2}=c_{1}^{2}\sigma_{1}^{2}+\dots+c_{n}^{2}\sigma_{n}^{2}
\end{gather}$$
#### Poisson Sum
Let $X_{1},X_{2},\dots,X_{n}$ be independent, with $X_{i}\sim Poi(\lambda_{i})$, then:
$$Y=X_{1}+X_{2}+\dots+X_{n}\sim Poi(\lambda_{1}+\dots+\lambda_{n})$$
#### Bernoulli Sum
Let $X_{1},X_{2},\dots,X_{n}\stackrel{iid}{\sim}Be(p),\text{then }Y=X_{1}+X_{2}+\dots+X_{n}\sim Bin(n,p)$

$iid$ stands for independent and identically distributed, meaning that all the variables are independent, and are distributed in the same way including having the same governing parameters for that distribution. 

### Examples

We did an example of variables sums, using 10 iid Gaussians and then computed a specific probability using Bernoulli distributed counterparts.

Another example was using 5 iid Poisson variables.

## Random Sample
A random sample is a vector ($X_{1},X_{2},\dots,X_{n}$) of independent and iid random variables. Meaning:
$$X_{1},X_{2},\dots,X_{n}\stackrel{iid}{\sim} f$$
Where $f$ represents the density of the common distribution.

This is a mathematical notation to formalise that the random variables represent the variable of interest of $n$ subject sampled at random from an infinite population (or a group that is larger relative to $n$).

Let consider the sum of the $iid$ finite sequence of random variables:
$$S_{n}=X_{1}+X_{2}+\dots+X_{n}$$

Letting $\mu:=E\left[X_{i}\right]$ and $\sigma^{2}:=Var(X_{i})$, we will have:
$$E\left[S_{n}\right]=E\left[X_{1}+\dots+X_{n}\right]=E\left[X_{1}\right]+\dots+E{\left[X_{n}\right]} = n\mu $$
$$Var\left[S_{n}\right]=Var\left[X_{1}+\dots+X_{n}\right]=Var\left[X_{1}\right]+\dots+Var\left[X_{n}\right] = n\sigma^{2}$$
We are able to do the separation do the variables being independent.

### Sample Mean
Let $X_{1},X_{2},\dots,X_{n}$ be a random sample of size $n$, the sample mean will be:
$$\overline{X}_{n}=\frac{X_{1}+X_{2}+\dots+X_{n}}{n}=\frac{S_{n}}{n} $$
The mean and variance of the sample mean are:
$$E\left[\overline{X}_{n} \right]=\frac{E\left[S_{n}\right]}{n}=\frac{n\mu}{n}=\mu=E\left[X_{i}\right]$$

$$Var\left[\overline{X}_{n} \right] = \frac{Var\left[S_{n}\right]}{n^{2}}=\frac{n\sigma^{2}}{n^{2}} = \frac{\sigma^{2}}{n} = \frac{Var\left[X_{i}\right]}{n}$$

The sample mean is the average of the sample of the population, each part of the sample represents the random values of the same random variable.
The sample mean being the product of different random variables, is itself also a random variable.

Outside some special cases, we are not able to determine the distribution of the sample mean. We are only able to determine the distribution of the sample mean, $\overline{X}_{n}$, when the number of sample, $n$, is large.