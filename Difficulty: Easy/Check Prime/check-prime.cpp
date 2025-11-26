#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "False";
        return 0;
    }

    bool isPrime = true;

    // Check divisors from 2 to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) 
        cout << "True";
    else 
        cout << "False";

    return 0;
}
