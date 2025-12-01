class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> s;
        for(int i = 2 * n-1; i>=0; i--){
            int idx = i % n;


            while(!s.empty() && s.top() <= nums[idx]){
                s.pop();
            }

            ans[idx] = s.empty() ? -1:s.top();

            s.push(nums[idx]);
        }

        return ans;
      
    }
};