#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number  of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
         }
       for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += arr[i][j];
            }
        }
    }
    cout << "Sum of boundary elements: " << sum << endl;

    return 0;
}
