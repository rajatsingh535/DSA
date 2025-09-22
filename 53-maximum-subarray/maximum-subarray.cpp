class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        int max_ending_here = nums[0];  // max sum ending at current index
        int max_so_far = nums[0];       // global max sum

        for(int i = 1; i < n; i++){
            // either start new subarray at i or extend previous subarray
            max_ending_here = max(nums[i], max_ending_here + nums[i]);
            max_so_far = max(max_so_far, max_ending_here);
        }

        return max_so_far;
        
    }
};