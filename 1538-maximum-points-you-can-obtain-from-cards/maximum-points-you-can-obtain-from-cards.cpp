class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int len = cardPoints.size();
        int lSum = 0;
        int rSum = 0;

        for(int i = 0; i < k; i++){
            lSum += cardPoints[i];
        }

        int i = 1;
        int maxSum = lSum;
        while(lSum != 0){
            lSum -= cardPoints[k - i];
            rSum += cardPoints[len - i];
            maxSum = max(maxSum, lSum + rSum);
            i++;
        }

        return maxSum;
    }
};