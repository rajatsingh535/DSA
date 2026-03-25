class Solution {
  public:
    int findMissing(vector<int> &arr) {
        int n = arr.size();
        
        int d = INT_MAX;
        
        // Find minimum absolute difference
        for(int i = 1; i < n; i++){
            d = min(d, abs(arr[i] - arr[i-1]));
        }
        
        // Handle descending case
        if(arr[1] < arr[0]) d = -d;
        
        // Find missing element
        for(int i = 1; i < n; i++){
            if(arr[i] - arr[i-1] != d){
                return arr[i-1] + d;
            }
        }
        
        // If already complete AP
        return arr[n-1] + d;
    }
};