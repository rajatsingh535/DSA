class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int grid[51][51] = {};  // To mark points
        int prefix[52][52] = {}; // 2D prefix sum (1-indexed for easier bounds)

        // Step 1: Mark the grid
        for (const auto& p : points) {
            grid[p[0]][p[1]] = 1;
        }

        // Step 2: Build 2D prefix sum (1-based indexing)
        for (int i = 1; i <= 51; ++i) {
            for (int j = 1; j <= 51; ++j) {
                prefix[i][j] = grid[i - 1][j - 1]
                             + prefix[i - 1][j]
                             + prefix[i][j - 1]
                             - prefix[i - 1][j - 1];
            }
        }

        // Helper to get number of points in rectangle [(x1,y1), (x2,y2)] inclusive
        auto getRectangleSum = [&](int x1, int y1, int x2, int y2) {
            // Convert to 1-based
            ++x1; ++y1; ++x2; ++y2;
            return prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
        };

        int res = 0;
        int n = points.size();

        // Step 3: Try all pairs (A, B)
        for (int i = 0; i < n; ++i) {
            int ax = points[i][0], ay = points[i][1];
            for (int j = 0; j < n; ++j) {
                if (i == j) continue;
                int bx = points[j][0], by = points[j][1];

                // Check if A is upper-left of B
                if (ax <= bx && ay >= by) {
                    int x1 = ax, x2 = bx;
                    int y1 = by, y2 = ay;

                    int pointCount = getRectangleSum(x1, y1, x2, y2);
                    if (pointCount == 2) {
                        res++;
                    }
                }
            }
        }

        return res;
    }
};
