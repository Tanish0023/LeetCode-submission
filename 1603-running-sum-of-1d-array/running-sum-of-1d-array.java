class Solution {
    public int[] runningSum(int[] nums) {
        int sum,i,j;
        int[] arr = new int[nums.length];

        for(i = 0; i < nums.length; i++){
            sum = 0;
            for(j = 0; j <= i; j++){
                sum += nums[j];
            }
            arr[i] = sum;
        }

        return arr;
    }
}