class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minLeft = INT_MAX;
        int maxProfit = INT_MIN;
        
        for(int i: prices){
            minLeft = min(i, minLeft);
            maxProfit = max(maxProfit, i-minLeft);
        }

        return maxProfit;
    }
};