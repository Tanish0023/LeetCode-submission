class Solution {
    public int diagonalSum(int[][] mat) {
        int n = mat.length;
        int j = mat.length - 1;
        int sum = 0;

        for(int i = 0; i < n; i++){
            if(i == (j-i)){
                sum += mat[i][i];
                continue;
            }
            sum = sum + mat[i][i] + mat[i][j-i];
        }

        return sum;
    }
}