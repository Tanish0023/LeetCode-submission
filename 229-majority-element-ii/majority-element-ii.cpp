class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majMark = n/3;
        vector<int> ans;

        unordered_map<int, int> mp;

        for(int i:nums){
            mp[i]++;
        }

        for(auto j:mp){
            if(j.second > majMark){
                ans.push_back(j.first);
            }
        }

        return ans;
    }
};