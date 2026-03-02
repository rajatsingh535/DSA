class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        int n = arr.size();
        int count = 0;        // current increasing steps
        int maxCount = 0;     // maximum steps
        
        for(int i = 1; i < n; i++) {
            if(arr[i] > arr[i - 1]) {
                count++;               // increase step
                maxCount = max(maxCount, count);
            } else {
                count = 0;             // reset if not increasing
            }
        }
        
        return maxCount;
    }
};