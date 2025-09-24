class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i + 1; j < n; j++) {
                sum = nums[i] + nums[j];
                if (sum < target) {

                    cnt++;
                }
            }
        }

        return cnt;
    }
};