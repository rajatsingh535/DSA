class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        int n = (int)arr.size();
        for (int i = 0; i + 1 < n; i += 2) {
            std::swap(arr[i], arr[i + 1]);
        }
    }
};