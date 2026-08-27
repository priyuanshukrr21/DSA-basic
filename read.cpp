#include <iostream>
using namespace std;

int main() {
    int READ = 1;
    int WRITE = 2;
    int DELETE = 4;

    int permission = READ | WRITE;

    if (permission & WRITE) {
        cout << "User can write";
    }

    return 0;
}