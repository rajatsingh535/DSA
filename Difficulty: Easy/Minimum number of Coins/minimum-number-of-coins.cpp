class Solution {
  public:
    int findMin(int n) {
        int coins[] = {10, 5, 2, 1};
        int count = 0;
        
        for (int i = 0; i < 4; i++) {
            count += n / coins[i];  // take as many as possible
            n = n % coins[i];       // reduce remaining amount
        }
        
        return count;
    }
};
