class Solution {
public:
    bool check(vector<int>& nums, int k, int mid){
        int numsTotal = 0;
        int part = 1;

        for(int i = 0; i < nums.size(); i++){
            if(numsTotal + nums[i] <= mid){
                numsTotal += nums[i];
            }else{
                part++;
                if(part > k) return false;
                numsTotal = nums[i];
            }
        }

        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = 0;

        for(int i:nums){
            high += i;
        }

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(check(nums, k, mid)){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        return low;
    }
};