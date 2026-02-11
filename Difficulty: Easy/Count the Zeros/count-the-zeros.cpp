class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int firstZero = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == 0) {
                firstZero = mid;   // potential first zero found
                high = mid - 1;    // search in left half
            } else {
                low = mid + 1;     // search in right half
            }
        }

        // If no zero found
        if (firstZero == -1) return 0;

        return n - firstZero;
    }
};
