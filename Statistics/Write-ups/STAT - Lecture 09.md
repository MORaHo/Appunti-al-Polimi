---
creation_date: 2025-04-28
tags: 
parent: 
child: 
share: false
---
# Lezione 9 - Inferential Statistics

An observes sample is the collection of $x_{i}$, which is  the realisation of a random variable, $X_{i}$.
The observed sample is therefore the realisation of the random sample.

## Statistical Inference

Point Estimation is the main problem confronted by inferential statistics. Point estimation is the estimation of a parameter with in a population.

Why is it useful to consider a random sample and the observed sample?

Because if we make observations at different times the result might be different. Using the random sample we can control the uncertainty.

Let's take 4 iid random variable with distribution $\mathcal{N}(\mu,0.8^{2})$

We can estimate $\mu$ as:
$$\text{Estimator } (\hat{\mu}) = \frac{X_{1}+X_{2}+X_{3}+X_{4}}{4}$$

Suppose we get 4 realised values, $x_{1},x_{2},x_{3}$ and $x_{4}$, we get the estimate of $\mu$.

The estimate is:
$$\text{Estimate }\hat{\mu} = \frac{x_{1}+x_{2}+x_{3}+x_{4}}{4}$$
The estimate is the realisation of the estimator.

What happens if we repeat the experiment but one of the values is different from before.
The estimator will remain the same but the estimate will be different.

We can check the probability that the estimation error is high:
$$P(\left|\overline{X}_{4} -\mu \right|>1)\simeq 1.2\%$$
This is the probability the estimate is different from the true value by more than 1.

We get this value because $\overline{X}_{4}\sim \mathcal{N}\left( \mu, \frac{0.8^{2}}{4} \right)$"
$$\implies P(\left|\overline{X}_{4} -\mu \right|>1 ) = P\left( \left|\frac{\overline{X}_{4} -\mu}{\sqrt{ \frac{0.8^{2}}{4} }} \right|> \frac{1}{\sqrt{ \frac{0.8^{2}}{4} }} \right) = 2 \cdot\left( 1-\phi\left( \frac{2}{0.8} \right) \right) = 2\cdot (1-\phi(2.5))$$

None of the value of $\mu$, that we have found are the real value, finding the real value of $\mu$ is near impossible, that is why we called them estimates.

This result shows us that it is convenient to measure more as it reduces the probability of our $\overline{X}_{n}$ being far from $\mu$.

The error relative to real value has distribution $X_{1}-\mu \sim \mathcal{ N}(0,0.8^{2})$, the $0.8^{2}$ is just the example we are using for this lesson. This has more error since there is only one measure. The more measurements the more precise will our estimator be.

A parameter, $\theta$, is an unknown characteristic, like the mean or the variance.

An estimator of $\theta:\hat{\theta}=U=g(X_{1},X_{2},\dots,X_{n})$ (random sample).
An estimate of $\theta: \hat{\theta} = u=g(x_{1},\dots,x_{n})$ (real number).
The function $g$ is the same for both.

## Unbiased Estimator

An estimator is a statistic $T=g(X_{1},\dots,X_{n})$ whose task is to estimate the unknown parameter $\theta$.

Unbiasedness is the first measure of reliability of an estimator.
An estimator of $\theta$ is unbiased for $\theta$ if:
$$E(T)=\theta\;\; \forall\theta$$

For the random sample:
$$X_{1},X_{2},\dots,X_{n}\mathop{\sim}^{iid}f(\theta)\implies T=g(X_{1},\dots,X_{n})\sim\widetilde{f}(\theta)$$
$T$ is unbiased if $E(T)=\theta\;\;\forall\theta$, therefore $E(T-\theta)=0$

An example of an unbiased estimator for a population mean is the sample mean.
Since $E(\overline{X}_{n})=\mu$, since $E(\overline{X}_{n})=E(X_{i})=\mu$, if the expectation of $f$ is denoted by $\mu$.



