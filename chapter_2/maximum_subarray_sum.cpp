#include <iostream>
using namespace std;

int arr [8] = {-1, 2, 4, -3, 5, 2, -5, 2 };
int n = 8;

int algorithm_1() {
    int best = 0;
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

int main() {
    int best = algorithm_1();
    cout << best << "\n";
}
