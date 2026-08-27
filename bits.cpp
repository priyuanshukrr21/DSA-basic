#include <iostream>
using namespace std;

int main() {
    int n = 8;

    // 2nd bit ON
    n = n | 2;

    if (n == 10) {
        cout << "Bit successfully ON";
    } else {
        cout << "Bit is OFF";
    }

    return 0;
}