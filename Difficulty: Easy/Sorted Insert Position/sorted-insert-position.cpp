class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        int low = 0;
        int high = arr.size() - 1;
        
        while (low <= high) {
            // Calculate mid this way to prevent potential overflow
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == k) {
                return mid; // Found it!
            } else if (arr[mid] < k) {
                low = mid + 1; // Look in the right half
            } else {
                high = mid - 1; // Look in the left half
            }
        }
        
        // If not found, 'low' will be the correct insertion index
        return low;
    }
};