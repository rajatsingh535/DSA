class Solution {
public:
    int search(vector<int>& nums, int x) {
        int n = nums.size();

        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == x)
                return mid;

            if (nums[low] <= nums[mid]) { // low sorted

                if (nums[low] <= x && x <= nums[mid]) {
                    high = mid - 1;
                }

                else {

                    low = mid + 1;
                }

            }

            else { // right sorted

                if (nums[mid] <= x && x <= nums[high]) {
                    low = mid + 1;
                }

                else {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};