class Solution {
    public int splitArray(int[] nums, int k) {
        if(k == 1){
            return findSum(nums);
        }

        if(k == nums.length){
            return maxEle(nums);
        }

        int min_ans = maxEle(nums);
        int max_ans = findSum(nums);

        return binarySearch(nums, k, min_ans, max_ans);
    }

    public int maxEle(int[] arr){
        int max = Integer.MIN_VALUE;
        for(int ele:arr){
            if(max < ele){
                max = ele;
            }
        }

        return max;
    }

    public int findSum(int[] arr){
        int sum = 0;

        for(int ele:arr){
            sum += ele;
        }

        return sum;
    }

    public int binarySearch(int[] arr, int k, int start, int end){

        while(start < end){
            int mid = start + (end - start) / 2;
            int pieces = 1;

            int sum = 0;
            for(int ele:arr){
                sum += ele;
                if(sum > mid){
                    sum = ele;
                    pieces++;
                }
            }

            if(pieces <= k){
                end = mid;
            }else{
                start = mid + 1;
            }
        }

        return end;
    }

}