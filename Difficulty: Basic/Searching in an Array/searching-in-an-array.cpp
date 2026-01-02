class Solution {
  public:
    int search(int k, vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == k) {
                return i + 1; // 1-based indexing
            }
        }
        return -1;
    }
};
