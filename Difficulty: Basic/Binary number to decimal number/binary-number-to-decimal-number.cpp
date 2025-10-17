class Solution {
  public:
    int binaryToDecimal(string &b) {
        int n = b.size();
        int decimal = 0;
        
        // Traverse from left to right
        for(int i = 0; i < n; i++) {
            // If current bit is 1, add corresponding power of 2
            if(b[i] == '1') {
                decimal += 1 << (n - i - 1);
            }
        }
        return decimal;
    }
};
