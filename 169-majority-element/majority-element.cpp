class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() / 2;
        
        int ele = nums[0];

        int count = 0;
        for(int i:nums){
            if(count == 0){
                ele = i;
            }

            if(ele == i){
                count++;
            }else{
                count--;
            }
        }

        return ele;
    }
};