class Solution {
public:
    int rowMaxIndex(vector<vector<int>>& mat, int col, int n) {
        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (mat[i][col] > mat[idx][col]) {
                idx = i;
            }
        }
        return idx;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int row = rowMaxIndex(mat, mid, n);

            int left  = (mid > 0)     ? mat[row][mid - 1] : -1;
            int right = (mid < m - 1) ? mat[row][mid + 1] : -1;

            if (mat[row][mid] > left && mat[row][mid] > right) {
                return {row, mid};
            }
            else if (right > mat[row][mid]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return {-1, -1};
    }
};
