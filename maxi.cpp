#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 7, 40, 15};
    int n = 5;

    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum = " << max;

    return 0;
}