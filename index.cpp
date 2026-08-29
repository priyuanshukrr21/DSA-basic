#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int value = 30;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == value) {
            cout << "Index = " << i;
            break;
        }
    }

    return 0;
}