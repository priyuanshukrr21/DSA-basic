#include <iostream>
using namespace std;

int main() {
    int LOGIN  = 1;  // 001
    int ADMIN  = 2;  // 010
    int ACTIVE = 4;  // 100

    int userStatus = LOGIN | ADMIN | ACTIVE;

    if ((userStatus & ADMIN) && (userStatus & ACTIVE)) {
        cout << "Active Admin User";
    } else {
        cout << "Access Denied";
    }

    return 0;
}