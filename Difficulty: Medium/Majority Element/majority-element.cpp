class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        
        // Step 1: Find candidate
        int candidate = arr[0];
        int count = 1;
        
        for(int i = 1; i < n; i++) {
            if(count == 0) {
                candidate = arr[i];
                count = 1;
            }
            else if(arr[i] == candidate) {
                count++;
            }
            else {
                count--;
            }
        }
        
        // Step 2: Verify candidate
        count = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == candidate)
                count++;
        }
        
        if(count > n/2)
            return candidate;
        else
            return -1;
    }
};
