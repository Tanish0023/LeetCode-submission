class Solution {
    public int[] buildArray(int[] nums) {
        int[] ans = new int[nums.length];
        
        for(int i = 0; i < nums.length; i++){
            int a1 = nums[i];
            int a2 = nums[a1];
            ans[i] = a2;
        }
        return ans;
    }
}