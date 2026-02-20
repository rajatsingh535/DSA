class Solution {
  public:
    int single(vector<int>& arr) {
        int n = (int)arr.size();
        int lo = 0, hi = n - 1;

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            // mid^1 gives the paired index: mid+1 if mid even, mid-1 if mid odd
            if (arr[mid] == arr[mid ^ 1]) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        return arr[lo];
    }
};