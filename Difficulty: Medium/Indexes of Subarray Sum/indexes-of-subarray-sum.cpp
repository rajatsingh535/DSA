class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
    int n = arr.size();
    int start = 0, end = 0;
    long long curr_sum = arr[0];

    while (end < n) {
        if (curr_sum == target)
            return {start + 1, end + 1}; // 1-based indices

        if (curr_sum < target) {
            end++;
            if (end < n) curr_sum += arr[end];
        } 
        else { // curr_sum > target
            curr_sum -= arr[start];
            start++;
        }
    }

        return {-1};
       
        
    }
};