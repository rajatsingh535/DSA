class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0; i < n ; i++){
            for(int j = 0; j <= n; j++){
            auto it = find(nums.begin(), nums.end(), j);
                if(it == nums.end()) return j;
            }
        }

        return 0;
        
    }
};