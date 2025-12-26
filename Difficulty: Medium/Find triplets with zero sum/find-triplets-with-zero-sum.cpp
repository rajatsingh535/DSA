class Solution {
  public:
    bool findTriplets(vector<int> &arr) {
        int n = arr.size();
        if (n < 3) return false;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];

                if (sum == 0)
                    return true;
                else if (sum < 0)
                    left++;
                else
                    right--;
            }
        }
        return false;
    }
};
