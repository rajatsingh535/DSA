class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int prefix = 1;
        //right side in arr[i]
        for(int i = 0; i < n; i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }

        //left side in arr[i]
        int suffix = 1;
        for(int i = n-1; i >= 0; i--){
            ans[i] *= suffix;
            suffix *= nums[i];
        }
        
        return ans;
    }
};

//Tc : 0(N) , Sc : 0(1)
// Approach : Store prefix product while traversing left-to-right and suffix product while traversing right-to-left, multiplying both for each index to get the final result without using division.