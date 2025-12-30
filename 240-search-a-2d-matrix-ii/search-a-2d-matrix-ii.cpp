class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();

        if (target < matrix[0][0] || target > matrix[n-1][m-1])
            return false;

        int row = 0, col = m - 1;

        while (row < n && col >= 0) {
            int cur = matrix[row][col];

            if (cur == target) return true;
            if (cur > target) col--;
            else row++;
        }
        return false;
    }
};
