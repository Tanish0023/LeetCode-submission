class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        for(int ele:nums){
            int digits = (int)(Math.log10(ele) + 1);
            if(digits % 2 ==0){
                count++;
            }
        }

        return count;
    }
}