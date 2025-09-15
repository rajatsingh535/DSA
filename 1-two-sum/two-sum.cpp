class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        unordered_map<int , int> hash;


        for(int i = 0; i < n; i++){

            int c = target - nums[i];
            if(hash.find(c)!=hash.end()){
                return {hash[c],i};
            }

            hash[nums[i]] = i;

        }

    return {};

        
    }
};