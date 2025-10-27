---
creation_date: 2025-02-17
tags: 
parent: 
child: 
share: false
---
# Lezione 1 - Intro to Probability

All statistic analysis begins by analysing a sample. We are not interested in how the data is generated and collected.

Data can be gathered by different groups, governments, engineers, physicians and doctors are some of the groups which are known for collecting data for future internal and external use.

Data can come in two types, numerical and categorical. An example of numerical data is the number of cigarettes smoked per day over the course of a week, while an example of categorical data is if a person is a smoker or non-smoker.

Exploratory Data Analysis is the part of in statistics which is concerned with describing and summarising data, like calculating the mean.
Data analysis can affirm or reject the hypothesis we can make about data we have extrapolated, it also tells us the reliability and plausibility of the data which we have gathered.

Inferential Statistics is the part of statistics which is concerned with drawing conclusions from data, based on the data itself and the data analysis which we have performed.

Data values are measured value, these are not deterministic but random.

If we are trying to find data about a large group, since the group measuring every entity in the group can be difficult, what we do is take a sample, perform data analysis, and infer from this what we wanted to find about the group.
From a random sample we will have variability between the results of the data.

In general when we are representing a data value we will represent it in the form:
$$X = \mu+\varepsilon$$
The $\mu$ describes the constant part of the value, while the $\varepsilon$ describes the "noise" variation due to various factors.

## Probability Theory
Probability theory is the part of mathematics that studies a random experiment, i.e. experiments for which the results are not known in advance.

> [!note] Definition - Random Number/Random Variable
> A random number is a numeric variable  whose values are determined by the outcome of the random experiment. A random number is more commonly referred to as a random variable.

We tend to indicate random variables (r.v) with upper-case letters, e.g. X.

Instead we indica a possible value for this random variable with a lower case letter, e.g. x.

##### Examples

- Number of heads in 10 coin flips, X can only be a set in this case, therefore:
$$X \in \{ 0,1,2,3,\dots,9,10 \}$$
- Number of defective parts produced daily
- Time to repair a television $\to$  this on the other hand can be any number greater that 0.

### Probability

Probability is the chance a particular event will occur, this can only be between 0 and 1.

#### Notation
$E:$ any interval of $\mathbb{R}$, with $E^{c}$ being it's complement.
$E_{i}$ and $E_{j}$ are pairwise disjoint if $E_{i}\cap E_{j} = \varnothing$.
$\mathcal{F}$  is the collection of the all real intervals, and of all sets which are obtained from intervals, doing at most an infinite number of operations, such as union, intersect and complement.

#### Definition
Let X be a random variable, the function that transforms $\underbrace{ E }_{ \in \mathcal{F} } \longrightarrow P(\underbrace{ X }_{ \in\mathbb{R} }\in E)$ is called the probability distribution of X if these assumptions are met:
1. $P(X\in E) \geq 0 \;\;\forall E\in\mathcal{F}$
2. $P(X\in\mathbb{R}) =1$
3. If $E_{1},E_{2},E_{3},\dots,\in \mathcal{F}$ are pairwise disjoint, $\to$ $P(X\in(E_{1}\cup E_{2}\cup E_{3}\cup \dots)) = P(X\in E_{1}) + P(X \in E_{2}) + \dots +$
	1. 3.1)  If $E_{1},E_{2},E_{3},\dots,\underbrace{ E_{n} }_{ \implies numerable }\in \mathcal{F}$ are pairwise disjoint, then: $P(X\in(E_{1}\cup E_{2}\cup E_{3}\cup \dots)) = P(X\in E_{1}) + P(X \in E_{2}) + \dots +P(X\in E_{n})$

Proprieties of the probability distribution of X, the probability function, are:

4. $P(X\in E^{c})=1-P(X\in E)$
	1. $\implies P(X>x) = 1-P(X\leq x)$
5. If $S\in \mathcal{F}$ and $P(X\in S) = 1 \implies P(X\in S^{c})=0$
	1. $\implies P(X\in\varnothing) = 0$
6. $E,F \in \mathcal{F}$, if $E\subset F \implies P(X\in E) \leq P(X\in F)$
7. $E,F\in\mathcal{F} \implies P(X\in(E\cup F)) = P(X\in E)+P(X\in F) - P(X \in (E\cap F))$
> [!note] Limits of Probability
> $\underbrace{ 0 }_{ P(X\in\varnothing) } \underbrace{ \leq }_{ (1) } P(X\in E) \underbrace{ \leq }_{ (6) } \underbrace{ 1 }_{ P(X\in\mathbb{R}) }\;\;\;\forall E\in\mathcal{F}$



