class Solution {
  public:
    // Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high) {
        
        while (low < high) {
            
            // If the subarray is already sorted
            if (arr[low] <= arr[high]) {
                return arr[low];
            }
            
            int mid = low + (high - low) / 2;
            
            // If mid element is greater than high,
            // minimum is in right half
            if (arr[mid] > arr[high]) {
                low = mid + 1;
            } 
            // Otherwise minimum is in left half including mid
            else {
                high = mid;
            }
        }
        
        return arr[low];
    }
};