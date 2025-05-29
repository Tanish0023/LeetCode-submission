class Solution {
    public int largestAltitude(int[] gain) {
        int alt = 0;
        int max = alt;

        for(int ele:gain){
            alt += ele;
            if (alt>max){
                max = alt;
            }
        }

        return max;
    }
}