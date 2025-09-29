class Solution {
  public:
    int nthRoot(int n, int m) {
        if (m == 0) return 0;  // nth root of 0 is 0
        if (m == 1) return 1;  // nth root of 1 is always 1

        int low = 1, high = m;
        while (low <= high) {
            long long mid = low + (high - low) / 2;

            // Compute mid^n safely
            long long power = 1;
            for (int i = 0; i < n; i++) {
                power *= mid;
                if (power > m) break; // prevent overflow
            }

            if (power == m) return mid;
            else if (power < m) low = mid + 1;
            else high = mid - 1;
        }
        return -1;  // not a perfect nth root
    }
};
