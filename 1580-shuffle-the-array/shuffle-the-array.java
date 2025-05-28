class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] arr = new int[nums.length];
        int j = 0;

        for(int i = 0; i < nums.length - 1; i+=2){
            arr[i] = nums[j];
            arr[i+1] = nums[n+j];
            j++;
        }
        return arr;
    }
}