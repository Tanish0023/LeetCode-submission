class Solution {
public:
    void reverseArr(vector<int>& nums, int l, int r){
        while(l <= r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;

            l++;
            r--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int k1 = k % n;

        reverseArr(nums, 0, n - 1);
        reverseArr(nums, 0, k1 - 1);
        reverseArr(nums, k1, n - 1);
    }
};