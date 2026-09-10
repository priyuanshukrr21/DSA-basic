#include<iostream>
#include<vector>
using namespace std;

void change(int* ptr) {
    *ptr = 20;
}

int main() {
    int a = 10;
    cout << "Before change: " << a << endl;

    change(&a);

    cout << "After change: " << a << endl;





    return 0;
}
