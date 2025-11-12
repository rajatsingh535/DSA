class Solution {
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q,
                          vector<int> queries[]) {
        vector<int> ans;
        
        for(int k = 0; k < q; k++) {
            int type = queries[k][0];
            int i = queries[k][1];
            int j = queries[k][2];
            int sum = 0;

            // Loop only in the range of hop
            for(int x = i - type; x <= i + type; x++) {
                for(int y = j - type; y <= j + type; y++) {
                    if(x == i && y == j) continue; // skip center
                    if(x >= 0 && x < n && y >= 0 && y < m) {
                        // For 2-hop, exclude 1-hop cells
                        if(type == 2) {
                            if(abs(x-i) <=1 && abs(y-j) <=1) continue;
                        }
                        sum += mat[x][y];
                    }
                }
            }

            ans.push_back(sum);
        }
        
        return ans;
    }
};
