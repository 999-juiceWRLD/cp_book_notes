# Sorting

**Sorting** is a fundamental algorithm design problem. Many efficient algorithms use sorting as a subroutine, because it is often easier to process data if the elements are in a sorted order. There are many algorithms for sorting, however the efficient general sorting algorithms work in $O(n\log n)$ time.

## $O(n^2)$ Algorithms

A famous $O(n^2)$ time sorting algorithm is **bubble sort**. Bubble sort consists of $n$ rounds. On each round, the algorithm iterates thorugh the lements of the array. Whenever two consecutive elements are found that are not in correct order, the algorithm swaps them. Bubble sort is an example of a sorting algorithm that always swaps *consecutive* elements in the array.

**NOTE:** A useful concept when analyzing sorting algorithms is an **inversion:** `array[a] > array[b]` where $a < b$. The number of inversions indicates how much work is needed to sort the array. Once the inversion is done, an array is completely sorted.

## $O(n\log n)$ Algorithms

It's possible to sort an array using algorithms that are not limited to swapping consecutive elements. One such algorithm is called **merge sort**, which is based on recursion.

### The Basic Algorithm on How Merge Sort Works

Merge sort sorts a subarray `array[a...b]` as follows:

1. If `a == b`, don't do anything, because the subarray is already sorted.
2. Calculate the position of th middle element: $k =\lfloor(a+b)/2\rfloor$.
3. Recursively sort the subarray `array[a...k]`.
4. Recursively sort the subaray `array[k+1...b]`.
5. Merge the sorted subarrays `array[a...k]` and `array[k+1...b]` into a sorted subarray `array[a...b]`.
