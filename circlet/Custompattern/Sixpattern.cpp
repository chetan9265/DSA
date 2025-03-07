#include <iostream>
using namespace std;

int main() {
    int terms = 10; // Number of terms in the series

    for (int n = 1; n <= terms; n++) {
        cout << (n * n - 1) << " ";
    }

    return 0;
}
