---
creation_date: 2025-05-02
tags: 
parent: 
child: 
share: false
---
# Lezione 11 - Interval Estimation

## Confidence Interval for Gaussian with known $\sigma^{2}$

The confidence interval for this case is:
$$\left( \overline{x}_{n} -z_{1-\frac{\alpha}{2}} \frac{\sigma_{0}}{\sqrt{ n }},\overline{x}_{n}+z_{1-\frac{\alpha}{2}}  \frac{\sigma_{0}}{\sqrt{ n }}  \right)$$
The length of this interval is:
$$L = 2\cdot z_{1-\frac{\alpha}{2}}\sqrt{ \frac{\sigma_{0}^{2}}{n} }$$
As $n\to\infty$, the length of the interval tends to 0, whereas as $\alpha\to0$, the length tends to $\infty$.

### Example

### Remark
The interval estimate does not have probability $1-\alpha$ of having $\overline{x}_{n}$ inside it, it has that confidence level. We make this distinction since once the interval estimate is realised, there is no longer a sample of random variable, there is an observed which we are taking from which is not random as we have defined it, and therefore cannot have a probability, so we regard it as confidence.

Another way to see it is that, for $k$ times we repeat the experiment and get our $k$ observed samples, then $100\cdot(1-\alpha)\%$ of the individual confidence intervals will have the real value within.

## One-sided lower confidence bound

A one-sided lower confidence bound (limit) for $\theta$ of a confidence level $100(1-\alpha)\%$, is determined by the random interval: $(L(X_{1},\dots,X_{n}),\infty)$, such that:
$$P_{\theta}(L(X_{1},\dots,X_{n})<\theta)=1-\alpha$$
There is an equivalent definition for the upper limit.

## Confidence Interval for a Gaussian population with unknown variance

### t-distribution
The random variable $T$ is t-distributed with $k$ (positive integer) degrees of freedom if $T$ is absolutely continuous with density:
$$f_{T}(t) = \frac{\Gamma\left( \frac{k+1}{2} \right)}{\sqrt{ \pi k }\,\Gamma\left( \frac{k}{2} \right)}\cdot \frac{1}{\left( 1+\frac{t^{2}}{k} \right)^{\frac{k+1}{2}}}\;\;\;t\in\mathbb{R}$$
The properties of this distribution are:
1. If $k \geq 2 \to E(T)=0$
2. If $k \geq 3 \to Var(T) = \frac{k}{k-2}$
3. If $k\to\infty: f_{T}(t)\to\phi(t)\;\;\;\forall t$

Notation: The $\alpha$-quantile of $T\sim t(k)$, will be written as: $t_{1-\alpha}$ as we did for the known variance where we used $z_{1-\alpha}$, we will see the difference.

![](2025-05-02-19-34.png)

### Confidence Interval

Let the random sample $X_{1},\dots,X_{n}\mathop{\sim}^{iid} \mathcal{N}(\mu,\sigma^{2})$, where the variance $\sigma^{2}$ is also unknown.
A  two-sided confidence interval for $\mu$ of confidence level $1-\alpha$ is:
$$\left( \overline{x}_{n} -\frac{s}{\sqrt{ n }}t_{1-\frac{\alpha}{2}}(n-1),\overline{x}_{n} +\frac{s}{\sqrt{ n }}t_{1-\frac{\alpha}{2}}(n-1) \right)$$
Where $S$ is the sample variance, as an estimator for $\sigma$, is:
$$S^{2} = \frac{1}{n-1}\sum_{j=1}^{n}(x_{j}-\overline{x}_{n} )^{2}= \frac{1}{n-1}\sum_{i}x_{i}^{2} -n\overline{x}_{n}^{2} $$
The second equality can be shown but I will not write it here, it is in the hand-written notes.

We got the confidence interval from the probability:
$$P\left( -t_{1-\frac{\alpha}{2}}(n-1)<\frac{\overline{X}_{n}-\mu}{\sqrt{ S^{2}/n }}  <t_{1-\frac{\alpha}{2}}(n-1)\right)=1-\alpha$$
We therefore get:
$$\left( \overline{X}_{n}-t_{1-\frac{\alpha}{2}}(n-1)\sqrt{ \frac{S^{2}}{n} }<\mu  <\overline{X}_{n}+ t_{1-\frac{\alpha}{2}}(n-1)\sqrt{ \frac{S^{2}}{n} }\right)$$

The t-distribution $\alpha$-quantile, acts as a surrogate for the normal distribution $\alpha$-quantiles values, for when the variance is unknown.

## Confidence Interval of a population if $n$ is large

For a general (Gaussian or non-Gaussian) population, with both known and unknown variance, when the population $n$ is large enough, we are able to assume the pivotal statistic can be approximated to a standard normal such that:
$$\frac{\overline{X}_{n}-\mu}{\sqrt{ \sigma^{2}/n }}\mathop{\sim}^{approx} \mathcal{N}(0,1)$$
This means that even if we are looking at a Gaussian population with unknown variance, we will be using $z_{1-\frac{\alpha}{2}}$, since the pivot has changed, but we will use $S^{2}$.

### Examples

## General Remark

If we approximating something like the $p$ of a population of Bernoulli distributed random variables, it is impossible for the lower bound to be negative and for the upper bound to be greater than 1, so we have to cut it off if we go over those limits.

## Confidence Interval for parameters different from $\mu$, using plug-in estimator

We did an example, estimating $\theta$ in a population of exponential variables where $\lambda =\frac{1}{\theta}$.
In general we found the confidence interval for $\frac{1}{\theta}$, and from there we derived the confidence interval for $\theta$.




