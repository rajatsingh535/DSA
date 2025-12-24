class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == 1) {
                ans = mid;       // possible transition point
                high = mid - 1;  // search left side
            } else {
                low = mid + 1;   // move right
            }
        }
        return ans;
    }
};
