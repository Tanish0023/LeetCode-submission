class Solution {
    public int mySqrt(int x) {
        if(x == 1){
            return 1;
        }
        int start = 0;
        int end = x / 2;
        

        while(start <= end){
            if((start*start) == x){
                return start;
            }else if((start*start) > x || (start*start) < 0){
                return start - 1;
            }
            start += 1;
        }

        return end;

    }
}