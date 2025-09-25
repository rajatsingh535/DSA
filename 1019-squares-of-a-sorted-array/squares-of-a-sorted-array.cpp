class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        int i = 0, j = n - 1;

        while (i < j) {

            long long int r = nums[i] * nums[i];
            long long int l = nums[j] * nums[j];

            if (l >= r) {
                nums[j] = l;
                j--;
            }

            if (r > l) {
                nums[i] = nums[j];
                nums[j] = r;
                j--;
            }

        }

      if(i==j) nums[i] = nums[i] * nums[i];
      sort(nums.begin(),nums.end());

        return nums;
    }
};