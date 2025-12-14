class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = 0;

        while(low <=  high){
            int mid = low + (high - low) / 2;
            long long temp = 0;

            for(int i = 0; i < piles.size(); i++){
                temp += (piles[i] + mid - 1) / mid;
            }

            if(temp > h){
                low = mid + 1;
            }else{
                ans = mid;
                high = mid - 1;
            }

        }

        return ans;
    }
};