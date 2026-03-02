class Solution {
public:
    int jump(vector<int>& nums) {
        int minJumpCounter = 0;
        int l = 0, r = 0;

        while(r < nums.size() - 1){
            int tempR = 0;
            for(int i = l; i <= r; i++){
                tempR = max(tempR, i + nums[i]);
            }

            l = r + 1;
            r = tempR;
            minJumpCounter++;
        }

        return minJumpCounter;
    }
};