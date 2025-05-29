class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] arr = {-1, -1};
        
        if(nums.length == 0){
            return arr;
        }

        
        arr[0] = binarySearch(nums, target, true);
        arr[1] = binarySearch(nums, target, false);

        return arr;
    }

    public int binarySearch(int[] nums, int target, boolean isFirstIndex){
        int ans = -1;
        int start = 0;
        int end = nums.length - 1;

        while(start <= end){
            int mid = (int) (start + (end - start)/2);

            if(target < nums[mid]){
                end = mid - 1;
            }else if(target > nums[mid]){
                start = mid + 1;
            }else{
                ans = mid;
                if (isFirstIndex){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }
        }

        return ans;
    }
}