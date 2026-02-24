class Solution {
public:
    int atMost(vector<int>& nums, int k){
        int counter = 0;
        int l = 0;

        int sum = 0;

        for(int r = 0; r < nums.size(); r++){
            sum += nums[r] % 2;

            while(sum > k){
                sum -= nums[l] % 2;
                l++;
            }

            counter += r - l + 1;
        }

        return counter;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1); 
    }
};