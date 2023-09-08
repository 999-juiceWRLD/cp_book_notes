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
