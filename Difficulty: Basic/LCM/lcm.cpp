int LCM(int a, int b) {
    int x = a, y = b;

    // Find GCD using Euclidean Algorithm
    while (y != 0) {
        int rem = x % y;
        x = y;
        y = rem;
    }
    int gcd = x;

    // Calculate LCM
    return (a / gcd) * b;
}
