#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];
    int sum = 0;

    cout << "Enter the elements of the 2D array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];  // Add each element to the sum
        }
    }

int totalelements=sizeof(arr);
cout<<totalelemnts;


    cout << "\nSum of all elements: " << sum << endl;
    cout << "Average of all elements: " << totalelements/sum << endl;

    return 0;
}
