class Solution {
  public:
    int lastDigit(int n) {
        // Return the last digit of the number
        return abs(n % 10);
    }
};
