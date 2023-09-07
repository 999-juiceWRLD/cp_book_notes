#include <iostream>
using namespace std;

int arr [8] = { -1, 2, 4, -3, 5, 2, -5, 2 };
int n = 8;

int algorithm_1() {
    int best = INT_MIN;
    for (int a = 0; a < n; a++) {
        for (int b = a; b < n; b++) {
            int sum = 0;
            for (int k = a; k <= b; k++) {
                sum += arr[k];
            }
            best = max(best, sum);
        }
    }
    return best;
}

int algorithm_2() {
    int best = INT_MIN;
    for (int a = 0; a < n; a++) {
        int sum = 0;
        for (int b = a; b < n; b++) {
            sum += arr[b];
            best = max(best, sum);
        }
    }
    return best;
}

int algorithm_3() {
    int best = INT_MIN, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(arr[k], sum + arr[k]);
        best = max(best, sum);
    }
    return best;
}

int main() {
    int alg_1 = algorithm_1();
    cout << alg_1 << "\n";
    
    int alg_2 = algorithm_2();
    cout << alg_2 << "\n";

    int alg_3 = algorithm_3();
    cout << alg_3 << "\n";
}
