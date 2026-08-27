#include <iostream>
using namespace std;

int main() {
    int n = 7;

    if (n & 1)
        cout << "Odd";
    else
        cout << "Even";

    return 0;
}