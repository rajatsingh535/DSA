class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        int low = 0, high = b.size() - 1;
        int ans = a.size() - 1;  // default: extra element at the end

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (a[mid] == b[mid]) {
                low = mid + 1;   // extra element is on the right
            } else {
                ans = mid;      // possible answer
                high = mid - 1; // search left side
            }
        }
        return ans;
    }
};
