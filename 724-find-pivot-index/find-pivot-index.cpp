class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int right = 0, left = 0;
            for (int j = 0; j < i; j++) {
                right += arr[j];
            }

            for (int j = i + 1; j < n; j++) {
                left += arr[j];
            }

            if (left == right) {
                return i;
            }
        }

        return -1;
    }
};