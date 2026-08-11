class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0, high = m - 1;

        while (low <= high) {
            int midRow = low + (high - low) / 2;

            int maxCol = 0;
            for (int j = 0; j < n; j++) {
                if (mat[midRow][j] > mat[midRow][maxCol]) {
                    maxCol = j;
                }
            }

            int top = -1;
            if (midRow - 1 >= 0) {
                top = mat[midRow - 1][maxCol];
            }

            int bottom = -1;
            if (midRow + 1 < m) {
                bottom = mat[midRow + 1][maxCol];
            }

            if (mat[midRow][maxCol] > top && mat[midRow][maxCol] > bottom) {
                return {midRow, maxCol};
            } 
            else if (mat[midRow][maxCol] < top) {
                high = midRow - 1;
            } 
            else {
                low = midRow + 1;
            }
        }

        return {-1, -1};
    }
};