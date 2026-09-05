#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 45, 23, 67, 34, 89};
    int n = 6;

    int largest = arr[0];
    int second = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << second;

    return 0;
}