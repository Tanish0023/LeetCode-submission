class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        int i = 0;
        
        for(i = 0; i < n - 1; i++){
            if(nums[i] != nums[i+1]){
                k++;

                nums[k] = nums[i + 1];
            }
        }
        k++;

        for(int i = k; i < n; i++){
            nums[i] = '_';
        }

        return k;
    }
};