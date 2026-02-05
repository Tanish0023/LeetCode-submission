class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c = 0;
        unordered_map<int, int> mp;

        mp[0] = 1;
        int sum = 0;
        for(int i:nums){
            sum += i;
            if(mp.count(sum - k)){
                c += mp[sum - k];
            }
            mp[sum]++;
        }
    
        return c;
    }
};