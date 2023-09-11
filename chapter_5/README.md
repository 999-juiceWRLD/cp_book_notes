# Complete Search

**Complete search** is a general method that can be used to solve any algorithm problem. The idea is to generate all possible solutions to the problem using brute force, and then select the best solution or count the number of solutions, depending on the problem.

Complete search is a good technique if there is enough time to go through all the solutions, because the search is usually easy to implement and it always gives the correct answer. If complete search is too slow, other techniques, such as greedy algorithms or dynamic programming, may be needed.

## Generating Subsets

We first consider the problem of generating all subsets of a set of $n$ elements. There are two common ways to achieve this, first one is using recursion and the latter is bit representation.

I created the `get_subset()` method on my own because the code snippet given in the book was not explanatory.

## Backtracking

**Backtracking** is a general algorithm begins with an empty solution and extends the solution step by step. They are a crucial technique used in solving problems that involve finding a solution incrementally by trying out different possibilities and undoing them if they don't lead to a valid solution. Backtracking is commonly used in combinatorial and optimization problems.

Common applications:

- N-Queen Problem
- Sudoku Solving Algorithm
- Graph Algorithm
- Hamiltonian Cycle
- Subset Sum

etc.

## Pruning

We can often optimize backtracking by pruning the search tree. The idea is to add 'intelligence' to the algorithm so that, it will notice as soon as possible if a partial solution cannot be extended to a complete solution. Such optimizations can have a tremendous effect on the efficiency of the search.
