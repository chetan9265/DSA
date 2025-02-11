#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int j = i; j <= 5; j++) {
            cout << j;  // Print decreasing numbers starting from 5
        }
        cout << endl;
    }

    return 0;
}
