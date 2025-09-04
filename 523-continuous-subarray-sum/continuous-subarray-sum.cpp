class Solution {
public:
    bool checkSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> map;
        int prefixsum = 0;
        for (int i = 0; i < n; i++) {
            prefixsum += arr[i];
            int rem = prefixsum % k;
            if (rem == 0 && i >= 1)
                return true;
            if (map.find(rem) != map.end()) {
                int idx = map[rem];
                if ((i - idx) >= 2)
                    return true;
            } else {
                map[rem] = i;
            }
        }

        return false;
    }
};