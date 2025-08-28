class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();

        unordered_map<int , int> map;

        int result = 0, sum = 0;

        // Handle Edge Case
        map.insert({0,1});

        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(map.find(sum-k)!=map.end()){
                result += map[sum-k];
            }

            map[sum]++;
        }
         

       return result;
        
    }
};