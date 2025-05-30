class Solution {
    public boolean findRotation(int[][] mat, int[][] target) {
        if(checkMatrix(mat, target)){
            return true;
        }

        int rotation = 3;
        while(rotation > 0){
            int[][] arr = new int[mat.length][mat.length];
            for(int i = 0; i < mat.length; i++){
                for(int j = 0; j < mat.length; j++){
                    arr[j][mat.length - 1 - i] = mat[i][j];
                }
            }

            if(checkMatrix(arr, target)){
                return true;
            }
            mat = arr;
            rotation--;
        }
        

        return false;
    }

    public boolean checkMatrix(int[][] mat, int[][] target){
        for(int i = 0; i < mat.length; i++){
            for(int j = 0; j < mat.length; j++){
                if(mat[i][j] != target[i][j]){
                    return false;
                }
            }
        }

        return true;
    }
}