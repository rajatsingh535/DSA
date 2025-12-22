class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int low = 0, high = arr.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            // Minimum element lies to the right
            if (arr[mid] > arr[high]) {
                low = mid + 1;
            }
            // Minimum element lies to the left (or at mid)
            else {
                high = mid;
            }
        }
        
        // low points to the minimum element
        return low;
    }
};
