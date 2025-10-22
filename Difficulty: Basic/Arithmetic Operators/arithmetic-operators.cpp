#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;  // Input two integers
    
    int p = x + y;  // Addition
    int q = x - y;  // Subtraction
    int r = x * y;  // Multiplication
    int s = 0;      // Division result
    int t = 0;      // Modulo result
    
    if (y != 0) {   // To avoid division/modulo by zero
        s = x / y;  
        t = x % y;
    } else {
        cout << "Division or Modulo by zero is not allowed!" << endl;
        return 0;
    }

    cout << p << " " << q << " " << r << " " << s << " " << t << endl;
    
    return 0;
}
