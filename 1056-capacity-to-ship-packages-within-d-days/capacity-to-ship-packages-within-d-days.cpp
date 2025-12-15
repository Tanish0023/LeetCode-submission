class Solution {
public:
    bool check(vector<int>& weights, int days, int cap) {
        int daysUsed = 1;
        int curr = 0;

        for (int w : weights) {
            if (curr + w <= cap) {
                curr += w;
            } else {
                daysUsed++;
                curr = w;
                if (daysUsed > days) return false;
            }
        }

        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MIN;
        int high = 0;

        for(int i: weights){
            high += i;
            low = max(low, i);
        }

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(check(weights, days, mid)){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        return low;
    }
};