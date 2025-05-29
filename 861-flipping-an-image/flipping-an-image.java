class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int n = image.length;
        int[][] arr = new int[n][];

        for(int i = 0; i < n; i++){
            arr[i] = reverse(image[i]);
        }

        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(image[j][k] == 1){
                    image[j][k] = 0;
                } else{
                    image[j][k] = 1;
                }
            }
        }

        return arr;
    }

    public int[] reverse(int[] arr){
        int i =0;
        int j = arr.length - 1;

        for(i = 0; i < arr.length / 2; i++){
            int temp = arr[i];
            arr[i] = arr[j - i];
            arr[j - i] = temp;
        }

        return arr;
    }
}