class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        vector<pair<int, int>> rowCounts;

        for (int i = 0; i < m; ++i) {
            int count = lower_bound(mat[i].rbegin(), mat[i].rend(), 1) - mat[i].rbegin();
            count = n - count;

            rowCounts.push_back({count, i});
        }

        sort(rowCounts.begin(), rowCounts.end());

        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(rowCounts[i].second);
        }

        return result;
    }
};