class Solution {
    public int oddCells(int m, int n, int[][] indices) {
        int[][] arr = new int[m][n];

        for(int[] indices_row:indices){
            int row = indices_row[0];
            int col = indices_row[1];

            for(int i = 0; i < n; i++){
                arr[row][i] += 1;
            }
            
            for(int j = 0; j < m; j++){
                arr[j][col] += 1;
            }
            
        }

        int count = 0;
        for(int[] row:arr){
            for(int col:row){
                if(col % 2 != 0){
                    count++;
                }
            }
        }
        return count;

    }
}