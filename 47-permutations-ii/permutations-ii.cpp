class Solution {
public:
    void solve(int i, vector<int>& nums, vector<vector<int>>& res){
        if(i == nums.size()){
            res.push_back(nums);
            return;
        }

        unordered_set<int> seen;

        for(int j = i; j < nums.size(); j++){
            if(seen.count(nums[j])) continue; // avoid duplicates at this level

            seen.insert(nums[j]);

            swap(nums[i], nums[j]);
            solve(i + 1, nums, res);
            swap(nums[i], nums[j]); // backtrack
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        solve(0, nums, res);
        return res;
    }
};