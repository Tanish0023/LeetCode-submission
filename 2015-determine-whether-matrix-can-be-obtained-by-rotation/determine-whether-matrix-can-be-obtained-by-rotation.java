class Solution {
    public boolean findRotation(int[][] mat, int[][] target) {
        // Number of 1 in mat 1
        int count1 = 0;
        for(int[] i:mat){
            for(int j:i){
                if(j == 1){
                    count1++;
                }
            }
        }

        int count2 = 0;
        for(int[] i:target){
            for(int j:i){
                if(j == 1){
                    count2++;
                }
            }
        }

        if(count1 == count2){
            int rotation = 4;
            while(rotation > 0){
                // Rotate 90deg
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