class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = nums.size();
        int n = (s * (s + 1)) / 2;

        for(int i:nums){
            n -= i;
        }

        return n;
    }
};