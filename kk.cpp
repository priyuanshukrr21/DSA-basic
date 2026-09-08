#include <iostream>
using namespace std;

int main() {
    int player, computer = 2;

    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Choose: ";
    cin >> player;

    if (player == computer)
        cout << "Draw!";
    else if ((player == 1 && computer == 3) ||
             (player == 2 && computer == 1) ||
             (player == 3 && computer == 2))
        cout << "You Win!";
    else
        cout << "Computer Wins!";

    return 0;
}