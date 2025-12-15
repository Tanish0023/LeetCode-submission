class Solution {
public:
    bool howManyBloom(vector<int>& bloomDay, int m, int k, int mid){
        int count = 0;
        int temp = 0;    
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= mid){
                temp++;
            }else{
                count += temp / k;
                if (count == m) return true;
                temp = 0;
            }

        }
        count += temp / k;

        return count >= m;   
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m * k > bloomDay.size()) return -1;
        
        int low = INT_MAX, high = INT_MIN;
        for (int d : bloomDay) {
            low = min(low, d);
            high = max(high, d);
        }

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(howManyBloom(bloomDay, m, k, mid)){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        return low;
    }
};