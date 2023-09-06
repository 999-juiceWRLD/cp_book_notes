# Maximum Subarray Sum

## Algorithm 1

The variables $a$ and $b$ fix the first and last index of the subarray, and the sum of values is calculated to the variable `sum`. The variable `best` contains the maximum sum found during the search.

The time complexity of the algorithm is $O(n^3)$, because it consists of three nested loops.
