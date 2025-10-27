---
creation_date: 2025-03-25
tags: 
parent: 
child: 
share: false
---
# Lezione 8 - Central Limit Theorem

A random sample is a group of $iid$ random variables. The sample mean is the arithmetic mean of the sum of the variables composing this sample.
$$\begin{gather}
E\left[\overline{X}_{n} \right] = E(X_{i}) \\
Var(\overline{X}_{n} ) = \frac{Var(X_{i})}{n} 
\end{gather}$$

In general we don't know the distribution of $S_{n}$ or $\overline{X}_{n}$, only in a few cases do we know the distribution.

## Central Limit Theorem
Let $X_{1},X_{2},\dots,X_{n}$ be a sequence of $n$ $iid$ random variable, of any distribution, with $E(X_{i})=\mu$ and $Var(X_{i})=\sigma^{2}$, where $0<\sigma^{2}<\infty$ and $n$ is large ($\geq 50$), then:
$$\lim_{ n \to \infty } P\left( \frac{\overline{X}_{n} -\mu}{\sigma/\sqrt{ n }}\leq x \right) = \phi(x)=\int\limits_{-\infty}^{x} \frac{1}{\sqrt{ 2\pi }}e^{ ^{-u^{2}/2} } \, du \;\;\forall x$$
This means that the standardised sample mean is distributed like a standard Gaussian.

$$\begin{align}
\frac{\overline{X}_{n}-\mu}{\sigma/\sqrt{ n }}  \approx  \mathcal{N}(0,1)=\mathcal{L}(Z)&\iff \overline{X}_{n}\approx\mathcal{N}\left( \mu, \frac{\sigma^{2}}{n} \right) \\
&\iff S_{n} = X_{1}+X_{2}+\dots+X_{n}\approx \mathcal{N(n\mu,n\sigma^{2})}
\end{align}$$
All of these approximation are only possible if $n$ is large.
These tell us that the sample mean is distributed like a Gaussian, with its mean and standard variation

### Example

The sample mean is useful scientifically because in general it can represent any measurement of a variable.

Any variable $T$ can be seen as the sample mean plus the components of error.
$$T = \mu+\varepsilon$$

By the CLT, $\varepsilon = X_{1}+X_{2}+\dots+X_{n}\underbrace{ \approx }_{ n \text{ large} }\mathcal{N}(0,\sigma^{2})$.
By the CLT, we are also able to write:
$$T \sim \mathcal{(\mu,\sigma^{2})}$$

### Exercise 1
This was an exercise with Poisson variable,s and we approximate the sum of the $n$ Poisson variables as a variable with the distribution:
$$X_{1}+\dots+X_{100} \approx \mathcal{N}(n\cdot\lambda,n\cdot\lambda)$$
We use these parameters since the Poisson distribution has an expectation and standard deviation which are both $\lambda$, but in this case we have $n$ of them so it will be $n$ times both.
### Exercise 2
This is a similar problem but with Binomial distribution of $S$. While we already know that we could write as Poisson if we fulfill some conditions, if  we fulfill some other conditions then we can use the CLT, where $S$ would distributed like a Gaussian with expectation and variance like the Binomial.

### Exercise 3
Once again, we did the same for a uniformly distribution sample mean.

## Population and Samples
Statistic is to used to learn information about a population, so we take a sample and measure the characteristic of interest of said sample.

We randomly select $n$ subjects of the population, for each we take the interested value and each measurement is a realisation of the variable $x_{i}$, which is the actual value in the body at said moment.

We want to estimate the density based on measured values.