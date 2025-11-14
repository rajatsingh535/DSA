class Solution {
public:
    int kthSmallest(vector<int> &arr, int k) {
        // Sort the array in ascending order
        sort(arr.begin(), arr.end());
        
        // Return the kth smallest element (1-based index)
        return arr[k - 1];
    }
};