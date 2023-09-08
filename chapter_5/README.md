# Complete Search

**Complete search** is a general method that can be used to solve any algorithm problem. The idea is to generate all possible solutions to the problem using brute force, and then select the best solution or count the number of solutions, depending on the problem.

Complete search is a good technique if there is enough time to go through all the solutions, because the search is usually easy to implement and it always gives the correct answer. If complete search is too slow, other techniques, such as greedy algorithms or dynamic programming, may be needed.

## Generating Subsets

We first consider the problem of generating all subsets of a set of $n$ elements. There are two common ways to achieve this, first one is using recursion and the latter is bit representation.
