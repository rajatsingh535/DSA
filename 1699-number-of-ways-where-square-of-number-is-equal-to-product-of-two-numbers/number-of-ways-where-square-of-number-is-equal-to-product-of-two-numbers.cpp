// class Solution {
// public:
//     int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        
        
//     }
// };

class Solution {
public:
    int countPairs(const vector<int>& arr, const vector<int>& nums) {
        int n = arr.size();
        int ans = 0;
        unordered_map<long long, int> freq;
        for (auto num : nums) freq[1LL * num]++;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                long long prod = 1LL * arr[i] * arr[j];
                long long sq = sqrt(prod);
                // Check for perfect square and presence in nums
                if (sq * sq == prod && freq.count(sq)) {
                    ans += freq[sq];
                }
            }
        }
        return ans;
    }
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        return countPairs(nums1, nums2) + countPairs(nums2, nums1);
    }
};
