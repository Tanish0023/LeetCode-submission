class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        ArrayList<Boolean> arr = new ArrayList<Boolean>(candies.length);

        for(int i = 0; i < candies.length; i++){
            int with_extra = candies[i] + extraCandies;
            Boolean ans = isGreatest(candies, with_extra);
            arr.add(ans);
        }

        return arr;
    }

    static Boolean isGreatest(int[] candies, int with_extra){
        for(int ele:candies){
            if(ele > with_extra){
                return false;
            }
        }

        return true;
    }
}