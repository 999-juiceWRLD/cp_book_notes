#include <iostream>
#include <vector>
using namespace std;

void traverseVector(vector<int> vec) {
    for (int i: vec) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    
    vector<int> vector = {4, 2, 5, 3, 5, 8, 3};
    traverseVector(vector);
    sort(vector.begin(), vector.end());
    traverseVector(vector);
}
