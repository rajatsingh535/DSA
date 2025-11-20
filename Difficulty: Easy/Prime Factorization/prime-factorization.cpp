void printPrimeFactorization(int n) {
    // Print all factors of 2
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }
    
    // Check odd numbers from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    
    // If remaining n is a prime > 2
    if (n > 2) {
        cout << n << " ";
    }
}
