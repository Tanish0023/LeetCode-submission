class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = Integer.MIN_VALUE;
        for(int[] i:accounts){
            int wealth = 0;
            for(int j:i){
                wealth += j;
            }
            if(wealth > max) {
                max = wealth;
            }
        }

        return max;
    }
}