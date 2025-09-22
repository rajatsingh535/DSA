class Solution {
public:
    int maxSubArray(vector<int>& b) {
        int n = b.size(); 
        if (n == 0) return 0;
    
        vector<int> p1(n + 1, 0); 
        p1[0] = b[0];  

        for (int i = 1; i < n; ++i) {
            p1[i] = max(b[i], p1[i - 1] + b[i]);
        }
    
        int maxSum = p1[0];
        for (int i = 1; i < n; ++i) {
            maxSum = max(maxSum, p1[i]);
        }

        return maxSum;
        
    }
};