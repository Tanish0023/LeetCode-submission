class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int num1 = 0;
        int num0 = 0;
        int maxLen = 0;

        for(int r = 0; r < nums.size(); r++){
            nums[r] == 1 ? num1++ : num0++;
            if(num0 > k){
                nums[l] == 1 ? num1-- : num0--;
                l++;
            }

            maxLen = max(maxLen, r - l + 1);
        }

        return maxLen;
    }
};