# Time Complexity

The **time complexity** of a function estimates how much time the algorithm will use fot some input.

## Recursion

The time complexity of a recursive function depends on the number of times the function is called and the time complexity of a single call. The total time complexity is the product of these values.

```cpp
void f(int n) {
    if (n == 1) return;
    f(n - 1);
}
```

The call $f(n)$ causes $n$ function calls, and the time complexity of each call is $O(1)$. Thus, the total time complexity is $O(n)$. Another example

```cpp
void g(int n) {
    if (n == 1) return;
    g(n - 1);
    g(n - 1);
}
```

In this case each function call generates two other calls, except for $n = 1$. Based on this, the time complexity is

$$ 1 + 2 + 4 + ... + 2^{n-1} = 2^n - 1 = O(2^n) $$
