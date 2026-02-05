class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxSum = 0;
        int temp = 0;

        for(int i:nums){
            if(i == 1) temp+=1;
            else {
                if(temp > maxSum) maxSum = temp;
                temp = 0;
            }
        }

        return temp > maxSum ? temp : maxSum;
    }
};