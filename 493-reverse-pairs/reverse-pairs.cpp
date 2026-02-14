class Solution {
public:
    int merge(vector<int>& nums, int low, int mid, int high){
        int c = 0;

        int right = mid + 1;
        for(int i = low; i <= mid; i++){
            while(right <= high && (long long)nums[i] > 2LL * nums[right]){
                right++;
            }
            c += (right - (mid + 1));
        }

        vector<int> temp;
        int left = low;
        right = mid + 1;

        while(left <= mid && right <= high){
            if(nums[left] < nums[right]){
                temp.push_back(nums[left]);
                left++;
            }else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left <= mid){
            temp.push_back(nums[left]);
            left++;
        }

        while(right <= high){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i = low; i <= high; i++){
            nums[i] = temp[i - low];
        }

        return c;
    }

    int mergeSort(vector<int>& nums, int low, int high){
        int c = 0;
        if(low >= high) return c;

        int mid = low + (high - low) / 2;

        c += mergeSort(nums, low, mid);
        c += mergeSort(nums, mid + 1, high);
        c += merge(nums, low, mid, high);

        return c;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};