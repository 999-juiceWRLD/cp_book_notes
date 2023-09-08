# Data Structures

A **data structure** is a way to store data in the memory of a computer. It is important to choose an appropriate data structure for a problem, because each data structure has it's own advantages and disadvantages.

This chapter introduces the most important data structures in the C++ standard library. It's important to use STL whenever possible since they will save a lot of time (in terms of competitive programming).

## Dynamic Arrays

A **dynamic array** is an array whose size can be changed during the execution of the program. The most popular dynamic array in C++ is the `vector` structure.

```c++
vector<int> v;
v.push_back(3); // [3]
v.push_back(2); // [3, 2]
v.push_back(1); // [3, 2, 1]

// access an element like an ordinary array
cout << v[1]; // returns 2
v.size(); // returns the length of the v 
```

## Set Structures

A **set** is a data structure that maintains a collection of elements. A set can be used like a vector, but it is not possible to access the elements using the `[]` notation.

## Map Structures

A **map** is a generalized array that consists of key-value pairs.

## Deque

A **deque** is a dynamic array whose size can be efficiently changed at both ends of the array. Like `vector`, a deque provides the functions `push_back()` and `pop_back()`, but it also includes `push_fron()` and `pop_front()`.

## Stack

A **stack** is a data structure that provids two $O(1)$ time complexity operations: adding an element to the top, and removing an element from the top. It's only possible to access to top element of the stack.

## Queue

A **queue** also provides two $O(1)$ time operations: adding an element to the end of the queue, and removinf the first element in the queue. It's only possible to access to first and last element of a queue.
