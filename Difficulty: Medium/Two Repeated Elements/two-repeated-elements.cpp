class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        vector<int> ans;
        for (int i = 0; i < (int)arr.size(); i++) {
            int val = abs(arr[i]);          // original value
            int idx = val - 1;              // map to index 0..n-1

            if (arr[idx] < 0) {             // already visited => repeated (2nd time)
                ans.push_back(val);
                if (ans.size() == 2) break; // found both
            } else {
                arr[idx] = -arr[idx];       // mark visited
            }
        }
        return ans;
    }
};
