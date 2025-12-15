class Solution {
public:
    bool fn(vector<int>& nums, int threshold, int mid){
        int sum = 0;
        for(int i:nums){
            sum += (i + mid - 1) / mid;
        }

        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = INT_MIN;

        for(int i: nums){
            high = max(i, high);
        }

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(fn(nums, threshold, mid)){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        return low;
    }
};