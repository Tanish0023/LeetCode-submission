class Solution {
    public int[] getConcatenation(int[] nums) {
        int nums_length = nums.length;
        int[] ans = new int[nums_length*2];

        for(int i = 0; i < nums_length; i++){
            ans[i] = nums[i];
            ans[i + nums_length] = nums[i];
        }
        return ans;
        
    }
}