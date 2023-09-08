#include <iostream>
#define ARR { 1, 3, 8, 2, 9, 2, 5, 6 }
#define n 8

int arr[n] = ARR;

void printArray(int *array) {

    for (int i = 0; i < n; i++) {
        if (i == n-1) {
            std::cout << array[i] << std::endl;
        } else {
            std::cout << array[i] << ' ';
        }
    }
}

int* bubbleSort() {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
    int *ptrArr = &arr[0];
    // std::cout << ptrArr << std::endl;
    // std::cout << *ptrArr << std::endl;
    return ptrArr;
}

int main() {
    int *before = &arr[0];
    printArray(before);
    int *ptrArr = bubbleSort();
    // std::cout << ptrArr << std::endl;
    // std::cout << *ptrArr << std::endl;
    // int newArr = *ptrArr;
    // std::cout << newArr << std::endl;
    printArray(ptrArr);
}
