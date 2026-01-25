class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        int total = row * col;
        int strow = 0, stcol = 0, endrow = row - 1, endcol = col - 1;

        while (count < total) {
            // print starting row

            for (int index = stcol; index <= endcol && count < total; index++ ) {
                ans.push_back(matrix[strow][index]);
                count++;
            }
            strow++;

            // print ending coloumn

            for (int index = strow; index <= endrow && count < total; index++) {
                ans.push_back(matrix[index][endcol]);
                count++;
            }

            endcol--;

            // print ending row
            for (int index = endcol; index >= stcol && count < total; index--) {
                ans.push_back(matrix[endrow][index]);
                count++;
            }

            endrow--;

            // print start col

            for (int index = endrow; index >= strow && count < total; index--) {
                ans.push_back(matrix[index][stcol]);
                count++;
            }

            stcol++;
        }

        return ans;
    }
};