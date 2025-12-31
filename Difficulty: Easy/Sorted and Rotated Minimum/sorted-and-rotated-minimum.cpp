class Solution {
  public:
    int findMin(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;

        while (low < high) {
            // If subarray is already sorted
            if (arr[low] <= arr[high])
                return arr[low];

            int mid = low + (high - low) / 2;

            // Decide which half to search
            if (arr[mid] >= arr[low])
                low = mid + 1;
            else
                high = mid;
        }
        return arr[low];
    }
};
