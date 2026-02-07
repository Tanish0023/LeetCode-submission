class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;
        
        int sum = 0;

        for(int i = 0; i < n; i++){
            int findIndex = target - nums[i];

            if(mp.find(findIndex) != mp.end()){
                return {mp[findIndex], i};
            } 

            mp[nums[i]] = i;
        }

        return {};
    }
};