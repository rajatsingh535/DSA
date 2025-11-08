class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int m = -1;
        for(auto i : nums) m = max(m,i);

        for(auto i : nums){
            ans += (m - i);
        }

        return ans;

        
    }
};