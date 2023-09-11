# Greedy Algorithms

A **greedy algorithm** constructs a solution to the problem by always making a choice that looks the best at the moment. A greedy algorithm never takes back it's choices, but directly constructs the final solution.

A greedy algorithm is any algorithm that follows the problem-solving heuristic of making the locally optimal choice at each stage.

However, in many problems, a greedy strategy does not produce an optimal solution.

## Coin Problem

Consider a problem where we are given a set of coins and our task is to form a sum of money $n$ using the coins. The values of the coins are `coins` $= { c_1, c_2, c_3, ..., c_k }$ and each coins can be used as many times as we want. What is the minimum number of coins needed?

## Greedy Algorithm

A simple greedy algorithm to the problem always selects the largest possible coin, until the required sum of money has been constructed.

## Scheduling Problem

Many schedulin problems can be solved using greedy algorithms. A classic problem is as follows: Given $n$ events with their starting and ending times, find a schedule that includes as many events as possible. It is not possible to attend an event partially. Consider the following events:

| event | starting time | ending time |
|-------|---------------|-------------|
| A     | 1             | 3           |
| B     | 2             | 5           |
| C     | 3             | 9           |
| D     | 6             | 8           |
