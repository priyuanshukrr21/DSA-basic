#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int n = 5;

    cout << "Duplicate number: " << findDuplicate(arr, n);

    return 0;
}