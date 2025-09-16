class Solution {
public:
    int maxSubArray(vector<int>& b) {
        
     int n = b.size(); 
    if (n == 0) return 0;

    int maxSum = INT_MIN; 
    int currentSum = 0; 

    for (int i = 0; i < n; ++i) {
        currentSum += b[i]; 
        maxSum = max(maxSum, currentSum); 
        if (currentSum < 0) {
            currentSum = 0; 
        }
    }

    return maxSum;

      
    }
};