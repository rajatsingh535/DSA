// User function Template for C++

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int nextPrime(int n) {
    int next = n + 1;
    while (true) {
        if (isPrime(next))
            return next;
        next++;
    }
}
