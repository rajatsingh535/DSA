class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {};
        vector<int> res(n, -1);
        vector<int> st; // acts as s

        // iterate from right to left across a logical doubled array
        for (int i = 2 * n - 1; i >= 0; --i) {
            int cur = nums[i % n];
            while (!st.empty() && st.back() <= cur) st.pop_back();
            if (i < n) res[i] = st.empty() ? -1 : st.back();
            st.push_back(cur);
        }
        return res;
    }
};