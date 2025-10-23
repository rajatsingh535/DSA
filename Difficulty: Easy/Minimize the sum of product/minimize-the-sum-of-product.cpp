class Solution {
public:
    typedef long long int ll;

    long long int minValue(vector<int> &arr1, vector<int> &arr2) {
        int n = arr1.size();

        // Sort arr1 ascending
        sort(arr1.begin(), arr1.end());

        // Sort arr2 descending
        sort(arr2.begin(), arr2.end(), greater<int>());

        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (ll)arr1[i] * arr2[i]; // Use long long to avoid overflow
        }

        return sum;
    }
};
