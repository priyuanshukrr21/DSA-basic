#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 5, 25, 3, 15};

    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < 5; i++) {

        if (arr[i] < smallest) {
            smallest = arr[i];
        }

        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;

    return 0;
}