class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c = 0;
        int sum = 0;

        unordered_map<int, int> mp;
        mp[0] = 1;

        for(int i:nums){
            sum += i;
            int findSum = sum - k;

            if(mp.find(findSum) != mp.end()){
                c += mp[findSum];
            }

            mp[sum]++;
        }

        return c;
    }
};