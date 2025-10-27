---
creation_date: 2025-04-28
tags: 
parent: 
child: 
share: false
---
# Lezione 10 - Point and Interval Estimation

The hand-written notes for this are written in two parts since I missed the class and the professor only published the recording two weeks later, and I didn't see there was more material that she covered during the class. So I took the notes into parts to make it less confusing for myself.

## Point Estimation

Typically the density and distribution function of a variable are unknown, or the distribution is a special case in which we need a specific defining parameter.

Let $\theta$ be the characteristic of said distribution which is unknown, for example the $\lambda$ of an exponential distribution, or the $\mu$ of a normal distribution, and we are therefore trying to estimate.

If an estimator $T$ of $\theta$ is unbiased it means:
$$E(T)= \theta\;\;\forall\theta$$
So on average the error is 0.

### Definition of Bias/Distorsion
The bias of an estimator $T$ of $\theta$ is the difference:
$$b_{\theta}(T) = b(T,\theta) = E(T)-\theta \lesseqgtr 0$$

If an estimator is unbiased for $\theta$, then $b(T,\theta)=0$

### Definition of  Mean Square Error (MSE)
The mean square error of an estimator $T$ for $\theta$ is:
$$MSE_{\theta}(T) = E((T-\theta)^{2})$$
The MSE is what we use to measure the quality of an estimator, the smaller the MSE, the better the estimator.

#### Propriety 1:
Suppose we have $T_{1}$ and $T_{2}$:
$T_{1}$ is better than $T_{2}$ if $MSE(T_{1}) \leq MSE(T_{2})\;\;\forall\theta$

#### Propriety 2:
If $T$ is an estimator for $\theta$:
$$MSE_{\theta}(T) = Var_{\theta}(T)+(b_{\theta}(T))^{2}$$
#### Propriety 2.1:
If $T$ is an unbiased estimator of $\theta$:
$$\implies MSE_{\theta}(T) = Var_{\theta}(T)$$
### Exercises
We did a few exercises to get a better grasp of how to use the measures, using the only estimator which we know which is the sample mean and sample variance.

#### Note:
The sample variance is the main estimator for the variance and has equation:
$$S_{n}^{2} = \frac{1}{n-1}\sum_{j=1}^{n}(X_{j}-\overline{X}_{n} )^{2}$$
This can also be rewritten in another way, but we will see this in the next lecture.

### Plug-in Estimator
This is the only other type of estimator which we will use and see.

Suppose we want to estimate $\theta$, which is a characteristic of $f$, and $f$ is a function $\theta$.

If we use $\overline{X}_{n}$ as estimator for $f=g(\theta)=E(X_{i})$

The estimator for $g(\theta)$ will be:
$$\hat{g(\theta)}=\overline{X}_{n}\implies \text{solve }g(\hat{\theta}) = \overline{X}_{n},\text{ with respect to }\hat{\theta}  $$
We can use the relationship between $f$ and $\theta$, by solving for $\theta$ through the relationship as our estimator to estimate $\theta$.

### Examples (Plug-in Estimator)
Some examples with the plug-in estimator might make it make more sense, so that's what we did.

### Definition of Standard Error
If $T$ is an estimator for $\theta>0$ starting from a sample. Let $X_{1},\dots,X_{n}\mathop{\sim}^{{iid}}f(-,\theta)$, then the standard error of $T$ is the standard error of the sampling distribution of a point estimator, i.e.:
$$\text{standard error} = \sqrt{ Var_{\theta}(T) }$$
### Example (Standard Error)

## Interval Estimation

Let's assume a random sample $X_{1},\dots,X_{n}\mathop{\sim}^{{iid}}f(-,\theta)$, where $\theta$ is an unknown parameter, and let us assume the observed sample $x_{1},\dots,x_{n} \in \mathbb{R}^{n}$.

Our goal is to estimate the scalar parameter $\theta$, with a pair of estimator in order to identify a real interval that is an estimate of possible values of $\theta$.

We have so far only introduced  the estimator $T$, which even in the best case scenario where $E(T)=\theta\;\;\forall\theta$, if $T$ is absolutely continuous is such that:
$$P(T=\theta)=0\;\;\forall \theta$$
Therefore instead of only using one estimator, we will use an interval estimator which estimates an interval from the sample, within which $\theta$ possibly lies.

Replacing the random sample with observed sample, we will have a real interval that is an interval estimate of $\theta$, that is an interval within which we expect to find the true value of the parameter $\theta$.

### Confidence Intervals

Let $X_{1},\dots,X_{n}$ be a random sample with density function $F_{\theta}$ and $\theta\in\Theta\subset \mathbb{R}^{k}$.
We define a two-sided confidence interval (CI) for $\theta$ with confidence level $1-\alpha$ as a random interval determined by two statistics, $L(X_{1},\dots,X_{n})$ and $U(X_{1},\dots,X_{n})$, such that:
$$P_{\theta}(L(X_{1},\dots,X_{n})<\theta<U(X_{1},\dots,X_{n}))=1-\alpha$$
Where $\alpha$ is a small number, e.g. $1\%$,$5\%$ or $10\%$.

The interval estimate will be $(l,u)$ where $l,u$ are the observed values: $l=L(x_{1},\dots,x_{n})$ and $u = U(x_{1},\dots,x_{n})$.

### Confidence Intervals for Gaussian Population with KNOWN variance

Fixing a confidence level $\alpha$. Let our random sample be $$X_{1},\dots,X_{n}\mathop{\sim}^{{iid}}\mathcal{N}(\mu,\sigma_{0}^{2})$$
where $\sigma_{0}^{2}$ is known, but $\mu$ is not.

We define a two-sided confidence interval for $\mu$ with confidence $1-\alpha$ as:
$$\left( \overline{x}_{n}-z_{1-\frac{\alpha}{2}} \frac{\sigma_{0}}{\sqrt{ n }},\overline{x}_{n}+z_{1-\frac{\alpha}{2}} \frac{\sigma_{0}}{\sqrt{ n }}   \right)$$
Where $\overline{x}_{n}$ is the observed value of $\overline{X}_{n}$.

This interval is derived from the definition of a pivotal quantity:
$$\frac{\overline{X}_{n} -\mu}{\sigma_{0}/\sqrt{ n }}\sim \mathcal{N}(0,1)$$
And from here we solve the inequality inside this probability function:
$$P\left( -z_{1-\frac{\alpha}{2}}<\frac{\overline{X}_{n} -\mu}{\sigma_{0}/\sqrt{ n }}<z_{1-\frac{\alpha}{2}} \right) = 1-\alpha$$

Since the interval is based on a gaussian which is symmetric, the length of the interval will be:
$$L = 2z_{1-\frac{\alpha}{2}}\sqrt{ \frac{\sigma_{0}^{2}}{n} }$$
This equation shows us two things.
First, if size of the sample increases, the length will decrease, and therefore the precision will increase.
Secondly, as we increase our confidence level $1-\alpha$, the length will increase and so the precision will decrease.

Defining our interval is therefore a balance of precision and level of confidence.
