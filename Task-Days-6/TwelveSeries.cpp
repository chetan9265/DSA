#include <iostream>
using namespace std;

int main() {
    int num = 14;

    for (int i = 0; i < 6; i++) {
        cout << num<<" ";
        
        if (i % 2 == 0) {
            num *= 2; 
        } else {
            num -= 8; 
        }
    }

    return 0;
}
