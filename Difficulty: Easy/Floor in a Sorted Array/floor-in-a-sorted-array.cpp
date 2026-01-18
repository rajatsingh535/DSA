class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int ans = -1;
        
        while(low <= high) {
            int mid = low + (high - low) / 2;
            
            if(arr[mid] <= x) {
                ans = mid;        // possible floor
                low = mid + 1;    // search right for last occurrence
            }
            else {
                high = mid - 1;
            }
        }
        
        return ans;
    }
};
