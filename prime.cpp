#include<iostream>
using namespace std;

int main(){
    int n = 7;
    bool isPrime = true;
    for (int i=2;  i<=n-1; i++){
    if (n % i == 0) {
        isPrime = false;
        break;

    }


}
isPrime -> true -> prime
isPrime -> false -> non prome
return 0;
}