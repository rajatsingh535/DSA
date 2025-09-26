class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
   int low = 0;
    int high = arr.size() - 1;
    int result = -1; // To store the potential answer

    while (low <= high) {
      int mid = low + (high - low) / 2;

      if (arr[mid] == k) {
        // Found an occurrence. Store it and try to find an earlier one.
        result = mid;
        high = mid - 1; // Continue searching in the left half
      } else if (arr[mid] < k) {
        // Search in the right half
        low = mid + 1;
      } else {
        // Search in the left half
        high = mid - 1;
      }
    }

    return result;
    }
};

