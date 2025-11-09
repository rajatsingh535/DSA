class Solution {
public:
    int minStartValue(vector<int>& nums) {
        // 1. Approach

        // A. make a runnig sum then check if it value greater than 1
        // B. if yes then exit else ans = start; break

        int n = nums.size();
        int ans = 1;
        for (int i = 1; i <= 10001; i++) {
            int runsum = i;
            int ok = 1;
            for (int j = 0; j < n; j++) {
                runsum += nums[j];
                if (runsum < 1) {
                    ok = 0;
                    break;
                }
            }

            if (ok == 1) {
                ans = i;
                break;
            }
        }

        return ans;
    }
};