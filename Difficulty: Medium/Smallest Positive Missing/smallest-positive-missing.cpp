class Solution {
public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();

        // Step 1: Place numbers at correct index if possible
        for(int i = 0; i < n; i++) {
            while(arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1]) {
                swap(arr[i], arr[arr[i] - 1]);
            }
        }

        // Step 2: Identify the missing smallest positive number
        for(int i = 0; i < n; i++) {
            if(arr[i] != i + 1)
                return i + 1;
        }

        // If all correct, then missing number is n+1
        return n + 1;
    }
};
