class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n <= 2){
            return 0;
        }
        int leftMax = 0;
        int rightMax = 0;

        vector<int> leftArr(n);
        vector<int> rightArr(n);

        for(int i = 0; i < n; i++){
            leftArr[i] = max(height[i], leftMax);
            if(height[i] > leftMax){
                leftMax = height[i];
            }
        }
        for(int i = n - 1; i >= 0; i--){
            rightArr[i] = max(height[i], rightMax);
            if(height[i] > rightMax){
                rightMax = height[i];
            }
        }

        int water = 0;

        for (int i = 0; i < n; i++) {
            water += min(leftArr[i], rightArr[i]) - height[i];
        }

        return water;
    }
};