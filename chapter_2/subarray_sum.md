# Maximum Subarray Sum

## Algorithm 1

The variables $a$ and $b$ fix the first and last index of the subarray, and the sum of values is calculated to the variable `sum`. The variable `best` contains the maximum sum found during the search.

The time complexity of the algorithm is $O(n^3)$, because it consists of three nested loops.

## Algorithm 2

It's possible to make the `algorithm_1()` more efficient, by calculating the sum at the same time when the right end of the subarray moves. After this change, the time complexity is $O(n^2)$.
