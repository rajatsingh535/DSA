class Solution {
  public:
    string isPrime(int n) {
        if (n <= 1) return "No"; // 1 and below are not prime

        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return "No"; // found a divisor → not prime
            }
        }
        return "Yes"; // no divisors found → prime
    }
};
