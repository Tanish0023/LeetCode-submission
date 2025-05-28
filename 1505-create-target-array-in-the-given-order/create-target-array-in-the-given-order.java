class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        int[] arr = nums;

        for(int i = 0; i < nums.length; i++){
            arr = insertAtSpecificPosition(arr, nums[i], index[i]);
        }

        return arr;
    }

    static int[] insertAtSpecificPosition(int[] arr, int num, int index){
        int[] newArr = new int[arr.length];
        
        for(int i = 0; i < arr.length; i++){
            if(i < index){
                newArr[i] = arr[i];
            }else if(i == index){
                newArr[i] = num;
            }else{
                newArr[i] = arr[i-1];
            }
        }
        System.out.println(Arrays.toString(newArr));

        return newArr;
    }
}