class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int n = arr.size();
        
        // Sort arrival and departure times
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        int plat_needed = 1, result = 1;
        int i = 1, j = 0;
        
        // Traverse both arrays
        while (i < n && j < n) {
            // If next train arrives before previous departs
            if (arr[i] <= dep[j]) {
                plat_needed++;
                i++;
            }
            // If a train departs before next arrives
            else {
                plat_needed--;
                j++;
            }
            // Update result if needed
            result = max(result, plat_needed);
        }
        
        return result;
    }
};
