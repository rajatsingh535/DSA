class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();

        unordered_map<int, int> mp;
        int prefix = 0 , count = 0;

        for(int i = 0; i < n ; i++){
            prefix += nums[i];
            if(prefix == goal){
                count ++;
            }
            if(mp.find(prefix-goal)!=mp.end()){
                count += mp[prefix-goal];
            }
            mp[prefix]++;
        }

        return count;

    }

};