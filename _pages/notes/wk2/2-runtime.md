---
title: W2D2 - Runtime
permalink: /notes/w2d1
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Agenda

Time | Activity | Purpose
---- | ---- | ----
9:50 - 10:10 | Warm-Up Problem | Apply material from the reading
10:10 - 10:30 | Big-Oh Notation | Look at a rigorous definition of big-Oh notation
10:30 - 11:00 | Extension Problems | Get some intuitive sense of big-Oh notation

# Learning Goals

Topic | Objective | Professor's Role
---- | ---- | ----
Mechanism.1 | I can look at an unfamiliar problem and identify similar underlying structures between this problem and problems I have solved in the past | Provide students with opportunities to draw connections between learned algorithms and novel problems.
Reflect.2 | I have gained comfort with discomfort, failure, and unfamiliarity | Cultivate a classroom environment which supports and encourages safe exploration of discomfort, failure, and unfamiliarity 

# Notes

## Big-Oh

The formal definition of big-Oh:

$$ f(x) = O(g(x)) \iff \exists M \in \mathbb{R^{+}} \text{s.t.} | f(x) |  \leq Mg(x)~\forall x \geq x_0 $$

The intuitive definition of big-Oh:

Big-Oh describes how the number of steps of an algorithm scaes with the size of the input. 

## Big-Theta and Big-Omega

There are two other rarely used but frequently misunderstood and related concepts. 

$\Theta(n)$ roughly means that a function is bounded both above and below by a value; it is a _tight_ bound. 

$\Omega(n)$ roughly means that a function is bounded below; it is a _lower_ bound.

O(n) refers only to bounding above. A simple for-loop iterating overan array is $O(n)$, but it is also $O(n^2)$, and so on. 

![complexity class image](/CMSC-510-FT-23/assets/bigo.png)

![complexity class table](http://modelingsocialdata.org/img/runtime_table.png)

# Practice Problems

## Warm-Up Problem

What does it mean if I say an algorithm runs in O(n) time? 

## Class Exercise 1

Decide whether the following statements are true or false. 

$f(x) = O(g(x))$, where...

1. $f(x) = \log(x),~g(x) = x$
2. $f(x) = x^2,~g(x) = x^3$
3. $f(x) = x^5,~g(x) = x^2 + x + 7$
4. $f(x) = x!,~g(x^{100})$
5. $f(x) = x,~g(x) = y$
6. $f(x) = \log(x^2),~g(x) = \log(x)$

## Class Exercise 2

Determine the runtime for the `mergesort` algorithm described in your book on page 