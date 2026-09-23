#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int j = 0;

    // Place all non-zero elements at the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining positions with zero
    while (j < n) {
        arr[j] = 0;
        j++;
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    moveZeroes(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}