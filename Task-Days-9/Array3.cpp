#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int sumArray[size];    
    for (int i = 0; i < size; i++) {
        sumArray[i] = arr1[i] + arr2[i];
    }
    cout << "Sum of the two arrays: ";
    for (int i = 0; i < size; i++) {
        cout << sumArray[i] << " ";
    }
    return 0;
}
