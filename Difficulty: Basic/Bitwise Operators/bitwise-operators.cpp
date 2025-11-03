#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int d = a ^ a;     // XOR of a with itself = 0
    int e = c ^ b;     // XOR of c and b
    int f = a & b;     // AND of a and b
    int g = c | (a ^ a); // OR of c with (a XOR a) = c | 0 = c
    e = ~e;            // bitwise NOT of e

    cout << d << " " << e << " " << f << " " << g << endl;

    return 0;
}
