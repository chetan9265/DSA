
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 30, 45, 60, 75, 80}; 
	
    int size =  sizeof(arr[0]); 
	
    cout << "Even numbers in the array: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
