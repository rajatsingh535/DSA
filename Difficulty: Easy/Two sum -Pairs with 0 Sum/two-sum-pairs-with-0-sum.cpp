// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = (int)arr.size();

        vector<vector<int>> ans;
        int l = 0, r = n - 1;

        while (l < r) {
            long long sum = (long long)arr[l] + arr[r];

            if (sum == 0) {
                ans.push_back({arr[l], arr[r]});

                int leftVal = arr[l];
                int rightVal = arr[r];

                // skip duplicates on both sides
                while (l < r && arr[l] == leftVal) l++;
                while (l < r && arr[r] == rightVal) r--;

            } else if (sum < 0) {
                l++;
            } else {
                r--;
            }
        }

        return ans;
    }
};
