#include <iostream>
using namespace std;

int arr [8] = { -1, 2, 4, -3, 5, 2, -5, 2 };
int n = 8;

int kadane_algorithm_verbose() {
    int best = INT_MIN, sum = 0;
    printf("sum is maximum of arr[k] & sum + arr[k]\n");
    printf("best is maximum of best & sum\n\n");
    printf("initial sum: %d, initial best: %d\n", sum, best);
    for (int k = 0; k < n; k++) {
        // printf("index: %d, element: %d, sum: %d\n", k, arr[k], sum+arr[k]);
        printf("element: %d, sum: %d -> ", arr[k], sum+arr[k]);
        sum = max(arr[k], sum + arr[k]);
        printf("new sum: %d\n", sum);
        best = max(best, sum);
        printf("current best: %d\n", best);
    }
    return best;
}

int main() {
    int res = kadane_algorithm_verbose();
}