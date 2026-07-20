class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
       
        sort(nums.begin(), nums.end());
        
        long long totalSum = 0;
        int n = nums.size();
        
      
        int steps = n / 3;
        
       
        int index = n - 2; 
        for (int i = 0; i < steps; i++) {
            totalSum += nums[index];
            index -= 2; 
        }
        
        return totalSum;
    }
};