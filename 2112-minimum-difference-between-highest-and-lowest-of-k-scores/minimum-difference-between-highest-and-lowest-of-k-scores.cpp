class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

        int n = nums.size();
        int minf = INT_MAX;
        sort(begin(nums),end(nums));
        int i = 0;
        int j = k - 1;

        while(j < n){
            int minEle = nums[i];
            int maxEle = nums[j];
            minf = min(minf,maxEle - minEle);
            i++;
            j++;
        }

        return minf;
        
    }
};